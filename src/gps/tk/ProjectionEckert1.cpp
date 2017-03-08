#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionEckert1.h"

#define _USE_MATH_DEFINES
#include <math.h>

#define FC .92131773192356127802
#define RP .31830988618379067154

CProjectionEckert1::CProjectionEckert1 ()
{
}

CProjectionEckert1::~CProjectionEckert1 ()
{
}

void CProjectionEckert1::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;

    lon0 = DEG2RAD (proj.m_fOriginLongitude);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);

    return void ();
}

void CProjectionEckert1::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlam = lon - lon0;

    m_fEasting = (a * FC * dlam * (1.0 - RP * fabs (lat))) + fe;
    m_fNorthing = (a * FC * lat) + fn;

    return void ();
}

void CProjectionEckert1::Inverse ()
{
    double dx = m_fEasting - fe;
    double dy = m_fNorthing - fn;

    double lat = dy / (FC * a);
    double lon = dx / (FC * a * (1.0 - RP * fabs (lat)));

    m_fLatitude = lat;
    m_fLongitude = lon;

    return void ();
}

