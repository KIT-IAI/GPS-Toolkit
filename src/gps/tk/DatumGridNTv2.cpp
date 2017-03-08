#include "StdAfx.h"

/////

#include "DatumGrid.h"
#include "DatumGridUtils.h"
#include "DatumSubGrid.h"
#include "DatumGridNTv2.h"

/////

CDatumGridNTv2::CDatumGridNTv2 ()
{
	m_pGrid	= NULL;

	m_fp	= NULL;

	Clear ();
}

/////

CDatumGridNTv2::~CDatumGridNTv2 ()
{
}

/////

VOID CDatumGridNTv2::Clear ()
{
	return VOID ();
}

/////

LONG CDatumGridNTv2::Load (LPCTSTR lptszFileName, CDatumGrid * pGrid)
{
	LONG	lResult	= -1L;

	INT		n		= 0L;

	if ( pGrid == NULL )
		goto _EndLoad;

	m_pGrid = pGrid;

	m_fp = _tfopen ( lptszFileName, _T("rb" ) );

	if ( m_fp == NULL )
		goto _EndLoad;
	
	lResult = ProcessHeader ();

	if ( lResult )
		goto _EndLoad;

	m_pGrid->m_pGrids = new CDatumSubGrid* [ m_nFiles + 1L ];
	m_pGrid->m_lGrids = m_nFiles;

	if ( m_pGrid->m_pGrids == NULL )
		goto _EndLoad;

	for ( n = 0L ; n < m_nFiles ; n++ )
	{
		m_pGrid->m_pGrids [ n ] = ProcessGrid ();
	}

	lResult = 0L;

_EndLoad:

	if ( m_fp )
	{
		fclose ( m_fp );
		m_fp = NULL;
	}

	return lResult;
}

/////

LONG CDatumGridNTv2::ProcessHeader ()
{
	LONG	lResult		= 0L;

	INT		nRecordsO	= 0L;
	INT		nRecordsN	= 0L;

	DOUBLE	dblLatMax	= 0.0;
	DOUBLE	dblLatMin	= 0.0;
	DOUBLE	dblLonMax	= 0.0;
	DOUBLE	dblLonMin	= 0.0;

	CHAR	szTemp		[ 8 + 1 ];

	GetHeaderInt	( nRecordsO );
	GetHeaderInt	( nRecordsN );
	GetHeaderInt	( m_nFiles	);
	GetHeaderChar	( szTemp, 8L );
	GetHeaderChar	( szTemp, 8L );
	GetHeaderChar	( szTemp, 8L );
	GetHeaderChar	( szTemp, 8L );
	GetHeaderDouble	( dblLatMax	);
	GetHeaderDouble	( dblLatMin	);
	GetHeaderDouble	( dblLonMax	);
	GetHeaderDouble	( dblLonMin	);

_EndProcessHeader:

	return lResult;
}

/////

CDatumSubGrid * CDatumGridNTv2::ProcessGrid ()
{
	LONG	lResult		= 0L;

	INT		nRecords	= 0L;
	INT		n			= 0L;

	FLOAT	dblLat		= 0.0;
	FLOAT	dblLon		= 0.0;
	FLOAT	dblAcc		= 0.0;

	CHAR	szTemp		[ 16 ];

	CDatumSubGrid	*	pGrid	= new CDatumSubGrid ();

	if ( pGrid == NULL )
	{
		lResult = -1L;
		goto _EndProcessSubGrid;
	}

	GetHeaderChar	( szTemp, 16L );
	GetHeaderChar	( szTemp, 16L );
	GetHeaderChar	( szTemp, 16L );
	GetHeaderChar	( szTemp, 16L );

	// Get Extensions
	GetHeaderDouble	( pGrid->m_dblLatMin );
	GetHeaderDouble	( pGrid->m_dblLatMax );
	GetHeaderDouble	( pGrid->m_dblLonMin );
	GetHeaderDouble	( pGrid->m_dblLonMax );
	GetHeaderDouble	( pGrid->m_dblLatSpc );
	GetHeaderDouble ( pGrid->m_dblLonSpc );

	// To Degrees
	pGrid->m_dblLatMin	/= 3600.0;
	pGrid->m_dblLatMax	/= 3600.0;
	pGrid->m_dblLatSpc	/= 3600.0;
	pGrid->m_dblLonMin	/= 3600.0;
	pGrid->m_dblLonMax	/= 3600.0;
	pGrid->m_dblLonSpc	/= 3600.0;

	// Calc x * y
	pGrid->m_lRows	= 1 + gps_round ( ( pGrid->m_dblLatMax - pGrid->m_dblLatMin ) / pGrid->m_dblLatSpc );
	pGrid->m_lCols	= 1 + gps_round ( ( pGrid->m_dblLonMax - pGrid->m_dblLonMin ) / pGrid->m_dblLonSpc );

	// Get Count and allocate space in grid
	GetHeaderInt	( nRecords );

	lResult = pGrid->Allocate ( nRecords );
	
	if ( lResult == -1L )
		goto _EndProcessSubGrid;
	
	// Collect all shifts
	for ( n = 0L ; n < nRecords ; n++ )
	{
		GetDouble ( dblLat );
		GetDouble ( dblLon );
			
		pGrid->AddCorrection ( dblLat, dblLon );
	
		// Skip Accuracy fields
		GetDouble ( dblAcc );
		GetDouble ( dblAcc );
	}

_EndProcessSubGrid:

	return pGrid;
}

/////

LONG CDatumGridNTv2::GetHeaderInt (INT & n)
{
	CHAR	szData	[ 16 + 1 ];

	// Read the data
	fread ( &szData, 16L, 1L, m_fp );

	// copy int data
	memcpy ( &n, szData + 8, sizeof ( INT ) );

	return 0L;
}

/////

LONG CDatumGridNTv2::GetHeaderDouble (DOUBLE & d)
{
	CHAR	szData	[ 16 + 1 ];

	// Read the data
	fread ( &szData, 16L, 1L, m_fp );

	// copy int data
	memcpy ( &d, szData + 8, sizeof ( DOUBLE ) );

	return 0L;
}

/////

LONG CDatumGridNTv2::GetDouble (FLOAT & d)
{
	LONG	lResult	= -1L;

	// Read the data
	if ( fread ( &d, sizeof ( FLOAT ), 1L, m_fp ) == sizeof ( FLOAT ) )
		lResult = 0L;

	return lResult;
}

/////

LONG CDatumGridNTv2::GetHeaderChar (CHAR * c, INT nMaxLen)
{
	CHAR	szData	[ 16 + 1 ];

	// Read the data
	fread ( &szData, 16L, 1L, m_fp );

	// Clear
	memset ( c, '\0', nMaxLen );

	// copy int data
	memcpy ( c, szData + 8, ( nMaxLen < 8L ) ? nMaxLen : 8L );

	if ( nMaxLen > 8 )
		szData [ 8 ] = '\0';

 	return 0L;
}

/////
