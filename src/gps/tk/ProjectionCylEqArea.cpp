#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////

#include "Projection.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionUtils.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionCylEqArea.h"

//////////////////////////////////////////////////////////////////////////////

#define _USE_MATH_DEFINES
#include <math.h>

//////////////////////////////////////////////////////////////////////////////

CProjectionCylEqArea::CProjectionCylEqArea ()
{
}

//////////////////////////////////////////////////////////////////////////////

CProjectionCylEqArea::~CProjectionCylEqArea ()
{
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionCylEqArea::Initialize(CCfgMapProjection & proj)
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
        
	lat0			= DEG2RAD ( proj.m_fOriginLatitude  );
    lon0            = DEG2RAD ( proj.m_fOriginLongitude );

	if ( lat0 == 0.0 )
	{
		k0			 = 1.0;
	}
	else
	{
		k0			 = cos ( lat0 ) / sqrt ( 1.0 );
	}

	fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionCylEqArea::Forward()
{
	double lat      = m_fLatitude;
    double lon      = m_fLongitude;

    double dlam     = lon - lon0;

	double q		= 0.0;
	
	if ( m_bSphere )
	{
		m_fEasting	= ( a * k0 * dlam ) + fe;
		m_fNorthing = ( a * sin ( lat ) / k0 ) + fn;
	}
	else
	{
		q			= QSFN2 ( lat );

		m_fEasting  = ( a * k0 * dlam ) + fe;
		m_fNorthing = ( a * 0.5 * q / k0 ) + fn;
	}

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionCylEqArea::Inverse()
{
	double  dx      = m_fEasting  - fe;
    double  dy      = m_fNorthing - fn;

	double	lat		= 0.0;
	double	lon		= 0.0;
    
	double	q		= 0.0;
	double	i		= 0.0;
	
	if ( m_bSphere )
	{
		lat = asin ( dy * k0 / a );
		lon = ( ( dx / a ) / k0 );
	}
	else
	{
		q	= QSFN2 ( M_PI_2 );
		
		i	= ( 2.0 * k0 ) * dy / ( a * q );

		if (i > 1.0)
			i = 1.0;
		
		if (i < -1.0)
			i = -1.0;
    
		lat	= AUTHLAT ( asin ( i ) );
		lon = lon0 + dx / ( a * k0 );
	}
  
	m_fLatitude         = lat;
    m_fLongitude        = lon;

	return void ();
}

//////////////////////////////////////////////////////////////////////////////
