#pragma once

/

#include "Projection.h"

/

class CProjectionPlateCarree : public CProjection
{
public:
				CProjectionPlateCarree		();
	virtual		~CProjectionPlateCarree		();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};

/
