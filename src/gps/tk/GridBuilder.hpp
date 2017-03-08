#pragma once

#include "RecordGrid.hpp"
#include "RecordDatum.hpp"

namespace gps
{
    namespace tk
    {
        using DatumId = std::size_t;
    }

    class LatLonOrigin
    {
    public:
        LatLonOrigin(double val1, double val2) : m_val1(val1), m_val2(val2) {}

        void assign(tk::RecordGrid& rg)
        {
            rg.setLatLonOrigin(m_val1, m_val2);
        }

    private:
        double m_val1;
        double m_val2;
    };

    class Delta
    {
    public:
        Delta(double x, double y, double z) : m_x(x), m_y(y), m_z(z) {}

        void assign(tk::RecordDatum& rd)
        {
            rd.setTranslation(m_x, m_y, m_z);
        }

    private:
        double m_x;
        double m_y;
        double m_z;
    };

    class Rotation
    {
    public:
        Rotation(double x, double y, double z) : m_x(x), m_y(y), m_z(z) {}

        void assign(tk::RecordDatum& rd)
        {
            rd.setRotation(m_x, m_y, m_z);
        }

    private:
        double m_x;
        double m_y;
        double m_z;
    };

    template <typename O, typename V, void (O::*MEMBER)(V)>
    class Setter
    {
    public:
        Setter(V val) : m_val(val) {}

        void assign(O& rg)
        {
            (rg.*MEMBER)(m_val);
        }

    private:
        V m_val;
    };

    using RectifiedGrid = Setter<tk::RecordGrid, double, &tk::RecordGrid::setRectifiedGrid>;
    using Scale = Setter<tk::RecordGrid, double, &tk::RecordGrid::setScaleFactor>;
    using FalseEasting = Setter<tk::RecordGrid, double, &tk::RecordGrid::setFalseEasting>;
    using FalseNorthing = Setter<tk::RecordGrid, double, &tk::RecordGrid::setFalseNorthing>;
    using ParallelNorth = Setter<tk::RecordGrid, double, &tk::RecordGrid::setParallelNorth>;
    using ParallelSouth = Setter<tk::RecordGrid, double, &tk::RecordGrid::setParallelSouth>;
    using StatePlane = Setter<tk::RecordGrid, std::size_t, &tk::RecordGrid::setStatePlane>;
    using Azimuth = Setter<tk::RecordGrid, double, &tk::RecordGrid::setAzimuth>;

    using AxisA = Setter<tk::RecordDatum, double, &tk::RecordDatum::setAxis>;
    using InverseFlattening = Setter<tk::RecordDatum, double, &tk::RecordDatum::setInverseFlatting>;
    using DatumScale = Setter<tk::RecordDatum, double, &tk::RecordDatum::setScale>;
    using Longitude = Setter<tk::RecordDatum, double, &tk::RecordDatum::setPrimeMeridian>;

    template <typename O>
    void assign(O& o)
    {}

    template <typename O, typename T, typename... Ts>
    void assign(O& o, T val, Ts... vals)
    {
        val.assign(o);
        assign(o, vals...);
    }

    template <typename... Ts>
    tk::RecordGrid buildGrid(tk::GridId id, const std::wstring& name, ProjectionType type, ProjectionUnit unit, tk::DatumId datum, Ts... vals)
    {
        tk::RecordGrid rg(id, name, type, unit, datum);

        assign(rg, vals...);

        return rg;
    }

    template <typename... Ts>
    tk::RecordDatum buildDatum(tk::DatumId id, const std::wstring& name, Ts... vals)
    {
        tk::RecordDatum rd(id, name);

        assign(rd, vals...);

        return rd;
    }
}
