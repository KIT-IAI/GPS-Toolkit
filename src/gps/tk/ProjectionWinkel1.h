#pragma once

#include "Projection.h"

class CProjectionWinkel1 : public CProjection
{
public:
    CProjectionWinkel1 ();
    virtual ~CProjectionWinkel1 ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};
