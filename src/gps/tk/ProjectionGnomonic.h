#pragma once

#include "Projection.h"

class CProjectionGnomonic :	public CProjection
{
public:
				CProjectionGnomonic			();
	virtual		~CProjectionGnomonic		();

	void		Initialize					(CCfgMapProjection & proj);

	void		Forward						();
	void		Inverse						();

protected:

	double		clat0;
	double		slat0;
};
