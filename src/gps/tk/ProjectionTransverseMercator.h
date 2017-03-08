#pragma once

class CProjectionTransverseMercator : public CProjection
{
public:
    CProjectionTransverseMercator ();
    virtual ~CProjectionTransverseMercator ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();

private:

    double ap, bp, cp, dp, ep;
    double tn, tn2, tn3, tn4, tn5;
    double e1;
};
