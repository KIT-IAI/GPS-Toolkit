#pragma once

/

class CProjectionAlbers : public CProjection
{
public:
				CProjectionAlbers			();
	virtual		~CProjectionAlbers			();

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		Inverse						();

private:

	double		n, nq0, r0, C;
};

/
