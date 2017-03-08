#pragma once

#include "Projection.h"

class CProjectionBonne : public CProjection
{
public:
    CProjectionBonne ();
    virtual ~CProjectionBonne ();

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void Inverse ();

    void ForwardS ();
    void InverseS ();

    void ForwardE ();
    void InverseE ();

    double E1, M1;
    double ssp1, csp1;
};
