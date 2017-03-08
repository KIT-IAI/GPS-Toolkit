#pragma once

#include <string>

#include "IdTypes.hpp"

#include "../Constants.hpp"

namespace gps
{
    namespace tk
    {


        class RecordGrid
        {
        public:
            RecordGrid();
            RecordGrid(std::size_t id, const std::wstring& name, ProjectionType projection, ProjectionUnit unit,
                       std::size_t datum);
            RecordGrid(std::size_t id, const std::wstring& name, ProjectionType projection, ProjectionUnit unit,
                       std::size_t datum, std::size_t statePlane, double scaleFactor, double falseNorthing,
                       double falseEasting, double originLatitude, double originLongitute, double parallelNorth,
                       double parallelSouth, double azimuth, double rectifiedGrid);

            void setStatePlane(std::size_t statePlane)
            {
                numStatePlane = statePlane;
            }
            void setScaleFactor(double scaleFactor)
            {
                dblScaleFactor = scaleFactor;
            }
            void setFalseNorthing(double falseNorthing)
            {
                dblFalseNorthing = falseNorthing;
            }
            void setFalseEasting(double falseEasting)
            {
                dblFalseEasting = falseEasting;
            }
            void setLatLonOrigin(double latOrigin, double lonOrigin)
            {
                dblOriginLatitude = latOrigin;
                dblOriginLongitude = lonOrigin;
            }
            void setParallelNorth(double parallelNorth)
            {
                dblParallelNorth = parallelNorth;
            }
            void setParallelSouth(double parallelSouth)
            {
                dblParallelSouth = parallelSouth;
            }
            void setAzimuth(double azimuth)
            {
                dblAzimuth = azimuth;
            }
            void setRectifiedGrid(double rectifiedGrid)
            {
                dblRectifiedGrid = rectifiedGrid;
            }

        public:
            void Clear();

        public:
            GridId numId;

            std::wstring strName;

            ProjectionType numProjection;
            ProjectionUnit numUnits;

            DatumId numDatum = 0;

            StatePlaneId numStatePlane = 0;

            double dblScaleFactor = 0.0;
            double dblFalseNorthing = 0.0;
            double dblFalseEasting = 0.0;
            double dblOriginLatitude = 0.0;
            double dblOriginLongitude = 0.0;
            double dblParallelNorth = 0.0;
            double dblParallelSouth = 0.0;
            double dblAzimuth = 0.0;
            double dblRectifiedGrid = 0.0;
        };
    }
}
