#pragma once

#include "Projection.h"

class CProjectionEckert6 : public CProjection
{
public:
				CProjectionEckert6			();
	virtual		~CProjectionEckert6			();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();

private:

	double		ra, rb, rc;
};
