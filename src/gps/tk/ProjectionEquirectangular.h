#pragma once

#include "Projection.h"

class CProjectionEquirectangular : public CProjection
{
public:
    CProjectionEquirectangular ();
    virtual ~CProjectionEquirectangular ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};
