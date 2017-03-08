#pragma once

class CProjectionObliqueStereo : public CProjection
{
public:
    CProjectionObliqueStereo ();
    virtual ~CProjectionObliqueStereo ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();

private:

    double m, n, b0, rb;

};
