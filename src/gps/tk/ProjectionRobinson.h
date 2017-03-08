#pragma once

/

#include "Projection.h"

/

class CProjectionRobinson :	public CProjection
{
public:
				CProjectionRobinson			();
	virtual		~CProjectionRobinson		();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};

/
