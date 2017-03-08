#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionLoximuthal.h"

#define _USE_MATH_DEFINES
#include <math.h>

#define EPS	1e-8

CProjectionLoximuthal::CProjectionLoximuthal ()
{
}

CProjectionLoximuthal::~CProjectionLoximuthal ()
{
}

void CProjectionLoximuthal::Initialize (CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;

    lon0            = DEG2RAD ( proj.m_fOriginLongitude  );

	sp1				= DEG2RAD ( proj.m_fParallelNorth	 );
	
    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	tsp1			= tan ( M_PI_4 + 0.5 * sp1 );
	csp1			= cos ( sp1 );

	return void ();
}

void CProjectionLoximuthal::Forward ()
{
	double lat			= m_fLatitude;
    double lon			= m_fLongitude;
  
	double dlam			= lon - lon0;
	
	double fNorthing	= ( lat - sp1 );
	double fEasting		= 0.0;

	if ( fabs ( fNorthing ) < EPS )
		fEasting = a * dlam * csp1;
	else
	{
		fEasting = M_PI_4 + 0.5 * lat;

		if ( fabs ( fEasting ) < EPS || fabs ( fabs ( fEasting ) - M_PI_2 ) < EPS )
			fEasting = 0.0;
		else
			fEasting = dlam * fNorthing / log ( tan ( fEasting ) / tsp1 );
	}

	m_fEasting		= ( fEasting  * a ) + fe;
	m_fNorthing		= ( fNorthing * a ) + fn;

    return void ();
}

void CProjectionLoximuthal::Inverse ()
{
	double dx		= ( m_fEasting  - fe ) / a;
	double dy		= ( m_fNorthing - fn ) / a;
	
	double lat		= dy + sp1;
	double lon		= 0.0;

	if ( fabs ( dy ) < EPS )
	{
		lon = dy / csp1;
	}
	else
	{
		lon = M_PI_4 + 0.5 * lat;

		if ( ( fabs ( lon ) < EPS ) || ( fabs ( fabs ( lon ) - M_PI_2 ) < EPS ) )
		{
			lon = 0.0;
		}
		else
		{
			lon = dx * log ( tan ( lon ) / tsp1  ) / dy;
		}
	}

	m_fLatitude     = lat;
    m_fLongitude    = lon + lon0;

	return void ();
}

