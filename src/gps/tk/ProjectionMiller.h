#pragma once

#include "Projection.h"

class CProjectionMiller : public CProjection
{
public:
    CProjectionMiller ();
    virtual ~CProjectionMiller ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};

