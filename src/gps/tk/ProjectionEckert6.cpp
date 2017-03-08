#include "StdAfx.h"

/

#include "Projection.h"

/

#include "ProjectionUtils.h"

/

#include "ProjectionEckert6.h"

/

#define _USE_MATH_DEFINES
#include <math.h>

/

CProjectionEckert6::CProjectionEckert6 ()
{
}

/

CProjectionEckert6::~CProjectionEckert6 ()
{
}

/

void CProjectionEckert6::Initialize (CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;
	f				= 1.0 / proj.m_fFlattening;

	e2              = 2.0 * f - pow ( f, 2.0 );
    e4				= e2 * e2;
	e6				= e4 * e2;

	e               = sqrt ( e2 );

    lon0            = DEG2RAD ( proj.m_fOriginLongitude );

    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	if ( e2 == 0.0 )	// Sphere or Ellipsoid ?
	{
		ra				= a;
	}
	else
	{
		ra				= a;// * ( 1.0 - e2 / 6.0 - 17.0 * e4 / 360.0 - 67.0 * e6 / 3024.0 );
	}

	rb				= ra / ( sqrt ( 2.0 + M_PI ) );
	rc				= 1.0 / rb;
	
	return void ();
}

/

void CProjectionEckert6::Forward ()
{
	double lat		= m_fLatitude;
    double lon		= m_fLongitude;
  
    double dlam		= lon - lon0;
	
    double t		= lat;
	double dt		= 1.0;	

    double sint		= sin ( t );
    double cost		= cos ( t );

    while ( fabs ( dt ) > 4.85e-10 )
    {
        sint    = sin ( t );
        cost    = cos ( t );

        dt = -( t + sint - ( 1.0 + M_PI_2 ) * sin ( lat ) ) / ( 1.0 + cost );

        t += dt;
    }

    m_fEasting		= rb * dlam * ( 1.0 + cost ) + fe;
    m_fNorthing		= 2.0 * rb * t + fn;

    return void ();
}

/

void CProjectionEckert6::Inverse ()
{
	double dx		= m_fEasting  - fe;
	double dy		= m_fNorthing - fn;
	
	double t		= rc * dy / 2.0;
	double i		= ( t + sin ( t ) ) / ( 1.0 + M_PI_2 );

	double lat		= 0.0;
	double lon		= 0.0;

    if ( i > 1.0)
      lat = M_PI_2;
    else if ( i < -1.0 )
      lat = -M_PI_2;
    else
      lat = asin ( i );

    lon             = lon0 + rc * dx / ( 1.0 + cos ( t ) );

	m_fLatitude		= lat;
    m_fLongitude	= lon;

	return void ();
}

/

