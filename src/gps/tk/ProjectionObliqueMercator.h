#pragma once

//////////////////////////////////////////////////////////////////////////////

class CProjectionObliqueMercator : public CProjection
{
public:
				CProjectionObliqueMercator	();
	virtual		~CProjectionObliqueMercator	();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();

private:

	double		cos4, sfc, uc;
	double		A, B, D, D2, F, G, H;
	double		g0, l0, t0;

	bool		bHotine;
};

//////////////////////////////////////////////////////////////////////////////