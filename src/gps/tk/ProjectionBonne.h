#pragma once

#include "Projection.h"

class CProjectionBonne : public CProjection
{
public:
				CProjectionBonne			();
	virtual		 ~CProjectionBonne			();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();

	VOID		ForwardS					();
	VOID		InverseS					();

	VOID		ForwardE					();
	VOID		InverseE					();

	double		E1, M1;
	double		ssp1, csp1;
};
