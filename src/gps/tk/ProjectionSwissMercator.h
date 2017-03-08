#pragma once

#include "Projection.h"

class CProjectionSwissMercator : public CProjection
{
public:
				CProjectionSwissMercator	();
	virtual		~CProjectionSwissMercator	();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();

private:

	double		c, ee, ep;
	double		K, R;
};
