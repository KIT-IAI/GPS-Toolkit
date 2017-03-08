#pragma once

#include "Projection.h"

class CProjectionSinusoidal : public CProjection
{
public:
    CProjectionSinusoidal ();
    virtual ~CProjectionSinusoidal ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};
