#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionPlateCarree.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionPlateCarree::CProjectionPlateCarree ()
{
}

CProjectionPlateCarree::~CProjectionPlateCarree ()
{
}

void CProjectionPlateCarree::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;

    lon0 = DEG2RAD (proj.m_fOriginLongitude);
    lat0 = DEG2RAD (proj.m_fOriginLatitude);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);
}

void CProjectionPlateCarree::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlon = lon - lon0;
    double dlat = lat - lat0;

    m_fEasting = a * dlon;
    m_fNorthing = a * dlat;
}

void CProjectionPlateCarree::Inverse ()
{
    double dx = (m_fEasting - fe) / a;
    double dy = (m_fNorthing - fn) / a;

    double lat = dy + lat0;
    double lon = dx + lon0;

    m_fLatitude = lat;
    m_fLongitude = lon;
}
