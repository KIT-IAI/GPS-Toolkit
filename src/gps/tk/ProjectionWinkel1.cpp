#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionWinkel1.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionWinkel1::CProjectionWinkel1 ()
{
}

CProjectionWinkel1::~CProjectionWinkel1 ()
{
}

void CProjectionWinkel1::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;

    lon0 = DEG2RAD (proj.m_fOriginLongitude);
    sp1 = DEG2RAD (50.4597762521898);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);
}

void CProjectionWinkel1::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlam = lon - lon0;

    double csp1 = cos (sp1);
    double clat = cos (lat);

    m_fEasting = (a * dlam * (csp1 + clat) / 2.0) + fe;
    m_fNorthing = (a * lat) + fn;
}

void CProjectionWinkel1::Inverse ()
{
    double dx = (m_fEasting - fe) / a;
    double dy = (m_fNorthing - fn) / a;

    double lat = dy;
    double lon = 2.0 * dx / (cos (sp1) + cos (lat));

    m_fLatitude = lat;
    m_fLongitude = lon;
}

