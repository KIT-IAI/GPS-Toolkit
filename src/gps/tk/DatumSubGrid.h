#pragma once

class CDatumSubGrid
{
public:
    CDatumSubGrid ();
    virtual ~CDatumSubGrid ();

    void Clear ();

    double GetCorrectionLat (double dblLat, double dblLon);
    double GetCorrectionLon (double dblLat, double dblLon);

    bool PointInGrid (double dblLat, double dblLon);

    void AddCorrection (double dblLat, double dblLon);

    long Allocate (long lRecords);

    double m_dblLatMin;
    double m_dblLatMax;
    double m_dblLonMin;
    double m_dblLonMax;

    double m_dblLatSpc;
    double m_dblLonSpc;

    long m_lRecords;
    long m_lCurrent;

    long m_lRows;
    long m_lCols;

private:

    float * m_pdblLatitudes;
    float * m_pdblLongitudes;
};
