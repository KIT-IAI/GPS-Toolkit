#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionEquirectangular.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionEquirectangular::CProjectionEquirectangular ()
{
}

CProjectionEquirectangular::~CProjectionEquirectangular ()
{
}

void CProjectionEquirectangular::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;

    lon0 = DEG2RAD (proj.m_fOriginLongitude);
    lat0 = DEG2RAD (proj.m_fOriginLatitude);

    sp1 = DEG2RAD (proj.m_fParallelNorth);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);
}

void CProjectionEquirectangular::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlon = lon - lon0;
    double dlat = lat - lat0;

    m_fEasting = a * dlon * cos (sp1);
    m_fNorthing = a * dlat;
}

void CProjectionEquirectangular::Inverse ()
{
    double dx = (m_fEasting - fe) / a;
    double dy = (m_fNorthing - fn) / a;

    double lat = dy + lat0;
    double lon = (dx / cos (sp1)) + lon0;

    m_fLatitude = lat;
    m_fLongitude = lon;
}

