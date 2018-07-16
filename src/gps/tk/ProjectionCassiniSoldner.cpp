#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionCassiniSoldner.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionCassiniSoldner::CProjectionCassiniSoldner ()
{
    m_bSphere = false;
}

CProjectionCassiniSoldner::~CProjectionCassiniSoldner ()
{
}

void CProjectionCassiniSoldner::Initialize(CCfgMapProjection &proj)
{
    a = proj.m_fAxis;

    lat0 = DEG2RAD (proj.m_fOriginLatitude);
    lon0 = DEG2RAD (proj.m_fOriginLongitude);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);

    if (proj.m_fFlattening == 0.0)
    {
        m_bSphere = true;
    }
    else
    {
        m_bSphere = false;

        f = 1.0 / proj.m_fFlattening;

        e2 = 2.0 * f - pow (f, 2.0);
        e4 = e2 * e2;
        e6 = e2 * e4;
        e = sqrt (e2);

        c0 = 1.0 - e2 / 4.0 - 3.0 * e4 / 64.0 - 5.0 * e6 / 256.0;
        c1 = 3.0 * e2 / 8.0 + 3.0 * e4 / 32.0 + 45.0 * e6 / 1024.0;
        c2 = 15.0 * e4 / 256.0 + 45.0 * e6 / 1024.0;
        c3 = 35.0 * e6 / 3072.0;

        double x1 = (1.0 - (sqrt (1.0 - e2))) / (1.0 + (sqrt (1.0 - e2)));
        double x2 = x1 * x1;
        double x3 = x2 * x1;
        double x4 = x3 * x1;

        a0 = 3.0 * x1 / 2.0 - 27.0 * x3 / 32.0;
        a1 = 21.0 * x2 / 16.0 - 55.0 * x4 / 32.0;
        a2 = 151.0 * x3 / 96.0;
        a3 = 1097.0 * x4 / 512.0;

        /* double s2lat0 = c1 * (sin (2.0 * lat0));
        double s4lat0 = c2 * (sin (4.0 * lat0));
        double s6lat0 = c3 * (sin (6.0 * lat0));*/

        M0 = a * MLFN (lat0); //((c0 * lat0) - s2lat0 + s4lat0 - s6lat0);
    }
}

void CProjectionCassiniSoldner::Forward ()
{
    if (m_bSphere)
        ForwardS ();
    else
        ForwardE ();
}

void CProjectionCassiniSoldner::ForwardE ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlam = lon - lon0;

    double tlat = tan (lat);
    double clat = cos (lat);
    double slat = sin (lat);

    double RD = sqrt (1.0 - e2 * slat * slat);
    double NN = a / RD;
    double TT = tlat * tlat;
    double AA = dlam * clat;

    double A2 = AA * AA;
    double A3 = AA * A2;
    double A4 = AA * A3;
    double A5 = AA * A4;

    double CC = e2 * clat * clat / (1.0 - e2);

    double MM = a * MLFN (lat);

    m_fEasting = NN * (AA - (TT * A3 / 6.0) - (8.0 - TT + 8.0 * CC) * (TT * A5 / 120.0)) + fe;
    m_fNorthing = MM - M0 + NN * tlat * ((A2 / 2.0) + (5.0 - TT + 6.0 * CC) * A4 / 24.0) + fn;
}

void CProjectionCassiniSoldner::ForwardS ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double dlam = lon - lon0;

    double tlat = tan (lat);
    double clat = cos (lat);

    m_fEasting = (a * (asin (clat * sin (dlam)))) + fe;
    m_fNorthing = (a * (atan2 (tlat, cos (dlam)) - lat0)) + fn;
}

void CProjectionCassiniSoldner::Inverse ()
{
    if (m_bSphere)
        InverseS ();
    else
        InverseE ();
}

void CProjectionCassiniSoldner::InverseE ()
{
    double dx = m_fEasting - fe;
    double dy = m_fNorthing - fn;

    double M1 = M0 + dy;
    double mu1 = M1 / (a * c0);

    double s2mu = a0 * (sin (2.0 * mu1));
    double s4mu = a1 * (sin (4.0 * mu1));
    double s6mu = a2 * (sin (6.0 * mu1));
    double s8mu = a3 * (sin (8.0 * mu1));
    double phi1 = mu1 + s2mu + s4mu + s6mu + s8mu;

    double tanphi1 = tan(phi1);
    double sinphi1 = sin(phi1);
    double cosphi1 = cos(phi1);
    double T1 = tanphi1 * tanphi1;
    double RD = sqrt (1.0 - e2 * sin (phi1) * sin (phi1));
    double N1 = a / RD;
    double R1 = N1 * (1 - e2) / pow (RD, 2.0);
    double DD = dx / N1;
    double D2 = DD * DD;
    double D3 = D2 * DD;
    double D4 = D3 * DD;
    double D5 = D4 * DD;
    double T = (1.0 + 3.0 * T1);

    double lat = phi1 - (N1 * tanphi1 / R1) * (D2 / 2.0 - T * D4 / 24.0);
    double lon = lon0 + (DD - T1 * D3 / 3.0 + T * T1 * D5 / 15.0) / cosphi1;

    m_fLatitude = lat;
    m_fLongitude = lon;
}

void CProjectionCassiniSoldner::InverseS ()
{
    double dy = (m_fNorthing - fn) / a;
    double dx = (m_fEasting - fe) / a;

    double dd = dy + lat0;

    double lat = asin (sin (dd) * cos (dx));
    double lon = atan2 (tan (dx), cos (dd)) + lon0;

    m_fLatitude = lat;
    m_fLongitude = lon;
}

