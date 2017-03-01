#pragma once

/////////////////////////////////////////////////////////////////////////////

#include "CxBase.h"
#include "CxString.h"

/////////////////////////////////////////////////////////////////////////////

#include "ProjTypes.h"

/////////////////////////////////////////////////////////////////////////////

class CSpatialBase;

/////////////////////////////////////////////////////////////////////////////

class CGpsDatumParametersX : public CCxBase
{
public:
					CGpsDatumParametersX	();
	virtual			~CGpsDatumParametersX	();

	VOID			Clear					();

	VOID			Inverse					();

	LONG			SaveToFile				(CCxString & strFileName);
	LONG			LoadFromFile			(CCxString & strFileName);

	VOID			ToProjectionStruct		(CCfgMapProjection & proj);

	CGpsDatumParametersX	&	operator =	(const CGpsDatumParametersX & other);

	LONG			LoadFromId				(LONG lId);

	LONG			GetFirstDatum			();
	LONG			GetNextDatum			();

	CCxString		m_strName;
	CCxString		m_strGrid;

	LONG			m_lId;

	LONG			m_lGridType;

	DOUBLE			m_fScaleFactor;

	DOUBLE			m_fPrimeMeridian;

	DOUBLE			m_fTranslationX;
	DOUBLE			m_fTranslationY;
	DOUBLE			m_fTranslationZ;
	
	DOUBLE			m_fRotationX;
	DOUBLE			m_fRotationY;
	DOUBLE			m_fRotationZ;

	DOUBLE			m_fAxis;
	DOUBLE			m_fFlattening;

protected:

	CSpatialBase *	m_pSpatialBase;
};

/////////////////////////////////////////////////////////////////////////////
