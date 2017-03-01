#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////

#include "Projection.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionUtils.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionEckert4.h"

//////////////////////////////////////////////////////////////////////////////

#define _USE_MATH_DEFINES
#include <math.h>

//////////////////////////////////////////////////////////////////////////////

CProjectionEckert4::CProjectionEckert4 ()
{
}

//////////////////////////////////////////////////////////////////////////////

CProjectionEckert4::~CProjectionEckert4 ()
{
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionEckert4::Initialize (CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;

    lon0            = DEG2RAD ( proj.m_fOriginLongitude  );

    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	q				= 2.0 + M_PI_2;

	ra0				= 0.42223820031577120149 * a;
    ra1				= 1.32650042817700232218 * a;

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionEckert4::Forward ()
{
	double lat		= m_fLatitude;
    double lon		= m_fLongitude;
  
    double dlam		= lon - lon0;

    double t		= lat / 2.0;
	double dt		= 1.0;	

    while ( fabs ( dt ) > 4.85e-10 )
    {
        double  sint    = sin ( t );
        double  cost    = cos ( t );

        double  num     = t + sint * cost + 2.0 * sint;
        
        dt = -( num - q * sin ( lat ) ) / ( 2.0 * cost * ( 1.0 + cost ) );

        t += dt;
    }

    m_fEasting	= ra0 * dlam * ( 1.0 + cos ( t ) ) + fe;
    m_fNorthing = ra1 * sin ( t ) + fn; 

    return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionEckert4::Inverse ()
{
	double dx		= m_fEasting  - fe;
	double dy		= m_fNorthing - fn;
	
	double i		= dy / ra1;

    if (i > 1.0)
      i = 1.0;
    else if (i < -1.0)
      i = -1.0;

    double t		= asin ( i );
    double sint		= sin ( t );
    double cost		= cos ( t );

    double num		= t + sint * cost + 2.0 * sint;

    double lat		= asin ( num / q );
    double lon      = lon0 + dx / ( ra0 * ( 1 + cost ) );

	m_fLatitude		= lat;
    m_fLongitude	= lon;

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

