#include "RecordDatum.hpp"

namespace gps
{
    namespace tk
    {
        RecordDatum::RecordDatum(DatumId id, const std::wstring& name, double axis, double inverseFlattening,
                                 double scaleFactor, double primeMeridian, double translationX, double translationY, double translationZ,
                                 double rotationX, double rotationY, double rotationZ)
            : numId(id), strName(name), dblAxis(axis), dblInverseFlattening(inverseFlattening)
            , dblScaleFactor(scaleFactor), dblPrimeMeridian(primeMeridian), dblTranslationX(translationX)
            , dblTranslationY(translationY), dblTranslationZ(translationZ), dblRotationX(rotationX)
            , dblRotationY(rotationY), dblRotationZ(rotationZ)
        {

        }

        RecordDatum::RecordDatum(DatumId id, const std::wstring& name)
            : numId(id), strName(name)
        {
        }

        void RecordDatum::Clear()
        {
            numId = 0L;

            dblAxis = 0.0;
            dblInverseFlattening = 0.0;
            dblScaleFactor = 0.0;
            dblPrimeMeridian = 0.0;
            dblTranslationX = 0.0;
            dblTranslationY = 0.0;
            dblTranslationZ = 0.0;
            dblRotationX = 0.0;
            dblRotationY = 0.0;
            dblRotationZ = 0.0;

            strName.clear();
        }
    }
}