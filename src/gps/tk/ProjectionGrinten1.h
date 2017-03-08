#pragma once

#include "Projection.h"

class CProjectionGrinten1 : public CProjection
{
public:
    CProjectionGrinten1 ();
    virtual ~CProjectionGrinten1 ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};
