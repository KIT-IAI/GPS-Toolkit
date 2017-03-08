#pragma once

#include <string>

#include "DatumSubGrid.h"

#define MODE_NADCON 1
#define MODE_NTV2 2

class CDatumGrid
{
public:
    CDatumGrid ();
    virtual ~CDatumGrid ();

    void Clear ();

    long Load (const std::wstring& lptszFileName);

    bool GetShift (double dblLongitude, double dblLatitude, double & dblShiftX, double & dblShiftY);

    bool Forward (double & dblLongitude, double & dblLatitude);
    bool Inverse (double & dblLongitude, double & dblLatitude);

    CDatumSubGrid ** m_pGrids;

    long m_lGrids;

private:

    long m_lMode;
};
