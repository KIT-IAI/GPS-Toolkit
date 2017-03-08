#include "GridParametersImpl.hpp"
#include "ProjectionImpl.hpp"

#include "Factory.hpp"

namespace gps
{
    GridParameters* Factory::createGridParameters()
    {
        return new GridParametersImpl();
    }

    Projection* Factory::createProjection()
    {
        return new ProjectionImpl();
    }

}

