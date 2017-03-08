#include "Constants.hpp"

#include "DatumParametersImpl.hpp"

namespace gps
{
    DatumParametersImpl::DatumParametersImpl(CGpsDatumParametersX* impl)
        : m_impl(impl)
    {

    }

    DatumParametersImpl::~DatumParametersImpl()
    {

    }

    void DatumParametersImpl::putGridType(int gridType)
    {
        switch (gridType)
        {
        case GPS_GRIDTYPE_NONE:
        case GPS_GRIDTYPE_NADCON:
        case GPS_GRIDTYPE_HARN:
        case GPS_GRIDTYPE_NTV2:
            m_impl->m_lGridType = gridType;
            break;
        }
    }

    void DatumParametersImpl::putGrid(const std::wstring& path)
    {
        m_impl->m_strGrid = path;
    }

}

