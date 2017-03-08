#pragma once

/

class CProjectionLambert : public CProjection
{
public:
				CProjectionLambert			();
	virtual		~CProjectionLambert			();

	void		Initialize					(CCfgMapProjection & proj);

	void		Forward						();
	void		Inverse						();

private:

	double		n, f1, rf, ta;
};

/
