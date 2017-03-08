#include "StdAfx.h"

/

#include "Projection.h"

/

#include "ProjectionUtils.h"

/

#include "ProjectionSinusoidal.h"

/

#define _USE_MATH_DEFINES
#include <math.h>

/

CProjectionSinusoidal::CProjectionSinusoidal ()
{
}

/

CProjectionSinusoidal::~CProjectionSinusoidal ()
{
}

/

void CProjectionSinusoidal::Initialize(CCfgMapProjection & proj)
{
	a				= proj.m_fAxis;
	
	if ( proj.m_fFlattening == 0.0 )
	{
		m_bSphere		= TRUE;
	}
	else
	{
		m_bSphere		= FALSE;

		f               = 1.0 / proj.m_fFlattening;

		e2              = 2.0 * f - pow ( f, 2.0 );
		e4				= e2 * e2;
		e6				= e2 * e4;
		e               = sqrt ( e2 );
	}
        
	lon0            = DEG2RAD ( proj.m_fOriginLongitude );

	fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	return void ();
}

/

void CProjectionSinusoidal::Forward()
{
	double lat      = m_fLatitude;
    double lon      = m_fLongitude;

    double dlam     = lon - lon0;

	double slat		= sin ( lat );
	double clat		= cos ( lat );
	
	double mm		= 0.0;
	double MM		= 0.0;
	
	if ( m_bSphere )
	{
		m_fEasting	= ( a * dlam * clat ) + fe;
		m_fNorthing = ( a * lat ) + fn ;
	}
	else
	{
		mm			= sqrt ( 1.0 - e2 * slat * slat );
		MM			= a * MLFN ( lat );

		m_fEasting	= a * dlam * clat / mm + fe;
		m_fNorthing = MM + fn;
	}

	return void ();
}

/

void CProjectionSinusoidal::Inverse()
{
	double  dx      = m_fEasting  - fe;
    double  dy      = m_fNorthing - fn;

	double	lat		= 0.0;
	double	lon		= 0.0;

	double	slat	= 0.0;
	double	clat	= 0.0;
    
	if ( m_bSphere )
	{
		lat = dy / a;
		lon = ( lon0 + ( dx / cos ( lat ) ) ) / a;
	}
	else
	{
		lat   = INVMLFN ( dy );
		
		// Near 90 degrees
		if ( fabs ( lat ) >= M_PI_2 ) 
		{
			lon = lon0;
		}
		else
		{
		  slat = sin ( lat);
		  clat = cos ( lat );

		  lon = lon0 + dx * sqrt(1.0 - e2 * slat * slat) / ( a * clat ) ;
		}
	}

	m_fLatitude         = lat;
    m_fLongitude        = lon;

	return void ();
}

/
