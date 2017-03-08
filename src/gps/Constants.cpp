#include "Constants.hpp"

namespace gps
{
	
	std::wstring toString(ProjectionType projectionType)
	{
		switch (projectionType)
		{
		case ProjectionType::NONE:
			return L"NONE";
		case ProjectionType::LAMBERT1SP:
			return L"LAMBERT1SP";
		case ProjectionType::LAMBERT1SPWEST:
			return L"LAMBERT1SPWEST";
		case ProjectionType::LAMBERT2SP:
			return L"LAMBERT2SP";
		case ProjectionType::LAMBERT2SPBELGIUM:
			return L"LAMBERT2SPBELGIUM";
		case ProjectionType::LAMBERTAEA:
			return L"LAMBERTAEA";
		case ProjectionType::ALBERSEQUALAREA:
			return L"ALBERSEQUALAREA";
		case ProjectionType::MERCATOR1SP:
			return L"MERCATOR1SP";
		case ProjectionType::MERCATOR2SP:
			return L"MERCATOR2SP";
		case ProjectionType::TRANSVERSEMERCATOR:
			return L"TRANSVERSEMERCATOR";
		case ProjectionType::TRANSVERSEMERCATORSOUTH:
			return L"TRANSVERSEMERCATORSOUTH";
		case ProjectionType::OBLIQUEMERCATOR:
			return L"OBLIQUEMERCATOR";
		case ProjectionType::HOTINEOBLIQUEMERCATOR:
			return L"HOTINEOBLIQUEMERCATOR";
		case ProjectionType::SWISSOBLIQUEMERCATOR:
			return L"SWISSOBLIQUEMERCATOR";
		case ProjectionType::LABORDEOBLIQUEMERCATOR:
			return L"LABORDEOBLIQUEMERCATOR";
		case ProjectionType::STEREOGRAPHIC:
			return L"STEREOGRAPHIC";
		case ProjectionType::POLARSTEREOGRAPHIC:
			return L"POLARSTEREOGRAPHIC";
		case ProjectionType::CASSINI:
			return L"CASSINI";
		case ProjectionType::KROVAK:
			return L"KROVAK";
		case ProjectionType::POLYCONIC:
			return L"POLYCONIC";
		case ProjectionType::MOLLWEIDE:
			return L"MOLLWEIDE";
		case ProjectionType::ECKERTI:
			return L"ECKERTI";
		case ProjectionType::ECKERTII:
			return L"ECKERTII";
		case ProjectionType::ECKERTIII:
			return L"ECKERTIII";
		case ProjectionType::ECKERTIV:
			return L"ECKERTIV";
		case ProjectionType::ECKERTV:
			return L"ECKERTV";
		case ProjectionType::ECKERTVI:
			return L"ECKERTVI";
		case ProjectionType::WINKELI:
			return L"WINKELI";
		case ProjectionType::CYLINDRICALEQUALAREA:
			return L"CYLINDRICALEQUALAREA";
		case ProjectionType::SINUSOIDAL:
			return L"SINUSOIDAL";
		case ProjectionType::MILLER:
			return L"MILLER";
		case ProjectionType::BONNE:
			return L"BONNE";
		case ProjectionType::GALLSTEREOGRAPHIC:
			return L"GALLSTEREOGRAPHIC";
		case ProjectionType::ROBINSON:
			return L"ROBINSON";
		case ProjectionType::EQUIRECTANGULAR:
			return L"EQUIRECTANGULAR";
		case ProjectionType::LOXIMUTHAL:
			return L"LOXIMUTHAL";
		case ProjectionType::PLATECARREE:
			return L"PLATECARREE";
		case ProjectionType::GRINTENI:
			return L"GRINTENI";
		case ProjectionType::ORTHOGRAPHIC:
			return L"ORTHOGRAPHIC";
		case ProjectionType::GNOMONIC:
			return L"GNOMONIC";
		case ProjectionType::HAMMER:
			return L"HAMMER";
		case ProjectionType::QUARTICAUTHALIC:
			return L"QUARTICAUTHALIC";
		case ProjectionType::AZIMUTHALEQUIDISTANT:
			return L"AZIMUTHALEQUIDISTANT";
		}

		return std::wstring();
	}

	std::wstring toString(ProjectionUnit unit)
	{
		switch (unit)
		{
		case ProjectionUnit::M:
		//case ProjectionUnit::CM:
			return L"M";
		case ProjectionUnit::KM:
			return L"KM";
		case ProjectionUnit::GLM:
			return L"GLM";

		case ProjectionUnit::FT:
			return L"FT";
		case ProjectionUnit::FTBR:
			return L"FTBR";
		case ProjectionUnit::FTCLA:
			return L"FTCLA";
		case ProjectionUnit::FTGC:
			return L"FTGC";
		case ProjectionUnit::FTIND:
			return L"FTIND";
		case ProjectionUnit::FTSE:
			return L"FTSE";
		case ProjectionUnit::FTUS:
			return L"FTUS";

		case ProjectionUnit::LK:
			return L"LK";
		case ProjectionUnit::LKCLA:
			return L"LKCLA";
		case ProjectionUnit::LKSE:
			return L"LKSE";
		case ProjectionUnit::LKUS:
			return L"LKUS";

		case ProjectionUnit::MI:
			return L"MI";
		case ProjectionUnit::MIUS:
			return L"MIUS";
		case ProjectionUnit::NM:
			return L"NM";

		case ProjectionUnit::CH:
			return L"CH";
		case ProjectionUnit::CHBR:
			return L"CHBR";
		case ProjectionUnit::CHCLA:
			return L"CHCLA";
		case ProjectionUnit::CHSE:
			return L"CHSE";
		case ProjectionUnit::CHUS:
			return L"CHUS";

		case ProjectionUnit::YDIND:
			return L"YDIND";
		case ProjectionUnit::YDCLA:
			return L"YDCLA";
		case ProjectionUnit::YDSE:
			return L"YDSE";
		}

		return std::wstring();
	}
}
