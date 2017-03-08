#pragma once

/

class CProjectionKrovak : public CProjection
{
public:
				CProjectionKrovak			();
	virtual		~CProjectionKrovak			();

	void		Initialize					(CCfgMapProjection & proj);

	void		Forward						();
	void		Inverse						();

private:

	double		alfa, k, ro0, ssp1;
};

/
