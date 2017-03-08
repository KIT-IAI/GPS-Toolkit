#include "StdAfx.h"

/

#include "Projection.h"

/

#include "ProjectionUtils.h"

/

#include "ProjectionKrovak.h"

/

#define _USE_MATH_DEFINES
#include <math.h>

/

CProjectionKrovak::CProjectionKrovak ()
{
}

/

CProjectionKrovak::~CProjectionKrovak ()
{
}

/

void CProjectionKrovak::Initialize (CCfgMapProjection & proj)
{
	a				= proj.m_fAxis;
	f               = 1.0 / proj.m_fFlattening;

    e2              = 2.0 * f - pow ( f, 2.0 );
    e               = sqrt ( e2 );
           
	lat0			= DEG2RAD ( proj.m_fOriginLatitude  );
    lon0            = DEG2RAD ( proj.m_fOriginLongitude );

	azi				= DEG2RAD ( proj.m_fAzimuth );

    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

    sp1             = DEG2RAD ( proj.m_fParallelNorth );
    sp2             = DEG2RAD ( proj.m_fParallelSouth );

    k0              = proj.m_fProjScale;

	ssp1            = sin ( sp1 );

	alfa	        = sqrt ( 1.0 + ( e2 * pow ( cos ( lat0 ), 4.0 ) ) / ( 1.0 - e2 ) );

	double u0		= asin ( sin ( lat0 ) / alfa );
    double g        = pow ( ( 1.0 + e * sin ( lat0 ) ) / ( 1.0 - e * sin ( lat0 ) ), alfa * e / 2.0 );

	k		        = tan ( u0 / 2.0 + M_PI_4 ) / pow ( tan ( lat0 / 2.0 + M_PI_4 ), alfa ) * g;

	double n0		= a * sqrt ( 1.0 - e2 ) / ( 1.0 - e2 * pow ( sin ( lat0 ), 2.0 ) );
	
	ro0		        = k0 * n0 / tan ( sp1 );
}

/

void CProjectionKrovak::Forward ()
{
	double lat      = m_fLatitude;
	double lon      = m_fLongitude;

	double gfi		= pow (  ( ( 1.0 + e * sin ( lat ) ) / ( 1.0 - e * sin ( lat ) ) ), ( alfa * e / 2.0 ) );

	double u		= 2.0 * ( atan ( k * pow ( tan ( lat / 2.0 + M_PI_4 ), alfa ) / gfi ) - M_PI_4 );

	double dv		= alfa *  ( lon0 - lon );

	double s		= asin ( cos ( azi ) * sin ( u  ) + sin ( azi ) * cos ( u ) * cos ( dv ) );
	double d		= asin ( cos ( u  )  * sin ( dv ) / cos ( s  ) );

	double eps		= ssp1 * d;
	double ro		= ro0  * pow ( tan ( sp1 / 2.0 + M_PI_4 ), ssp1 ) / pow ( tan ( s / 2.0 + M_PI_4 ), ssp1 );

	m_fNorthing		= ro * cos ( eps );
	m_fEasting      = ro * sin ( eps );
}

/

void CProjectionKrovak::Inverse ()
{
	double dx       = m_fEasting  - fe;
	double dy       = m_fNorthing - fn;

	double ro		= sqrt ( dy * dy + dx * dx );
    double eps		= atan2 ( dx, dy );

	double d        = eps / ssp1;
	double s		= 2.0 * ( atan ( pow ( ro0 / ro, 1.0 / ssp1 ) * tan ( sp1 / 2.0 + M_PI_4 ) ) - M_PI_4 );

	double u		= asin ( cos ( azi ) * sin ( s ) - sin ( azi ) * cos ( s ) * cos ( d ) );
	double dv		= asin ( cos (  s  ) * sin ( d ) / cos ( u ) ) ;

	double lon      = lon0 - dv / alfa;
    double lat      = 0.0;

	double	fi1		= u;
	
	while ( 1 == 1 )
	{
		lat = 2.0 * ( atan ( pow ( k, -1.0 / alfa ) * pow ( tan ( u / 2.0 + M_PI_4 ), 1.0 / alfa ) * pow ( ( 1.0 + e * sin ( fi1 ) ) / ( 1.0 - e * sin ( fi1 ) ), e / 2.0 ) ) - M_PI_4 );

		if ( abs ( fi1 - lat ) < 0.00000000000001 ) 
			break;

	    fi1 = lat;
	}

    m_fLatitude		= lat;
    m_fLongitude    = lon;
}

/
