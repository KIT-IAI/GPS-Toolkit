#pragma once

#include "Projection.h"

class CProjectionEckert6 : public CProjection
{
public:
    CProjectionEckert6 ();
    virtual ~CProjectionEckert6 ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();

private:

    double ra, rb, rc;
};
