#pragma once

/

#include "Projection.h"

/

class CProjectionMollweide : public CProjection
{
public:
				CProjectionMollweide		();
	virtual		~CProjectionMollweide		();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();

private:

	double		r2, r8;
};

/