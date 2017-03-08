#pragma once

#include "Projection.h"

class CProjectionEckert5 : public CProjection
{
public:
    CProjectionEckert5 ();
    virtual ~CProjectionEckert5 ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};
