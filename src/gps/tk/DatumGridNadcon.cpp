#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////////

#include "DatumGrid.h"
#include "DatumGridNadcon.h"

//////////////////////////////////////////////////////////////////////////////////

#include <atlbase.h>
#include <atlcom.h>

//////////////////////////////////////////////////////////////////////////////////

CDatumGridNadcon::CDatumGridNadcon ()
{
	m_fpLas	= NULL;
	m_fpLos	= NULL;

	Clear	();
}

//////////////////////////////////////////////////////////////////////////////////

CDatumGridNadcon::~CDatumGridNadcon ()
{
	if ( m_fpLas )
	{
		fclose ( m_fpLas );
		m_fpLas = NULL;
	}

	if ( m_fpLos )
	{
		fclose ( m_fpLos );
		m_fpLos = NULL;
	}

	Clear	();
}

//////////////////////////////////////////////////////////////////////////////////

VOID CDatumGridNadcon::Clear ()
{
	return VOID ();
}

//////////////////////////////////////////////////////////////////////////////////

LONG CDatumGridNadcon::Load (LPCTSTR lptszFileName, CDatumGrid * pGrid)
{
	LONG				lResult			= -1L;

	CDatumSubGrid	*	pSubGrid		= NULL;
	
	TCHAR				tszFileLos		[ MAX_PATH + 1L ];
	TCHAR				tszFileLas		[ MAX_PATH + 1L ];

	TCHAR			*	pszExtension	= NULL;

	_tcscpy ( tszFileLos, lptszFileName );
	_tcscpy ( tszFileLas, lptszFileName );

	_tcslwr ( tszFileLos );
	_tcslwr ( tszFileLas );

	pszExtension = _tcsstr ( tszFileLos, _T(".las") );

	if ( pszExtension )
	{
		pszExtension [ 0 ] = '.';
		pszExtension [ 1 ] = 'l';
		pszExtension [ 2 ] = 'o';
		pszExtension [ 3 ] = 's';
	}

	pszExtension = _tcsstr ( tszFileLas, _T(".los") );

	if ( pszExtension )
	{
		pszExtension [ 0 ] = '.';
		pszExtension [ 1 ] = 'l';
		pszExtension [ 2 ] = 'a';
		pszExtension [ 3 ] = 's';
	}
	
	if ( pGrid == NULL )
		goto _EndLoad;

	m_fpLos = _tfopen ( tszFileLos, _T("rb") );

	if ( m_fpLos == NULL )
		goto _EndLoad;

	m_fpLas = _tfopen ( tszFileLas, _T("rb") );

	if ( m_fpLas == NULL )
		goto _EndLoad;

	pSubGrid = new CDatumSubGrid ();

	if ( pSubGrid == NULL )
	{
		lResult = -1L;
		goto _EndLoad;
	}
	
	lResult = LoadHeader	( pSubGrid );

	if ( lResult )
		goto _EndLoad;

	lResult = LoadGrid		( pSubGrid );

	if ( lResult )
		goto _EndLoad;

	pGrid->m_pGrids = new CDatumSubGrid* [ 1 ];
	pGrid->m_lGrids = 1L;

	if ( pGrid->m_pGrids == NULL )
		goto _EndLoad;

	pGrid->m_pGrids [ 0 ] = pSubGrid;
	
	pSubGrid = NULL;

_EndLoad:

	if ( m_fpLas )
	{
		fclose ( m_fpLas );
		m_fpLas = NULL;
	}

	if ( m_fpLos )
	{
		fclose ( m_fpLos );
		m_fpLos = NULL;
	}

	if ( pSubGrid )
	{
		delete pSubGrid;
		pSubGrid = NULL;
	}

	return lResult;
}

//////////////////////////////////////////////////////////////////////////////////

LONG CDatumGridNadcon::LoadHeader (CDatumSubGrid * pGrid)
{
	LONG	lResult	= -1L;
	LONG	lDummy	=  0L;

	// Skip filename
	fseek		( m_fpLas, 0x0040, SEEK_SET );

	// Read Col and Row count
	ReadLong	( m_fpLas, pGrid->m_lCols	);
	ReadLong	( m_fpLas, pGrid->m_lRows	);
	ReadLong	( m_fpLas, lDummy			);

	// Get boundaries
	ReadFloat	( m_fpLas, pGrid->m_dblLonMin );
	ReadFloat	( m_fpLas, pGrid->m_dblLonSpc );
	ReadFloat	( m_fpLas, pGrid->m_dblLatMin );
	ReadFloat	( m_fpLas, pGrid->m_dblLatSpc );

	pGrid->m_dblLonMax	= pGrid->m_dblLonMin + ( pGrid->m_lCols * pGrid->m_dblLonSpc );
	pGrid->m_dblLatMax	= pGrid->m_dblLatMin + ( pGrid->m_lRows * pGrid->m_dblLatSpc );

	// Set Count
	pGrid->m_lRecords	= pGrid->m_lCols * pGrid->m_lRows;

	lResult = 0L;

_EndLoadHeader:

	return lResult;
}

//////////////////////////////////////////////////////////////////////////////////

LONG CDatumGridNadcon::LoadGrid (CDatumSubGrid * pGrid)
{
	LONG	lResult		= -1L;

	DOUBLE	dblShiftX	= 0.0;
	DOUBLE	dblShiftY	= 0.0;

	INT		nOffset		= 0L;
	
	INT		c			= 0L;
	INT		r			= 0L;

	if ( pGrid == NULL )
		goto _EndLoadGrid;

	nOffset = ( pGrid->m_lCols + 2L ) * 4L;
	
	// Skip to start of offset block
	fseek ( m_fpLas, nOffset, SEEK_SET );
	fseek ( m_fpLos, nOffset, SEEK_SET );

	// Allocate Memory
	lResult = pGrid->Allocate ( pGrid->m_lRecords + 1L );

	if ( lResult )
		goto _EndLoadGrid;

	for ( r = 0L ; r < pGrid->m_lRows ; r++ )
	{
		for ( c = 0L ; c < pGrid->m_lCols ; c++ )
		{
			ReadFloat ( m_fpLas, dblShiftY );
			ReadFloat ( m_fpLos, dblShiftX );

			pGrid->AddCorrection ( dblShiftY, dblShiftX );
		}

		ReadFloat ( m_fpLas, dblShiftY );
		ReadFloat ( m_fpLos, dblShiftX );
	}

	lResult = 0L;

_EndLoadGrid:

	return lResult;
}

//////////////////////////////////////////////////////////////////////////////////

LONG CDatumGridNadcon::ReadFloat (FILE * fp, DOUBLE & f)
{
	LONG	lResult		= -1L;

	float	fltValue	= 0.0;

	// Check File
	if ( fp == NULL )
		goto _EndReadFloat;

	// Read the data
	if ( fread ( &fltValue, sizeof ( FLOAT ), 1L, fp ) == NULL )
		goto _EndReadFloat;

	lResult = 0L;

_EndReadFloat:

	f = fltValue;

	return lResult;
}

//////////////////////////////////////////////////////////////////////////////////

LONG CDatumGridNadcon::ReadDouble (FILE * fp, DOUBLE & d)
{
	LONG	lResult		= -1L;

	double	dblValue	= 0.0;

	// Check File
	if ( fp == NULL )
		goto _EndReadDouble;

	// Read the data
	if ( fread ( &dblValue, sizeof ( DOUBLE ), 1L, fp ) == NULL )
		goto _EndReadDouble;

	lResult = 0L;

_EndReadDouble:

	d = dblValue;

	return lResult;
}

//////////////////////////////////////////////////////////////////////////////////

LONG CDatumGridNadcon::ReadInteger (FILE * fp, INT & n)
{
	LONG	lResult	= -1L;

	int		nValue	=  0L;

	// Check File
	if ( fp == NULL )
		goto _EndReadInteger;

	// Read the data
	if ( fread ( &nValue, sizeof ( INT ), 1L, fp ) == NULL )
		goto _EndReadInteger;

	lResult = 0L;

_EndReadInteger:

	n = nValue;

	return lResult;
}

//////////////////////////////////////////////////////////////////////////////////

LONG CDatumGridNadcon::ReadLong (FILE * fp, LONG & l)
{
	LONG	lResult	= -1L;

	LONG	lValue	=  0L;

	// Check File
	if ( fp == NULL )
		goto _EndReadLong;

	// Read the data
	if ( fread ( &lValue, sizeof ( LONG ), 1L, fp ) == NULL )
		goto _EndReadLong;

	lResult = 0L;

_EndReadLong:

	l = lValue;

	return lResult;
}

//////////////////////////////////////////////////////////////////////////////////