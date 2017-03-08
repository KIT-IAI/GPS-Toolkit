#pragma once

#include "Projection.h"

class CProjectionCylEqArea : public CProjection
{
public:

    CProjectionCylEqArea ();
    virtual ~CProjectionCylEqArea ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};

