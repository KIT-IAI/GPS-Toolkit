#pragma once

#include <unordered_map>

#include "RecordGrid.hpp"

class CGpsGridParametersX;

namespace gps
{
	namespace tk
	{
		

		class Grids
		{
		public:
			Grids(Grids& rhs) = delete;
			Grids& operator=(Grids& rhs) = delete;

			static Grids& getInstance();

			void load(GridId id, CGpsGridParametersX* params);

		private:
			Grids() {}

		private:
			std::unordered_map<GridId, RecordGrid> m_grids;
		};

	}
}

