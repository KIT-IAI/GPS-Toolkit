#pragma once

#include "Projection.h"

class CProjectionPlateCarree : public CProjection
{
public:
    CProjectionPlateCarree ();
    virtual ~CProjectionPlateCarree ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};
