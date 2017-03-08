#include "StdAfx.h"

#include <string>
#include <locale>
#include <codecvt>

#include "GpsGridParametersX.h"
#include "GpsConstantsX.h"
#include "GpsDefs.h"
#include "CxErrors.h"
#include "Grids.hpp"

CGpsGridParametersX::CGpsGridParametersX ()
{
	Clear();
}

CGpsGridParametersX::~CGpsGridParametersX ()
{
}

void CGpsGridParametersX::Clear()
{
	m_strName.clear();

	m_lId					= 0L;
	m_lProjection			= 0L;
	m_lUnits				= 0L;

	m_fFalseEasting			= 0.0;
	m_fFalseNorthing		= 0.0;

	m_fOriginLatitude		= 0.0;
	m_fOriginLongitude		= 0.0;

	m_fParallelNorth		= 0.0;
	m_fParallelSouth		= 0.0;

	m_fAzimuthAngle			= 0.0;
	m_fRectifiedGridAngle	= 0.0;

	m_fScaleFactor			= 0.0;

	m_cGpsDatumParameters.Clear ();
}



VOID CGpsGridParametersX::ToProjectionStruct (CCfgMapProjection & proj)
{
	TraceFunction ( _T ( ">> CGpsGridParametersX::ToProjectionStruct\n" ) );

	proj.m_fAxis			= m_cGpsDatumParameters.m_fAxis;
	proj.m_fFlattening		= m_cGpsDatumParameters.m_fFlattening;
	proj.m_fPrimeMeridian	= m_cGpsDatumParameters.m_fPrimeMeridian;

	proj.m_fTranslationX	= m_cGpsDatumParameters.m_fTranslationX;
	proj.m_fTranslationY	= m_cGpsDatumParameters.m_fTranslationY;
	proj.m_fTranslationZ	= m_cGpsDatumParameters.m_fTranslationZ;

	proj.m_fRotationX		= m_cGpsDatumParameters.m_fRotationX;
	proj.m_fRotationY		= m_cGpsDatumParameters.m_fRotationY;
	proj.m_fRotationZ		= m_cGpsDatumParameters.m_fRotationZ;

	proj.m_fScaleFactor		= m_cGpsDatumParameters.m_fScaleFactor;
	
	proj.m_lTransformation	= 2L;

	if ( m_cGpsDatumParameters.m_lGridType )
	{
		proj.m_lTransformation	= m_cGpsDatumParameters.m_lGridType;
		proj.m_lpszGridFile		= m_cGpsDatumParameters.m_strGrid;
	}

	proj.m_fFalseEasting	= m_fFalseEasting;
	proj.m_fFalseNorthing	= m_fFalseNorthing;
	
	proj.m_fOriginLatitude	= m_fOriginLatitude;
	proj.m_fOriginLongitude	= m_fOriginLongitude;

	proj.m_fParallelNorth	= m_fParallelNorth;
	proj.m_fParallelSouth	= m_fParallelSouth;

	proj.m_fProjScale		= m_fScaleFactor;

	proj.m_fRectifiedGrid	= m_fRectifiedGridAngle;
	proj.m_fAzimuth			= m_fAzimuthAngle;
	
	proj.m_lProjection		= m_lProjection;
	proj.m_lUnits			= m_lUnits;

	TraceFunction ( _T ( "<< CGpsGridParametersX::ToProjectionStruct\n" ) );

	return VOID ();
}



LONG CGpsGridParametersX::SaveToFile (CCxString & strFileName)
{
	TraceFunction ( _T ( ">> CGpsGridParametersX::SaveToFile\n" ) );
	
	LONG	lResult = 0L;

	FILE	*	fp;
	auto err = _tfopen_s(&fp, strFileName.GetBuffer(), _T("wt+"));

	if ( err != 0 )
	{
		lResult = errGPS_SAVEGRIDFAILED;
		goto _EndSaveToFile;
	}

	fprintf ( fp, "Eye4Software GPS Toolkit Grid Definition File\n" );

	fprintf ( fp, "%.3lf\n",	m_cGpsDatumParameters.m_fAxis			);
	fprintf ( fp, "%.6lf\n",	m_cGpsDatumParameters.m_fFlattening		);

	fprintf ( fp, "%.3lf\n",	m_cGpsDatumParameters.m_fTranslationX	);
	fprintf ( fp, "%.3lf\n",	m_cGpsDatumParameters.m_fTranslationY	);
	fprintf ( fp, "%.3lf\n",	m_cGpsDatumParameters.m_fTranslationZ	);

	fprintf ( fp, "%.3lf\n",	m_cGpsDatumParameters.m_fRotationX		);
	fprintf ( fp, "%.3lf\n",	m_cGpsDatumParameters.m_fRotationY		);
	fprintf ( fp, "%.3lf\n",	m_cGpsDatumParameters.m_fRotationZ		);

	fprintf ( fp, "%.6lf\n",	m_cGpsDatumParameters.m_fScaleFactor	);
	fprintf ( fp, "%.6lf\n",	m_cGpsDatumParameters.m_fPrimeMeridian	);

	fprintf ( fp, "%ld\n",		m_cGpsDatumParameters.m_lGridType		);
	fprintf ( fp, "%s\n",		m_cGpsDatumParameters.m_strGrid			);

	fprintf ( fp, "%ld\n",		m_lProjection							);
	fprintf ( fp, "%ld\n",		m_lUnits								);

	fprintf ( fp, "%.3lf\n",	m_fFalseNorthing						);
	fprintf ( fp, "%.3lf\n",	m_fFalseEasting							);

	fprintf ( fp, "%.6lf\n",	m_fOriginLatitude						);
	fprintf ( fp, "%.6lf\n",	m_fOriginLongitude						);
	
	fprintf ( fp, "%.6lf\n",	m_fParallelNorth						);
	fprintf ( fp, "%.6lf\n",	m_fParallelSouth						);

	fprintf ( fp, "%.6lf\n",	m_fAzimuthAngle							);
	fprintf ( fp, "%.6lf\n",	m_fRectifiedGridAngle					);

	fprintf ( fp, "%.6lf\n",	m_fScaleFactor							);

	fclose  ( fp );

_EndSaveToFile:
	
	TraceFunction ( _T ( "<< CGpsGridParametersX::SaveToFile (result:%ld)\n" ), lResult );

	return lResult;
}



LONG CGpsGridParametersX::LoadFromFile (CCxString & strFileName)
{
	TraceFunction ( _T ( ">> CGpsGridParametersX::LoadFromFile\n" ) );

	CHAR		szBuffer	[ 1024 + 1 ];

	LONG		lResult = 0L;
	LONG		lField	= 0L;
	
	FILE* fp;
	auto err = _tfopen_s(&fp, strFileName.GetBuffer(), _T("rt+"));

	if ( err != 0 )
	{
		lResult = errGPS_LOADGRIDFAILED;
		goto _EndLoadFromFile;
	}

	fgets ( szBuffer, 1024, fp );

	if ( strstr ( szBuffer, "Eye4Software GPS Toolkit Grid Definition File" ) == NULL )
	{
		lResult = errGPS_LOADGRIDCORRUPT;
		goto _EndLoadFromFile;
	}

	while ( fgets ( szBuffer, 1024, fp ) )
	{
		lField++;

		switch ( lField )
		{
			case CFG_FIELD_AXIS:				m_cGpsDatumParameters.m_fAxis = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_FLATTENING:			m_cGpsDatumParameters.m_fFlattening = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_TRANSLATIONX:		m_cGpsDatumParameters.m_fTranslationX = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_TRANSLATIONY:		m_cGpsDatumParameters.m_fTranslationY = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_TRANSLATIONZ:		m_cGpsDatumParameters.m_fTranslationZ = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_ROTATIONX:			m_cGpsDatumParameters.m_fRotationX = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_ROTATIONY:			m_cGpsDatumParameters.m_fRotationY = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_ROTATIONZ:			m_cGpsDatumParameters.m_fRotationZ = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_SCALEFACTORDATUM:	m_cGpsDatumParameters.m_fScaleFactor = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_PRIMEMERIDIAN:		m_cGpsDatumParameters.m_fPrimeMeridian = strtod ( szBuffer, NULL );
				break;
			
			case CFG_FIELD_GRIDTYPE:			m_cGpsDatumParameters.m_lGridType = strtol ( szBuffer, NULL, 10 );
				break;

			case CFG_FIELD_GRIDFILE:
				m_cGpsDatumParameters.m_strGrid = std::wstring_convert<std::codecvt_utf8<TCHAR>, TCHAR>().from_bytes(std::string(szBuffer));
				break;

			case CFG_FIELD_PROJECTION:			m_lProjection = strtol ( szBuffer, NULL, 10 );
				break;

			case CFG_FIELD_UNITS:				m_lUnits = strtol ( szBuffer, NULL, 10 );
				break;

			case CFG_FIELD_FALSENORTHING:		m_fFalseNorthing = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_FALSEEASTING:		m_fFalseEasting = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_ORIGINLATITUDE:		m_fOriginLatitude = strtod ( szBuffer, NULL );
				break;
				
			case CFG_FIELD_ORIGINLONGITUDE:		m_fOriginLongitude = strtod ( szBuffer, NULL );
				break;
				
			case CFG_FIELD_PARALLELNORTH:		m_fParallelNorth = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_PARALLELSOUTH:		m_fParallelSouth = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_AZIMUTHANGLE:		m_fAzimuthAngle = strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_RECTIFIEDGRIDANGLE:	m_fRectifiedGridAngle = strtod ( szBuffer, NULL );
				break;
				
			case CFG_FIELD_SCALEFACTORGRID:		m_fScaleFactor = strtod ( szBuffer, NULL );
				break;

		}
	}

_EndLoadFromFile:

	TraceFunction ( _T ( "<< CGpsGridParametersX::LoadFromFile (result:%ld)\n" ), lResult );

	return lResult;
}



void CGpsGridParametersX::LoadFromId(GridId id)
{
	Grids::getInstance().load(id);
}



LONG CGpsGridParametersX::LoadStatePlane(LONG lID)
{
	Grids::getInstance().loadGridPlane(lID, this);
}


