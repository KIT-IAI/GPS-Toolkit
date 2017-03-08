#pragma once

/

#include "Projection.h"

/

class CProjectionLoximuthal : public CProjection
{
public:
				CProjectionLoximuthal		();
	virtual		~CProjectionLoximuthal		();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();

protected:

	double		tsp1;
	double		csp1;
};

/
