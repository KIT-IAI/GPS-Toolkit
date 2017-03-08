#pragma once

#include "DatumSubGrid.h"

#define MODE_NADCON			1
#define MODE_NTV2			2

class CDatumGrid
{
public:
						CDatumGrid		();
	virtual				~CDatumGrid		();

	VOID				Clear			();

	LONG				Load			(LPCTSTR lptszFileName);

	BOOL				GetShift		(double dblLongitude, double dblLatitude, double & dblShiftX, double & dblShiftY);
	
	BOOL				Forward			(double & dblLongitude, double & dblLatitude);
	BOOL				Inverse			(double & dblLongitude, double & dblLatitude);

	CDatumSubGrid	**	m_pGrids;

	LONG				m_lGrids;

private:

	LONG				m_lMode;	
};
