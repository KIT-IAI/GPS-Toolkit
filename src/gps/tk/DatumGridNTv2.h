#pragma once

/////

#include "DatumGrid.h"

class CDatumGridNTv2
{
public:
						CDatumGridNTv2			();
	virtual				~CDatumGridNTv2			();

	VOID				Clear					();

	LONG				Load					(LPCTSTR lptszFileName, CDatumGrid * pGrid);

protected:

	LONG				ProcessHeader			();
	CDatumSubGrid	*	ProcessGrid				();

	LONG				GetHeaderInt			(INT	& n);
	LONG				GetHeaderDouble			(DOUBLE & d);
	LONG				GetHeaderChar			(CHAR	* c, INT nMaxLen);
	LONG				GetDouble				(FLOAT  & d);

	CDatumGrid	*		m_pGrid;

	FILE		*		m_fp;

	INT					m_nFiles;
};

/////
