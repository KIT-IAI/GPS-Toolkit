#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////

#include "Projection.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionUtils.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionQuarticAuthalic.h"

//////////////////////////////////////////////////////////////////////////////

#define _USE_MATH_DEFINES
#include <math.h>

//////////////////////////////////////////////////////////////////////////////

CProjectionQuarticAuthalic::CProjectionQuarticAuthalic ()
{
}

//////////////////////////////////////////////////////////////////////////////

CProjectionQuarticAuthalic::~CProjectionQuarticAuthalic ()
{
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionQuarticAuthalic::Initialize (CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;

    lon0            = DEG2RAD ( proj.m_fOriginLongitude  );
	
    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionQuarticAuthalic::Forward ()
{
	double lat		= m_fLatitude;
    double lon		= m_fLongitude;
  
    double dlam		= lon - lon0;

	double c		= 0.5 * lat;
	
	m_fEasting		= ( dlam * cos ( lat ) ) / cos ( c );
	m_fNorthing		= 2.0 * sin ( c );

	m_fEasting		= ( m_fEasting  * a ) + fe;
	m_fNorthing		= ( m_fNorthing * a ) + fn;

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionQuarticAuthalic::Inverse ()
{
	double dx		= ( m_fEasting  - fe ) / a;
	double dy		= ( m_fNorthing - fn ) / a;

	double h		= AASIN ( dy / 2.0 );
	double g		= cos ( h ) ;

	double lat		= h * 2.0;
	double lon		= dx / ( cos ( lat ) ) * g;

	m_fLatitude		= lat;
    m_fLongitude	= lon + lon0;

	return void ();
}

//////////////////////////////////////////////////////////////////////////////
