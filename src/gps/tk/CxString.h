#pragma once

#include <string>
#include <wtypes.h>

class CCxString
{
public:
	CCxString();
	CCxString(LPCTSTR s);
	CCxString(const CCxString & other);
	CCxString(const std::basic_string<TCHAR>& other);
	//CCxString(const BSTR & other);

	// Destructor

	virtual ~CCxString(void);

	// Assignment operators

	CCxString&		operator=	(const CCxString &other);
	//CCxString&		operator=	(const BSTR &other);
	CCxString&		operator=	(LPCTSTR s);

	// Comparization operators

	BOOL			operator==	(const CCxString &str);
	BOOL			operator==	(LPCTSTR str);

	// Sum operators

	CCxString&		operator+=	(const CCxString &str);
	CCxString&		operator+=  (TCHAR c);
	CCxString&		operator+=	(LPCTSTR str);

	// Functions

	//CCxString	&	Trim();
	//CCxString	&	TrimLeft(LPTSTR lptszString);
	//CCxString	&	TrimRight(LPTSTR lptszString);

	//CCxString	&	Insert(LPTSTR lptszString, BOOL bAllowDuplicates = FALSE);

	CCxString	&	Format(LPCTSTR format, ...);

	CCxString	&	AddTrailing(TCHAR tcChar);
	CCxString	&	AppendBackSlash();

	//LPTSTR			GetBuffer();
	// SH: More const correctness
	LPCTSTR			GetBuffer() const;

	// SH: Const correctness... I KEEL U
	LONG			GetLength() const;

	TCHAR			GetAt(LONG lIndex);
	VOID			SetAt(LONG lIndex, TCHAR tcChar);

	//CCxString	&	Replace(LPTSTR lptszFind, LPTSTR lptszReplace, BOOL bcaseSensitive = FALSE);

	//BOOL			StartsWith(LPTSTR lptszSearch, BOOL bcaseSensitive = FALSE);
	//BOOL			Find(LPTSTR lptszSearch, BOOL bcaseSensitive = FALSE);
	//VOID			ReAlloc(LONG lBytes);

// 	DOUBLE			ToFloat();
// 	LONG			ToNumber();

	CCxString	&	ToXml();

	VOID			Erase();

	//CCxString	&	GetPart(LPTSTR lptszSeparator, LPTSTR lptszDefault, CCxString & strReturn, LONG lPart);

	//BSTR			AllocSysString();

	// Protected Data
protected:
	std::basic_string<TCHAR> m_str;
};
