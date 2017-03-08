#include "StdAfx.h"

#include <stdexcept>

#include "Projection.h"
#include "Projections.h"

#include "ProjectionAlbers.h"
#include "ProjectionKrovak.h"
#include "ProjectionLambert.h"
#include "ProjectionEckert1.h"
#include "ProjectionEckert2.h"
#include "ProjectionEckert3.h"
#include "ProjectionEckert4.h"
#include "ProjectionEckert5.h"
#include "ProjectionEckert6.h"
#include "ProjectionWinkel1.h"
#include "ProjectionMercator.h"
#include "ProjectionMollweide.h"
#include "ProjectionPolyconic.h"
#include "ProjectionGallStereo.h"
#include "ProjectionPolarStereo.h"
#include "ProjectionObliqueStereo.h"
#include "ProjectionSwissMercator.h"
#include "ProjectionCassiniSoldner.h"
#include "ProjectionObliqueMercator.h"
#include "ProjectionLambertAzimuthal.h"
#include "ProjectionTransverseMercator.h"
#include "ProjectionCylEqArea.h"
#include "ProjectionSinusoidal.h"
#include "ProjectionMiller.h"
#include "ProjectionBonne.h"
#include "ProjectionRobinson.h"
#include "ProjectionEquirectangular.h"
#include "ProjectionLoximuthal.h"
#include "ProjectionPlateCarree.h"
#include "ProjectionGrinten1.h"
#include "ProjectionOrthographic.h"
#include "ProjectionGnomonic.h"
#include "ProjectionHammer.h"
#include "ProjectionQuarticAuthalic.h"
#include "ProjectionAzimuthalEq.h"

#include "ProjectionUtils.h"

#include "GpsConstantsX.h"

#include "DatumGrid.h"

CProjections::CProjections ()
{
    m_pProjSrc = new CProjection ();
    m_pProjDst = new CProjection ();

    m_pGrid = new CDatumGrid ();

    m_fLatitude = 0.0;
    m_fLongitude = 0.0;

    m_fNorthing = 0.0;
    m_fEasting = 0.0;

    m_fAltitude = 0.0;

    m_projSrc.Clear ();
    m_projDst.Clear ();
}

CProjections::~CProjections ()
{
    if (m_pProjSrc)
    {
        delete m_pProjSrc;
        m_pProjSrc = NULL;
    }

    if (m_pProjDst)
    {
        delete m_pProjDst;
        m_pProjDst = NULL;
    }

    if (m_pGrid)
    {
        delete m_pGrid;
        m_pGrid = NULL;
    }
}

void CProjections::Forward ()
{
    double xx = 0.0;
    double yy = 0.0;
    double zz = 0.0;

    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    double p = 0.0; // Phi = Latitude in radians
    double l = 0.0; // Lab = Longitude in radians
    double h = 0.0;

// Convert Altitude to meters
    m_pProjSrc->m_fAltitude = m_fAltitude;

// Source, use grid or geographic
    if (m_projSrc.m_lProjection)
    {
        m_pProjSrc->m_fEasting = UnitsToMeters (m_projSrc.m_lUnits, m_fEasting);
        m_pProjSrc->m_fNorthing = UnitsToMeters (m_projSrc.m_lUnits, m_fNorthing);

        m_pProjSrc->Inverse ();

        p = m_pProjSrc->m_fLatitude;
        l = m_pProjSrc->m_fLongitude;
        h = m_pProjSrc->m_fAltitude;
    }
    else
    {
        p = m_pProjSrc->DEG2RAD (m_fLatitude);
        l = m_pProjSrc->DEG2RAD (m_fLongitude);
        h = m_pProjSrc->m_fAltitude;
    }

    if (!IsSameDatum (m_projSrc, m_projDst) && !IsEllipsoidToSphere (m_projSrc, m_projDst))
    {
// Convert datum in to WGS84

// None
        if (m_projSrc.m_lTransformation == 0L)
        {
            plh2xyz (p, l, h, x, y, z, &m_projSrc);
            xyz2plh (x, y, z, p, l, h, &m_projWgs);
        }

// Molodensky
        if (m_projSrc.m_lTransformation == 1L)
        {
            plh2xyz (p, l, h, x, y, z, &m_projSrc);

            x += m_projSrc.m_fTranslationX;
            y += m_projSrc.m_fTranslationY;
            z += m_projSrc.m_fTranslationZ;

            xyz2plh (x, y, z, p, l, h, &m_projWgs);
        }

// Bursa Wolf
        if (m_projSrc.m_lTransformation == 2)
        {
            plh2xyz (p, l, h, x, y, z, &m_projSrc);

            towgs84 (x, y, z, xx, yy, zz, &m_projSrc);

            xyz2plh (xx, yy, zz, p, l, h, &m_projWgs);
        }

// NADCON
        if (m_projSrc.m_lTransformation == 3L)
        {
            m_pGrid->Forward (l, p);
        }

// HARN
        if (m_projSrc.m_lTransformation == 4L)
        {
            m_pGrid->Inverse (l, p);
        }

// NTv2
        if (m_projSrc.m_lTransformation == 5L)
        {
            m_pGrid->Forward (l, p);
        }

// Convert from WGS84 to datum out

// None
        if (m_projDst.m_lTransformation == 0L)
        {
            plh2xyz (p, l, h, x, y, z, &m_projWgs);
            xyz2plh (x, y, z, p, l, h, &m_projDst);
        }

// Molodensky
        if (m_projDst.m_lTransformation == 1L)
        {
            plh2xyz (p, l, h, x, y, z, &m_projWgs);

            x -= m_projDst.m_fTranslationX;
            y -= m_projDst.m_fTranslationY;
            z -= m_projDst.m_fTranslationZ;

            xyz2plh (x, y, z, p, l, h, &m_projDst);
        }

// Bursa Wolf
        if (m_projDst.m_lTransformation == 2L)
        {
            plh2xyz (p, l, h, xx, yy, zz, &m_projWgs);

            fromwgs84 (xx, yy, zz, x, y, z, &m_projDst);

            xyz2plh (x, y, z, p, l, h, &m_projDst);
        }

// NADCON
        if (m_projDst.m_lTransformation == 3L)
        {
            m_pGrid->Inverse (l, p);
        }

// HARN
        if (m_projDst.m_lTransformation == 4L)
        {
            m_pGrid->Forward (l, p);
        }

// NTv2
        if (m_projDst.m_lTransformation == 5L)
        {
            m_pGrid->Inverse (l, p);
        }
    }

// Destination, use grid or geographic
    if (m_projDst.m_lProjection)
    {
        m_pProjDst->m_fLatitude = p;
        m_pProjDst->m_fLongitude = l;
        m_pProjDst->m_fAltitude = h;

        m_pProjDst->Forward ();

        m_fEasting = MetersToUnits (m_projDst.m_lUnits, m_pProjDst->m_fEasting);
        m_fNorthing = MetersToUnits (m_projDst.m_lUnits, m_pProjDst->m_fNorthing);

        m_fAltitude = m_pProjDst->m_fAltitude;
    }
    else
    {
        m_fLatitude = m_pProjDst->RAD2DEG (p);
        m_fLongitude = m_pProjDst->RAD2DEG (l);

        m_fAltitude = h;
    }

    return void ();
}

void CProjections::Inverse ()
{
    double xx = 0.0;
    double yy = 0.0;
    double zz = 0.0;

    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    double p = 0.0; // Phi = Latitude in radians
    double l = 0.0; // Lab = Longitude in radians
    double h = 0.0;

// Source, use grid or geographic
    if (m_projDst.m_lProjection)
    {
        m_pProjDst->m_fEasting = UnitsToMeters (m_projDst.m_lUnits, m_fEasting);
        m_pProjDst->m_fNorthing = UnitsToMeters (m_projDst.m_lUnits, m_fNorthing);

        m_pProjDst->m_fAltitude = m_fAltitude;

        m_pProjDst->Inverse ();

        p = m_pProjDst->m_fLatitude;
        l = m_pProjDst->m_fLongitude;

        h = m_pProjDst->m_fAltitude;
    }
    else
    {
        p = m_pProjDst->DEG2RAD (m_fLatitude);
        l = m_pProjDst->DEG2RAD (m_fLongitude);

        h = m_pProjDst->m_fAltitude;
    }

// Convert datum if not equal.
    if (!IsSameDatum (m_projSrc, m_projDst) && !IsEllipsoidToSphere (m_projSrc, m_projDst))
    {
//if (m_projDst.m_lTransformation ==
        plh2xyz (p, l, h, x, y, z, &m_projDst);

        towgs84 (x, y, z, xx, yy, zz, &m_projDst);

        fromwgs84 (xx, yy, zz, x, y, z, &m_projSrc);

        xyz2plh (x, y, z, p, l, h, &m_projSrc);
    }
// Destination, use grid or geographic
    if (m_projSrc.m_lProjection)
    {
        m_pProjSrc->m_fLatitude = p;
        m_pProjSrc->m_fLongitude = l;
        m_pProjSrc->m_fAltitude = h;

        m_pProjSrc->Forward ();

        m_fEasting = MetersToUnits (m_projSrc.m_lUnits, m_pProjDst->m_fEasting);
        m_fNorthing = MetersToUnits (m_projSrc.m_lUnits, m_pProjDst->m_fNorthing);

        m_fAltitude = m_pProjDst->m_fAltitude;
    }
    else
    {
        m_pProjSrc->m_fLatitude = m_pProjSrc->RAD2DEG (p);
        m_pProjSrc->m_fLongitude = m_pProjSrc->RAD2DEG (l);

        m_fAltitude = h;
    }
}

bool CProjections::IsSameDatum (CCfgMapProjection & proj1, CCfgMapProjection & proj2)
{
	return ((proj1.m_fAxis == proj2.m_fAxis) &&
		(proj1.m_lMapDatum == proj2.m_lMapDatum) &&
		(proj1.m_lTransformation == proj2.m_lTransformation) &&
		(proj1.m_fFlattening == proj2.m_fFlattening) &&
		(proj1.m_fRotationX == proj2.m_fRotationX) &&
		(proj1.m_fRotationY == proj2.m_fRotationY) &&
		(proj1.m_fRotationZ == proj2.m_fRotationZ) &&
		(proj1.m_fTranslationX == proj2.m_fTranslationX) &&
		(proj1.m_fTranslationY == proj2.m_fTranslationY) &&
		(proj1.m_fTranslationZ == proj2.m_fTranslationZ) &&
		(proj1.m_fScaleFactor == proj2.m_fScaleFactor));
}

bool CProjections::IsEllipsoidToSphere (CCfgMapProjection & proj1, CCfgMapProjection & proj2)
{
	return ((proj1.m_fFlattening == 0.0) || (proj2.m_fFlattening == 0.0));
}

void CProjections::SetGridSrc (CCfgMapProjection & proj)
{
// If same grid is already set, return;
    if (proj == m_projSrc)
        goto _EndSetGridSrc;

// Set new grid, delete old projection first
    if (m_pProjSrc)
    {
        delete m_pProjSrc;
        m_pProjSrc = NULL;
    }

// Store new source grid parameters
    m_projSrc = proj;

// Create projection
    m_pProjSrc = CreateProjection (proj);

// Load NadCon File ?
    if (proj.m_lTransformation >= 3L)
    {
		
         if (m_pGrid)
         {
			 throw std::runtime_error("Unsupported operation: Load NADCON file");
             //m_pGrid->Load (proj.m_lpszGridFile.GetBuffer());
         }
    }

_EndSetGridSrc:

    return void ();
}

void CProjections::SetGridDst (CCfgMapProjection & proj)
{
// If same grid is already set, return;
    if (proj == m_projDst)
        goto _EndSetGridDst;

// Set new grid, delete old projection first
    if (m_pProjDst)
    {
        delete m_pProjDst;
        m_pProjDst = NULL;
    }

// Store new destination grid parameters
    m_projDst = proj;

// Create projection
    m_pProjDst = CreateProjection (proj);

// Load NadCon File ?
    if (proj.m_lTransformation >= 3L)
    {
        if (m_pGrid)
        {
			throw std::runtime_error("Invalid operation: Load NADCON file");
            //m_pGrid->Load (proj.m_lpszGridFile.GetBuffer());
        }
    }

_EndSetGridDst:

    return void ();
}

CProjection * CProjections::CreateProjection (CCfgMapProjection & proj)
{
    CProjection * pProj = NULL;

    switch (proj.m_lProjection)
    {
    case GPS_PROJECTION_LAMBERT1SP:
        pProj = new CProjectionLambert ();
        break;

    case GPS_PROJECTION_LAMBERT1SPWEST:
        pProj = new CProjectionLambert ();
        break;

    case GPS_PROJECTION_LAMBERT2SP:
        pProj = new CProjectionLambert ();
        break;

    case GPS_PROJECTION_LAMBERT2SPBELGIUM:
        pProj = new CProjectionLambert ();
        break;

    case GPS_PROJECTION_LAMBERTAEA:
        pProj = new CProjectionLambertAzimuthal ();
        break;

    case GPS_PROJECTION_ALBERSEQUALAREA:
        pProj = new CProjectionAlbers ();
        break;

    case GPS_PROJECTION_MERCATOR1SP:
        pProj = new CProjectionMercator ();
        break;

    case GPS_PROJECTION_MERCATOR2SP:
        pProj = new CProjectionMercator ();
        break;

    case GPS_PROJECTION_TRANSVERSEMERCATOR:
        pProj = new CProjectionTransverseMercator ();
        break;

    case GPS_PROJECTION_TRANSVERSEMERCATORSOUTH:
        pProj = new CProjectionTransverseMercator ();
        break;

    case GPS_PROJECTION_OBLIQUEMERCATOR:
        pProj = new CProjectionObliqueMercator ();
        break;

    case GPS_PROJECTION_HOTINEOBLIQUEMERCATOR:
        pProj = new CProjectionObliqueMercator ();
        break;

    case GPS_PROJECTION_SWISSOBLIQUEMERCATOR:
        pProj = new CProjectionSwissMercator ();
        break;

    case GPS_PROJECTION_STEREOGRAPHIC:
        pProj = new CProjectionObliqueStereo ();
        break;

    case GPS_PROJECTION_POLARSTEREOGRAPHIC:
        pProj = new CProjectionPolarStereo ();
        break;

    case GPS_PROJECTION_CASSINI:
        pProj = new CProjectionCassiniSoldner ();
        break;

    case GPS_PROJECTION_KROVAK:
        pProj = new CProjectionKrovak ();
        break;

    case GPS_PROJECTION_POLYCONIC:
        pProj = new CProjectionPolyconic ();
        break;

    case GPS_PROJECTION_MOLLWEIDE:
        pProj = new CProjectionMollweide ();
        break;

    case GPS_PROJECTION_ECKERTI:
        pProj = new CProjectionEckert1 ();
        break;

    case GPS_PROJECTION_ECKERTII:
        pProj = new CProjectionEckert2 ();
        break;

    case GPS_PROJECTION_ECKERTIII:
        pProj = new CProjectionEckert3 ();
        break;

    case GPS_PROJECTION_ECKERTIV:
        pProj = new CProjectionEckert4 ();
        break;

    case GPS_PROJECTION_ECKERTV:
        pProj = new CProjectionEckert5 ();
        break;

    case GPS_PROJECTION_ECKERTVI:
        pProj = new CProjectionEckert6 ();
        break;

    case GPS_PROJECTION_CYLINDRICALEQUALAREA:
        pProj = new CProjectionCylEqArea ();
        break;

    case GPS_PROJECTION_SINUSOIDAL:
        pProj = new CProjectionSinusoidal ();
        break;

    case GPS_PROJECTION_MILLER:
        pProj = new CProjectionMiller ();
        break;

    case GPS_PROJECTION_BONNE:
        pProj = new CProjectionBonne ();
        break;

    case GPS_PROJECTION_GALLSTEREOGRAPHIC:
        pProj = new CProjectionGallStereo ();
        break;

    case GPS_PROJECTION_ROBINSON:
        pProj = new CProjectionRobinson ();
        break;

    case GPS_PROJECTION_WINKELI:
        pProj = new CProjectionWinkel1 ();
        break;

    case GPS_PROJECTION_EQUIRECTANGULAR:
        pProj = new CProjectionEquirectangular ();
        break;

    case GPS_PROJECTION_LOXIMUTHAL:
        pProj = new CProjectionLoximuthal ();
        break;

    case GPS_PROJECTION_PLATECARREE:
        pProj = new CProjectionPlateCarree ();
        break;

    case GPS_PROJECTION_GRINTENI:
        pProj = new CProjectionGrinten1 ();
        break;

    case GPS_PROJECTION_ORTHOGRAPHIC:
        pProj = new CProjectionOrthographic ();
        break;

    case GPS_PROJECTION_GNOMONIC:
        pProj = new CProjectionGnomonic ();
        break;

    case GPS_PROJECTION_HAMMER:
        pProj = new CProjectionHammer ();
        break;

    case GPS_PROJECTION_QUARTICAUTHALIC:
        pProj = new CProjectionQuarticAuthalic ();
        break;

    case GPS_PROJECTION_AZIMUTHALEQUIDISTANT:
        pProj = new CProjectionAzimuthalEq ();
        break;

    default:
        pProj = new CProjection ();
        break;
    }

//Initialize Projection
    if (pProj)
    {
        pProj->Initialize (proj);
    }

    return pProj;
}

