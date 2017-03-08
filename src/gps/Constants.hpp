#pragma once

#include <cstdint>
#include <string>

namespace gps
{
#include "tk/GpsConstantsX.h"

    enum class ProjectionType : std::int32_t
    {
        NONE = 0,
        LAMBERT1SP = 100,
        LAMBERT1SPWEST = 101,
        LAMBERT2SP = 110,
        LAMBERT2SPBELGIUM = 111,
        LAMBERTAEA = 120,
        ALBERSEQUALAREA = 130,
        MERCATOR1SP = 140,
        MERCATOR2SP = 150,
        TRANSVERSEMERCATOR = 160,
        TRANSVERSEMERCATORSOUTH = 161,
        OBLIQUEMERCATOR = 170,
        HOTINEOBLIQUEMERCATOR = 180,
        SWISSOBLIQUEMERCATOR = 190,
        LABORDEOBLIQUEMERCATOR = 200,
        STEREOGRAPHIC = 210,
        POLARSTEREOGRAPHIC = 220,
        CASSINI = 230,
        KROVAK = 240,
        POLYCONIC = 250,
        MOLLWEIDE = 260,
        ECKERTI = 271,
        ECKERTII = 272,
        ECKERTIII = 273,
        ECKERTIV = 274,
        ECKERTV = 275,
        ECKERTVI = 276,
        WINKELI = 281,
        CYLINDRICALEQUALAREA = 290,
        SINUSOIDAL = 300,
        MILLER = 310,
        BONNE = 320,
        GALLSTEREOGRAPHIC = 330,
        ROBINSON = 340,
        EQUIRECTANGULAR = 350,
        LOXIMUTHAL = 360,
        PLATECARREE = 370,
        GRINTENI = 381,
        ORTHOGRAPHIC = 390,
        GNOMONIC = 400,
        HAMMER = 410,
        QUARTICAUTHALIC = 420,
        AZIMUTHALEQUIDISTANT = 430
    };

    std::wstring toString(ProjectionType projectionType);

    enum class ProjectionUnit : std::int32_t
    {
        M = 9001,
        KM = 9036,
        CM = 9001,
        GLM = 9031,

        FT = 9002,
        FTBR = 9095,
        FTCLA = 9005,
        FTGC = 9094,
        FTIND = 9080,
        FTSE = 9041,
        FTUS = 9003,

        LK = 9098,
        LKCLA = 9039,
        LKSE = 9043,
        LKUS = 9034,

        MI = 9093,
        MIUS = 9035,
        NM = 9030,

        CH = 9097,
        CHBR = 9062,
        CHCLA = 9038,
        CHSE = 9042,
        CHUS = 9033,

        YDIND = 9084,
        YDCLA = 9037,
        YDSE = 9040
    };

    std::wstring toString(ProjectionUnit projectionType);
}

