#include "StdAfx.h"

#include <boost/locale.hpp>
#include <string>

/////////////////////////////////////////////////////////////////////////////

#include "GpsDatumParametersX.h"

/////////////////////////////////////////////////////////////////////////////

#include "GpsConstantsX.h"

/////////////////////////////////////////////////////////////////////////////

#include "SpatialBase.h"

/////////////////////////////////////////////////////////////////////////////

#include "GpsDefs.h"

/////////////////////////////////////////////////////////////////////////////

#include "CxErrors.h"

//////////////////////////////////////////////////////////////////////

CGpsDatumParametersX::CGpsDatumParametersX () : CCxBase ( _T("CGpsDatumParametersX") )
{
	TraceFunction ( _T ( ">> CGpsDatumParametersX::CGpsDatumParametersX\n" ) );

	m_pSpatialBase	= NULL;

	Clear ();

	TraceFunction ( _T ( "<< CGpsDatumParametersX::CGpsDatumParametersX\n" ) );
}

/////////////////////////////////////////////////////////////////////////////

CGpsDatumParametersX::~CGpsDatumParametersX ()
{
	TraceFunction ( _T ( ">> CGpsDatumParametersX::~CGpsDatumParametersX\n" ) );

	if ( m_pSpatialBase )
	{
		delete m_pSpatialBase;
		m_pSpatialBase = NULL;
	}

	TraceFunction ( _T ( "<< CGpsDatumParametersX::~CGpsDatumParametersX\n" ) );
}

/////////////////////////////////////////////////////////////////////////////

VOID CGpsDatumParametersX::Clear ()
{
	TraceFunction ( _T ( ">> CGpsDatumParametersX::Clear\n" ) );

	m_lId					= 0L;

	m_strName				= _T("");
	m_strGrid				= _T("");

	m_lGridType				= GPS_GRIDTYPE_NONE;

	m_fScaleFactor			= 0.0;

	m_fPrimeMeridian		= 0.0;

	m_fTranslationX			= 0.0;
	m_fTranslationY			= 0.0;
	m_fTranslationZ			= 0.0;
	
	m_fRotationX			= 0.0;
	m_fRotationY			= 0.0;
	m_fRotationZ			= 0.0;

	m_fAxis					= 6378137.000;
	m_fFlattening			= 298.257223563;

	TraceFunction ( _T ( "<< CGpsDatumParametersX::Clear\n" ) );
}

/////////////////////////////////////////////////////////////////////////////

VOID CGpsDatumParametersX::Inverse ()
{
	TraceFunction ( _T ( ">> CGpsDatumParametersX::Inverse\n" ) );

	m_fTranslationX			*= -1.0;
	m_fTranslationY			*= -1.0;
	m_fTranslationZ			*= -1.0;
	
	m_fRotationX			*= -1.0;
	m_fRotationY			*= -1.0;
	m_fRotationZ			*= -1.0;

	m_fScaleFactor			*= -1.0;

	TraceFunction ( _T ( "<< CGpsDatumParametersX::Inverse\n" ) );
}

/////////////////////////////////////////////////////////////////////////////

CGpsDatumParametersX & CGpsDatumParametersX::operator = ( const CGpsDatumParametersX & other )
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

	m_strGrid			= other.m_strGrid;

	m_lGridType			= other.m_lGridType;

	return * this;
}

/////////////////////////////////////////////////////////////////////////////

VOID CGpsDatumParametersX::ToProjectionStruct (CCfgMapProjection & proj)
{
	TraceFunction ( _T ( ">> CGpsDatumParametersX::ToProjectionStruct\n" ) );

	proj.Clear				();

	proj.m_fAxis			= m_fAxis;
	proj.m_fFlattening		= m_fFlattening;
	proj.m_fPrimeMeridian	= m_fPrimeMeridian;

	proj.m_fTranslationX	= m_fTranslationX;
	proj.m_fTranslationY	= m_fTranslationY;
	proj.m_fTranslationZ	= m_fTranslationZ;

	proj.m_fRotationX		= m_fRotationX;
	proj.m_fRotationY		= m_fRotationY;
	proj.m_fRotationZ		= m_fRotationZ;

	proj.m_fScaleFactor		= m_fScaleFactor;

	proj.m_lTransformation	= 2L;

	if ( m_lGridType )
	{
		proj.m_lTransformation	= m_lGridType;
		proj.m_lpszGridFile = m_strGrid;
	}
	
	TraceFunction ( _T ( "<< CGpsDatumParametersX::ToProjectionStruct\n" ) );

	return VOID ();
}

/////////////////////////////////////////////////////////////////////////////

LONG CGpsDatumParametersX::SaveToFile (CCxString & strFileName)
{
	TraceFunction ( _T ( ">> CGpsDatumParametersX::SaveToFile\n" ) );
	
	LONG	lResult = 0L;

	// TODO: SH Check error
	FILE	*	fp;
	auto err = _tfopen_s(&fp, strFileName.GetBuffer(), _T("wt+"));

	if ( err == 0 )
	{
		lResult = errGPS_SAVEDATUMFAILED;
		goto _EndSaveToFile;
	}

	fprintf ( fp, "Eye4Software GPS Toolkit Datum Definition File\n" );

	fprintf ( fp, "%.3lf\n",	m_fAxis				);
	fprintf ( fp, "%.6lf\n",	m_fFlattening		);

	fprintf ( fp, "%.3lf\n",	m_fTranslationX		);
	fprintf ( fp, "%.3lf\n",	m_fTranslationY		);
	fprintf ( fp, "%.3lf\n",	m_fTranslationZ		);

	fprintf ( fp, "%.3lf\n",	m_fRotationX		);
	fprintf ( fp, "%.3lf\n",	m_fRotationY		);
	fprintf ( fp, "%.3lf\n",	m_fRotationZ		);

	fprintf ( fp, "%.6lf\n",	m_fScaleFactor		);
	fprintf ( fp, "%.6lf\n",	m_fPrimeMeridian	);

	fprintf ( fp, "%ld\n",		m_lGridType			);
	fprintf ( fp, "%s\n",		m_strGrid			);

	fclose  ( fp );

_EndSaveToFile:
	
	TraceFunction ( _T ( "<< CGpsDatumParametersX::SaveToFile (result:%ld)\n" ), lResult );

	return lResult;
}

/////////////////////////////////////////////////////////////////////////////

LONG CGpsDatumParametersX::LoadFromFile	(CCxString & strFileName)
{
	TraceFunction ( _T ( ">> CGpsDatumParametersX::LoadFromFile\n" ) );

	CHAR		szBuffer	[ 256 + 1 ];

	LONG		lResult = 0L;
	LONG		lField	= 0L;
	
	FILE	*	fp;
	auto err = _tfopen_s(&fp, strFileName.GetBuffer(), _T("rt+"));

	if ( err == 0 )
	{
		lResult = errGPS_LOADDATUMFAILED;
		goto _EndLoadFromFile;
	}

	fgets ( szBuffer, 256, fp );

	if ( strstr ( szBuffer, "Eye4Software GPS Toolkit Datum Definition File" ) == NULL )
	{
		lResult = errGPS_LOADDATUMCORRUPT;
		goto _EndLoadFromFile;
	}

	while ( fgets ( szBuffer, 256, fp ) )
	{
		lField++;

		switch ( lField )
		{
			case CFG_FIELD_AXIS:				m_fAxis				= strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_FLATTENING:			m_fFlattening		= strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_TRANSLATIONX:		m_fTranslationX		= strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_TRANSLATIONY:		m_fTranslationY		= strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_TRANSLATIONZ:		m_fTranslationZ		= strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_ROTATIONX:			m_fRotationX		= strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_ROTATIONY:			m_fRotationY		= strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_ROTATIONZ:			m_fRotationZ		= strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_SCALEFACTORDATUM:	m_fScaleFactor		= strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_PRIMEMERIDIAN:		m_fPrimeMeridian	= strtod ( szBuffer, NULL );
				break;

			case CFG_FIELD_GRIDTYPE:			m_lGridType			= strtol ( szBuffer, NULL, 10L );
				break;

			case CFG_FIELD_GRIDFILE:
				m_strGrid = boost::locale::conv::utf_to_utf<TCHAR>(std::string(szBuffer));
				break;
		}
	}

_EndLoadFromFile:

	TraceFunction ( _T ( "<< CGpsDatumParametersX::LoadFromFile (result:%ld)\n" ), lResult );

	return lResult;
}

/////////////////////////////////////////////////////////////////////////////

LONG CGpsDatumParametersX::LoadFromId (LONG lID)
{
	LONG	lResult	= 0L;

	if ( m_pSpatialBase == NULL )
	{
		m_pSpatialBase = new CSpatialBase ();
	}

	if ( m_pSpatialBase == NULL )
	{
		lResult = errMISC_CREATEINSTANCEFAILED;
		goto _EndLoadFromId;
	}

	lResult = m_pSpatialBase->SetDatum ( lID, this );

_EndLoadFromId:

	return lResult;
}

/////////////////////////////////////////////////////////////////////////////

LONG CGpsDatumParametersX::GetFirstDatum ()
{
	LONG	lResult	= 0L;

	if ( m_pSpatialBase == NULL )
	{
		m_pSpatialBase = new CSpatialBase ();
	}

	if ( m_pSpatialBase == NULL )
	{
		lResult = errMISC_CREATEINSTANCEFAILED;
		goto _EndGetFirstDatum;
	}

	lResult = m_pSpatialBase->GetFirstDatum ( this );

_EndGetFirstDatum:

	return lResult;
}

/////////////////////////////////////////////////////////////////////////////

LONG CGpsDatumParametersX::GetNextDatum ()
{
	LONG	lResult	= 0L;

	if ( m_pSpatialBase == NULL )
	{
		m_pSpatialBase = new CSpatialBase ();
	}

	if ( m_pSpatialBase == NULL )
	{
		lResult = errMISC_CREATEINSTANCEFAILED;
		goto _EndGetNextDatum;
	}

	lResult = m_pSpatialBase->GetNextDatum ( this );

_EndGetNextDatum:

	return lResult;
}

/////////////////////////////////////////////////////////////////////////////
