#pragma once

#include "DatumParameters.hpp"

namespace gps
{
    class GridParameters
    {
    public:
        virtual ~GridParameters() {}

        virtual void LoadFromId(long id) = 0;
        virtual long getId() = 0;
        virtual DatumParameters* getDatum() = 0;
        virtual void putDatum(DatumParameters* datumParameters) = 0;

        virtual void clear() = 0;
    };
}

