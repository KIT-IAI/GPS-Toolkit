#pragma once

#include "Projection.h"

class CProjectionHammer : public CProjection
{
public:
    CProjectionHammer ();
    virtual ~CProjectionHammer ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};

