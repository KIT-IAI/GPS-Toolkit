#include "StdAfx.h"

#include "Projection.h"

#include "ProjectionUtils.h"

#include "ProjectionObliqueStereo.h"

#define _USE_MATH_DEFINES
#include <math.h>

CProjectionObliqueStereo::CProjectionObliqueStereo ()
{
}

CProjectionObliqueStereo::~CProjectionObliqueStereo ()
{
}

void CProjectionObliqueStereo::Initialize (CCfgMapProjection & proj)
{
    a = proj.m_fAxis;
    f = 1.0 / proj.m_fFlattening;

    e2 = 2.0 * f - pow (f, 2.0);
    e = sqrt (e2);

    lon0 = DEG2RAD (proj.m_fOriginLongitude);
    lat0 = DEG2RAD (proj.m_fOriginLatitude);

    fe = UnitsToMeters (proj.m_lUnits, proj.m_fFalseEasting);
    fn = UnitsToMeters (proj.m_lUnits, proj.m_fFalseNorthing);

    k0 = proj.m_fProjScale;

    if (k0 == 0.0)
        k0 = 1.0;

// N0
    double n0 = a / sqrt (1.0 - e2 * pow (sin (lat0), 2.0));

// R0
    double r0 = (n0 * (1.0 - e2)) / (1.0 - e2 * pow (sin (lat0), 2.0));

// Rbol
    rb = sqrt (n0 * r0);

// Gauss projectie n constante:
    double n2 = e2 / (1 - e2);

    n = sqrt (1.0 + (n2 * (pow (cos (lat0), 4.0))));

// Bo
    b0 = atan (tan (lat0) * sqrt (r0 / n0));

// Wo
    double w0 = log (tan (M_PI_4 + (b0 / 2.0)));

// Qo
    double q1 = log (tan (M_PI_4 + (lat0 / 2.0)));
    double q2 = e / 2.0 * log ((1.0 + e * sin (lat0)) / (1.0 - e * sin (lat0)));
    double q0 = q1 - q2;

// Gauss projectie m constante:
    m = w0 - n * q0;

    return void ();
}

void CProjectionObliqueStereo::Forward ()
{
    double lat = m_fLatitude;
    double lon = m_fLongitude;

// Q
    double q3 = log (tan (M_PI_4 + (lat / 2.0)));
    double q4 = e / 2.0 * log ((1.0 + e * sin (lat)) / (1.0 - e * sin (lat)));
    double q = q3 - q4;

// w (isometrische breedte op de bol)
    double w = n * q + m;

// B (breedte op de bol)
    double b = atan (exp (w)) * 2.0 - M_PI_2;

// L
    double L = lon0 + n * (lon - lon0);

// Calculate Half Sinus Psi
    double sph = pow (sin ((b - b0) / 2.0), 2) + pow (sin ((L - lon0) / 2.0), 2) * cos (b) * cos (b0);

// Psi from Half Sinus Psi
    double psi = atan (sqrt (sph) / sqrt (1.0 - sph)) * 2.0;

// Divide by zero ?
    if (psi == 0.0)
    {
        m_fEasting = fe;
        m_fNorthing = fn;
    }
    else
    {
// r
        double r = 2.0 * k0 * rb * tan (psi / 2.0);

// Sinus Alpha and Cosinus Alpha
        double sa = sin (L - lon0) * (cos (b) / sin (psi));
        double ca = (sin (b) - sin (b0) * cos (psi)) / (cos (b0) * sin (psi));

// Calculate X and Y coords
        m_fEasting = r * sa + fe;
        m_fNorthing = r * ca + fn;
    }

    return void ();
}

void CProjectionObliqueStereo::Inverse ()
{
// Calculate X and Y without False Easting and Northing
    double x = m_fEasting - fe;
    double y = m_fNorthing - fn;

    int lIter = 5;

// Calculate Radius (r)
    double r = sqrt (pow (x, 2.0) + pow (y, 2.0));

// Check for divide by zero
    if (r == 0.0)
    {
        m_fLongitude = lon0;
        m_fLatitude = lat0;
    }
    else
    {

// Calculate sa and ca
        double sa = x / r;
        double ca = y / r;

// Calculate psi
        double psi = atan2 (r, 2.0 * k0 * rb) * 2.0;

// Calculate sinB (sb)
        double sb = ca * cos (b0) * sin (psi) + sin (b0) * cos (psi);

// Calculate cosB (cb)
        double cb = sqrt (1.0 - pow (sb, 2));

// Calculate sin delta L (sdl)
        double sdl = (sa * sin (psi)) / cb;

// Calculate delta L
        double dl = asin (sdl);

// Calculate b
        double b = acos (cb);

// Calculate w
        double w = log (tan (M_PI_4 + (b / 2.0)));

// Calculate q
        double q = (w - m) / n;

// Calculate labda
        double lab = (dl / n) + lon0;

// Calculate phi prime
        double phi_ = atan (exp (q)) * 2.0 - M_PI_2;

// Calculate phi
        double phi = 0.0;

        while (lIter-- > 0)
        {
            double dq = e / 2.0 * log ((1.0 + e * sin (phi_)) / (1.0 - e * sin (phi_)));

            phi = atan (exp (q + dq)) * 2.0 - M_PI_2;
            phi_ = phi;
        }

        m_fLongitude = lab;
        m_fLatitude = phi;
    }

    return void ();
}

