#pragma once

#include "GpsDatumParametersX.h"
#include "ProjTypes.h"

class CSpatialBase;

class CGpsGridParametersX
{
public:
    CGpsGridParametersX();
    virtual ~CGpsGridParametersX();

    void Clear();

    void LoadFromId(gps::tk::GridId id);
    void LoadStatePlane(gps::tk::StatePlaneId id);

    void ToProjectionStruct(CCfgMapProjection & proj);

public:
    std::wstring m_strName;

    long m_lId;
	long m_lProjection;
	long m_lUnits;

    double m_fFalseEasting;
	double m_fFalseNorthing;

	double m_fOriginLatitude;
	double m_fOriginLongitude;

	double m_fParallelNorth;
	double m_fParallelSouth;

	double m_fAzimuthAngle;
	double m_fRectifiedGridAngle;

	double m_fScaleFactor;
    CGpsDatumParametersX m_cGpsDatumParameters;
};

