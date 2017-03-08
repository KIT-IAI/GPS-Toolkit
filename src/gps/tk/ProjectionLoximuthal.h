#pragma once

#include "Projection.h"

class CProjectionLoximuthal : public CProjection
{
public:
    CProjectionLoximuthal ();
    virtual ~CProjectionLoximuthal ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();

protected:

    double tsp1;
    double csp1;
};
