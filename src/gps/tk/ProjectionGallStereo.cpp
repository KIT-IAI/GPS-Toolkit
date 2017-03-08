#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionGallStereo.h"

#define _USE_MATH_DEFINES
#include <math.h>

#define YF 1.70710678118654752440
#define XF 0.70710678118654752440

#define RYF 0.58578643762690495119
#define RXF 1.41421356237309504880

CProjectionGallStereo::CProjectionGallStereo ()
{
}

CProjectionGallStereo::~CProjectionGallStereo ()
{
}

void CProjectionGallStereo::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;

    lon0 = DEG2RAD (proj.m_fOriginLongitude);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);

    return void ();
}

void CProjectionGallStereo::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlam = lon - lon0;

    double tlat = tan (lat / 2.0);

    m_fEasting = (a * XF * dlam) + fe;
    m_fNorthing = (a * YF * tlat) + fn;

    return void ();
}

void CProjectionGallStereo::Inverse ()
{
    double dx = (m_fEasting - fe) / a;
    double dy = (m_fNorthing - fn) / a;

    double lon = RXF * dx;
    double lat = 2.0 * atan (dy * RYF);

    m_fLatitude = lat;
    m_fLongitude = lon;

    return void ();
}

