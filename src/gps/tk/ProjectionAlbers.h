#pragma once

class CProjectionAlbers : public CProjection
{
public:
    CProjectionAlbers ();
    virtual ~CProjectionAlbers ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();

private:

    double n, nq0, r0, C;
};

