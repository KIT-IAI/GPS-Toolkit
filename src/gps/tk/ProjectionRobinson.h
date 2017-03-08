#pragma once

#include "Projection.h"

class CProjectionRobinson : public CProjection
{
public:
    CProjectionRobinson ();
    virtual ~CProjectionRobinson ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};
