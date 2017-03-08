/

#include <windows.h>
#include <stdlib.h>

#include "CxString.h"

/

#ifndef _PROJTYPES_H
#define _PROJTYPES_H

/

class CCfgMapProjection
{
public:
	CCfgMapProjection()
	{
		Clear	();
	}

	virtual ~CCfgMapProjection ()
	{
	}

	// Set to default ( Unprojected, WGS84 )
	void Clear ()
	{
		m_fAxis				= 6378137.000000000;
		m_fFlattening		=     298.257223563;

		m_fTranslationX		=       0.0;
		m_fTranslationY		=		0.0;
		m_fTranslationZ		=		0.0;
		
		m_fRotationX		=		0.0;
		m_fRotationY		=		0.0;
		m_fRotationZ		=		0.0;

		m_fPrimeMeridian	=		0.0;

		m_fScaleFactor		=		0.0;

		m_lProjection		=		0L;
		m_lTransformation	=		0L;

		m_lUnits			=	 9001L;

		m_lUnitsV			=	 9001L;
		m_lUnitsH			=    9001L;

		m_lMapDatum			=	 4326L;
		m_lMapGrid			=		0L;
		m_lMapPrime			=		0L;
		m_lMapEllipsoid		=		0L;
		m_lMapCountry		=		0L;

		m_fFalseEasting		=		0.0;
		m_fFalseNorthing	=		0.0;
		m_fOriginLatitude	=		0.0;
		m_fOriginLongitude	=		0.0;
		m_fParallelNorth	=		0.0;
		m_fParallelSouth	=		0.0;
		m_fAzimuth			=		0.0;
		m_fRectifiedGrid	=		0.0;
		m_fProjScale		=		0.0;

		m_lpszGridFile		=		NULL;
	}

	BOOL operator == ( const CCfgMapProjection & other )
	{
		BOOL	bEqual	=	( ( m_fAxis				== other.m_fAxis			) &&
							  ( m_fFlattening		== other.m_fFlattening		) &&
							  ( m_fTranslationX		== other.m_fTranslationX	) &&
							  ( m_fTranslationY		== other.m_fTranslationY	) &&
							  ( m_fTranslationZ		== other.m_fTranslationZ	) &&
							  ( m_fRotationX		== other.m_fRotationX		) &&
							  ( m_fRotationY		== other.m_fRotationY		) &&
							  ( m_fRotationZ		== other.m_fRotationZ		) &&
							  ( m_fPrimeMeridian	== other.m_fPrimeMeridian	) &&
							  ( m_fScaleFactor		== other.m_fScaleFactor		) &&
							  ( m_lTransformation	== other.m_lTransformation	) &&
							  ( m_lProjection		== other.m_lProjection		) &&
							  ( m_lUnits			== other.m_lUnits			) &&
							  ( m_lUnitsH			== other.m_lUnitsH			) &&
							  ( m_lUnitsV			== other.m_lUnitsV			) &&
							  ( m_lMapDatum			== other.m_lMapDatum		) &&
							  ( m_lMapGrid			== other.m_lMapGrid			) &&
							  ( m_lMapCountry		== other.m_lMapCountry		) &&
							  ( m_fFalseEasting		== other.m_fFalseEasting	) &&
							  ( m_fFalseNorthing	== other.m_fFalseNorthing	) &&
							  ( m_fOriginLatitude	== other.m_fOriginLatitude	) &&
							  ( m_fOriginLongitude	== other.m_fOriginLongitude ) &&
							  ( m_fParallelNorth	== other.m_fParallelNorth	) &&
							  ( m_fParallelSouth	== other.m_fParallelSouth	) &&
							  ( m_fAzimuth			== other.m_fAzimuth			) &&
							  ( m_fRectifiedGrid	== other.m_fRectifiedGrid	) &&
							  ( m_fProjScale		== other.m_fProjScale		) )
							  ? TRUE : FALSE;

		return bEqual;
	}

	CCfgMapProjection & operator = ( const CCfgMapProjection & other )
	{
		m_fAxis				= other.m_fAxis;
		m_fFlattening		= other.m_fFlattening;
		
		m_fTranslationX		= other.m_fTranslationX;
		m_fTranslationY		= other.m_fTranslationY;
		m_fTranslationZ		= other.m_fTranslationZ;

		m_fRotationX		= other.m_fRotationX;
		m_fRotationY		= other.m_fRotationY;
		m_fRotationZ		= other.m_fRotationZ;

		m_fPrimeMeridian	= other.m_fPrimeMeridian;

		m_fScaleFactor		= other.m_fScaleFactor;

		m_lProjection		= other.m_lProjection;
		m_lUnits			= other.m_lUnits;
		m_lUnitsH			= other.m_lUnitsH;
		m_lUnitsV			= other.m_lUnitsV;
		m_lTransformation	= other.m_lTransformation;

		m_lMapDatum			= other.m_lMapDatum;
		m_lMapGrid			= other.m_lMapGrid;
		m_lMapCountry		= other.m_lMapCountry;
		m_lMapPrime			= other.m_lMapPrime;
		m_lMapEllipsoid		= other.m_lMapEllipsoid;

		m_fFalseEasting		= other.m_fFalseEasting;
		m_fFalseNorthing	= other.m_fFalseNorthing;
		m_fOriginLatitude	= other.m_fOriginLatitude;
		m_fOriginLongitude	= other.m_fOriginLongitude;
		m_fParallelNorth	= other.m_fParallelNorth;
		m_fParallelSouth	= other.m_fParallelSouth;
		m_fAzimuth			= other.m_fAzimuth;
		m_fRectifiedGrid	= other.m_fRectifiedGrid;
		m_fProjScale		= other.m_fProjScale;

		m_lpszGridFile		= other.m_lpszGridFile;

		return * this;
	}

	CCfgMapProjection & operator = ( const CCfgMapProjection * pOther )
	{
		m_fAxis				= pOther->m_fAxis;
		m_fFlattening		= pOther->m_fFlattening;
		
		m_fTranslationX		= pOther->m_fTranslationX;
		m_fTranslationY		= pOther->m_fTranslationY;
		m_fTranslationZ		= pOther->m_fTranslationZ;

		m_fRotationX		= pOther->m_fRotationX;
		m_fRotationY		= pOther->m_fRotationY;
		m_fRotationZ		= pOther->m_fRotationZ;

		m_fPrimeMeridian	= pOther->m_fPrimeMeridian;

		m_fScaleFactor		= pOther->m_fScaleFactor;

		m_lProjection		= pOther->m_lProjection;
		m_lUnits			= pOther->m_lUnits;
		m_lUnitsV			= pOther->m_lUnitsV;
		m_lUnitsH			= pOther->m_lUnitsH;
		m_lTransformation	= pOther->m_lTransformation;

		m_lMapDatum			= pOther->m_lMapDatum;
		m_lMapGrid			= pOther->m_lMapGrid;
		m_lMapPrime			= pOther->m_lMapPrime;
		m_lMapEllipsoid		= pOther->m_lMapEllipsoid;	
		m_lMapCountry		= pOther->m_lMapCountry;

		m_fFalseEasting		= pOther->m_fFalseEasting;
		m_fFalseNorthing	= pOther->m_fFalseNorthing;
		m_fOriginLatitude	= pOther->m_fOriginLatitude;
		m_fOriginLongitude	= pOther->m_fOriginLongitude;
		m_fParallelNorth	= pOther->m_fParallelNorth;
		m_fParallelSouth	= pOther->m_fParallelSouth;
		m_fAzimuth			= pOther->m_fAzimuth;
		m_fRectifiedGrid	= pOther->m_fRectifiedGrid;
		m_fProjScale		= pOther->m_fProjScale;

		m_lpszGridFile		= pOther->m_lpszGridFile;

		return * this;
	}
	double		m_fAxis;
	double		m_fFlattening;

	double		m_fTranslationX;
	double		m_fTranslationY;
	double		m_fTranslationZ;

	double		m_fRotationX;
	double		m_fRotationY;
	double		m_fRotationZ;

	double		m_fPrimeMeridian;

	double		m_fScaleFactor;

	LONG		m_lTransformation;
	LONG		m_lProjection;
	LONG		m_lUnits;

	LONG		m_lUnitsV;	// Hydromagic Only !
	LONG		m_lUnitsH;	// Hydromagic Only !
	
	LONG		m_lMapDatum;
	LONG		m_lMapGrid;
	LONG		m_lMapCountry;
	LONG		m_lMapPrime;
	LONG		m_lMapEllipsoid;

	CCxString	m_lpszGridFile;

	double		m_fFalseEasting;
	double		m_fFalseNorthing;
	double		m_fOriginLatitude;
	double		m_fOriginLongitude;
	double		m_fParallelNorth;
	double		m_fParallelSouth;
	double		m_fAzimuth;
	double		m_fRectifiedGrid;
	double		m_fProjScale;
};

/

#endif // _PROJTYPES_H