#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////

#include "Projection.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionUtils.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionPolyconic.h"

//////////////////////////////////////////////////////////////////////////////

#define _USE_MATH_DEFINES
#include <math.h>

//////////////////////////////////////////////////////////////////////////////

#define TOL	1e-10

//////////////////////////////////////////////////////////////////////////////

CProjectionPolyconic::CProjectionPolyconic ()
{
	m_bSphere = FALSE;
}

//////////////////////////////////////////////////////////////////////////////

CProjectionPolyconic::~CProjectionPolyconic ()
{
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionPolyconic::Initialize(CCfgMapProjection & proj)
{
	a				= proj.m_fAxis;
	
	lat0			= DEG2RAD ( proj.m_fOriginLatitude  );
    lon0            = DEG2RAD ( proj.m_fOriginLongitude );

	fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	if ( proj.m_fFlattening == 0.0 )
	{
		m_bSphere	= TRUE;
	}
	else
	{
		m_bSphere	= FALSE;

		f               = 1.0 / proj.m_fFlattening;

		e2              = 2.0 * f - pow ( f, 2.0 );
		e4				= e2 * e2;
		e6				= e2 * e4;
		e               = sqrt ( e2 );	

 		c0              = 1.0  - e2 / 4.0 - 3.0    * e4 / 64.0 -  5.0 * e6 /  256.0; 
		c1              = 3.0  * e2 / 8.0 + 3.0    * e4 / 32.0 + 45.0 * e6 / 1024.0;
		c2              = 15.0 * e4 / 256.0 + 45.0 * e6 / 1024.0;
		c3              = 35.0 * e6 / 3072.0;

		M0				= a * MLFN ( lat0 );
	}

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionPolyconic::Forward ()
{
	if ( m_bSphere )
		ForwardS ();
	else
		ForwardE ();

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionPolyconic::ForwardE ()
{
	double lat      = m_fLatitude;
    double lon      = m_fLongitude;

    double dlam     = lon - lon0;

    double slat     = sin ( lat );
    double tlat     = tan ( lat );

    double NN       = ( a / sqrt ( 1.0 - e2 * ( slat * slat ) ) / tlat );

    double MM       = a * MLFN ( lat );

	double EE       = dlam * slat;

    m_fEasting      = NN * sin ( EE ) + fe;
    m_fNorthing     = MM - M0 + NN * ( 1.0 - cos ( EE ) ) + fn;

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionPolyconic::ForwardS ()
{
	double lat      = m_fLatitude;
    double lon      = m_fLongitude;

	double dlon		= lon - lon0;
	double dlat		= lat - lat0;

	double	tlat	= 1.0 / tan ( lat );
	double	E		= dlon * sin ( lat );

	if ( fabs ( lat ) <= TOL )
	{
		m_fEasting	=  lon;
		m_fNorthing	= -lon0;
	}
	else
	{
		m_fEasting  = sin ( E ) * tlat;
		m_fNorthing	= lat - lat0 + tlat * ( 1.0 - cos ( E ) );
	}
	
	m_fEasting		= ( a * m_fEasting  ) + fe;
	m_fNorthing		= ( a * m_fNorthing ) + fn;

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionPolyconic::Inverse ()
{
	if ( m_bSphere )
		InverseS ();
	else
		InverseE ();

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionPolyconic::InverseE ()
{
	double  dx      = m_fEasting  - fe;
    double  dy      = m_fNorthing - fn;
    
    double  da      = dx / a;

    double  AA      = ( M0 + dy ) / a;
    double  BB      = da * da + ( AA * AA );
    double  CC      = 0.0;
    
    double  dp      = 1.0;
    double  p       = AA;

	// Handle situations where we get a divide by zero
	// For instance, when converting from both E and N are zero.
	if ( fabs ( M0 + dy  ) < TOL )
	{
		m_fLatitude		= 0.0;
		m_fLongitude	= dx;
	}
	else
	{
		while ( abs ( dp ) > TOL )
		{
			double  sp      = sin ( p );
        
			CC              = sqrt ( 1.0 - e2 * sp * sp ) * tan ( p );

			double  s2p     = c1 * ( sin ( 2.0 * p ) );
			double  s4p     = c2 * ( sin ( 4.0 * p ) );
			double  s6p     = c3 * ( sin ( 6.0 * p ) );
        
			double  mn      = a * ( ( c0 * p ) - s2p + s4p - s6p );

			double  mp      = c0 - 2.0 * c1 * cos ( 2.0 * p ) + 4.0 * c2 * cos ( 4.0 * p ) - 6.0 * c3 * cos ( 6.0 * p );  
			double  ma      = mn / a;
			double  am      = AA * ma;
			double  m2      = ma * ma + BB;
			double  a2      = AA - ma;

			dp = ( am * CC + a2 - 0.5 * ( m2 ) * CC ) / ( e2 * s2p * ( m2  - 2.0 * am ) / 4.0 * CC + ( a2 ) * ( CC * mp - 2.0 / s2p ) - mp );
        
			p -= dp;
		}

		m_fLatitude         = p;
		m_fLongitude        = asin ( da * CC ) / sin ( m_fLatitude ) + lon0;
	}

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionPolyconic::InverseS ()
{
	double dx		= ( m_fEasting  - fe ) / a;
    double dy		= ( m_fNorthing - fn ) / a;

	double dphi		= 0.0;

	double tp		= 0.0;

	int	   nIter	= 10L;

	double lat		= 0.0;
	double lon		= 0.0;

	double rho		= 0.0;

	if ( fabs ( dy = lat0 + dy ) <= TOL )
	{
		lon	= dx;
		lat	= 0.0;
	}
	else
	{
		lat = dy;

		rho = ( dx * dx + dy * dy );
	
		do
		{
			tp = tan ( lat );
			
			lat -= ( dphi = ( dy * ( lat * tp + 1.0 ) - lat - 0.5 * ( lat * lat + rho ) * tp ) / ( ( lat - dy ) / tp - 1.0 ) );
		}
		while ( fabs ( dphi ) > TOL && --nIter );

		lon = asin ( dx * tan ( lat ) ) / sin ( lat );
	}

	m_fLatitude		= lat;
	m_fLongitude	= lon + lon0;
	
	return void ();
}

//////////////////////////////////////////////////////////////////////////////
