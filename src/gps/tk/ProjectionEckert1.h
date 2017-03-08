#pragma once

#include "Projection.h"

class CProjectionEckert1 : public CProjection
{
public:
    CProjectionEckert1 ();
    virtual ~CProjectionEckert1 ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};
