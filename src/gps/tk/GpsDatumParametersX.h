#pragma once

#include "Datums.hpp"

class CCfgMapProjection;

class CGpsDatumParametersX
{
public:
	CGpsDatumParametersX();

	void Clear();

	void Inverse();

	void ToProjectionStruct(CCfgMapProjection& proj);

	void LoadFromId(gps::tk::DatumId id);

	std::wstring m_strName;
	std::wstring m_strGrid;

	gps::tk::DatumId m_lId;

	long m_lGridType;

	double m_fScaleFactor;

	double m_fPrimeMeridian;

	double m_fTranslationX;
	double m_fTranslationY;
	double m_fTranslationZ;

	double m_fRotationX;
	double m_fRotationY;
	double m_fRotationZ;

	double m_fAxis;
	double m_fFlattening;
};


