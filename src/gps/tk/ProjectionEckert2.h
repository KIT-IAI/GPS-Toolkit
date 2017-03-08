#pragma once

#include "Projection.h"

class CProjectionEckert2 : public CProjection
{
public:
				CProjectionEckert2			();
	virtual		~CProjectionEckert2			();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};
