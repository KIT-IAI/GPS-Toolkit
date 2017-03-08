#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionSwissMercator.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionSwissMercator::CProjectionSwissMercator()
{
}

CProjectionSwissMercator::~CProjectionSwissMercator ()
{
}

VOID CProjectionSwissMercator::Initialize (CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;
	f               = 1.0 / proj.m_fFlattening;

	e2              = 2.0 * f - pow ( f, 2.0 );
    e               = sqrt ( e2 );
           
    lat0            = DEG2RAD ( proj.m_fOriginLatitude  );
	lon0			= DEG2RAD ( proj.m_fOriginLongitude );

    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

    k0              = proj.m_fProjScale;

	if ( k0 == 0.0 ) k0 = 1.0;

	c				= sqrt ( 1.0 + ( ( e2 * pow ( cos ( lat0 ), 4.0 ) ) / ( 1.0 - e2 ) ) );

    ee				= asin ( sin ( lat0 ) / c );
    ep				= tan ( M_PI_4 + ee / 2.0 );

	K				= log ( tan ( M_PI_4 + ee / 2.0 ) ) - c * ( log ( tan ( M_PI_4 + lat0 / 2.0 ) ) - e / 2.0 * log ( ( 1 + e * sin ( lat0 ) ) / ( 1 - e * sin ( lat0 ) ) ) );

	R				= a * k0 * sqrt ( 1 - e2 ) / ( 1 - e2 * sin ( lat0 ) * sin ( lat0 ) );
}

VOID CProjectionSwissMercator::Forward ()
{
	double lat      = m_fLatitude;
    double lon      = m_fLongitude;
	
    double  l       = c * ( lon - lon0 );
    double  lp      = tan ( M_PI_4 + ( lat / 2.0 ) );

    double  w       = c * ( log ( tan ( M_PI_4 + ( lat / 2.0 ) ) ) - e / 2.0 * log ( ( 1 + e * sin ( lat ) ) / ( 1 - e * sin ( lat ) ) ) ) + K;
    
    double  latp    = 2.0 * ( atan ( exp ( w ) ) - M_PI_4 );

    double  sladp   = cos ( ee ) * sin ( latp ) - sin ( ee ) * cos ( latp ) * cos ( l );
    double  lardp   = asin ( sladp );

    double  slodp   = cos ( latp ) * sin ( l ) / cos ( lardp );
    double  lordp   = asin ( slodp );
    
    m_fEasting      = R * lordp + fe;
    m_fNorthing     = R * log ( tan ( M_PI_4 + lardp / 2.0 ) ) + fn;

	return void ();
}

VOID CProjectionSwissMercator::Inverse ()
{
    double x        = m_fEasting;
	double y        = m_fNorthing;
  
	double corr		= 1.0;

	double lardp	= 2.0 * ( atan ( exp ( ( y - fn ) / R ) ) - M_PI_4 );
    double lordp	= ( x - fe ) / R; 

	double slarp	= cos ( ee ) * sin ( lardp ) + sin ( ee ) * cos ( lardp ) * cos ( lordp );
    double larp		= asin ( slarp );
    
    double slorp	= cos ( lardp ) * sin ( lordp ) / cos ( larp );
    double lorp		= asin ( slorp );
    
    double C		= ( K - log ( tan ( M_PI_4 + larp / 2.0 ) ) ) / c;

    double lat      = larp;

    while ( fabs ( corr ) > 0.00001 )
    {
        corr = ( C + log ( tan ( M_PI_4 + lat / 2.0 ) ) - e / 2.0 * log ( ( 1.0 + e * sin ( lat ) ) / ( 1.0 - e * sin ( lat ) ) ) ) *
			   ( ( ( 1.0 - e2 * sin ( lat ) * sin ( lat ) ) * cos ( lat ) ) / ( 1 - e2 ) );
        
        lat -= corr;
    }

    double lon      = ( lorp / c + lon0 );

    m_fLatitude     = lat;
    m_fLongitude    = lon;

	return void ();
}
