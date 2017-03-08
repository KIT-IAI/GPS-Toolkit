#pragma once

#include "Projection.h"

class CProjectionAzimuthalEq : public CProjection
{
public:
    CProjectionAzimuthalEq ();
    virtual ~CProjectionAzimuthalEq ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void ForwardSphere ();
    void ForwardEllipse ();

    void Inverse ();
    void InverseSphere ();
    void InverseEllipse ();

protected:

    double es, N1, G, He, clat0, slat0;
};
