#pragma once

/////

#include "DatumGrid.h"

/////

class CDatumGridNadcon
{
public:

					CDatumGridNadcon		();
	virtual			~CDatumGridNadcon		();

	VOID			Clear					();

	LONG			Load					(LPCTSTR lptszFileName, CDatumGrid * pGrid);

protected:

	LONG			LoadHeader				(CDatumSubGrid * pGrid);
	LONG			LoadGrid				(CDatumSubGrid * pGrid);

	LONG			ReadFloat				(FILE * fp, DOUBLE & f);
	LONG			ReadDouble				(FILE * fp, DOUBLE & d);
	LONG			ReadInteger				(FILE * fp, INT    & n);
	LONG			ReadLong				(FILE * fp, LONG   & l);

	FILE	*		m_fpLas;
	FILE	*		m_fpLos;
};

/////
