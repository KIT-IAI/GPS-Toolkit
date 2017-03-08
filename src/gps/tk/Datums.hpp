#pragma once

#include <unordered_map>

#include "RecordDatum.hpp"

class CGpsDatumParametersX;

namespace gps
{
    namespace tk
    {
        class Datums
        {
        public:
	        Datums& operator=(Datums& rhs) = delete;
            Datums(Datums& rhs) = delete;

            static Datums& getInstance();

            void load(DatumId id, CGpsDatumParametersX* params);

        private:
            Datums();

        private:
            std::unordered_map<DatumId, const RecordDatum*> m_datums;
        };
    }
}

