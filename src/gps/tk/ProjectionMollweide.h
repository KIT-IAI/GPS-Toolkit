#pragma once

#include "Projection.h"

class CProjectionMollweide : public CProjection
{
public:
    CProjectionMollweide ();
    virtual ~CProjectionMollweide ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();

private:

    double r2, r8;
};
