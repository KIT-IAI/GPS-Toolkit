#pragma once

class CDatumSubGrid
{
public:
					CDatumSubGrid		();
	virtual			~CDatumSubGrid		();

	VOID			Clear				();

	double			GetCorrectionLat	(double dblLat, double dblLon);
	double			GetCorrectionLon	(double dblLat, double dblLon);

	BOOL			PointInGrid			(double dblLat, double dblLon);

	VOID			AddCorrection		(double dblLat, double dblLon);

	LONG			Allocate			(LONG lRecords);

	double			m_dblLatMin;
	double			m_dblLatMax;
	double			m_dblLonMin;
	double			m_dblLonMax;

	double			m_dblLatSpc;
	double			m_dblLonSpc;

	LONG			m_lRecords;
	LONG			m_lCurrent;

	LONG			m_lRows;
	LONG			m_lCols;

private:

	float		*	m_pdblLatitudes;
	float		*	m_pdblLongitudes;
};
