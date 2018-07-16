#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionHammer.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionHammer::CProjectionHammer ()
{
}

CProjectionHammer::~CProjectionHammer ()
{
}

void CProjectionHammer::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;

    lon0 = DEG2RAD (proj.m_fOriginLongitude);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);
}

void CProjectionHammer::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlam = lon - lon0;

    double clat = cos (lat);

    double d = sqrt (2.0) / sqrt (1.0 + clat * cos (dlam * 0.5));

    m_fEasting = d * 2.0 * clat * sin (dlam * 0.5);
    m_fNorthing = d * sin (lat);

    m_fNorthing = (a * m_fNorthing) + fn;
    m_fEasting = (a * m_fEasting) + fe;
}

void CProjectionHammer::Inverse ()
{
    double dx = (m_fEasting - fe) / a;
    double dy = (m_fNorthing - fn) / a;

    double d = sqrt (4.0 - (dx * dx) / 4.0 - dy * dy) / 2.0;

    double lon = 2.0 * atan2 ((dx * d), (2.0 - dx * dx /4 - dy * dy));
    double lat = asin (dy * d);

    m_fLatitude = lat;
    m_fLongitude = lon + lon0;
}
