#pragma once

class CProjectionMercator : public CProjection
{
public:
    CProjectionMercator (void);
    virtual ~CProjectionMercator (void);

    void Initialize (CCfgMapProjection & proj);

    void Forward ();
    void ForwardSphere ();
    void ForwardEllipse ();

    void Inverse ();
    void InverseSphere ();
    void InverseEllipse ();
};
