#pragma once

#include "Projection.h"

class CProjectionEquirectangular :	public CProjection
{
public:
				CProjectionEquirectangular	();
	virtual		~CProjectionEquirectangular	();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};
