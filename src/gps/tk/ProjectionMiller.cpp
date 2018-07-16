#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionMiller.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionMiller::CProjectionMiller ()
{
}

CProjectionMiller::~CProjectionMiller ()
{
}
void CProjectionMiller::Initialize(CCfgMapProjection & proj)
{
    a = proj.m_fAxis;

    lon0 = DEG2RAD (proj.m_fOriginLongitude);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);
}

void CProjectionMiller::Forward()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlam = lon - lon0;

    m_fEasting = (a * dlam) + fe;
    m_fNorthing = (a * log (tan ((M_PI / 4.0) + (lat / 2.5))) * 1.25) + fn;
}

void CProjectionMiller::Inverse()
{
    double dx = m_fEasting - fe;
    double dy = m_fNorthing - fn;

    m_fLatitude = atan (sinh (0.8 * dy / a)) / 0.8;
    m_fLongitude = lon0 + dx / a;
}

