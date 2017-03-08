#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionLambertAzimuthal.h"

#define _USE_MATH_DEFINES
#include <math.h>

#define EPSLN	1.0e-10

CProjectionLambertAzimuthal::CProjectionLambertAzimuthal ()
{
}

CProjectionLambertAzimuthal::~CProjectionLambertAzimuthal ()
{
}

void CProjectionLambertAzimuthal::Initialize (CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;

	if ( proj.m_fFlattening == 0.0 )
	{
		m_bSphere		= TRUE;
	}
	else
	{
		m_bSphere		= FALSE;

		f               = 1.0 / proj.m_fFlattening;

		e2              = 2.0 * f - pow ( f, 2.0 );
		e               = sqrt ( e2 );
		e4		        = e2 * e2;
		e6		        = e2 * e4;
		e8		        = e4 * e4;
	}

	lat0			= DEG2RAD ( proj.m_fOriginLatitude  );
    lon0            = DEG2RAD ( proj.m_fOriginLongitude );

    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

    sp1             = DEG2RAD ( proj.m_fParallelNorth );
    sp2             = DEG2RAD ( proj.m_fParallelSouth );

    k0              = proj.m_fProjScale;

	clat0           = cos ( lat0 );
    slat0           = sin ( lat0 );

    q0		        = QSFN2 ( lat0 );
    qp		        = QSFN2 ( M_PI_2 );
            
    sinb0	        = q0 / qp;
	cosb0	        = sqrt ( 1.0 - sinb0 * sinb0 );

	return void ();
}

void CProjectionLambertAzimuthal::Forward ()
{
	if ( m_bSphere )
		ForwardS ();
	else
		ForwardE ();
}

void CProjectionLambertAzimuthal::ForwardE ()
{
	double lat      = m_fLatitude;
    double lon      = m_fLongitude;

    double q		= QSFN2 ( lat );
    
    double sinb	    = q / qp;
    double cosb	    = sqrt ( 1.0 - sinb * sinb );

    double rq		= a * ( sqrt ( qp / 2.0 ) );
    	
    double D		= ( a * clat0 ) / ( sqrt ( 1.0 - e2 * slat0 * slat0) * ( rq * cosb0 ) );

    // Important, when lat0 > 90 or lat0 < -90, set to 1.0, otherwise division by zero!
    if ( lat0 >= M_PI_2 )
        D = 1.0;
	else if ( lat0 <= -M_PI_2 )
        D = -1.0;

    double c		= 1.0 + sinb0 * sinb + cosb0 * cosb * cos ( lon - lon0 );
	
    double B		= rq * ( sqrt ( 2.0 / c ) );
	
    m_fEasting		= fe + ( ( B * D ) * ( cosb * sin ( lon - lon0 ) ) );
    m_fNorthing		= fn +   ( B / D ) * ( ( cosb0 * sinb ) - ( sinb0 * cosb * cos ( lon - lon0 ) ) );

	return void ();
}

void CProjectionLambertAzimuthal::ForwardS ()
{
	double lat      = m_fLatitude;
    double lon      = m_fLongitude;

	double lam		= lon - lon0;

    double slat		= sin ( lat );
	double clat		= cos ( lat );

	double slam		= sin ( lam );
	double clam		= cos ( lam );

	double c		= slat0 * slat + clat0 * clat * clam;
	
	double k		= a * sqrt ( 2.0 / ( 1.0 + c ) );

    m_fEasting		= fe + ( k * clat * slam );
    m_fNorthing		= fn + ( k * ( clat0 * slat - slat0 * clat * clam ) );
	
	return void ();
}

void CProjectionLambertAzimuthal::Inverse ()
{
	if ( m_bSphere )
		InverseS ();
	else
		InverseE ();

	return void ();
}

void CProjectionLambertAzimuthal::InverseS ()
{
	double dx       = m_fEasting  - fe;
    double dy       = m_fNorthing - fn;

	double r		= sqrt ( dx * dx + dy * dy );
	
	double t		= r / ( 2.0 * a );

	double z		 = 2.0 * ASINZ ( t );

	double cz		= cos ( z );
	double sz		= sin ( z );

	double lat		= lat0;
	double lon		= lon0;

	if ( fabs ( r ) > EPSLN )
	{
		lat = ASINZ ( slat0 * cz + clat0 * sz * dy / r );

		t	= fabs ( lat0 ) - M_PI_2;

		if ( fabs ( t ) > EPSLN )
		{
			t	= cz - slat0 * sin ( lat );

			if ( t != 0.0 )
			{
				lon = lon0 + atan2 ( dx * sz * clat0, t * r );
			}
		}
		else if ( lat0 < 0.0 )
		{
			lon = lon0 - atan2 ( -dx, dy );
		}
		else
		{
			lon = lon0 - atan2 ( dx, -dy );
		}
	}
	
	m_fLatitude     = lat;
    m_fLongitude    = lon;

	return void ();
}

void CProjectionLambertAzimuthal::InverseE ()
{
	double dx       = m_fEasting  - fe;
    double dy       = m_fNorthing - fn;

    double rq		= a * ( sqrt ( qp / 2.0 ) );

    double D		= ( a * clat0 ) / ( sqrt ( 1.0 - e2 * slat0 * slat0 ) * ( rq * cosb0 ) );

    // Important, when lat0 > 90 or lat0 < -90, set to 1.0, otherwise division by zero!
    if ( lat0 >= M_PI_2 )
        D = 1.0;
	
    if ( lat0 <= -M_PI_2 )
        D = -1.0;

    double	p		= sqrt ( pow ( dx / D, 2 ) + pow ( D * dy, 2 ) );

	// Check p to prevent division by zero
	if ( ( p >=  ( 2.0 * rq ) ) || ( p == 0.0 ) )
	{
		m_fLatitude		= lat0;
		m_fLongitude	= lon0;
	}
	else
	{
		double	C		= 2 * asin ( p / ( 2 * rq ) );

		double	b		= asin ( cos ( C ) * sinb0 + ( D * dy * sin ( C ) * cosb0 ) / p );

		double	sin2b	= sin ( 2.0 * b );
		double	sin4b	= sin ( 4.0 * b );
		double	sin6b	= sin ( 6.0 * b );

		double	c1		= sin2b * ( e2 / 3.0 + 31.0 * e4 / 180.0 + 517.0 * e6 / 5040.0 );
		double	c2		= sin4b * ( 23.0 * e4 / 360.0 + 251.0 * e6 / 3780.0 );
		double	c3		= sin6b	* ( 761.0 * e6 / 45360.0 );

		m_fLatitude     = b + c1 + c2 + c3;
		m_fLongitude    = lon0 + atan ( ( dx * sin ( C ) ) / ( D * p * cosb0 * cos ( C ) - pow ( D, 2 ) * dy * sinb0 * sin ( C ) ) );
	}

	return void ();
}

