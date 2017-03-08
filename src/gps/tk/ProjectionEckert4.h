#pragma once

#include "Projection.h"

class CProjectionEckert4 : public CProjection
{
public:
    CProjectionEckert4 ();
    virtual ~CProjectionEckert4 ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();

private:

    double ra0, ra1, q;
};