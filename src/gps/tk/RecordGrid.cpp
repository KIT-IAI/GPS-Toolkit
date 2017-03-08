#include "RecordGrid.hpp"

namespace gps
{
	namespace tk
	{
		RecordGrid::RecordGrid()
		{
		}

		RecordGrid::RecordGrid(std::size_t id, const std::wstring& name, ProjectionType projection, ProjectionUnit unit, std::size_t datum)
			: numId(id), strName(name), numProjection(projection), numUnits(unit), numDatum(datum)
		{
		}

		RecordGrid::RecordGrid(std::size_t id, const std::wstring& name, ProjectionType projection, ProjectionUnit unit,
			std::size_t datum, std::size_t statePlane, double scaleFactor, double falseNorthing, double falseEasting,
			double originLatitude, double originLongitute, double parallelNorth, double parallelSouth, double azimuth,
			double rectifiedGrid)
			: numId(id), strName(name), numProjection(projection), numUnits(unit), numDatum(datum)
			, numStatePlane(statePlane), dblScaleFactor(scaleFactor), dblFalseNorthing(falseNorthing)
			, dblFalseEasting(falseEasting), dblOriginLatitude(originLatitude), dblOriginLongitude(originLongitute)
			, dblParallelNorth(parallelNorth), dblParallelSouth(parallelSouth), dblAzimuth(azimuth)
			, dblRectifiedGrid(rectifiedGrid)
		{
		}

		void RecordGrid::Clear()
		{
			numId = 0L;
			numUnits = ProjectionUnit(0L);
			numProjection = ProjectionType(0L);
			numDatum = 0L;
			numStatePlane = 0L;

			dblScaleFactor = 0.0;
			dblFalseNorthing = 0.0;
			dblFalseEasting = 0.0;
			dblOriginLatitude = 0.0;
			dblOriginLongitude = 0.0;
			dblParallelNorth = 0.0;
			dblParallelSouth = 0.0;
			dblAzimuth = 0.0;
			dblRectifiedGrid = 0.0;

			strName.clear();
		}
	}
}
