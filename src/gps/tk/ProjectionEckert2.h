#pragma once

#include "Projection.h"

class CProjectionEckert2 : public CProjection
{
public:
    CProjectionEckert2 ();
    virtual ~CProjectionEckert2 ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};
