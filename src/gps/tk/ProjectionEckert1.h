#pragma once

/

#include "Projection.h"

/

class CProjectionEckert1 : public CProjection
{
public:
				CProjectionEckert1			();
	virtual		~CProjectionEckert1			();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};

/
