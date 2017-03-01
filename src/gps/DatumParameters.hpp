#pragma once

#include <string>
#include <wtypes.h>

namespace gps
{
	class DatumParameters
	{
	public:
		virtual ~DatumParameters() {}

		virtual void putGridType(int gridType) = 0;
		virtual void putGrid(const std::basic_string<TCHAR>& path) = 0;
	};
}

