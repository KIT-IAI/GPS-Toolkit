#include "StdAfx.h"
#include <algorithm>

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionOrthographic.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionOrthographic::CProjectionOrthographic ()
{
}

CProjectionOrthographic::~CProjectionOrthographic ()
{
}

void CProjectionOrthographic::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;

    lon0 = DEG2RAD (proj.m_fOriginLongitude);
    lat0 = DEG2RAD (proj.m_fOriginLatitude);

    clat0 = cos (lat0);
    slat0 = sin (lat0);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);
}

void CProjectionOrthographic::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlam = lon - lon0;

    double clat = cos (lat);
    double slat = sin (lat);

    m_fEasting = clat * sin (dlam);
    m_fNorthing = clat0 * slat - slat0 * (clat * cos (dlam));

    m_fNorthing = (a * m_fNorthing) + fn;
    m_fEasting = (a * m_fEasting) + fe;
}

void CProjectionOrthographic::Inverse ()
{
    double dx = (m_fEasting - fe) / a;
    double dy = (m_fNorthing - fn) / a;

    double rh = sqrt (dx * dx + dy * dy);

    double sinc = std::min (1.0, rh);

    double cc = sqrt (1.0 - sinc * sinc);

    double clat0 = cos (lat0);
    double slat0 = sin (lat0);

    double lat = asin (cc * slat0 + (dy * sinc * clat0 / rh));

    double y = (cc - slat0 * lat) * rh;
    double x = dx * sinc * clat0;

    double lon = atan2 (x, y);

    m_fLatitude = lat;
    m_fLongitude = lon + lon0;
}
