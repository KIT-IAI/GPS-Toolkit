#pragma once

#include "Projection.h"

class CProjectionEckert3 : public CProjection
{
public:
    CProjectionEckert3 ();
    virtual ~CProjectionEckert3 ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};
