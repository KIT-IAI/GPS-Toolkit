#include "StdAfx.h"

/

#include "Projection.h"

/

#include "ProjectionUtils.h"

/

#include "ProjectionAzimuthalEq.h"

/

#define _USE_MATH_DEFINES
#include <math.h>

/

#define TOL 1.e-14

/

CProjectionAzimuthalEq::CProjectionAzimuthalEq ()
{
}

/

CProjectionAzimuthalEq::~CProjectionAzimuthalEq ()
{
}

/

VOID CProjectionAzimuthalEq::Initialize(CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;

	if ( proj.m_fFlattening == 0.0 )
	{
		m_bSphere = TRUE;
	}
	else
	{
		m_bSphere = FALSE;
	}

	f               = 1.0 / proj.m_fFlattening;

    e2              = 2.0 * f - pow ( f, 2.0 );
    e               = sqrt ( e2 );
           
    lon0            = DEG2RAD ( proj.m_fOriginLongitude );
	lat0			= DEG2RAD ( proj.m_fOriginLatitude  );

    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	slat0			= sin ( lat0 );
	clat0			= cos ( lat0 );

	es				= 1.0 - e2;

	N1				= 1.0 / sqrt ( 1.0 - e2 * slat0 * slat0 );
	G				= slat0 * ( e / sqrt ( es ) );
	He				= ( e / sqrt ( es ) ) * clat0;

	return void ();
}

/

VOID CProjectionAzimuthalEq::Forward ()
{
	if ( m_bSphere )
	{
		ForwardSphere ();
	}
	else
	{
		ForwardEllipse ();
	}

	return VOID ();
}

/

VOID CProjectionAzimuthalEq::ForwardSphere ()
{
	double lat      = m_fLatitude;
	double lon      = m_fLongitude;

	double slat		= sin ( lat );
	double clat		= cos ( lat );

	double dlon		= lon - lon0;

	double sdlon	= sin ( dlon );
	double cdlon	= cos ( dlon );

	double g		= slat0 * slat + clat0 * clat * cdlon;
	
	double z		= acos(g);
	double ksp		= z/ sin(z);

	m_fEasting		= ksp * clat * sdlon;
	m_fNorthing		= ksp * ( clat0 * slat - slat0 * clat * cdlon ); 

	m_fEasting		= ( m_fEasting  * a ) + fe;
	m_fNorthing		= ( m_fNorthing * a ) + fn;

	return void ();
}

/

VOID CProjectionAzimuthalEq::ForwardEllipse ()
{
	double lat      = m_fLatitude;
	double lon      = m_fLongitude;

	double slat		= sin ( lat );

	double dlon		= lon - lon0;

	double sdlon	= sin ( dlon );
	double cdlon	= cos ( dlon );

    double t		= atan2 ( es * slat + e2 * N1 * slat0 * sqrt ( 1.0 - e2 * slat * slat ), cos ( lat ) );

	double ct		= cos ( t );
	double st		= sin ( t );

	double Az		= atan2 ( sdlon * ct, clat0 * st - slat0 * cdlon * ct); 

	double cA		= cos ( Az );
	double sA		= sin ( Az );

	double s		= AASIN ( fabs ( sA ) < TOL ? ( clat0 * st - slat0 * cdlon * ct ) / cA : sdlon * ct / sA );

	double H		= He * cA;
	double H2		= H * H;

	double c		= N1 * s * ( 1.0 + s * s * ( - H2 * ( 1.0 - H2 ) / 6.0 +
						   s * ( G * H * ( 1.0 - 2.0 * H2 * H2 ) / 8.0 +
					       s * ( ( H2 * ( 4.0 - 7.0 * H2 ) - 3.0 * G * G * ( 1.0 - 7.0 * H2 ) ) / 120.0 - 
						   s * G * H / 48.0 ) ) ) );
	m_fEasting		= c * sA;
	m_fNorthing		= c * cA;

	m_fEasting		= ( m_fEasting  * a ) + fe;
	m_fNorthing		= ( m_fNorthing * a ) + fn;

	return VOID ();
}

/

VOID CProjectionAzimuthalEq::Inverse ()
{
	if ( m_bSphere )
	{
		InverseSphere ();
	}
	else
	{
		InverseEllipse ();
	}

	return void ();
}

/

VOID CProjectionAzimuthalEq::InverseEllipse ()
{
	double dx		= ( m_fEasting  - fe ) / a;
	double dy		= ( m_fNorthing - fn ) / a;

	double c		= sqrt ( dx * dx + dy * dy );

	double Az		= atan2 ( dx, dy );
	double cA		= cos  ( Az );
	double t		= clat0 * cA;

	double B		= e2 * t / es;
	double A		= -B * t;
	double C		=  B * 3.0 * (1. - A) * slat0;
	double D		= c / N1;
	double E		= D * (1. - D * D * (A * (1. + A) / 6. + C * (1. + 3.*A) * D / 24.));
	double F		= 1.0 - E * E * (A / 2.0 + C * E / 6.0 );
	double psi		= AASIN ( slat0 * cos(E) + t * sin(E));
   
	double lon		= AASIN ( sin ( Az ) * sin ( E ) / cos ( psi ) );
	double lat		= atan ( ( 1.0 - e2 * F * slat0 / sin ( psi ) ) * tan ( psi ) / es );

	m_fLatitude		= lat;
    m_fLongitude	= lon + lon0;

	return void ();
}

/

VOID CProjectionAzimuthalEq::InverseSphere ()
{
	double dx		= ( m_fEasting  - fe ) / a;
	double dy		= ( m_fNorthing - fn ) / a;

	double r		= sqrt ( dx * dx + dy * dy );

	double sinc		= sin ( r );
	double cosc		= cos ( r );

	double lat		= AASIN ( cosc * slat0 + dy * sinc * clat0 / r);
	double h		= dx * sinc * clat0;
	double i		= ( cosc - slat0 * sin ( lat ) ) * r;
	double lon		= atan2 ( h, i );

	m_fLatitude		= lat;
    m_fLongitude	= lon + lon0;

	return void ();
}

/
