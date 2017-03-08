#pragma once

class CProjectionLambertAzimuthal : public CProjection
{
public:
    CProjectionLambertAzimuthal ();
    virtual ~CProjectionLambertAzimuthal();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();

    void ForwardE ();
    void InverseE ();

    void ForwardS ();
    void InverseS ();

private:

    double q0, qp, clat0, slat0, sinb0, cosb0;

};
