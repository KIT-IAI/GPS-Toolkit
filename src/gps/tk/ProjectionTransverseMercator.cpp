#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionTransverseMercator.h"

#include "GpsConstantsX.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionTransverseMercator::CProjectionTransverseMercator ()
{
}

CProjectionTransverseMercator::~CProjectionTransverseMercator ()
{
}

void CProjectionTransverseMercator::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;
    f = 1.0 / proj.m_fFlattening;
    b = a * (1.0 - f);
    e2 = 2.0 * f - pow (f, 2.0);
    e = sqrt (e2);

    lon0 = DEG2RAD (proj.m_fOriginLongitude);
    lat0 = DEG2RAD (proj.m_fOriginLatitude);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);

    k0 = proj.m_fProjScale;

    if (k0 == 0.0)
        k0 = 1.0;

    prj = proj.m_lProjection;

    e1 = (1.0 / (1.0 - e2)) - 1.0;

    tn = (a - b) / (a + b);
    tn2 = tn * tn;
    tn3 = tn * tn2;
    tn4 = tn2 * tn2;
    tn5 = tn4 * tn;

    ap = a * (1.0 - tn + 5.0 * (tn2 - tn3) / 4.0 + 81.0 * (tn4 - tn5) / 64.0);
    bp = 3.0 * a * (tn - tn2 + 7.0 * (tn3 - tn4) / 8.0 + 55.0 * tn5 / 64.0) / 2.0;
    cp = 15.0 * a * (tn2 - tn3 + 3.0 * (tn4 - tn5) / 4.0) / 16.0;
    dp = 35.0 * a * (tn3 - tn4 + 11.0 * tn5 / 16.0) / 48.0;
    ep = 315.0 * a * (tn4 - tn5) / 512.0;
}

void CProjectionTransverseMercator::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

    double s = sin (lat);
    double c = cos (lat);
    double t = tan (lat);

    double tan2 = t * t;
    double tan3 = tan2 * t;
    double tan4 = tan3 * t;
    double tan5 = tan4 * t;
    double tan6 = tan5 * t;

    double c2 = c * c;
    double c3 = c * c2;
    double c5 = c3 * c2;
    double c7 = c5 * c2;

    double eta = e2 * c2;
    double eta2 = eta * eta;
    double eta3 = eta2 * eta;
    double eta4 = eta3 * eta;

    double dlam = lon - lon0;

    double sn = SPHSN (lat) * k0;

    double tmd = ap * lat - bp * sin (2.0 * lat) + cp * sin (4.0 * lat) - dp * sin (6.0 * lat) + ep * sin (8.0 * lat);
    double tmdo = ap * lat0 - bp * sin (2.0 * lat0) + cp * sin (4.0 * lat0) - dp * sin (6.0 * lat0) + ep * sin (8.0 * lat0);

    double t1 = (tmd - tmdo) * k0;
    double t2 = sn * s * c / 2.0;
    double t3 = sn * s * c3 * (5.0 - tan2 + 9.0 * eta + 4.0 * eta2) / 24.0;
    double t4 = sn * s * c5 * (61.0 - 58.0 * tan2 + tan4 + 270.0 * eta - 330.0 * tan2 * eta + 445.0 * eta2 + 324.0 * eta3 -680.0 * tan2 * eta2 + 88.0 * eta4 -600.0 * tan2 * eta3 - 192.0 * tan2 * eta4) / 720.0;
    double t5 = sn * s * c7 * (1385.0 - 3111.0 * tan2 + 543.0 * tan4 - tan6) / 40320.0;
    double t6 = sn * c;
    double t7 = sn * c3 * (1.0 - tan2 + eta) / 6.0;
    double t8 = sn * c5 * (5.0 - 18.0 * tan2 + tan4 + 14.0 * eta - 58.0 * tan2 * eta + 13.0 * eta2 + 4.0 * eta3 - 64.0 * tan2 * eta2 - 24.0 * tan2 * eta3) / 120.0;
    double t9 = sn * c7 * (61.0 - 479.0 * tan2 + 179.0 * tan4 - tan6) / 5040.0;

    double x = dlam * t6 + pow (dlam, 3.0) * t7 + pow (dlam, 5.0) * t8 + pow (dlam, 7.0) * t9;
    double y = t1 + pow (dlam, 2.0) * t2 + pow (dlam, 4.0) * t3 + pow (dlam, 6.0) * t4 + pow (dlam, 8.0) * t5;

    if (prj == GPS_PROJECTION_TRANSVERSEMERCATORSOUTH)
    {
        m_fEasting = fe - x;
        m_fNorthing = fn - y;
    }
    else
    {
        m_fEasting = fe + x;
        m_fNorthing = fn + y;
    }
}

void CProjectionTransverseMercator::Inverse ()
{
    int iter = 15;

    double x = m_fEasting;
    double y = m_fNorthing;

    double tmdo = ap * lat0 - bp * sin (2.0 * lat0) + cp * sin (4.0 * lat0) - dp * sin (6.0 * lat0) + ep * sin (8.0 * lat0);

    double tmd = 0.0;
    double de = 0.0;

// South Orientated: South Africa, Hartebeesthoek
    if (prj == GPS_PROJECTION_TRANSVERSEMERCATORSOUTH)
    {
        tmd = tmdo - (y - fn) / k0;
        de = -x - fe;
    }
    else
    {
        tmd = tmdo + (y - fn) / k0;
        de = x - fe;
    }

    double sn = 0.0;
    double sr = SPHSR (0.0);

    double ftphi = tmd / sr;
    double t10 = 0.0;

    while (iter-- >= 0)
    {
        t10 = ap * ftphi - bp * sin (2.0 * ftphi) + cp * sin (4.0 * ftphi) - dp * sin (6.0 * ftphi) + ep * sin (8.0 * ftphi);

        sr = SPHSR (ftphi);

        ftphi = ftphi + (tmd - t10) / sr;
    }

    sr = SPHSR (ftphi);
    sn = SPHSN (ftphi);

    double s = sin (ftphi);
    double c = cos (ftphi);
    double t = tan (ftphi);

    double tan2 = t * t;
    double tan4 = tan2 * tan2;

    double eta = e1 * c * c;
    double eta2 = eta * eta;
    double eta3 = eta2 * eta;
    double eta4 = eta3 * eta;

    if (abs (de) < 0.0001)
        de = 0.0;

    t10 = t / (2.0 * sr * sn * pow (k0, 2));
    double t11 = t * (5.0 + 3.0 * tan2 + eta - 4.0 * pow(eta,2) - 9.0 * tan2 * eta) / (24.0 * sr * pow(sn,3) * pow (k0,4));
    double t12 = t * (61.0 + 90.0 * tan2 + 46.0 * eta + 45.0 * tan4 - 252.0 * tan2 * eta - 3.0 * eta2 + 100.0 * eta3 - 66.0 * tan2 * eta2 - 90.0 * tan4 * eta + 88.0 * eta4 + 225.0 * tan4 * eta2 + 84.0 * tan2* eta3 - 192.0 * tan2 * eta4) / (720.0 * sr * pow(sn,5) * pow(k0, 6));
    double t13 = t * (1385.0 + 3633.0 * tan2 + 4095.0 * tan4 + 1575.0 * pow(t,6))/ (40320.0 * sr * pow(sn,7) * pow(k0,8));

    double lat = ftphi - pow(de, 2) * t10 + pow (de, 4) * t11 - pow (de, 6) * t12 + pow (de,8) * t13;

    double t14 = 1.0 / (sn * c * k0);
    double t15 = (1.0 + 2.0 * tan2 + eta) / (6.0 * pow (sn, 3) * c * pow (k0, 3));
    double t16 = (5.0 + 6.0 * eta + 28.0 * tan2 - 3.0 * eta2 + 8.0 * tan2 * eta + 24.0 * tan4 - 4.0 * eta3 + 4.0 * tan2 * eta2 + 24.0 * tan2 * eta3) / (120.0 * pow (sn,5) * c * pow (k0,5));
    double t17 = (61.0 + 662.0 * tan2 + 1320.0 * tan4 + 720.0 * pow (t, 6)) / (5040.0 * pow (sn, 7) * c * pow (k0, 7));

    double lon = lon0 + de * t14 - pow (de,3) * t15 + pow (de,5) * t16 - pow (de,7) * t17;

    m_fLatitude = lat;
    m_fLongitude = lon;
}
