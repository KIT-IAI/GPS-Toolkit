#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////////

#include "DatumGridUtils.h"

//////////////////////////////////////////////////////////////////////////////////

#include "DatumSubGrid.h"

//////////////////////////////////////////////////////////////////////////////////

CDatumSubGrid::CDatumSubGrid ()
{
	m_pdblLatitudes		= NULL;
	m_pdblLongitudes	= NULL;

	Clear	();
}

//////////////////////////////////////////////////////////////////////////////////

CDatumSubGrid::~CDatumSubGrid ()
{
	Clear	();
}

//////////////////////////////////////////////////////////////////////////////////

VOID CDatumSubGrid::Clear ()
{
	if ( m_pdblLatitudes )
	{
		delete []m_pdblLatitudes;
		m_pdblLatitudes	= NULL;
	}

	if ( m_pdblLongitudes )
	{
		delete []m_pdblLongitudes;
		m_pdblLongitudes	= NULL;
	}

	m_lRecords	= 0L;
	m_lCurrent	= 0L;

	m_lRows		= 0L;
	m_lCols		= 0L;

	m_dblLatSpc	= 0.0;
	m_dblLonSpc = 0.0;
	m_dblLatMin	= 0.0;
	m_dblLonMin	= 0.0;
	m_dblLatMax	= 0.0;
	m_dblLatMin	= 0.0;

	return VOID ();
}

//////////////////////////////////////////////////////////////////////////////////

LONG CDatumSubGrid::Allocate (LONG lRecords)
{
	if ( lRecords == 0L )
		goto _EndAllocate;

	if ( m_pdblLatitudes )
	{
		delete []m_pdblLatitudes;
		m_pdblLatitudes = NULL;
	}

	if ( m_pdblLongitudes )
	{
		delete []m_pdblLongitudes;
		m_pdblLongitudes = NULL;
	}

	m_pdblLatitudes		= new float [ lRecords + 1L ];

	if ( m_pdblLatitudes == NULL )
		goto _EndAllocate;

	m_pdblLongitudes	= new float [ lRecords + 1L ];

	if ( m_pdblLongitudes == NULL )
		goto _EndAllocate;

	m_lRecords = lRecords;

_EndAllocate:

	return 0L;
}

//////////////////////////////////////////////////////////////////////////////////

DOUBLE CDatumSubGrid::GetCorrectionLat (DOUBLE dblLat, DOUBLE dblLon)
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
	double		x				= gps_round ( ( dblLon - m_dblLonMin ) / ( double ) m_dblLonSpc );
	double		y				= gps_round ( ( dblLat - m_dblLatMin ) / ( double ) m_dblLatSpc );
	
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

	dblValue00	= m_pdblLatitudes [ ( nLat0 * m_lCols ) + nLon0 ];
	dblValue01	= m_pdblLatitudes [ ( nLat0 * m_lCols ) + nLon1 ];
	dblValue11	= m_pdblLatitudes [ ( nLat1 * m_lCols ) + nLon1 ];
	dblValue10	= m_pdblLatitudes [ ( nLat1 * m_lCols ) + nLon0 ];

	double top    = ( double ) dblValue00 + ( ( double ) dblValue01 - ( double ) dblValue00 ) * tLon;
    double bottom = ( double ) dblValue10 + ( ( double ) dblValue11 - ( double ) dblValue10 ) * tLon;
      
	return top + ( bottom - top ) * tLat;
}

//////////////////////////////////////////////////////////////////////////////////

DOUBLE CDatumSubGrid::GetCorrectionLon (DOUBLE dblLat, DOUBLE dblLon)
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
	double		x				= gps_round ( ( dblLon - m_dblLonMin ) / ( double ) m_dblLonSpc );
	double		y				= gps_round ( ( dblLat - m_dblLatMin ) / ( double ) m_dblLatSpc );
	
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

//////////////////////////////////////////////////////////////////////////////////

BOOL CDatumSubGrid::PointInGrid (DOUBLE dblLat, DOUBLE dblLon)
{
	BOOL	bPointInGrid	= FALSE;

	if ( dblLat < m_dblLatMin )
		goto _EndPointInGrid;

	if ( dblLat > m_dblLatMax )
		goto _EndPointInGrid;

	if ( dblLon < m_dblLonMin )
		goto _EndPointInGrid;

	if ( dblLon > m_dblLonMax )
		goto _EndPointInGrid;

	bPointInGrid = TRUE;

_EndPointInGrid:

	return bPointInGrid;
}

//////////////////////////////////////////////////////////////////////////////////

VOID CDatumSubGrid::AddCorrection (DOUBLE dblLat, DOUBLE dblLon)
{
	if ( m_lCurrent >= m_lRecords )
		goto _EndAddCorrection;

	m_pdblLatitudes		[ m_lCurrent ] = dblLat;
	m_pdblLongitudes	[ m_lCurrent ] = dblLon;

	m_lCurrent++;

_EndAddCorrection:

	return VOID ();
}

//////////////////////////////////////////////////////////////////////////////////
