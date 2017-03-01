#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////

#include "Projection.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionUtils.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionMercator.h"

//////////////////////////////////////////////////////////////////////////////

#include "GpsConstantsX.h"

//////////////////////////////////////////////////////////////////////////////

#define _USE_MATH_DEFINES
#include <math.h>

//////////////////////////////////////////////////////////////////////////////

CProjectionMercator::CProjectionMercator ()
{
}

//////////////////////////////////////////////////////////////////////////////

CProjectionMercator::~CProjectionMercator ()
{
}

//////////////////////////////////////////////////////////////////////////////

VOID CProjectionMercator::Initialize(CCfgMapProjection & proj)
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

    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

    sp1             = DEG2RAD ( proj.m_fParallelNorth );
    
    k0              = 1.0;
	
	// For the 1SP calculation, we copy the scalefactor from the settings
	if ( proj.m_lProjection == GPS_PROJECTION_MERCATOR1SP )
	{
		if ( proj.m_fProjScale != 0.0 )
		{
			k0	    = proj.m_fProjScale;
		}
	}

	// For the 2SP calculation, we calculate the scalefactor from the parallel
	if ( proj.m_lProjection == GPS_PROJECTION_MERCATOR2SP && m_bSphere == FALSE )
	{
		k0			= cos ( abs ( sp1 ) ) / sqrt ( 1.0 - pow (  e * sin ( abs ( sp1 ) ), 2.0 ) );
	}

	return VOID ();
}

//////////////////////////////////////////////////////////////////////////////

VOID CProjectionMercator::Forward ()
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

//////////////////////////////////////////////////////////////////////////////

VOID CProjectionMercator::ForwardEllipse ()
{
	double lat      = m_fLatitude;
	double lon      = m_fLongitude;

    double c		= TSFN2 ( lat );
            
    m_fEasting      = fe + a * k0 * ( lon - lon0 );
	m_fNorthing     = fn + a * k0 * log ( c );

	return VOID ();
}

//////////////////////////////////////////////////////////////////////////////

VOID CProjectionMercator::ForwardSphere ()
{
	double lat      = m_fLatitude;
	double lon      = m_fLongitude;

    m_fEasting      = fe + a * k0 * ( lon - lon0 );
	m_fNorthing     = fn + a * k0 * log ( tan ( M_PI_4 + ( lat / 2.0 ) ) );

	return VOID ();
}

//////////////////////////////////////////////////////////////////////////////

VOID CProjectionMercator::Inverse ()
{
	if ( m_bSphere )
	{
		InverseSphere ();
	}
	else
	{
		InverseEllipse ();
	}

	return VOID ();
}

//////////////////////////////////////////////////////////////////////////////

VOID CProjectionMercator::InverseEllipse ()
{
	double dx       = m_fEasting  - fe;
    double dy       = m_fNorthing - fn;

    double es       = e2;
    double es2      = es * es;
    double es3      = es2 * es;
    double es4      = es3 * es;

    double ab       = es / 2.0 + 5.0 * es2 / 24.0 + es3 / 12.0 + 13.0 * es4 / 360.0;
    double bb       = 7.0 * es2 / 48.0 + 29.0 * es3 / 240.0 + 811.0 * es4 / 11520.0;
    double cb       = 7.0 * es3 / 120.0 + 81.0 * es4 / 1120.0;
    double db       = 4279.0 * es4 / 161280.0;

    double xphi     = M_PI_2 - 2.0 * atan ( 1.0 / exp ( dy / ( k0 * a ) ) );
            
    double lon      = lon0 + dx / ( k0 * a );
    double lat      = xphi + ab * sin ( 2.0 * xphi ) + bb * sin ( 4.0 * xphi ) + cb * sin ( 6.0 * xphi ) + db * sin ( 8.0 * xphi ); 

    m_fLongitude    = lon;
    m_fLatitude     = lat;
}

//////////////////////////////////////////////////////////////////////////////

VOID CProjectionMercator::InverseSphere ()
{
	double dx       = m_fEasting  - fe;
    double dy       = m_fNorthing - fn;

    double lon      = lon0 + dx / ( k0 * a );
	double lat      = M_PI_2 - 2.0 * atan ( 1.0 / exp ( dy / ( k0 * a ) ) );
	
    m_fLongitude    = lon;
    m_fLatitude     = lat;
}

//////////////////////////////////////////////////////////////////////////////
