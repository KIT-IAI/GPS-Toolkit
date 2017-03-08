#pragma once

#include "Projection.h"

class CProjectionQuarticAuthalic : public CProjection
{
public:
    CProjectionQuarticAuthalic ();
    virtual ~CProjectionQuarticAuthalic ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};

