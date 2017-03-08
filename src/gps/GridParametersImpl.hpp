#pragma once

#include <memory>

#include "tk/GpsGridParametersX.h"

#include "DatumParametersImpl.hpp"

#include "GridParameters.hpp"

namespace gps
{
    class GridParametersImpl : public GridParameters
    {
    public:
        GridParametersImpl();
        virtual ~GridParametersImpl();

        virtual void clear();

        virtual void LoadFromId(long id);

        virtual long getId();

        virtual DatumParameters* getDatum();

        virtual void putDatum(DatumParameters* datumParameters);

        CGpsGridParametersX& getImpl()
        {
            return *(m_impl.get());
        }
        const CGpsGridParametersX& getImpl() const
        {
            return *(m_impl.get());
        }

    private:
        std::unique_ptr<CGpsGridParametersX> m_impl;
        DatumParametersImpl m_datum;
    };

}

