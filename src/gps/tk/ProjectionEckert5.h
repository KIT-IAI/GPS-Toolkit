#pragma once

#include "Projection.h"

class CProjectionEckert5 : public CProjection
{
public:
				CProjectionEckert5			();
	virtual		~CProjectionEckert5			();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};
