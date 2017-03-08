#pragma once

/

#include "Projection.h"

/

class CProjectionEckert4 : public CProjection
{
public:
				CProjectionEckert4			();
	virtual		~CProjectionEckert4			();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();

private:

	double		ra0, ra1, q;
};

////////////////////////////////////////////////////////