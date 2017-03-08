#pragma once

#include "Projection.h"

class CProjectionSwissMercator : public CProjection
{
public:
    CProjectionSwissMercator ();
    virtual ~CProjectionSwissMercator ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();

private:

    double c, ee, ep;
    double K, R;
};
