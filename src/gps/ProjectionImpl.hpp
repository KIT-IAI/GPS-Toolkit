#pragma once

#include "tk/Projections.h"

#include "GridParameters.hpp"

#include "Projection.hpp"

namespace gps
{
    class ProjectionImpl : public Projection
    {
    public:
        ProjectionImpl();
        virtual ~ProjectionImpl() {}

        virtual void toUTM(DatumParameters& toDatum);

        virtual void putLongitude(double longitude);
        virtual void putLatitude(double latitude);

        virtual std::string getVersion();

        virtual void clear();

        virtual double getEasting();

        virtual double getNorthing();

        virtual long getZone();

        virtual double getLongitude();

        virtual double getLatitude();

        virtual void putEasting(double easting);

        virtual void putNorthing(double northing);

        virtual void transformGrid(GridParameters& src, GridParameters& dst);

        virtual void putIAltitude(double ialtitude);

    private:
        virtual void checkZone(bool enableAutoZone);

        long getUTMParameters(double latitude, double longitude, CGpsGridParametersX* pParams);
        long getUTMParameters(CGpsGridParametersX* pParams);
        void doTransform(CGpsGridParametersX& gridSrc, CGpsGridParametersX& gridDst);
        void checkSourceDatum(const CGpsDatumParametersX& datumSrc);
        void checkDestinationDatum(const CGpsDatumParametersX& datumDst);

    private:
        double m_longitude;
        double m_latitude;
        double m_altitudeI;
        double m_altitudeO;

        double m_northing;
        double m_easting;

        long m_zone;

        std::unique_ptr<CProjections> m_projection;
    };
}

