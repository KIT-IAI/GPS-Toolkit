#include "StdAfx.h"

////////////////////////////////////////////////////////////////////////////////////////

#include "ProjectionNadcon.h"

////////////////////////////////////////////////////////////////////////////////////////

#include <tchar.h>
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////

#include <atlbase.h>
#include <atlcom.h>

////////////////////////////////////////////////////////////////////////////////////////

#define _USE_MATH_DEFINES
#include <math.h>

////////////////////////////////////////////////////////////////////////////////////////

#define DEG2RAD(x) x * ( M_PI / 180.0 )
#define RAD2DEG(x) x / ( M_PI / 180.0 )

////////////////////////////////////////////////////////////////////////////////////////

#include "CxString.h"

////////////////////////////////////////////////////////////////////////////////////////

CProjectionNadcon::CProjectionNadcon ()
{
	m_pszCacheLos	= NULL;
	m_pszCacheLas	= NULL;
}

////////////////////////////////////////////////////////////////////////////////////////

CProjectionNadcon::~CProjectionNadcon ()
{
	Clear	();
}

////////////////////////////////////////////////////////////////////////////////////////

VOID CProjectionNadcon::Clear ()
{
	if ( m_pszCacheLos )
	{
		delete []m_pszCacheLos;
		m_pszCacheLos = NULL;
	}

	if ( m_pszCacheLas )
	{
		delete []m_pszCacheLas;
		m_pszCacheLas = NULL;
	}

	return VOID ();
}

////////////////////////////////////////////////////////////////////////////////////////

LONG CProjectionNadcon::Load (LPCTSTR lptszFileName)
{
	LONG		lResult		= 0L;
	LONG		lOffset		= 0L;

	CCxString	strFileLas	= "";
	CCxString	strFileLos	= "";

	if ( m_pszCacheLos || m_pszCacheLas )
	{
		Clear	();
	}

	// Copy filenames
	strFileLas	= lptszFileName;
	strFileLos	= lptszFileName;

	// Set extensions
	strFileLas.Replace ( ".los", ".las" );
	strFileLos.Replace ( ".las", ".los" );

	// First Open LAS
	lResult = CacheFileLas ( strFileLas.GetBuffer () );

	if ( lResult )
		goto _EndLoad;

	// First Open LOS
	lResult = CacheFileLos ( strFileLos.GetBuffer () );

	if ( lResult )
		goto _EndLoad;

	// Get rows and columns at offset 0x0040
	lOffset = 0x0040;

	memcpy ( &m_nColumns,		m_pszCacheLas + lOffset, 4L );
	lOffset += 4L;
	memcpy ( &m_nRows,			m_pszCacheLas + lOffset, 4L );
	lOffset += 4L;
	memcpy ( &m_nDepth,			m_pszCacheLas + lOffset, 4L );
	lOffset += 4L;

	// Get boundaries
	memcpy ( &m_fLongitudeMin,	m_pszCacheLas + lOffset, 4L );
	lOffset += 4L;
	memcpy ( &m_fLongitudeSpc,	m_pszCacheLas + lOffset, 4L );
	lOffset += 4L;
	memcpy ( &m_fLatitudeMin,	m_pszCacheLas + lOffset, 4L );
	lOffset += 4L;
	memcpy ( &m_fLatitudeSpc,	m_pszCacheLas + lOffset, 4L );
	lOffset += 4L;

	m_fLongitudeMax = m_fLongitudeMin	+ ( m_nColumns	* m_fLongitudeSpc );
	m_fLatitudeMax	= m_fLatitudeMin	+ ( m_nRows		* m_fLatitudeSpc  );

_EndLoad:

	return lResult;
}

////////////////////////////////////////////////////////////////////////////////////////

BOOL CProjectionNadcon::IsLoaded ()
{
	BOOL	bIsLoaded	= FALSE;

	if ( m_pszCacheLas == NULL )
		goto _EndIsLoaded;

	if ( m_pszCacheLos == NULL )
		goto _EndIsLoaded;

	bIsLoaded = TRUE;


_EndIsLoaded:

	return bIsLoaded;
}

////////////////////////////////////////////////////////////////////////////////////////

LONG CProjectionNadcon::CacheFileLas (LPCTSTR lptszFileName)
{
	LONG		lResult	= -1L;

	FILE	*	fp		= NULL;

	if ( lptszFileName == NULL )
		goto _EndCacheFileLas;

	fp = _tfopen ( lptszFileName, _T("rb") );

	if ( fp == NULL )
		goto _EndCacheFileLas;

	fseek ( fp, 0, SEEK_END );
	m_nLength = ftell ( fp );
	fseek ( fp, 0, SEEK_SET );
	
	if ( m_nLength  <= 96L )
		goto _EndCacheFileLas;

	m_pszCacheLas = new CHAR [ m_nLength + 1L ];

	if ( m_pszCacheLas == NULL )
		goto _EndCacheFileLas;

	if ( fread ( m_pszCacheLas, m_nLength , 1, fp ) < 0L )
		goto _EndCacheFileLas;

	lResult	= 0L;

_EndCacheFileLas:

	return lResult;
}

////////////////////////////////////////////////////////////////////////////////////////

LONG CProjectionNadcon::CacheFileLos (LPCTSTR lptszFileName)
{
	LONG		lResult	= -1L;

	FILE	*	fp		= NULL;

	if ( lptszFileName == NULL )
		goto _EndCacheFileLos;

	fp = _tfopen ( lptszFileName, _T("rb") );

	if ( fp == NULL )
		goto _EndCacheFileLos;

	fseek ( fp, 0, SEEK_END );
	m_nLength = ftell ( fp );
	fseek ( fp, 0, SEEK_SET );
	
	if ( m_nLength  <= 96L )
		goto _EndCacheFileLos;

	m_pszCacheLos = new CHAR [ m_nLength + 1L ];

	if ( m_pszCacheLos == NULL )
		goto _EndCacheFileLos;

	if ( fread ( m_pszCacheLos, m_nLength , 1, fp ) < 0L )
		goto _EndCacheFileLos;

	lResult	= 0L;

_EndCacheFileLos:

	return lResult;
}

////////////////////////////////////////////////////////////////////////////////////////

double CProjectionNadcon::GetOffsetLat (double dblLongitude, double dblLatitude)
{
	int			nOffset			= ( m_nColumns + 2L ) * 4L;
	int			nBytesPerRow	= ( m_nColumns + 1L ) * 4L;

	int			nLat0			= 0L;
	int			nLat1			= 0L;
	int			nLon0			= 0L;
	int			nLon1			= 0L;

	int			nOffset00		= 0L;
	int			nOffset01		= 0L;
	int			nOffset11		= 0L;
	int			nOffset10		= 0L;
	
	float		dblValue00		= 0.0;
	float		dblValue01		= 0.0;
	float		dblValue11		= 0.0;
	float		dblValue10		= 0.0;

	double		dblOffset		= 0.0;

		// Convert to the 4 bounding lat/lon pos
	double		x				= ( dblLongitude - m_fLongitudeMin ) / m_fLongitudeSpc;
	double		y				= ( dblLatitude  - m_fLatitudeMin  ) / m_fLatitudeSpc;
	
	nLat0	= ( int ) y;
	nLat1	= nLat0 + 1L;
	nLon0	= ( int ) x;
	nLon1	= nLon0 + 1L;

	double tLat = y - nLat0;
    double tLon = x - nLon0;

	nOffset00 = nLat0 * nBytesPerRow + nLon0 * 4L;
	nOffset01 = nLat0 * nBytesPerRow + nLon1 * 4L;
	nOffset11 = nLat1 * nBytesPerRow + nLon1 * 4L;
	nOffset10 = nLat1 * nBytesPerRow + nLon0 * 4L;

	if ( ( nOffset00 + nOffset ) < m_nLength &&
		 ( nOffset00 + nOffset ) < m_nLength &&
		 ( nOffset00 + nOffset ) < m_nLength &&
		 ( nOffset00 + nOffset ) < m_nLength )
	{
		memcpy ( &dblValue00, m_pszCacheLas + nOffset + nOffset00, 4L );
		memcpy ( &dblValue01, m_pszCacheLas + nOffset + nOffset01, 4L );
		memcpy ( &dblValue11, m_pszCacheLas + nOffset + nOffset11, 4L );
		memcpy ( &dblValue10, m_pszCacheLas + nOffset + nOffset10, 4L );
	}

	double top    = ( double ) dblValue00 + ( ( double ) dblValue01 - ( double ) dblValue00 ) * tLon;
    double bottom = ( double ) dblValue10 + ( ( double ) dblValue11 - ( double ) dblValue10 ) * tLon;
     
	dblOffset = top + ( bottom - top ) * tLat;

	return dblOffset;
}

////////////////////////////////////////////////////////////////////////////////////////

double CProjectionNadcon::GetOffsetLon (double dblLon, double dblLat)
{
	int			nLat0			= 0L;
	int			nLat1			= 0L;
	int			nLon0			= 0L;
	int			nLon1			= 0L;

	float		dblValue00		= 0.0;
	float		dblValue01		= 0.0;
	float		dblValue11		= 0.0;
	float		dblValue10		= 0.0;

	// Convert to the 4 bounding lat/lon pos
	double		x				= round ( ( dblLon - m_dblLonMin ) / ( double ) m_dblLonSpc );
	double		y				= round ( ( dblLat - m_dblLatMin ) / ( double ) m_dblLatSpc );
	
	nLat0	= ( int ) y;
	nLat1	= nLat0 + 1L;
	nLon0	= ( int ) x;
	nLon1	= nLon0 + 1L;

	if ( nLat1 >= m_lRows ) 
		nLat1 = nLat0;

    if ( nLon1 >= m_lCols ) 
		nLon1 = nLon0;

	double tLat = y - nLat0;
    double tLon = x - nLon0;

	dblValue00	= m_pdblLongitudes [ ( nLat0 * m_lCols ) + nLon0 ];
	dblValue01	= m_pdblLongitudes [ ( nLat0 * m_lCols ) + nLon1 ];
	dblValue11	= m_pdblLongitudes [ ( nLat1 * m_lCols ) + nLon1 ];
	dblValue10	= m_pdblLongitudes [ ( nLat1 * m_lCols ) + nLon0 ];

	double top    = ( double ) dblValue00 + ( ( double ) dblValue01 - ( double ) dblValue00 ) * tLon;
    double bottom = ( double ) dblValue10 + ( ( double ) dblValue11 - ( double ) dblValue10 ) * tLon;
      
	return top + ( bottom - top ) * tLat;
}

////////////////////////////////////////////////////////////////////////////////////////

BOOL CProjectionNadcon::PointInBounds (double dblLongitude, double dblLatitude)
{
	if ( ( dblLongitude < m_fLongitudeMin ) ||
		 ( dblLongitude > m_fLongitudeMax ) ||
		 ( dblLatitude  < m_fLatitudeMin  ) ||
		 ( dblLatitude  > m_fLatitudeMax  ) )
	{
		return FALSE;
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////

void CProjectionNadcon::FmNad83 (double & dblLongitude, double & dblLatitude)
{
	double	dblLongitude0	= RAD2DEG ( dblLongitude );
	double	dblLatitude0	= RAD2DEG ( dblLatitude  );

	if ( m_pszCacheLos == NULL )
		goto _EndFmNad83;

	if ( m_pszCacheLas == NULL )
		goto _EndFmNad83;

	dblLongitude	+= DEG2RAD ( ( GetOffsetLon ( dblLongitude0, dblLatitude0 ) / 3600.0 ) );
	dblLatitude		-= DEG2RAD ( ( GetOffsetLat ( dblLongitude0, dblLatitude0 ) / 3600.0 ) );

_EndFmNad83:

	return void ();
}

////////////////////////////////////////////////////////////////////////////////////////

void CProjectionNadcon::ToNad83 (double & dblLongitude, double & dblLatitude)
{
	double	dblLongitude0	= RAD2DEG ( dblLongitude );
	double	dblLatitude0	= RAD2DEG ( dblLatitude  );

	if ( m_pszCacheLos == NULL )
		goto _EndToNad83;

	if ( m_pszCacheLas == NULL )
		goto _EndToNad83;

	dblLongitude	-= DEG2RAD ( ( GetOffsetLon ( dblLongitude0, dblLatitude0 ) / 3600.0 ) );
	dblLatitude		+= DEG2RAD ( ( GetOffsetLat ( dblLongitude0, dblLatitude0 ) / 3600.0 ) );

_EndToNad83:

	return void ();
}

////////////////////////////////////////////////////////////////////////////////////////
