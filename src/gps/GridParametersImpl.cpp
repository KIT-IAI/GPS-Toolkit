#include "DatumParametersImpl.hpp"

#include "GridParametersImpl.hpp"

namespace gps
{
    GridParametersImpl::GridParametersImpl()
        : m_impl(new CGpsGridParametersX())
        , m_datum(&m_impl->m_cGpsDatumParameters)
    {

    }

    GridParametersImpl::~GridParametersImpl()
    {

    }

    void GridParametersImpl::clear()
    {
        m_impl->Clear();
    }

    void GridParametersImpl::LoadFromId(long id)
    {
		m_impl->LoadFromId(id);
    }

    long GridParametersImpl::getId()
    {
        return m_impl->m_lId;
    }

    DatumParameters* GridParametersImpl::getDatum()
    {
        return &m_datum;
    }

    void GridParametersImpl::putDatum(DatumParameters* datumParameters)
    {
        DatumParametersImpl* datumParametersImpl = static_cast<DatumParametersImpl*>(datumParameters);
        m_impl->m_cGpsDatumParameters = *datumParametersImpl->getImpl();
    }

}