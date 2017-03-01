#pragma once

#include <memory>

#include "tk/GpsDatumParametersX.h"

#include "DatumParameters.hpp"

namespace gps
{
	class DatumParametersImpl : public DatumParameters
	{
	public:
		DatumParametersImpl(CGpsDatumParametersX* impl);
		virtual ~DatumParametersImpl();

		virtual void putGridType(int gridType);

		virtual void putGrid(const std::basic_string<TCHAR>& path);

		CGpsDatumParametersX* getImpl() { return m_impl; }

	private:
		CGpsDatumParametersX* m_impl;
	};
}

