#include "StdAfx.h"

/

#include "Projection.h"

/

#include "ProjectionUtils.h"

/

#include "ProjectionMollweide.h"

/

#define _USE_MATH_DEFINES
#include <math.h>

/

CProjectionMollweide::CProjectionMollweide ()
{
}

/

CProjectionMollweide::~CProjectionMollweide ()
{
}

/

void CProjectionMollweide::Initialize (CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;
	f               = 1.0 / proj.m_fFlattening;

    e2              = 2.0 * f - pow ( f, 2.0 );
	e4				= e2 * e2;
	e6				= e4 * e2;
    e               = sqrt ( e2 );
           
    lon0            = DEG2RAD ( proj.m_fOriginLongitude  );

    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

    r2				= sqrt ( 2.0 ) * a;
    r8				= sqrt ( 8.0 ) * a;

	return void ();
}

/

void CProjectionMollweide::Forward ()
{
	double lat		= m_fLatitude;
    double lon		= m_fLongitude;

    double dlam		= lon - lon0;

    double dtp		= DEG2RAD ( 10.0 ); 
    double tp		= lat;

    while ( fabs ( dtp ) > 4.85e-10 )
    {
        dtp = -( tp + sin ( tp ) - M_PI * sin ( lat ) ) / ( 1.0 + cos ( tp ) );
        tp += dtp;
    }

    m_fEasting      = ( r8 / M_PI ) * dlam * cos ( tp / 2.0 ) + fe;
    m_fNorthing		= r2 * sin ( tp / 2.0 ) + fn;

	return void ();
}

/

void CProjectionMollweide::Inverse ()
{
	double dx		= m_fEasting  - fe;
	double dy		= m_fNorthing - fn;
	
	double i		= dy / r2;

    double t		= asin ( i );

    double lat      = asin ( ( t * 2.0 + sin ( t * 2.0 ) ) / M_PI );
    double lon		= lon0 + M_PI * dx / ( r8 * cos ( t ) );

	m_fLatitude		= lat;
    m_fLongitude	= lon;

	return void ();
}

/

