#pragma once

class CProjectionPolarStereo : public CProjection
{
public:
				CProjectionPolarStereo		();
	virtual		~CProjectionPolarStereo		();

	void		Initialize					(CCfgMapProjection & proj);

	void		Forward						();
	void		Inverse						();

private:

	double		slat0, clat0, hem;
};
