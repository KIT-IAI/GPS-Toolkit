#pragma once

#include <string>

namespace gps
{
	namespace tk
	{
		using DatumId = std::size_t;

		class RecordDatum
		{
		public:
			RecordDatum(DatumId id, const std::wstring& name);
			RecordDatum(DatumId id, const std::wstring& name, double axis, double inverseFlattening, double scaleFactor,
				double primeMeridian, double translationX, double translationY, double translationZ, double rotationX,
				double rotationY, double rotationZ);

			
			void setAxis(double axis) { dblAxis = axis; }
			void setInverseFlatting(double inverseFlatting) { dblInverseFlattening = inverseFlatting; }
			void setScale(double scale) { dblScaleFactor = scale; }
			void setPrimeMeridian(double primeMeridian) { dblPrimeMeridian = primeMeridian; }
			void setTranslation(double x, double y, double z) { dblTranslationX = x; dblTranslationY = y; dblTranslationZ = z; }
			void setRotation(double x, double y, double z) { dblRotationX = x; dblRotationY = dblRotationY; dblRotationZ = z; }
			
		public:
			void		Clear();

			long		numId = 0;

			double		dblAxis = 0.0;
			double		dblInverseFlattening = 0.0;
			double		dblScaleFactor = 0.0;
			double		dblPrimeMeridian = 0.0;
			double		dblTranslationX = 0.0;
			double		dblTranslationY = 0.0;
			double		dblTranslationZ = 0.0;
			double		dblRotationX = 0.0;
			double		dblRotationY = 0.0;
			double		dblRotationZ = 0.0;

			std::wstring strName;
		};
	}
}

