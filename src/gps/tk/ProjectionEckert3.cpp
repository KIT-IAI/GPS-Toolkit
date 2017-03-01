#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////

#include "Projection.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionUtils.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionEckert3.h"

//////////////////////////////////////////////////////////////////////////////

#define _USE_MATH_DEFINES
#include <math.h>

//////////////////////////////////////////////////////////////////////////////

#define CX		0.4222382003157712014900
#define CY		0.8444764006315424029800
#define CB		0.4052847345693510857755

//////////////////////////////////////////////////////////////////////////////

CProjectionEckert3::CProjectionEckert3 ()
{
}

//////////////////////////////////////////////////////////////////////////////

CProjectionEckert3::~CProjectionEckert3 ()
{
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionEckert3::Initialize (CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;

    lon0            = DEG2RAD ( proj.m_fOriginLongitude  );

    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionEckert3::Forward ()
{
	double lat		= m_fLatitude;
    double lon		= m_fLongitude;
  
    double dlam		= lon - lon0;
	
	double c		= 1.0 + ASQRT ( 1.0 - CB * lat * lat );

	m_fEasting		= ( a * CX * dlam * c ) + fe;
	m_fNorthing		= ( a * CY * lat      ) + fn;

    return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionEckert3::Inverse ()
{
	double dx		= ( m_fEasting  - fe ) / a;
	double dy		= ( m_fNorthing - fn ) / a;

	double lat		= dy / CY;
	double c		= 1.0 + ASQRT ( 1.0 - CB * lat * lat );
	double lon		= dx / ( CX * c );
	
	m_fLatitude		= lat;
    m_fLongitude	= lon;

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

