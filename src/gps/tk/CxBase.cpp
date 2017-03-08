#include <windows.h>
#include <tchar.h>
#include <time.h>
#include <stdio.h>
#include <vector>

//////////////

#include "CxBase.h"

//////////////

CCxBase::CCxBase()
{
	m_strDebugFile  = _T("C:\\debug\\unknown.txt");
}

//////////////

CCxBase::CCxBase(LPCTSTR lptszDebug)
{
	m_strDebugFile  = _T("C:\\debug\\");
	m_strDebugFile += lptszDebug;
	m_strDebugFile += _T(".txt");
}

//////////////

CCxBase::~CCxBase()
{
}

//////////////

void CCxBase::SetLogFile (LPCTSTR lptszLogFile)
{
	m_strLogFile = lptszLogFile;
}

//////////////

void CCxBase::SetTraceFile (LPCTSTR lptszTraceFile)
{
	m_strTraceFile = lptszTraceFile;
}

//////////////

void CCxBase::TraceFunction ( LPCTSTR format, ... )
{
	
}

//////////////

void CCxBase::TraceDebug ( LPCTSTR format, ... )
{

}

//////////////

void CCxBase::TraceTrace ( LPCTSTR format, ... )
{
// 	INT				nNextLine		= 0L;
// 	INT				nCount			= 0L;
// 	INT				n				= 0L;
// 
// 	FILE		*	fp				= NULL;
// 
// 	CCxString		strTrace		= _T("");
// 	
// 	TCHAR			tszBuffer		[ 2048 + 1 ];
// 
// 	SYSTEMTIME		st;
// 
// 	std::vector <CCxString>	strArray;
// 
// 	va_list 		args;
// 
// 	// Open File to get previous contents and line number
// 	if ( ( fp = _tfopen ( m_strTraceFile.GetBuffer (), _T("rt") ) ) != NULL )
// 	{	
// 		_fgetts		( tszBuffer, 2048, fp );
// 
// 		nNextLine = _tcstol ( tszBuffer, NULL, 10L );
// 
// 		while ( !feof ( fp ) ) 
// 		{
// 			if ( _fgetts ( tszBuffer, 2048, fp ) > 0L )
// 			{
// 				if ( _tcslen ( tszBuffer ) )
// 				{
// 					strArray.push_back ( tszBuffer );
// 				}
// 			}
// 		}
// 
// 		fclose ( fp );
// 		fp = NULL;
// 	}
// 
// 	nNextLine++;
// 
// 	// Get Time
// 	GetSystemTime ( &st );
// 
// 	// Append Formatted Data
// 	va_start( args, format );
// 	_vstprintf_s ( tszBuffer, 2048L, format, args );
// 	va_end( args );
// 
// 	// Format Time
// 	strTrace.Format	( _T("%08X||[%02ld:%02ld:%02ld.%03ld] - %s "), nNextLine, st.wHour, st.wMinute, st.wSecond, st.wMilliseconds, tszBuffer );
// 	
// 	// Replace control chars
// 	strTrace.Replace ( _T("\r\n"), _T("<CRLF>") );
// 	strTrace.Replace ( _T("\r"),   _T("<CR>") );
// 	strTrace.Replace ( _T("\n"),   _T("<LF>") );
// 
// 	// Append newline
// 	strTrace +=	 _T("\r\n");
// 
// 	// Open File
// 	if ( ( fp = _tfopen ( m_strTraceFile.GetBuffer (), _T("wt+") ) ) != NULL )
// 	{
// 		_ftprintf ( fp, _T("%ld\n"), nNextLine );
// 
// 		// Add new line and remove first one
// 		strArray.push_back ( strTrace );
// 		
// 		nCount = strArray.size ();
// 
// 		if ( nCount >= 200L )
// 		{
// 			strArray.erase ( strArray.begin () );
// 			nCount--;
// 		}
// 
// 		for ( n = 0L ; n < nCount; n++ )
// 		{
// 			_fputts ( strArray.at ( n ).GetBuffer (), fp );
// 		}
// 		
// 		fclose ( fp );
// 		fp = NULL;
// 	}
// 
// 	strArray.clear ();
// 
// 	return void ();
}

//////////////

void CCxBase::TraceLog ( LPCTSTR format, ... )
{
	time_t	tm;

	struct	tm	*	pTime;

	FILE	*	fp			= NULL;

	// If logfile specified, do logging to file
	if ( m_strLogFile.GetLength () )
	{
		if ( _tfopen_s ( &fp, m_strLogFile.GetBuffer (), _T("at+") ) == 0 )
		{
			time ( &tm );

			pTime = localtime ( &tm );
			
			if ( pTime )
			{
				_ftprintf_s		( fp, _T("\n[%02ld/%02ld/%02ld - %02ld:%02ld:%02ld] - "), pTime->tm_mday, pTime->tm_mon + 1, pTime->tm_year + 1900, pTime->tm_hour, pTime->tm_min, pTime->tm_sec );
			}

			//_tcscat ( format, _T("\n") );

			va_list args;
			va_start( args, format );	

			_vftprintf_s	( fp, format, args );

			va_end ( args );
			fclose ( fp );
		}
	}
}

//////////////

BOOL CCxBase :: operator == ( const CCxBase & )
{
	return FALSE;
}

CCxBase *CCxBase ::Copy()
{	
	return new CCxBase();
}