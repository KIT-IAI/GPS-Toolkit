#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionObliqueMercator.h"

#include "GpsConstantsX.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionObliqueMercator::CProjectionObliqueMercator()
{
}

CProjectionObliqueMercator::~CProjectionObliqueMercator()
{
}

void CProjectionObliqueMercator::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;
    f = 1.0 / proj.m_fFlattening;

    e2 = 2.0 * f - pow (f, 2.0);
    e4 = e2 * e2;
    e6 = e2 * e4;
    e8 = e4 * e4;
    e = sqrt (e2);

    lat0 = DEG2RAD (proj.m_fOriginLatitude);
    lon0 = DEG2RAD (proj.m_fOriginLongitude);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);

    sp1 = DEG2RAD (proj.m_fParallelNorth);
    sp2 = DEG2RAD (proj.m_fParallelSouth);

    azi = DEG2RAD (proj.m_fAzimuth);
    rga = DEG2RAD (proj.m_fRectifiedGrid);

    k0 = proj.m_fProjScale;

    if (k0 == 0.0) k0 = 1.0;

    cos4 = pow (cos (lat0), 4.0);
    sfc = sin (lat0);

    B = sqrt (1.0 + (e2 * cos4) / (1.0 - e2));
    A = a * B * k0 * sqrt (1.0 - e2) / (1.0 - e2 * sfc * sfc);
    t0 = TSFN (lat0);
    D = B * sqrt (1.0 - e2) / (cos (lat0) * sqrt (1.0 - e2 * sin (lat0) * sin (lat0)));
    D2 = (D < 1.0) ? 1.0 : D * D;
    F = D + sqrt (D2 - 1.0) * SIGN (lat0);
    H = F * pow (t0, B);
    G = (F - (1.0 / F)) / 2.0;

    g0 = asin (sin (azi) / D);
    l0 = lon0 - (asin (G * tan (g0))) / B;

    uc = (A / B) * atan (sqrt (D2 - 1.0) / cos (azi)) * SIGN (lat0);

    bHotine = (proj.m_lProjection == GPS_PROJECTION_HOTINEOBLIQUEMERCATOR) ? true : false;
}

void CProjectionObliqueMercator::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double t = TSFN (lat);
    double Q = H / pow (t, B);
    double S = (Q - 1.0 / Q) / 2.0;
    double T = (Q + 1.0 / Q) / 2.0;
    double V = sin (B * (lon - l0));
    double U = ((-1.0 * V * cos (g0)) + (S * sin (g0))) / T;
    double v = A * log ((1.0 - U) / (1.0 + U)) / (2.0 * B);
    double u = A * atan ((S * cos (g0) + V * sin (g0)) / cos (B * (lon - l0))) / B;

    if (bHotine == false)
        u = u - uc;

    m_fEasting = (v * cos (rga)) + (u * sin (rga)) + fe;
    m_fNorthing = (u * cos (rga)) - (v * sin (rga)) + fn;
}

void CProjectionObliqueMercator::Inverse ()
{
    double x = m_fEasting;
    double y = m_fNorthing;

    double v = (x - fe) * cos (rga) - (y - fn) * sin (rga);
    double u = (y - fn) * cos (rga) + (x - fe) * sin (rga);

    if (bHotine == false)
        u = u + uc;

    double Q = exp (-1.0 * (B * v / A));
    double S = (Q - 1.0 / Q) / 2.0;
    double T = (Q + 1.0 / Q) / 2.0;
    double V = sin (B * u / A);
    double U = (V * cos (g0) + S * sin (g0)) / T;
    double t = pow (H / sqrt ((1.0 + U) / (1.0 - U)), 1.0 / B);

    double chi = (M_PI / 2.0) - (atan (t) * 2.0);

    double phi = chi + sin (chi * 2.0) * (e2 / 2.0 + 5.0 * e4 / 24.0 + e6 / 12.0 + e8 / 360.0) +
                 sin (chi * 4.0) * (7.0 * e4 / 48.0 + 29.0 * e6 / 240.0 + 811.0 * e8 / 11520.0) +
                 sin (chi * 6.0) * (7.0 * e6 / 120.0 + 81.0 * e8 / 1120.0) +
                 sin (chi * 8.0) * (4279.0 * e8 / 161280.0);

    double lat = phi;
    double lon = l0 - atan ((S * cos (g0) - V * sin (g0)) / cos (B * u / A)) / B;

    m_fLatitude = lat;
    m_fLongitude = lon;
}

