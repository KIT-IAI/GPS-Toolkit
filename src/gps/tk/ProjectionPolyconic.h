#pragma once

class CProjectionPolyconic : public CProjection
{
public:

				CProjectionPolyconic		();
	virtual		~CProjectionPolyconic		();

	void		Initialize					(CCfgMapProjection & proj);

	void		Forward						();
	void		Inverse						();

	void		ForwardE					();
	void		InverseE					();

	void		ForwardS					();
	void		InverseS					();
	
private:

	double		M0, c0, c1, c2, c3;
};
