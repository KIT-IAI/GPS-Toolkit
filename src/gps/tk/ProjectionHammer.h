#pragma once

/

#include "Projection.h"

/

class CProjectionHammer : public CProjection
{
public:
				CProjectionHammer			();
	virtual		~CProjectionHammer			();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};

/

