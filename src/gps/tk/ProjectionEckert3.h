#pragma once

#include "Projection.h"

class CProjectionEckert3 : public CProjection
{
public:
				CProjectionEckert3			();
	virtual		~CProjectionEckert3			();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};
