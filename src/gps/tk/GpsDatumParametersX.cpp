#include "StdAfx.h"

#include <string>

#include "Datums.hpp"
#include "GpsDatumParametersX.h"
#include "GpsConstantsX.h"
#include "GpsDefs.h"
#include "ProjTypes.h"

CGpsDatumParametersX::CGpsDatumParametersX()
{
    Clear ();
}

void CGpsDatumParametersX::Clear()
{
    m_lId = 0L;

    m_strName = L"";
    m_strGrid = L"";

    m_lGridType = GPS_GRIDTYPE_NONE;

    m_fScaleFactor = 0.0;

    m_fPrimeMeridian = 0.0;

    m_fTranslationX = 0.0;
    m_fTranslationY = 0.0;
    m_fTranslationZ = 0.0;

    m_fRotationX = 0.0;
    m_fRotationY = 0.0;
    m_fRotationZ = 0.0;

    m_fAxis = 6378137.000;
    m_fFlattening = 298.257223563;
}

void CGpsDatumParametersX::Inverse()
{
    m_fTranslationX *= -1.0;
    m_fTranslationY *= -1.0;
    m_fTranslationZ *= -1.0;

    m_fRotationX *= -1.0;
    m_fRotationY *= -1.0;
    m_fRotationZ *= -1.0;

    m_fScaleFactor *= -1.0;
}

void CGpsDatumParametersX::ToProjectionStruct(CCfgMapProjection& proj)
{
    proj.Clear();

    proj.m_fAxis = m_fAxis;
    proj.m_fFlattening = m_fFlattening;
    proj.m_fPrimeMeridian = m_fPrimeMeridian;

    proj.m_fTranslationX = m_fTranslationX;
    proj.m_fTranslationY = m_fTranslationY;
    proj.m_fTranslationZ = m_fTranslationZ;

    proj.m_fRotationX = m_fRotationX;
    proj.m_fRotationY = m_fRotationY;
    proj.m_fRotationZ = m_fRotationZ;

    proj.m_fScaleFactor = m_fScaleFactor;

    proj.m_lTransformation = 2L;

    if (m_lGridType)
    {
        proj.m_lTransformation = m_lGridType;
        proj.m_lpszGridFile = m_strGrid;
    }
}

void CGpsDatumParametersX::LoadFromId(gps::tk::DatumId id)
{
    gps::tk::Datums::getInstance().load(id, this);
}
