#pragma once

/

#include "Projection.h"

/

class CProjectionWinkel1 : public CProjection
{
public:
				CProjectionWinkel1			();
	virtual		~CProjectionWinkel1			();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};

/
