#pragma once

#include "Projection.h"

class CProjectionGallStereo : public CProjection
{
public:
    CProjectionGallStereo ();
    virtual ~CProjectionGallStereo ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();
};
