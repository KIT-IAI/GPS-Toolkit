#pragma once

/

#include "Projection.h"

/

class CProjectionGrinten1 :	public CProjection
{
public:
				CProjectionGrinten1			();
	virtual		~CProjectionGrinten1		();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};

/