#pragma once

/////////////////////////////////////////////////////////////////////////////

#include "CxBase.h"
#include "CxString.h"

/////////////////////////////////////////////////////////////////////////////

#include "GpsDatumParametersX.h"
#include "ProjTypes.h"

/////////////////////////////////////////////////////////////////////////////

class CSpatialBase;

/////////////////////////////////////////////////////////////////////////////

class CGpsGridParametersX :	public CCxBase
{
public:
							CGpsGridParametersX			();
	virtual					~CGpsGridParametersX		();

	VOID					Clear						();

	LONG					FromOleObject				(VARIANT * pVariant);
	LONG					ToOleObject					(VARIANT * pVariant);

	LONG					SaveToFile					(CCxString & strFileName);
	LONG					LoadFromFile				(CCxString & strFileName);

	LONG					LoadFromId					(LONG lId);
	LONG					LoadStatePlane				(LONG lId);

	LONG					GetFirstGrid				();
	LONG					GetNextGrid					();

	VOID					ToProjectionStruct			(CCfgMapProjection & proj);

	CCxString				m_strName;

	LONG					m_lId;
	LONG					m_lProjection;
	LONG					m_lUnits;

	DOUBLE					m_fFalseEasting;
	DOUBLE					m_fFalseNorthing;

	DOUBLE					m_fOriginLatitude;
	DOUBLE					m_fOriginLongitude;

	DOUBLE					m_fParallelNorth;
	DOUBLE					m_fParallelSouth;

	DOUBLE					m_fAzimuthAngle;
	DOUBLE					m_fRectifiedGridAngle;

	DOUBLE					m_fScaleFactor;

	CGpsDatumParametersX	m_cGpsDatumParameters;

protected:

	CSpatialBase *	m_pSpatialBase;
};
/////////////////////////////////////////////////////////////////////////////
