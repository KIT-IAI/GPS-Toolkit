#pragma once

/////////////////////////////////////////////////////////////////////////////

#include "CxString.h"

/////////////////////////////////////////////////////////////////////////////

class CCxBase
{
public:
	CCxBase(LPCTSTR lptszDebug);
	CCxBase();
	virtual ~CCxBase(void);

	void SetLogFile		( LPCTSTR lptszLogFile );
	void SetTraceFile	( LPCTSTR lptszTraceFile );

	void TraceFunction	( LPCTSTR format, ... );
	void TraceDebug		( LPCTSTR format, ... );
	void TraceLog		( LPCTSTR format, ... );

	void TraceTrace		( LPCTSTR format, ... );

	virtual BOOL		operator == ( const CCxBase & );	// To allow comparisons of derived members
	virtual CCxBase	*	Copy();
private:

	CCxString	m_strDebugFile;
	CCxString	m_strTraceFile;
	CCxString	m_strLogFile;
};

/////////////////////////////////////////////////////////////////////////////
