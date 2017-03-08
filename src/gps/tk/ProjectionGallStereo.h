#pragma once

/

#include "Projection.h"

/

class CProjectionGallStereo : public CProjection
{
public:
				CProjectionGallStereo		();
	virtual		~CProjectionGallStereo		();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();
};

/
