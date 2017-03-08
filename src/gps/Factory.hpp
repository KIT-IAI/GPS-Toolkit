#pragma once

#include "GridParameters.hpp"
#include "Constants.hpp"
#include "Projection.hpp"

namespace gps
{
    class Factory
    {
    public:
        GridParameters* createGridParameters();
        Projection* createProjection();
    };
}

