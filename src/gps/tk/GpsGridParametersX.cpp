#include "StdAfx.h"

#include <string>
#include <locale>
#include <codecvt>

#include "GpsGridParametersX.h"
#include "GpsConstantsX.h"
#include "GpsDefs.h"
#include "Grids.hpp"

CGpsGridParametersX::CGpsGridParametersX()
{
    Clear();
}

CGpsGridParametersX::~CGpsGridParametersX()
{
}

void CGpsGridParametersX::Clear()
{
    m_strName.clear();

    m_lId = 0L;
    m_lProjection = 0L;
    m_lUnits = 0L;

    m_fFalseEasting = 0.0;
    m_fFalseNorthing = 0.0;

    m_fOriginLatitude = 0.0;
    m_fOriginLongitude = 0.0;

    m_fParallelNorth = 0.0;
    m_fParallelSouth = 0.0;

    m_fAzimuthAngle = 0.0;
    m_fRectifiedGridAngle = 0.0;

    m_fScaleFactor = 0.0;

    m_cGpsDatumParameters.Clear();
}

void CGpsGridParametersX::ToProjectionStruct(CCfgMapProjection & proj)
{
    proj.m_fAxis = m_cGpsDatumParameters.m_fAxis;
    proj.m_fFlattening = m_cGpsDatumParameters.m_fFlattening;
    proj.m_fPrimeMeridian = m_cGpsDatumParameters.m_fPrimeMeridian;

    proj.m_fTranslationX = m_cGpsDatumParameters.m_fTranslationX;
    proj.m_fTranslationY = m_cGpsDatumParameters.m_fTranslationY;
    proj.m_fTranslationZ = m_cGpsDatumParameters.m_fTranslationZ;

    proj.m_fRotationX = m_cGpsDatumParameters.m_fRotationX;
    proj.m_fRotationY = m_cGpsDatumParameters.m_fRotationY;
    proj.m_fRotationZ = m_cGpsDatumParameters.m_fRotationZ;

    proj.m_fScaleFactor = m_cGpsDatumParameters.m_fScaleFactor;

    proj.m_lTransformation = 2L;

    if (m_cGpsDatumParameters.m_lGridType)
    {
        proj.m_lTransformation = m_cGpsDatumParameters.m_lGridType;
        proj.m_lpszGridFile = m_cGpsDatumParameters.m_strGrid;
    }

    proj.m_fFalseEasting = m_fFalseEasting;
    proj.m_fFalseNorthing = m_fFalseNorthing;

    proj.m_fOriginLatitude = m_fOriginLatitude;
    proj.m_fOriginLongitude = m_fOriginLongitude;

    proj.m_fParallelNorth = m_fParallelNorth;
    proj.m_fParallelSouth = m_fParallelSouth;

    proj.m_fProjScale = m_fScaleFactor;

    proj.m_fRectifiedGrid = m_fRectifiedGridAngle;
    proj.m_fAzimuth = m_fAzimuthAngle;

    proj.m_lProjection = m_lProjection;
    proj.m_lUnits = m_lUnits;
}

void CGpsGridParametersX::LoadFromId(gps::tk::GridId id)
{
    gps::tk::Grids::getInstance().load(id, this);
}

void CGpsGridParametersX::LoadStatePlane(gps::tk::StatePlaneId id)
{
    gps::tk::Grids::getInstance().loadByStatePlane(id, this);
}
