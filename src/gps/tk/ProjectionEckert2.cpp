#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////

#include "Projection.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionUtils.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionEckert2.h"

//////////////////////////////////////////////////////////////////////////////

#define _USE_MATH_DEFINES
#include <math.h>

//////////////////////////////////////////////////////////////////////////////

#define FXC		0.46065886596178063902
#define FYC		1.44720250911653531871

//////////////////////////////////////////////////////////////////////////////

#define ONEEPS	1.0000001

//////////////////////////////////////////////////////////////////////////////

CProjectionEckert2::CProjectionEckert2 ()
{
}

//////////////////////////////////////////////////////////////////////////////

CProjectionEckert2::~CProjectionEckert2 ()
{
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionEckert2::Initialize (CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;

    lon0            = DEG2RAD ( proj.m_fOriginLongitude  );

    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionEckert2::Forward ()
{
	double lat		= m_fLatitude;
    double lon		= m_fLongitude;
  
    double dlam		= lon - lon0;
	
	double c		= sqrt ( 4.0 - 3.0 * sin ( fabs ( lat ) ) );

	m_fEasting		= ( a * FXC * dlam * c )    + fe;
	m_fNorthing		= ( a * FYC * ( 2.0 - c ) ) + fn;

    return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionEckert2::Inverse ()
{
	double dx		= ( m_fEasting  - fe ) / a;
	double dy		= ( m_fNorthing - fn ) / a;

	double d		= ( 2.0 - fabs ( dy ) / FYC );

	double lon		= dx / ( FXC * d );
	double lat		= ( 4.0 - d * d ) * ( 1.0 / 3.0 );

	if ( fabs ( lat ) >= 1.0 )
	{
		if ( fabs ( lat ) <= ONEEPS )
		{
			lat = ( lat < 0.0 ) ? -M_PI_2 : M_PI_2;
		}
	}
	else
	{
		lat = asin ( lat );
	}
	
	if ( dy < 0.0 )
		lat = -lat;   

	m_fLatitude		= lat;
    m_fLongitude	= lon;

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

