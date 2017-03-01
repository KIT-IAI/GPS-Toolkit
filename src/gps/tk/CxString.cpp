#include <windows.h>
#include <stdio.h>
#include <tchar.h>

#include "CxString.h"

CCxString::CCxString()
{
}

CCxString::CCxString(LPCTSTR s)
{
	m_str = s;
}

// CCxString::CCxString(const BSTR & other)
// {
// 	m_lLength = wcslen((LPCWSTR)other);
// 	m_ptszBuffer = NULL;
// 
// #ifdef UNICODE
// 
// 	ReAlloc(m_lLength);
// 
// 	_tcscpy(m_ptszBuffer, (LPCWSTR)other);
// 
// #else
// 
// 	LONG m_lBuffer = WideCharToMultiByte ( CP_ACP, 0L, ( LPCWSTR ) other, m_lLength, NULL, 0, NULL, NULL );
// 
// 	ReAlloc ( m_lBuffer );
// 
// 	m_lLength = WideCharToMultiByte ( CP_ACP, 0L, ( LPCWSTR ) other, m_lLength, m_ptszBuffer, m_lBuffer, NULL, NULL );
// 
// 	m_ptszBuffer [ m_lBuffer ] = '\0';
// #endif // UNICODE
// }

CCxString::CCxString(const CCxString& other)
	: m_str(other.m_str)
{

}

CCxString::CCxString(const std::basic_string<TCHAR>& other)
	: m_str(other)
{
	
}

CCxString::~CCxString()
{
}

CCxString& CCxString::operator=(LPCTSTR s)
{
	if (s != nullptr)
	{
		m_str = s;
	}

	return *this;
}

CCxString& CCxString::operator=(const CCxString & other)
{
	m_str = other.m_str;

	return *this;
}

// CCxString& CCxString::operator=(const BSTR & other)
// {
// 	if (other == NULL)
// 	{
// 		return *this;
// 	}
// 
// 	if (m_ptszBuffer)
// 	{
// 		delete[]m_ptszBuffer;
// 		m_ptszBuffer = NULL;
// 	}
// 
// 	m_lLength = wcslen((LPCWSTR)other);
// 
// #ifdef _UNICODE
// 
// 	m_ptszBuffer = new TCHAR[m_lLength + 1];
// 	_tcscpy(m_ptszBuffer, (LPCWSTR)other);
// 
// #else
// 
// 	m_lLength = WideCharToMultiByte ( CP_ACP, 0L, ( LPCWSTR ) other, wcslen ( ( LPCWSTR ) other ) + 1, NULL, 0L, NULL, NULL );
// 
// 	m_ptszBuffer		= new TCHAR [ m_lLength + 1 ];
// 
// 	WideCharToMultiByte ( CP_ACP, 0L, ( LPCWSTR ) other, wcslen ( ( LPCWSTR ) other ) + 1, m_ptszBuffer, m_lLength, NULL, NULL );
// 
// #endif // _UNICODE
// 
// 	return *this;
// }

BOOL CCxString::operator==(LPCTSTR str)
{
	return (m_str == str) ? TRUE : FALSE;
}

BOOL CCxString::operator==(const CCxString& str)
{
	return (m_str == str.m_str) ? TRUE : FALSE;
}

CCxString& CCxString::operator+=(LPCTSTR str)
{
	m_str += str;

	return *this;
}

CCxString& CCxString::operator+=(TCHAR c)
{
	m_str += c;

	return *this;
}

CCxString& CCxString::operator+=(const CCxString& str)
{
	m_str += str.m_str;

	return *this;
}

// VOID CCxString::ReAlloc(LONG lBytes)
// {
// 	if (m_ptszBuffer)
// 	{
// 		delete[]m_ptszBuffer;
// 		m_ptszBuffer = NULL;
// 	}
// 
// 	m_lLength = lBytes;
// 	m_ptszBuffer = new TCHAR[m_lLength + 1];
// 
// 	ZeroMemory(m_ptszBuffer, m_lLength + 1);
// }

// BSTR CCxString::AllocSysString()
// {
// #ifdef _UNICODE
// 	BSTR	bstr = SysAllocStringLen((LPCWSTR)m_ptszBuffer, wcslen(m_ptszBuffer));
// #else
// 	INT		nLen = MultiByteToWideChar ( CP_ACP, 0, m_ptszBuffer, strlen ( m_ptszBuffer ), NULL, NULL );
// 
// 	BSTR	bstr = SysAllocStringLen ( NULL, nLen );
// 
// 	MultiByteToWideChar ( CP_ACP, 0, m_ptszBuffer, m_lLength, bstr, nLen );
// #endif // _UNICODE
// 
// 	return bstr;
// }

CCxString & CCxString::Format(LPCTSTR format, ...)
{
// 	va_list		args;
// 
// 	ReAlloc(2048);
// 
// 	va_start(args, format);
// 	_vstprintf(m_ptszBuffer, format, args);
// 	va_end(args);

	return *this;
}

CCxString & CCxString::AddTrailing(TCHAR tcChar)
{
	if (m_str.back() != tcChar)
	{
		m_str += tcChar;
	}

	return *this;
}

CCxString & CCxString::AppendBackSlash()
{
	return CCxString::AddTrailing('\\');
}


VOID CCxString::Erase()
{
	m_str.clear();
}

// LPTSTR CCxString::GetBuffer()
// {
// 	return (LPTSTR)m_ptszBuffer;
// }

LPCTSTR CCxString::GetBuffer() const
{
	return m_str.c_str();
}

LONG CCxString::GetLength() const
{
	return static_cast<LONG>(m_str.length());
}

TCHAR CCxString::GetAt(LONG lIndex)
{
	return m_str.at(lIndex);
}

VOID CCxString::SetAt(LONG lIndex, TCHAR tcChar)
{
	m_str[lIndex] = tcChar;
}

// CCxString &CCxString::Replace(LPTSTR lptszFind, LPTSTR lptszReplace, BOOL bcaseSensitive)
// {
// 	CCxString	strFind = _T("");
// 	CCxString	strString = _T("");
// 	CCxString	strTemp = _T("");
// 	CCxString	strNew = _T("");
// 	CCxString	strStringUp = _T("");
// 
// 	LPTSTR		cp = NULL;
// 
// 	strString = m_ptszBuffer;
// 	strFind = lptszFind;
// 
// 	if (bcaseSensitive == FALSE)
// 	{
// 		strFind.StrUpper();
// 	}
// 
// 	do
// 	{
// 		strStringUp = strString;
// 
// 		if (bcaseSensitive == FALSE)
// 		{
// 			strStringUp.StrUpper();
// 		}
// 
// 		if ((cp = _tcsstr(strStringUp.GetBuffer(), strFind.GetBuffer())) != NULL)
// 		{
// 			cp = strString.GetBuffer() + (cp - strStringUp.GetBuffer());
// 			*cp = '\0';
// 			strNew += strString;
// 			strNew += lptszReplace;
// 			cp += _tcslen(lptszFind);
// 			strTemp = cp;
// 			strString = strTemp;
// 		}
// 		else
// 		{
// 			strNew += strString;
// 		}
// 	} while (cp != NULL);
// 
// 	*this = strNew.GetBuffer();
// 
// 	return *this;
// }

// BOOL CCxString::StartsWith(LPTSTR lptszSearch, BOOL bcaseSensitive /* = FALSE */)
// {
// 	if ((m_ptszBuffer == NULL) || (lptszSearch == NULL))
// 	{
// 		return FALSE;
// 	}
// 
// 	CCxString	strBuffer = m_ptszBuffer;
// 	CCxString	strSearch = lptszSearch;
// 
// 	if (bcaseSensitive == FALSE)
// 	{
// 		strBuffer.StrUpper();
// 		strSearch.StrUpper();
// 	}
// 
// 	return (_tcsstr(strBuffer.GetBuffer(), strSearch.GetBuffer()) == strBuffer.GetBuffer()) ? TRUE : FALSE;
// }

// BOOL CCxString::Find(LPTSTR lptszSearch, BOOL bcaseSensitive /* = FALSE */)
// {
// 	if ((m_ptszBuffer == NULL) || (lptszSearch == NULL))
// 	{
// 		return FALSE;
// 	}
// 
// 	CCxString	strBuffer = m_ptszBuffer;
// 	CCxString	strSearch = lptszSearch;
// 
// 	if (bcaseSensitive == FALSE)
// 	{
// 		strBuffer.StrUpper();
// 		strSearch.StrUpper();
// 	}
// 
// 	return (_tcsstr(strBuffer.GetBuffer(), strSearch.GetBuffer()) == NULL) ? FALSE : TRUE;
// }

// LONG CCxString::ToNumber()
// {
// 	LONG	lValue = 0L;
// 
// 	if ((m_ptszBuffer != NULL) && (_tcsclen(m_ptszBuffer) != 0L))
// 	{
// 		lValue = _tcstol(m_ptszBuffer, NULL, 10);
// 	}
// 
// 	return lValue;
// }

// DOUBLE CCxString::ToFloat()
// {
// 	DOUBLE fValue = 0.0;
// 
// 	if ((m_ptszBuffer != NULL) && (strlen(m_ptszBuffer) != 0L))
// 	{
// 		fValue = _tcstod(m_ptszBuffer, NULL);
// 	}
// 
// 	return fValue;
// }

// CCxString & CCxString::GetPart(LPTSTR lptszSeparator, LPTSTR lptszDefault, CCxString & strReturn, LONG lPart)
// {
// 	LPTSTR		cp1 = m_ptszBuffer;
// 	LPTSTR		cp2 = m_ptszBuffer;
// 
// 	CCxString	strTemp = _T("");
// 
// 	for (LONG l = 0; l < lPart; l++)
// 	{
// 		cp1 = _tcsstr(cp1, lptszSeparator);
// 
// 		if (cp1 == NULL)
// 		{
// 			strReturn = _T("");
// 			goto _EndGetPart;
// 		}
// 		else
// 		{
// 			cp1 += _tcslen(lptszSeparator);
// 		}
// 	}
// 	strTemp = cp1;
// 
// 	cp2 = _tcsstr(strTemp.GetBuffer(), lptszSeparator);
// 
// 	if (cp2)
// 	{
// 		*cp2 = '\0';
// 	}
// 
// 	strReturn = strTemp;
// 
// _EndGetPart:
// 
// 	return strReturn;
// }

// CCxString & CCxString::Trim()
// {
// 	LONG	lLength = _tcslen(m_ptszBuffer);
// 	LONG	l = 0L;
// 	LONG	k = 0L;
// 
// 	if (lLength)
// 	{
// 		for (l = 0; l < lLength; l++)
// 		{
// 			if (m_ptszBuffer[l] != '\r' &&
// 				m_ptszBuffer[l] != '\n' &&
// 				m_ptszBuffer[l] != '\t' &&
// 				m_ptszBuffer[l] != ' ') break;
// 		}
// 
// 		LPTSTR lptszTempBuffer = new TCHAR[lLength + 1];
// 
// 		if (lptszTempBuffer)
// 		{
// 			_tcscpy(lptszTempBuffer, m_ptszBuffer + l);
// 
// 			if (_tcslen(lptszTempBuffer) > 0)
// 			{
// 				for (k = _tcslen(lptszTempBuffer) - 1; k >= 0; k--)
// 				{
// 					if (lptszTempBuffer[k] != '\r' && lptszTempBuffer[k] != '\n' && lptszTempBuffer[k] != '\t' && lptszTempBuffer[k] != ' ')
// 						break;
// 					else
// 						lptszTempBuffer[k] = '\0';
// 				}
// 			}
// 
// 			*this = lptszTempBuffer;
// 			delete[]lptszTempBuffer;
// 		}
// 	}
// 
// 	return *this;
// }

// CCxString & CCxString::TrimLeft(LPTSTR lptszString)
// {
// 	LPTSTR	lptszTemp = NULL;
// 
// 	if (_tcslen(lptszString) == 0)
// 	{
// 		return *this;
// 	}
// 
// 	if (_tcsncmp(m_ptszBuffer, lptszString, _tcslen(lptszString)) != 0)
// 	{
// 		return *this;
// 	}
// 
// 	lptszTemp = new TCHAR[_tcslen(m_ptszBuffer) - _tcslen(lptszString) + 1];
// 
// 	if (lptszTemp)
// 	{
// 		_tcscpy(lptszTemp, m_ptszBuffer + _tcslen(lptszString));
// 
// 		*this = lptszTemp;
// 
// 		delete[]lptszTemp;
// 	}
// 
// 	return *this;
// }

// CCxString & CCxString::TrimRight(LPTSTR lptszString)
// {
// 	if (_tcslen(lptszString) == 0L)
// 	{
// 		return *this;
// 	}
// 
// 	if (_tcscmp(m_ptszBuffer + (_tcslen(m_ptszBuffer) - _tcslen(lptszString)), lptszString))
// 	{
// 		return *this;
// 	}
// 
// 	m_ptszBuffer[_tcslen(m_ptszBuffer) - _tcslen(lptszString)] = '\0';
// 
// 	return *this;
// }

// CCxString & CCxString::Insert(LPTSTR lptszString, BOOL bAllowDuplicates /* = FALSE */)
// {
// 	LPTSTR	lptszTempBuf = NULL;
// 
// 	if ((_tcsncmp(m_ptszBuffer, lptszString, _tcslen(lptszString)) == 0) && (bAllowDuplicates == FALSE))
// 	{
// 		return *this;
// 	}
// 
// 	lptszTempBuf = new TCHAR[_tcslen(m_ptszBuffer) + _tcslen(lptszString) + 1];
// 
// 	if (lptszTempBuf)
// 	{
// 		_tcscpy(lptszTempBuf, lptszString);
// 		_tcscat(lptszTempBuf, m_ptszBuffer);
// 
// 		*this = lptszTempBuf;
// 		delete[]lptszTempBuf;
// 	}
// 
// 	return *this;
// }

// CCxString & CCxString::ToXml()
// {
// 	CCxString	vsDest;
// 	LPSTR		cp;
// 	INT			iSrc = 0;
// 
// 	cp = m_ptszBuffer;
// 
// 	while (TRUE)
// 	{
// 		if (m_ptszBuffer[iSrc] == '<')
// 		{
// 			m_ptszBuffer[iSrc] = '\0';
// 			vsDest += cp;
// 			vsDest += "&lt;";
// 			cp = m_ptszBuffer + iSrc + 1;
// 		}
// 		else if (m_ptszBuffer[iSrc] == '>')
// 		{
// 			m_ptszBuffer[iSrc] = '\0';
// 			vsDest += cp;
// 			vsDest += "&gt;";
// 			cp = m_ptszBuffer + iSrc + 1;
// 		}
// 		else if (m_ptszBuffer[iSrc] == '&'
// 			&& _strnicmp(&(m_ptszBuffer[iSrc]), "&lt;", 4) != 0
// 			&& _strnicmp(&(m_ptszBuffer[iSrc]), "&gt;", 4) != 0
// 			&& _strnicmp(&(m_ptszBuffer[iSrc]), "&amp;", 5) != 0
// 			&& _strnicmp(&(m_ptszBuffer[iSrc]), "&quot;", 6) != 0
// 			&& _strnicmp(&(m_ptszBuffer[iSrc]), "&apos;", 6) != 0)
// 		{
// 			m_ptszBuffer[iSrc] = '\0';
// 			vsDest += cp;
// 			vsDest += "&amp;";
// 			cp = m_ptszBuffer + iSrc + 1;
// 		}
// 		else if (m_ptszBuffer[iSrc] == '\"')
// 		{
// 			m_ptszBuffer[iSrc] = '\0';
// 			vsDest += cp;
// 			vsDest += "&quot;";
// 			cp = m_ptszBuffer + iSrc + 1;
// 		}
// 		else if (m_ptszBuffer[iSrc] == '\'')
// 		{
// 			m_ptszBuffer[iSrc] = '\0';
// 			vsDest += cp;
// 			vsDest += "&apos;";
// 			cp = m_ptszBuffer + iSrc + 1;
// 		}
// 		else if (m_ptszBuffer[iSrc] == '\0')
// 		{
// 			vsDest += cp;
// 			break;
// 		}
// 		iSrc++;
// 	}
// 
// 	*this = vsDest;
// 
// 	return *this;
// }
