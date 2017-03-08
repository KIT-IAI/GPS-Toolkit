#pragma once

class CProjectionMercator : public CProjection
{
public:
				CProjectionMercator			(void);
	virtual		~CProjectionMercator		(void);

	VOID		Initialize					(CCfgMapProjection & proj);

	VOID		Forward						();
	VOID		ForwardSphere				();
	VOID		ForwardEllipse				();

	VOID		Inverse						();
	VOID		InverseSphere				();
	VOID		InverseEllipse				();
};
