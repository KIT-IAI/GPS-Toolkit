#pragma once

/

#include "Projection.h"

/

class CProjectionMiller : public CProjection
{
public:
				CProjectionMiller			();
	virtual		~CProjectionMiller			();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};

/

