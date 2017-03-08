#pragma once

/

#include "Projection.h"

/

class CDatumGrid;

/

class CProjections
{
public:
					CProjections		();
	virtual			~CProjections		();

	VOID			SetGridSrc			(CCfgMapProjection & proj);
	VOID			SetGridDst			(CCfgMapProjection & proj);

	VOID			Forward				();
	VOID			Inverse				();

	BOOL			IsSameDatum			(CCfgMapProjection & proj1, CCfgMapProjection & proj2);
	BOOL			IsEllipsoidToSphere	(CCfgMapProjection & proj1, CCfgMapProjection & proj2);

	double			m_fLatitude;
	double			m_fLongitude;

	double			m_fNorthing;
	double			m_fEasting;

	double			m_fAltitude;

private:

	CProjection *		CreateProjection (CCfgMapProjection & proj);

	CProjection	*		m_pProjSrc;
	CProjection	*		m_pProjDst;

	CDatumGrid	*		m_pGrid;

	CCfgMapProjection	m_projSrc;
	CCfgMapProjection	m_projDst;
	CCfgMapProjection	m_projWgs;
};

/
