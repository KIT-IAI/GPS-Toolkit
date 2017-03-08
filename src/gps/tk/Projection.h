#pragma once

#include "ProjTypes.h"

#ifndef MIN
#define MIN(x,y) ((x < y) ? x : y)
#endif // MIN

#ifndef MAX
#define MAX(x,y) ((x > y) ? x : y)
#endif // MAX	

class CProjection
{
public:
						CProjection			();
	virtual				~CProjection		();

	double				DEG2RAD				(double x);
	double				RAD2DEG				(double x);

	double				SPHSN				(double lat);
	double				SPHSR				(double lat);
	double				TSFN				(double lat);
	double				TSFN2				(double lat);
	double				MSFN				(double lat);
	double				QSFN				(double lat);
	double				QSFN2				(double lat);
	double				AUTHLAT				(double lat);
	double				SIGN				(double x);
	double				INVMLFN				(double y);
	double				MLFN				(double lat);
	double				ASQRT				(double x);
	double				ASINZ				(double x);
	double				AASIN				(double x);

	virtual void		Forward				();
	virtual void		Inverse				();
	virtual void		Initialize			(CCfgMapProjection & proj);

	double				GetFalseEasting		();
	double				GetFalseNorthing	();

	double				m_fEasting,  m_fNorthing;
	double				m_fLatitude, m_fLongitude;
	double				m_fAltitude;

protected:

	double				a, b, f, e, e2, e4, e6, e8;
	double				lat0, lon0, fe, fn, sp1, sp2, k0, azi, rga;

	int					prj;

	bool				m_bSphere;
};
