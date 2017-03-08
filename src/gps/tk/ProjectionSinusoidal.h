#pragma once

/

#include "Projection.h"

/

class CProjectionSinusoidal : public CProjection
{
public:
				CProjectionSinusoidal		();
	virtual		~CProjectionSinusoidal		();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};

/
