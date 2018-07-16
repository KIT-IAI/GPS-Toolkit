#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionGnomonic.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionGnomonic::CProjectionGnomonic ()
{
}

CProjectionGnomonic::~CProjectionGnomonic ()
{
}

void CProjectionGnomonic::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;

    lon0 = DEG2RAD (proj.m_fOriginLongitude);
    lat0 = DEG2RAD (proj.m_fOriginLatitude);

    clat0 = cos (lat0);
    slat0 = sin (lat0);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);
}

void CProjectionGnomonic::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlam = lon - lon0;

    double clat = cos (lat);
    double slat = sin (lat);

    double cc = slat0 * slat + clat0 * clat * cos (dlam);
    double cd = clat0 * slat - slat0 * clat * cos (dlam);

    m_fEasting = clat * sin (dlam) / cc;
    m_fNorthing = cd / cc;

    m_fNorthing = (a * m_fNorthing) + fn;
    m_fEasting = (a * m_fEasting) + fe;
}

void CProjectionGnomonic::Inverse ()
{
    double dx = (m_fEasting - fe) / a;
    double dy = (m_fNorthing - fn) / a;

    double r = sqrt (dx * dx + dy * dy);

    double c = atan (r);

    double sc = sin (c);
    double cc = cos (c);

    double lat = asin ((cc * slat0) + (((dy * sc) * clat0) / r));
    double lon = atan2 ((dx * sc), (r * clat0 * cc - (dy * sc) * slat0));

    m_fLatitude = lat;
    m_fLongitude = lon + lon0;
}

