#pragma once

/

#include "Projection.h"

/

class CProjectionAzimuthalEq :	public CProjection
{
public:
				CProjectionAzimuthalEq		();
	virtual		~CProjectionAzimuthalEq		();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		ForwardSphere				();
	VOID		ForwardEllipse				();

	VOID		Inverse						();
	VOID		InverseSphere				();
	VOID		InverseEllipse				();

protected:

	double es, N1, G, He, clat0, slat0;
};

/
