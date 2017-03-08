#pragma once

#include <string>

namespace gps
{
    class DatumParameters
    {
    public:
        virtual ~DatumParameters() {}

        virtual void putGridType(int gridType) = 0;
        virtual void putGrid(const std::wstring& path) = 0;
    };
}

