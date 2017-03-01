#pragma once

#include <boost/filesystem/path.hpp>

namespace gps
{
	class Settings
	{
	public:
		~Settings() {}

		/// Path to grids.dat
		void setGridsPath(const boost::filesystem::path& gridsPath) { m_gridsPath = gridsPath; }
		/// Path to datums.dat
		void setDatumsPath(const boost::filesystem::path& datumsPath) { m_datumsPath = datumsPath; }

		const boost::filesystem::path& getDatumsPath() const { return m_datumsPath; }
		const boost::filesystem::path& getGridsPath() const { return m_gridsPath; }

		static Settings& getInstance();

	private:
		Settings();
		Settings(Settings&) {}
		Settings& operator=(Settings&) {}

		boost::filesystem::path m_gridsPath;
		boost::filesystem::path m_datumsPath;
	};
}

