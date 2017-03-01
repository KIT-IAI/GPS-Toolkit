#include "Settings.hpp"

namespace gps
{
	Settings::Settings()
		: m_datumsPath("datums.dat")
		, m_gridsPath("grids.dat")
	{

	}

	Settings& Settings::getInstance()
	{
		static Settings instance;
		return instance;
	}
}

