#pragma once

//////////////////////////////////////////////////////////////////////////////

#include "Projection.h"

//////////////////////////////////////////////////////////////////////////////

class CProjectionNadcon
{

public:
				CProjectionNadcon		();
	virtual		~CProjectionNadcon		();

	VOID		Clear					();

	VOID		FmNad83					(double & dblLongitude, double & dblLatitude);
	VOID		ToNad83					(double & dblLongitude, double & dblLatitude);
	
	LONG		Load					(LPCTSTR lptszFileName);
	
	LONG		CacheFileLas			(LPCTSTR lptszFileName);
	LONG		CacheFileLos			(LPCTSTR lptszFileName);

	double		GetOffsetLat			(double dblLongitude, double dblLatitude);
	double		GetOffsetLon			(double dblLongitude, double dblLatitude);

	BOOL		PointInBounds			(double dblLongitude, double dblLatitude);

	BOOL		IsLoaded				();

private:

	CHAR	*	m_pszCacheLas;
	CHAR	*	m_pszCacheLos;
	
	float		m_fLatitudeMin;
	float		m_fLatitudeMax;
	float		m_fLatitudeSpc;

	float		m_fLongitudeMin;
	float		m_fLongitudeMax;
	float		m_fLongitudeSpc;

	int			m_nRows;
	int			m_nColumns;
	int			m_nDepth;
	int			m_nLength;
};

//////////////////////////////////////////////////////////////////////////////
