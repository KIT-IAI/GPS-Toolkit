#pragma once

class CGpsGridParametersX;
class CGpsDatumParametersX;

#include "CxString.h"

class CRecordGrid
{
public:

				CRecordGrid			();
	virtual		~CRecordGrid		();

	void		Clear				();

	long		numId;
	long		numUnits;
	long		numProjection;
	long		numDatum;
	long		numStatePlane;

	double		dblScaleFactor;
	double		dblFalseNorthing;
	double		dblFalseEasting;
	double		dblOriginLatitude;
	double		dblOriginLongitude;
	double		dblParallelNorth;
	double		dblParallelSouth;
	double		dblAzimuth;
	double		dblRectifiedGrid;

	CCxString	strName;
};

class CRecordDatum
{
public:

				CRecordDatum		();
	virtual		~CRecordDatum		();

	void		Clear				();

	long		numId;

	double		dblAxis;
	double		dblInverseFlattening;
	double		dblScaleFactor;
	double		dblPrimeMeridian;
	double		dblTranslationX;
	double		dblTranslationY;
	double		dblTranslationZ;
	double		dblRotationX;
	double		dblRotationY;
	double		dblRotationZ;

	CCxString	strName;
};

class CSpatialBase
{
public:
						CSpatialBase	();
	virtual				~CSpatialBase	();

	void				LoadDatums		();
	void				LoadGrids		();

	long				SetStatePlane	(LONG lCode, CGpsGridParametersX  * pParams);
	long				SetGrid			(LONG lCode, CGpsGridParametersX  * pParams);
	long				SetDatum		(LONG lCode, CGpsDatumParametersX * pParams);

	long				GetFirstDatum	(CGpsDatumParametersX * pParams);
	long				GetNextDatum	(CGpsDatumParametersX * pParams);

	long				GetFirstGrid	(CGpsGridParametersX  * pParams);
	long				GetNextGrid		(CGpsGridParametersX  * pParams);

protected:

	double				GetDouble		();
	long				GetNumber		();
	char				GetField		();
	CCxString		&	GetString		(CCxString & strString);

	LONG				m_lOffset;
	LONG				m_lSize;

	LONG				m_lGrids;
	LONG				m_lDatums;
	LONG				m_lCurrentDatum;
	LONG				m_lCurrentGrid;

	const BYTE			*	m_pszData;

	CRecordDatum	*	m_pDatums;
	CRecordGrid		*	m_pGrids;
};
