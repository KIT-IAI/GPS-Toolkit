#include "StdAfx.h"

#include "Projection.h"
#include "ProjectionUtils.h"
#include "ProjectionAlbers.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionAlbers::CProjectionAlbers ()
{
}

CProjectionAlbers::~CProjectionAlbers ()
{
}

void CProjectionAlbers::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;
    f = 1.0 / proj.m_fFlattening;

    e2 = 2.0 * f - pow (f, 2.0);
    e = sqrt (e2);

    lat0 = DEG2RAD (proj.m_fOriginLatitude);
    lon0 = DEG2RAD (proj.m_fOriginLongitude);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);

    sp1 = DEG2RAD (proj.m_fParallelNorth);
    sp2 = DEG2RAD (proj.m_fParallelSouth);

    double sinlat0 = sin (lat0);
    double coslat0 = cos (lat0);
    double essin0 = e * sinlat0;
    double q0 = (1.0 - e2) * (sinlat0 / (1.0 - (essin0 * essin0)) - (1.0 / (2.0 * e)) * log ((1.0 - essin0) / (1.0 + essin0))) ;

    double sinlat1 = sin (sp1);
    double coslat1 = cos (sp1);
    double essin1 = e * sinlat1;
    double q1 = (1.0 - e2) * (sinlat1 / (1.0 - (essin1 * essin1)) - (1.0 / (2.0 * e)) * log ((1.0 - essin1) / (1.0 + essin1)));
    double m1 = coslat1 / sqrt ((1.0 - (essin1 * essin1)));

    double sinlat2 = sin (sp2);
    double coslat2 = cos (sp2);
    double essin2 = e * sinlat2;
    double q2 = (1.0 - e2) * (sinlat2 / (1.0 - (essin2 * essin2)) - (1.0 / (2.0 * e)) * log ((1.0 - essin2) / (1.0 + essin2)));
    double m2 = coslat2 / sqrt ((1.0 - (essin2 * essin2)));

    n = (m1 * m1 - m2 * m2) / (q2 - q1);
    nq0 = n * q0;

    C = m1 * m1 + n * q1;

    r0 = (a / n) * sqrt (C - (n * q0));

    return void ();
}

void CProjectionAlbers::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlam = lon - lon0;

    double sinlat = sin (lat);
    double coslat = cos (lat);
    double essin = sinlat * e;

    double q = (1 - e2) * (sinlat / (1 - (essin * essin)) - (1 / (2 * e)) * log ((1 - essin) / (1 + essin)));

    double t = n * dlam;

    double r = (a / n) * sqrt (C - (n * q));

    m_fEasting = r * sin (t) + fe;
    m_fNorthing = r0 - r * cos (t) + fn;

    return void ();
}

void CProjectionAlbers::Inverse ()
{
    double dx = m_fEasting - fe;
    double dy = m_fNorthing - fn;

    double r = sqrt (pow (dx, 2.0) + pow ((r0 - dy), 2.0));

    double d = 1.0;

    double rho = r0;

    if (n < 0.0)
    {
        r *= -1.0;
        rho *= -1.0;
        dy *= -1.0;
        dx *= -1.0;
    }

    double t = atan2 (dx, rho - dy);

    double q = (C - (pow ((r * n), 2.0)) / pow (a, 2.0)) / n;

    double lat = asin (q / 2.0);
    double lon = lon0 + (t / n);

    while (fabs (d) > 4.85e-10)
    {
        double sinphi = sin (lat);
        double es_sin = e * sinphi;
        double oms = 1.0 - (pow (es_sin, 2.0));

        d = (oms * oms) / (2.0 * cos (lat)) * (q / (1.0 - e2) - sinphi / oms + (log ((1.0 - es_sin) / (1.0 + es_sin)) / (2.0 * e)));

        lat += d;
    }

    m_fLatitude = lat;
    m_fLongitude = lon;
}

