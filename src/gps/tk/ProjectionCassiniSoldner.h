#pragma once

class CProjectionCassiniSoldner : public CProjection
{
public:
				CProjectionCassiniSoldner	();
	virtual		~CProjectionCassiniSoldner	();

	void		Initialize					(CCfgMapProjection & proj);

	void		Forward						();
	void		Inverse						();

	void		ForwardE					();
	void		InverseE					();

	void		ForwardS					();
	void		InverseS					();

private:

	double		M0, c0, c1, c2, c3, a0 , a1, a2, a3;

};
