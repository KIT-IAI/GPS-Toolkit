#pragma once

#include "Projection.h"

class CProjectionQuarticAuthalic : public CProjection
{
public:
				CProjectionQuarticAuthalic	();
	virtual		~CProjectionQuarticAuthalic	();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};

