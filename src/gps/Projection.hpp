#pragma once

#include <string>

namespace gps
{
    class Projection
    {
    public:
        virtual ~Projection() {}

        virtual double getEasting() = 0;
        virtual double getNorthing() = 0;
        virtual long getZone() = 0;

        virtual void toUTM(DatumParameters& toDatum) = 0;

        virtual void putLongitude(double longitude) = 0;
        virtual void putLatitude(double latitude) = 0;

        virtual double getLongitude() = 0;
        virtual double getLatitude() = 0;

        virtual void putEasting(double easting) = 0;
        virtual void putNorthing(double northing) = 0;
        virtual void putIAltitude(double ialtitude) = 0;

        virtual void transformGrid(GridParameters& src, GridParameters& dst) = 0;

        virtual std::string getVersion() = 0;

        virtual void clear() = 0;

    };
}

