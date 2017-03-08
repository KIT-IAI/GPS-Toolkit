#include <array>

#include "GpsGridParametersX.h"
#include "GridBuilder.hpp"
#include "Datums.hpp"

#include "Grids.hpp"

namespace gps
{
	namespace tk
	{
		const std::array<RecordGrid, 3840> GRIDS{
			buildGrid(2165
			, L"Abidjan 1987 / TM 5 NW"
			, ProjectionType::TRANSVERSEMERCATOR
			, ProjectionUnit::M
			, 4143
			, Scale(0.9996)
			, FalseEasting(500000.0)
			, LatLonOrigin(0.0, -5.0)),
			buildGrid(2043
				, L"Abidjan 1987 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4143
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(2041
				, L"Abidjan 1987 / UTM zone 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4143
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(2136
				, L"Accra / Ghana National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTGC
				, 4168
				, Scale(0.99975)
				, FalseEasting(900000.0)
				, LatLonOrigin(4.6666666666666696, -1.0)),
			buildGrid(2137
				, L"Accra / TM 1 NW"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4168
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -1.0)),
			buildGrid(20135
				, L"Adindan / UTM zone 35N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4201
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(20136
				, L"Adindan / UTM zone 36N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4201
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(20137
				, L"Adindan / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4201
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(20138
				, L"Adindan / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4201
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(20538
				, L"Afgooye / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4205
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(20539
				, L"Afgooye / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4205
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(5825
				, L"AGD66 / ACT Standard Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(1.000086)
				, FalseNorthing(600000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(-35.3177359999999965, 149.0092950000000087)),
			buildGrid(20248
				, L"AGD66 / AMG zone 48"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(20249
				, L"AGD66 / AMG zone 49"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(20250
				, L"AGD66 / AMG zone 50"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(20251
				, L"AGD66 / AMG zone 51"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(20252
				, L"AGD66 / AMG zone 52"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(20253
				, L"AGD66 / AMG zone 53"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(20254
				, L"AGD66 / AMG zone 54"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(20255
				, L"AGD66 / AMG zone 55"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(20256
				, L"AGD66 / AMG zone 56"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(20257
				, L"AGD66 / AMG zone 57"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(20258
				, L"AGD66 / AMG zone 58"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4202
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(3110
				, L"AGD66 / Vicgrid66"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4202
				, FalseNorthing(4500000.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(-37.0, 145.0)
				, ParallelNorth(-36.0)
				, ParallelSouth(-38.0)),
			buildGrid(20348
				, L"AGD84 / AMG zone 48"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4203
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(20349
				, L"AGD84 / AMG zone 49"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4203
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(20350
				, L"AGD84 / AMG zone 50"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4203
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(20351
				, L"AGD84 / AMG zone 51"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4203
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(20352
				, L"AGD84 / AMG zone 52"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4203
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(20353
				, L"AGD84 / AMG zone 53"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4203
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(20354
				, L"AGD84 / AMG zone 54"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4203
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(20355
				, L"AGD84 / AMG zone 55"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4203
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(20356
				, L"AGD84 / AMG zone 56"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4203
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(20357
				, L"AGD84 / AMG zone 57"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4203
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(20358
				, L"AGD84 / AMG zone 58"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4203
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(2318
				, L"Ain el Abd / Aramco Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4204
				, LatLonOrigin(25.0895100000000006, 48.0)
				, ParallelNorth(17.0)
				, ParallelSouth(33.0)),
			buildGrid(20499
				, L"Ain el Abd / Bahrain Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4204
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(20436
				, L"Ain el Abd / UTM zone 36N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4204
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(20437
				, L"Ain el Abd / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4204
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(20438
				, L"Ain el Abd / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4204
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(20439
				, L"Ain el Abd / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4204
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(20440
				, L"Ain el Abd / UTM zone 40N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4204
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(2462
				, L"Albanian 1987 / Gauss-Kruger zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4191
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(3102
				, L"American Samoa 1962 / American Samoa Lambert"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::FTUS
				, 4169
				, StatePlane(15300)
				, Scale(1.0)
				, FalseNorthing(312234.6500000000232831)
				, FalseEasting(500000.0)
				, LatLonOrigin(-14.2666666666666995, -170.0)),
			buildGrid(28992
				, L"Amersfoort / RD New"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4289
				, Scale(0.999908)
				, FalseNorthing(463000.0)
				, FalseEasting(155000.0)
				, LatLonOrigin(52.1561605599999965, 5.3876388899999998)),
			buildGrid(28991
				, L"Amersfoort / RD Old"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4289
				, Scale(0.9999079)
				, LatLonOrigin(52.1561605555556014, 5.3876388888888904)),
			buildGrid(2296
				, L"Ammassalik 1958 / Greenland zone 7 east"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4196
				, Scale(1.0)
				, LatLonOrigin(64.5, -40.0)),
			buildGrid(2000
				, L"Anguilla 1957 / British West Indies Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4600
				, Scale(0.9995000000000001)
				, FalseEasting(400000.0)
				, LatLonOrigin(0.0, -62.0)),
			buildGrid(2001
				, L"Antigua 1943 / British West Indies Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4601
				, Scale(0.9995000000000001)
				, FalseEasting(400000.0)
				, LatLonOrigin(0.0, -62.0)),
			buildGrid(20822
				, L"Aratu / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4208
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(20823
				, L"Aratu / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4208
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(20824
				, L"Aratu / UTM zone 24S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4208
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(5337
				, L"Aratu / UTM zone 25S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4208
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(20934
				, L"Arc 1950 / UTM zone 34S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4209
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(20935
				, L"Arc 1950 / UTM zone 35S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4209
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(20936
				, L"Arc 1950 / UTM zone 36S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4209
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(21095
				, L"Arc 1960 / UTM zone 35N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4210
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(21035
				, L"Arc 1960 / UTM zone 35S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4210
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(21096
				, L"Arc 1960 / UTM zone 36N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4210
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(21036
				, L"Arc 1960 / UTM zone 36S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4210
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(21097
				, L"Arc 1960 / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4210
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(21037
				, L"Arc 1960 / UTM zone 37S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4210
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(27500
				, L"ATF (Paris) / Nord de Guerre"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4901
				, Scale(0.99950908)
				, FalseNorthing(300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(49.5, 5.4000000000000004)),
			buildGrid(2294
				, L"ATS77 / MTM Nova Scotia zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4122
				, Scale(0.9999)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, -61.5)),
			buildGrid(2295
				, L"ATS77 / MTM Nova Scotia zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4122
				, Scale(0.9999)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, -64.5)),
			buildGrid(2200
				, L"ATS77 / New Brunswick Stereographic (ATS77)"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4122
				, Scale(0.999912)
				, FalseNorthing(800000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(46.5, -66.5)),
			buildGrid(2290
				, L"ATS77 / Prince Edward Isl. Stereographic (ATS77)"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4122
				, Scale(0.999912)
				, FalseNorthing(400000.0)
				, FalseEasting(700000.0)
				, LatLonOrigin(47.25, -63.0)),
			buildGrid(2219
				, L"ATS77 / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4122
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(2220
				, L"ATS77 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4122
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(2189
				, L"Azores Central 1948 / UTM zone 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4183
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(3063
				, L"Azores Central 1995 / UTM zone 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4665
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(2188
				, L"Azores Occidental 1939 / UTM zone 25N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4182
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(2190
				, L"Azores Oriental 1940 / UTM zone 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4184
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(3062
				, L"Azores Oriental 1995 / UTM zone 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4664
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(21292
				, L"Barbados 1938 / Barbados National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4212
				, Scale(0.9999986)
				, FalseNorthing(75000.0)
				, FalseEasting(30000.0)
				, LatLonOrigin(13.1763888888888996, -59.5597222222221987)),
			buildGrid(21291
				, L"Barbados 1938 / British West Indies Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4212
				, Scale(0.9995000000000001)
				, FalseEasting(400000.0)
				, LatLonOrigin(0.0, -62.0)),
			buildGrid(5330
				, L"Batavia (Jakarta) / NEIEZ"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4813
				, Scale(0.997)
				, FalseNorthing(900000.0)
				, FalseEasting(3900000.0)
				, LatLonOrigin(0.0, 3.1922809999999999)),
			buildGrid(21100
				, L"Batavia (Jakarta) / NEIEZ"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4813
				, Scale(0.997)
				, FalseNorthing(900000.0)
				, FalseEasting(3900000.0)
				, LatLonOrigin(0.0, 110.0)),
			buildGrid(3001
				, L"Batavia / NEIEZ"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4211
				, Scale(0.997)
				, FalseNorthing(900000.0)
				, FalseEasting(3900000.0)
				, LatLonOrigin(0.0, 110.0)),
			buildGrid(2308
				, L"Batavia / TM 109 SE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4211
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 109.0)),
			buildGrid(21148
				, L"Batavia / UTM zone 48S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4211
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(21149
				, L"Batavia / UTM zone 49S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4211
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(21150
				, L"Batavia / UTM zone 50S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4211
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(3770
				, L"BDA2000 / Bermuda 2000 National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4762
				, Scale(1.0)
				, FalseNorthing(100000.0)
				, FalseEasting(550000.0)
				, LatLonOrigin(32.0, -64.75)),
			buildGrid(2931
				, L"Beduaram / TM 13 NE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4213
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 13.0)),
			buildGrid(2431
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 102E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(2432
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2433
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 108E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(2434
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2435
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 114E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(2436
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2437
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 120E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(2438
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2439
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 126E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(2440
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2441
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 132E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(2442
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(2422
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2423
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 78E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(2424
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2425
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 84E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(2426
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2427
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 90E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(2428
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2429
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 96E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(2430
				, L"Beijing 1954 / 3-degree Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(2401
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 25"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(25500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2402
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(26500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(2403
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(27500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2404
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(28500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(2405
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 29"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(29500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2406
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(30500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(2407
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(31500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2408
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 32"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(32500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(2409
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 33"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(33500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(2410
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 34"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(34500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(2411
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 35"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(35500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2412
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 36"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(36500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(2413
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 37"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(37500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2414
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 38"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(38500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(2415
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 39"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(39500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2416
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 40"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(40500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(2417
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 41"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(41500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2418
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 42"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(42500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(2419
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 43"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(43500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2420
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 44"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(44500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(2421
				, L"Beijing 1954 / 3-degree Gauss-Kruger zone 45"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(45500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(21473
				, L"Beijing 1954 / Gauss-Kruger 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(21474
				, L"Beijing 1954 / Gauss-Kruger 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(21475
				, L"Beijing 1954 / Gauss-Kruger 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(21476
				, L"Beijing 1954 / Gauss-Kruger 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(21477
				, L"Beijing 1954 / Gauss-Kruger 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(21478
				, L"Beijing 1954 / Gauss-Kruger 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(21479
				, L"Beijing 1954 / Gauss-Kruger 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(21480
				, L"Beijing 1954 / Gauss-Kruger 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(21481
				, L"Beijing 1954 / Gauss-Kruger 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(21482
				, L"Beijing 1954 / Gauss-Kruger 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(21483
				, L"Beijing 1954 / Gauss-Kruger 23N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(21458
				, L"Beijing 1954 / Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(21459
				, L"Beijing 1954 / Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(21460
				, L"Beijing 1954 / Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(21461
				, L"Beijing 1954 / Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(21462
				, L"Beijing 1954 / Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(21463
				, L"Beijing 1954 / Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(21453
				, L"Beijing 1954 / Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(21454
				, L"Beijing 1954 / Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(21455
				, L"Beijing 1954 / Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(21456
				, L"Beijing 1954 / Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(21457
				, L"Beijing 1954 / Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(21413
				, L"Beijing 1954 / Gauss-Kruger zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(13500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(21414
				, L"Beijing 1954 / Gauss-Kruger zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(14500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(21415
				, L"Beijing 1954 / Gauss-Kruger zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(15500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(21416
				, L"Beijing 1954 / Gauss-Kruger zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(16500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(21417
				, L"Beijing 1954 / Gauss-Kruger zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(17500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(21418
				, L"Beijing 1954 / Gauss-Kruger zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(18500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(21419
				, L"Beijing 1954 / Gauss-Kruger zone 19"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(19500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(21420
				, L"Beijing 1954 / Gauss-Kruger zone 20"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(20500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(21421
				, L"Beijing 1954 / Gauss-Kruger zone 21"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(21500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(21422
				, L"Beijing 1954 / Gauss-Kruger zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(22500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(21423
				, L"Beijing 1954 / Gauss-Kruger zone 23"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4214
				, Scale(1.0)
				, FalseEasting(23500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(21500
				, L"Belge 1950 (Brussels) / Belge Lambert 50"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4809
				, FalseNorthing(5400000.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(90.0, 0.0)
				, ParallelNorth(49.8333333333333002)
				, ParallelSouth(51.1666666666666998)),
			buildGrid(31300
				, L"Belge 1972 / Belge Lambert 72"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4313
				, FalseNorthing(5400088.4378000004217029)
				, FalseEasting(150000.0125600000028498)
				, LatLonOrigin(90.0, 4.3569397222222204)
				, ParallelNorth(49.8333333333333002)
				, ParallelSouth(51.1666666666666998)),
			buildGrid(31370
				, L"Belge 1972 / Belgian Lambert 72"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4313
				, FalseNorthing(5400088.4380000000819564)
				, FalseEasting(150000.0130000000062864)
				, LatLonOrigin(90.0, 4.3674866699999999)
				, ParallelNorth(51.1666672300000016)
				, ParallelSouth(49.8333338999999995)),
			buildGrid(3769
				, L"Bermuda 1957 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4216
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(21780
				, L"Bern 1898 (Bern) / LV03C"
				, ProjectionType::SWISSOBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4801
				, Scale(1.0)
				, LatLonOrigin(46.9524055600000025, 0.0)
				, Azimuth(90.0)
				, RectifiedGrid(90.0)),
			buildGrid(2095
				, L"Bissau / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4165
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(21897
				, L"Bogota 1975 / Colombia Bogota zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4218
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(4.5990472222222198, -74.0809166666666954)),
			buildGrid(21899
				, L"Bogota 1975 / Colombia East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4218
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(4.5990472222222198, -68.0809166666666954)),
			buildGrid(21898
				, L"Bogota 1975 / Colombia East Central zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4218
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(4.5990472222222198, -71.0809166666666954)),
			buildGrid(21896
				, L"Bogota 1975 / Colombia West zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4218
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(4.5990472222222198, -77.0809166666666954)),
			buildGrid(21817
				, L"Bogota 1975 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4218
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(21818
				, L"Bogota 1975 / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4218
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(4474
				, L"Cadastre 1997 / UTM zone 38S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4632
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(22091
				, L"Camacupa / TM 11.30 SE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4220
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 11.5)),
			buildGrid(22092
				, L"Camacupa / TM 12 SE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4220
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(22032
				, L"Camacupa / UTM zone 32S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4220
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(22033
				, L"Camacupa / UTM zone 33S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4220
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(22191
				, L"Campo Inchauspe / Argentina 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4221
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(-90.0, -72.0)),
			buildGrid(22192
				, L"Campo Inchauspe / Argentina 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4221
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(-90.0, -69.0)),
			buildGrid(22193
				, L"Campo Inchauspe / Argentina 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4221
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(-90.0, -66.0)),
			buildGrid(22194
				, L"Campo Inchauspe / Argentina 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4221
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(-90.0, -63.0)),
			buildGrid(22195
				, L"Campo Inchauspe / Argentina 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4221
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(-90.0, -60.0)),
			buildGrid(22196
				, L"Campo Inchauspe / Argentina 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4221
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(-90.0, -57.0)),
			buildGrid(22197
				, L"Campo Inchauspe / Argentina 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4221
				, Scale(1.0)
				, FalseEasting(7500000.0)
				, LatLonOrigin(-90.0, -54.0)),
			buildGrid(2315
				, L"Campo Inchauspe / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4221
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(2316
				, L"Campo Inchauspe / UTM zone 20S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4221
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(22275
				, L"Cape / Lo15"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4222
				, Scale(1.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(22277
				, L"Cape / Lo17"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4222
				, Scale(1.0)
				, LatLonOrigin(0.0, 17.0)),
			buildGrid(22279
				, L"Cape / Lo19"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4222
				, Scale(1.0)
				, LatLonOrigin(0.0, 19.0)),
			buildGrid(22281
				, L"Cape / Lo21"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4222
				, Scale(1.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(22283
				, L"Cape / Lo23"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4222
				, Scale(1.0)
				, LatLonOrigin(0.0, 23.0)),
			buildGrid(22285
				, L"Cape / Lo25"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4222
				, Scale(1.0)
				, LatLonOrigin(0.0, 25.0)),
			buildGrid(22287
				, L"Cape / Lo27"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4222
				, Scale(1.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(22289
				, L"Cape / Lo29"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4222
				, Scale(1.0)
				, LatLonOrigin(0.0, 29.0)),
			buildGrid(22291
				, L"Cape / Lo31"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4222
				, Scale(1.0)
				, LatLonOrigin(0.0, 31.0)),
			buildGrid(22293
				, L"Cape / Lo33"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4222
				, Scale(1.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(22234
				, L"Cape / UTM zone 34S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4222
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(22235
				, L"Cape / UTM zone 35S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4222
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(22236
				, L"Cape / UTM zone 36S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4222
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(22300
				, L"Carthage (Paris) / Tunisia Mining Grid"
				, ProjectionType::NONE
				, ProjectionUnit::KM
				, 4816
				, FalseNorthing(582.0)
				, FalseEasting(270.0)
				, LatLonOrigin(34.9377569999999977, 7.051005)),
			buildGrid(22391
				, L"Carthage / Nord Tunisie"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4223
				, Scale(0.999625544)
				, FalseNorthing(300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.0, 9.9000000000000004)),
			buildGrid(22392
				, L"Carthage / Sud Tunisie"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4223
				, Scale(0.999625769)
				, FalseNorthing(300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(33.2999999999999972, 9.9000000000000004)),
			buildGrid(2088
				, L"Carthage / TM 11 NE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4223
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 11.0)),
			buildGrid(22332
				, L"Carthage / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4223
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(4543
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 102E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(4544
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(4545
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 108E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(4546
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(4547
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 114E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(4548
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(4549
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 120E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(4550
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(4551
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 126E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(4552
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(4553
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 132E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(4554
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(4534
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(4535
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 78E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(4536
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(4537
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 84E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(4538
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(4539
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 90E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(4540
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(4541
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 96E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(4542
				, L"CGCS2000 / 3-degree Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(4513
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 25"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(25500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(4514
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(26500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(4515
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(27500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(4516
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(28500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(4517
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 29"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(29500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(4518
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(30500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(4519
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(31500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(4520
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 32"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(32500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(4521
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 33"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(33500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(4522
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 34"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(34500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(4523
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 35"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(35500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(4524
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 36"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(36500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(4525
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 37"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(37500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(4526
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 38"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(38500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(4527
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 39"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(39500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(4528
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 40"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(40500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(4529
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 41"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(41500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(4530
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 42"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(42500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(4531
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 43"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(43500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(4532
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 44"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(44500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(4533
				, L"CGCS2000 / 3-degree Gauss-Kruger zone 45"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(45500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(4507
				, L"CGCS2000 / Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(4508
				, L"CGCS2000 / Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(4509
				, L"CGCS2000 / Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(4510
				, L"CGCS2000 / Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(4511
				, L"CGCS2000 / Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(4512
				, L"CGCS2000 / Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(4502
				, L"CGCS2000 / Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(4503
				, L"CGCS2000 / Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(4504
				, L"CGCS2000 / Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(4505
				, L"CGCS2000 / Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(4506
				, L"CGCS2000 / Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(4491
				, L"CGCS2000 / Gauss-Kruger zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(13500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(4492
				, L"CGCS2000 / Gauss-Kruger zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(14500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(4493
				, L"CGCS2000 / Gauss-Kruger zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(15500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(4494
				, L"CGCS2000 / Gauss-Kruger zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(16500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(4495
				, L"CGCS2000 / Gauss-Kruger zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(17500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(4496
				, L"CGCS2000 / Gauss-Kruger zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(18500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(4497
				, L"CGCS2000 / Gauss-Kruger zone 19"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(19500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(4498
				, L"CGCS2000 / Gauss-Kruger zone 20"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(20500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(4499
				, L"CGCS2000 / Gauss-Kruger zone 21"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(21500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(4500
				, L"CGCS2000 / Gauss-Kruger zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(22500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(4501
				, L"CGCS2000 / Gauss-Kruger zone 23"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4490
				, Scale(1.0)
				, FalseEasting(23500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(21781
				, L"CH1903 / LV03"
				, ProjectionType::SWISSOBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4149
				, Scale(1.0)
				, FalseNorthing(200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(46.9524055600000025, 7.4395833299999996)
				, Azimuth(90.0)
				, RectifiedGrid(90.0)),
			buildGrid(21782
				, L"CH1903 / LV03C-G"
				, ProjectionType::SWISSOBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4149
				, Scale(1.0)
				, LatLonOrigin(46.9524055600000025, 7.4395833299999996)
				, Azimuth(90.0)
				, RectifiedGrid(90.0)),
			buildGrid(2056
				, L"CH1903+ / LV95"
				, ProjectionType::SWISSOBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4150
				, Scale(1.0)
				, FalseNorthing(1200000.0)
				, FalseEasting(2600000.0)
				, LatLonOrigin(46.9524055600000025, 7.4395833299999996)
				, Azimuth(90.0)
				, RectifiedGrid(90.0)),
			buildGrid(5518
				, L"Chatham Islands 1971 / Chatham Islands Map Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4672
				, Scale(1.0)
				, FalseNorthing(650000.0)
				, FalseEasting(350000.0)
				, LatLonOrigin(-44.0, 176.3000000000000114)),
			buildGrid(5519
				, L"Chatham Islands 1979 / Chatham Islands Map Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4673
				, Scale(1.0)
				, FalseNorthing(650000.0)
				, FalseEasting(350000.0)
				, LatLonOrigin(-44.0, -176.3000000000000114)),
			buildGrid(2081
				, L"Chos Malal 1914 / Argentina zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4160
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(-90.0, -69.0)),
			buildGrid(4071
				, L"Chua / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4224
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(2980
				, L"Combani 1950 / UTM zone 38S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4632
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(31528
				, L"Conakry 1905 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4315
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(31529
				, L"Conakry 1905 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4315
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(22521
				, L"Corrego Alegre / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4225
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(22522
				, L"Corrego Alegre / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4225
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(22523
				, L"Corrego Alegre / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4225
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(22524
				, L"Corrego Alegre / UTM zone 24S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4225
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(22525
				, L"Corrego Alegre / UTM zone 25S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4225
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(5536
				, L"Corrego Alegre 1961 / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5524
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(50008
				, L"Corrego Alegre 1961 / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5524
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(5537
				, L"Corrego Alegre 1961 / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5524
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(50009
				, L"Corrego Alegre 1961 / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5524
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(5538
				, L"Corrego Alegre 1961 / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5524
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(50010
				, L"Corrego Alegre 1961 / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5524
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(5539
				, L"Corrego Alegre 1961 / UTM zone 24S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5524
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(50011
				, L"Corrego Alegre 1961 / UTM zone 24S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5524
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(5367
				, L"Costa Rica 2005 / Costa Rica TM 2005"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5365
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -84.0)),
			buildGrid(3854
				, L"County ST74"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(0.99999506)
				, FalseNorthing(-6500620.1206999998539686)
				, FalseEasting(100182.7406000000046333)
				, LatLonOrigin(0.0, 18.0578700000000012)),
			buildGrid(3312
				, L"CSG67 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4623
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(2971
				, L"CSG67 / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4623
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(3461
				, L"Dabola 1981 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4155
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(3462
				, L"Dabola 1981 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4155
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(27493
				, L"Datum 73 / Modified Portuguese Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4274
				, Scale(1.0)
				, FalseNorthing(-86.9899999999999949)
				, FalseEasting(180.5980000000000132)
				, LatLonOrigin(39.6666666666666998, -8.1319061111111104)),
			buildGrid(27429
				, L"Datum 73 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4274
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(5682
				, L"DB_REF / 3-degree Gauss-Kruger zone 2 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5681
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(0.0, 6.0)),
			buildGrid(5683
				, L"DB_REF / 3-degree Gauss-Kruger zone 3 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5681
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(5684
				, L"DB_REF / 3-degree Gauss-Kruger zone 4 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5681
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(5685
				, L"DB_REF / 3-degree Gauss-Kruger zone 5 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5681
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(31600
				, L"Dealul Piscului 1930 / Stereo 33"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4316
				, Scale(0.9996667)
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(45.8999999999999986, 25.3924658888888999)),
			buildGrid(31700
				, L"Dealul Piscului 1970/ Stereo 70"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4317
				, Scale(0.99975)
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(46.0, 25.0)),
			buildGrid(22780
				, L"Deir ez Zor / Levant Stereographic"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4227
				, Scale(0.9995341)
				, LatLonOrigin(34.2000000000000028, 39.1499999999999986)),
			buildGrid(22700
				, L"Deir ez Zor / Levant Zone"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4227
				, Scale(0.9996256)
				, FalseNorthing(300000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(34.6499999999999986, 37.3500000000000014)),
			buildGrid(22770
				, L"Deir ez Zor / Syria Lambert"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4227
				, Scale(0.9996256)
				, FalseNorthing(300000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(34.6499999999999986, 37.3500000000000014)),
			buildGrid(23830
				, L"DGN95 / Indonesia TM-3 zone 46.2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 94.5)),
			buildGrid(23831
				, L"DGN95 / Indonesia TM-3 zone 47.1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 97.5)),
			buildGrid(23832
				, L"DGN95 / Indonesia TM-3 zone 47.2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 100.5)),
			buildGrid(23833
				, L"DGN95 / Indonesia TM-3 zone 48.1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 103.5)),
			buildGrid(23834
				, L"DGN95 / Indonesia TM-3 zone 48.2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 106.5)),
			buildGrid(23835
				, L"DGN95 / Indonesia TM-3 zone 49.1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 109.5)),
			buildGrid(23836
				, L"DGN95 / Indonesia TM-3 zone 49.2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 112.5)),
			buildGrid(23837
				, L"DGN95 / Indonesia TM-3 zone 50.1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 115.5)),
			buildGrid(23838
				, L"DGN95 / Indonesia TM-3 zone 50.2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 118.5)),
			buildGrid(23839
				, L"DGN95 / Indonesia TM-3 zone 51.1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 121.5)),
			buildGrid(23840
				, L"DGN95 / Indonesia TM-3 zone 51.2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 124.5)),
			buildGrid(23841
				, L"DGN95 / Indonesia TM-3 zone 52.1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 127.5)),
			buildGrid(23842
				, L"DGN95 / Indonesia TM-3 zone 52.2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 130.5)),
			buildGrid(23843
				, L"DGN95 / Indonesia TM-3 zone 53.1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 133.5)),
			buildGrid(23844
				, L"DGN95 / Indonesia TM-3 zone 53.2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 136.5)),
			buildGrid(23845
				, L"DGN95 / Indonesia TM-3 zone 54.1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9999)
				, FalseNorthing(1500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 139.5)),
			buildGrid(23866
				, L"DGN95 / UTM zone 46N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(23867
				, L"DGN95 / UTM zone 47N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(23877
				, L"DGN95 / UTM zone 47S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(23868
				, L"DGN95 / UTM zone 48N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(23878
				, L"DGN95 / UTM zone 48S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(23869
				, L"DGN95 / UTM zone 49N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(23879
				, L"DGN95 / UTM zone 49S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(23870
				, L"DGN95 / UTM zone 50N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(23880
				, L"DGN95 / UTM zone 50S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(23871
				, L"DGN95 / UTM zone 51N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(23881
				, L"DGN95 / UTM zone 51S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(23872
				, L"DGN95 / UTM zone 52N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(23882
				, L"DGN95 / UTM zone 52S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(23883
				, L"DGN95 / UTM zone 53S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(23884
				, L"DGN95 / UTM zone 54S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4755
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(31461
				, L"DHDN / 3-degree Gauss zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(31462
				, L"DHDN / 3-degree Gauss zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(0.0, 6.0)),
			buildGrid(31463
				, L"DHDN / 3-degree Gauss zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(31464
				, L"DHDN / 3-degree Gauss zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(31465
				, L"DHDN / 3-degree Gauss zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(5520
				, L"DHDN / 3-degree Gauss-Kruger zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(5680
				, L"DHDN / 3-degree Gauss-Kruger zone 1 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(31466
				, L"DHDN / 3-degree Gauss-Kruger zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(0.0, 6.0)),
			buildGrid(5676
				, L"DHDN / 3-degree Gauss-Kruger zone 2 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(0.0, 6.0)),
			buildGrid(31467
				, L"DHDN / 3-degree Gauss-Kruger zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(5677
				, L"DHDN / 3-degree Gauss-Kruger zone 3 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(31468
				, L"DHDN / 3-degree Gauss-Kruger zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(5678
				, L"DHDN / 3-degree Gauss-Kruger zone 4 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(31469
				, L"DHDN / 3-degree Gauss-Kruger zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(5679
				, L"DHDN / 3-degree Gauss-Kruger zone 5 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4314
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3068
				, L"DHDN / Soldner Berlin"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4314
				, FalseNorthing(10000.0)
				, FalseEasting(40000.0)
				, LatLonOrigin(52.4186482777777982, 13.6272036666667002)),
			buildGrid(2002
				, L"Dominica 1945 / British West Indies Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4602
				, Scale(0.9995000000000001)
				, FalseEasting(400000.0)
				, LatLonOrigin(0.0, -62.0)),
			buildGrid(22832
				, L"Douala / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4228
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3119
				, L"Douala 1948 / AEF west"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4192
				, Scale(0.999)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(0.0, 10.5)),
			buildGrid(2214
				, L"Douala 1948 / AOF west"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4192
				, Scale(0.999)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(0.0, 10.5)),
			buildGrid(5266
				, L"DRUKREF 03 / Bhutan National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(5292
				, L"DRUKREF 03 / Bumthang TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 90.7333332999999982)),
			buildGrid(5293
				, L"DRUKREF 03 / Chhukha TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 89.5499999999999972)),
			buildGrid(5294
				, L"DRUKREF 03 / Dagana TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 89.5499999999999972)),
			buildGrid(5295
				, L"DRUKREF 03 / Gasa TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 90.0333333333300061)),
			buildGrid(5296
				, L"DRUKREF 03 / Ha TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 90.1500000000000057)),
			buildGrid(5297
				, L"DRUKREF 03 / Lhuentse TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 91.1333333000000039)),
			buildGrid(5298
				, L"DRUKREF 03 / Mongar TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 91.2333333299999936)),
			buildGrid(5299
				, L"DRUKREF 03 / Paro TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 89.3499999999999943)),
			buildGrid(5300
				, L"DRUKREF 03 / Pemagatshel TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 91.3499999999999943)),
			buildGrid(5301
				, L"DRUKREF 03 / Punakha TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 89.8499999999999943)),
			buildGrid(5302
				, L"DRUKREF 03 / Samdrup Jongkhar TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 91.5666666660000033)),
			buildGrid(5303
				, L"DRUKREF 03 / Samtse TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 89.0666666599999957)),
			buildGrid(5304
				, L"DRUKREF 03 / Sarpang TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 90.2666666599999985)),
			buildGrid(5305
				, L"DRUKREF 03 / Thimphu TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 89.5499999999999972)),
			buildGrid(5306
				, L"DRUKREF 03 / Trashigang TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 91.75)),
			buildGrid(5307
				, L"DRUKREF 03 / Trongsa TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 90.5)),
			buildGrid(5308
				, L"DRUKREF 03 / Tsirang TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 90.1666666600000042)),
			buildGrid(5309
				, L"DRUKREF 03 / Wangdue Phodrang TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 90.1166666665999969)),
			buildGrid(5310
				, L"DRUKREF 03 / Yangtse TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 91.5666666599999957)),
			buildGrid(5311
				, L"DRUKREF 03 / Zhemgang TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5264
				, Scale(1.0)
				, FalseNorthing(-2500000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 90.8666666660000004)),
			buildGrid(2207
				, L"ED50 / 3-degree Gauss-Kruger zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(10500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(2208
				, L"ED50 / 3-degree Gauss-Kruger zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(11500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(2209
				, L"ED50 / 3-degree Gauss-Kruger zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(12500000.0)
				, LatLonOrigin(0.0, 36.0)),
			buildGrid(2210
				, L"ED50 / 3-degree Gauss-Kruger zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(13500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(2211
				, L"ED50 / 3-degree Gauss-Kruger zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(14500000.0)
				, LatLonOrigin(0.0, 42.0)),
			buildGrid(2212
				, L"ED50 / 3-degree Gauss-Kruger zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(15500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2206
				, L"ED50 / 3-degree Gauss-Kruger zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(9500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(2192
				, L"ED50 / France EuroLambert"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4230
				, Scale(0.99987742)
				, FalseNorthing(2200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(46.7999999999999972, 2.33722916666667)),
			buildGrid(3893
				, L"ED50 / Iraq National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9994)
				, FalseEasting(800000.0)
				, LatLonOrigin(29.0262683300000006, 46.5)),
			buildGrid(3066
				, L"ED50 / Jordan TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9998)
				, FalseNorthing(-3000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 37.0)),
			buildGrid(50001
				, L"ED50 / LTM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.99995)
				, FalseNorthing(-3500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(5643
				, L"ED50 / SPBA LCC"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4230
				, FalseEasting(815000.0)
				, LatLonOrigin(48.0, 10.0)
				, ParallelNorth(52.3333333333300033)
				, ParallelSouth(54.6666666659999976)),
			buildGrid(23090
				, L"ED50 / TM 0 N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)),
			buildGrid(23095
				, L"ED50 / TM 5 NE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 5.0)),
			buildGrid(5627
				, L"ED50 / TM 6 NE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 6.0)),
			buildGrid(2319
				, L"ED50 / TM27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(2320
				, L"ED50 / TM30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(2321
				, L"ED50 / TM33"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(2322
				, L"ED50 / TM36"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 36.0)),
			buildGrid(2323
				, L"ED50 / TM39"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(2324
				, L"ED50 / TM42"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 42.0)),
			buildGrid(2325
				, L"ED50 / TM45"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(23028
				, L"ED50 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(23029
				, L"ED50 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(23030
				, L"ED50 / UTM zone 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(23031
				, L"ED50 / UTM zone 31N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(23032
				, L"ED50 / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(23033
				, L"ED50 / UTM zone 33N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(23034
				, L"ED50 / UTM zone 34N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(23035
				, L"ED50 / UTM zone 35N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(23036
				, L"ED50 / UTM zone 36N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(23037
				, L"ED50 / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(23038
				, L"ED50 / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4230
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2058
				, L"ED50(ED77) / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4154
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2059
				, L"ED50(ED77) / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4154
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2060
				, L"ED50(ED77) / UTM zone 40N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4154
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(2061
				, L"ED50(ED77) / UTM zone 41N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4154
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(22991
				, L"Egypt 1907 / Blue Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4229
				, Scale(1.0)
				, FalseNorthing(1100000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(30.0, 35.0)),
			buildGrid(22994
				, L"Egypt 1907 / Extended Purple Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4229
				, Scale(1.0)
				, FalseNorthing(1200000.0)
				, FalseEasting(700000.0)
				, LatLonOrigin(30.0, 27.0)),
			buildGrid(22993
				, L"Egypt 1907 / Purple Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4229
				, Scale(1.0)
				, FalseNorthing(200000.0)
				, FalseEasting(700000.0)
				, LatLonOrigin(30.0, 27.0)),
			buildGrid(22992
				, L"Egypt 1907 / Red Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4229
				, Scale(1.0)
				, FalseNorthing(810000.0)
				, FalseEasting(615000.0)
				, LatLonOrigin(30.0, 31.0)),
			buildGrid(3355
				, L"Egypt Gulf of Suez S-650 TL / Red Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4706
				, Scale(1.0)
				, FalseNorthing(810000.0)
				, FalseEasting(615000.0)
				, LatLonOrigin(30.0, 31.0)),
			buildGrid(2073
				, L"ELD79 / Libya zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 19.0)),
			buildGrid(2074
				, L"ELD79 / Libya zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2075
				, L"ELD79 / Libya zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 23.0)),
			buildGrid(2076
				, L"ELD79 / Libya zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 25.0)),
			buildGrid(2068
				, L"ELD79 / Libya zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(2069
				, L"ELD79 / Libya zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 11.0)),
			buildGrid(2070
				, L"ELD79 / Libya zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 13.0)),
			buildGrid(2071
				, L"ELD79 / Libya zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(2072
				, L"ELD79 / Libya zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 17.0)),
			buildGrid(2087
				, L"ELD79 / TM 12 NE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(2077
				, L"ELD79 / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(2078
				, L"ELD79 / UTM zone 33N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(2079
				, L"ELD79 / UTM zone 34N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2080
				, L"ELD79 / UTM zone 35N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4159
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(3300
				, L"Estonian Coordinate System of 1992"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4133
				, FalseNorthing(6375000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(57.5175539305556001, 24.0)
				, ParallelNorth(59.3333333333333002)
				, ParallelSouth(58.0)),
			buildGrid(3301
				, L"Estonian Coordinate System of 1997"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4180
				, FalseNorthing(6375000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(57.5175539305556001, 24.0)
				, ParallelNorth(59.3333333333333002)
				, ParallelSouth(58.0)),
			buildGrid(3416
				, L"ETRS89 / Austria Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4258
				, FalseNorthing(400000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(47.5, 13.3333333333333002)
				, ParallelNorth(49.0)
				, ParallelSouth(46.0)),
			buildGrid(3447
				, L"ETRS89 / Belgian Lambert 2005"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4258
				, FalseNorthing(166262.0)
				, FalseEasting(150328.0)
				, LatLonOrigin(50.7978149999999999, 4.3592158333333302)
				, ParallelNorth(49.8333333333333002)
				, ParallelSouth(51.1666666666666998)),
			buildGrid(3812
				, L"ETRS89 / Belgian Lambert 2008"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4258
				, FalseNorthing(665262.0)
				, FalseEasting(649328.0)
				, LatLonOrigin(50.7978149999999999, 4.3592158333333302)
				, ParallelNorth(49.8333333333333002)
				, ParallelSouth(51.1666666666666998)),
			buildGrid(4093
				, L"ETRS89 / DKTM1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.99998)
				, FalseNorthing(-5000000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(4094
				, L"ETRS89 / DKTM2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.99998)
				, FalseNorthing(-5000000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(0.0, 10.0)),
			buildGrid(4095
				, L"ETRS89 / DKTM3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.99998)
				, FalseNorthing(-5000000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(0.0, 11.75)),
			buildGrid(4096
				, L"ETRS89 / DKTM4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(-5000000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3126
				, L"ETRS89 / ETRS-GK19FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 19.0)),
			buildGrid(3127
				, L"ETRS89 / ETRS-GK20FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 20.0)),
			buildGrid(3128
				, L"ETRS89 / ETRS-GK21FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(3129
				, L"ETRS89 / ETRS-GK22FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 22.0)),
			buildGrid(3130
				, L"ETRS89 / ETRS-GK23FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 23.0)),
			buildGrid(3131
				, L"ETRS89 / ETRS-GK24FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(3132
				, L"ETRS89 / ETRS-GK25FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 25.0)),
			buildGrid(3133
				, L"ETRS89 / ETRS-GK26FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 26.0)),
			buildGrid(3134
				, L"ETRS89 / ETRS-GK27FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(3135
				, L"ETRS89 / ETRS-GK28FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 28.0)),
			buildGrid(3136
				, L"ETRS89 / ETRS-GK29FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 29.0)),
			buildGrid(3137
				, L"ETRS89 / ETRS-GK30FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(3138
				, L"ETRS89 / ETRS-GK31FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 31.0)),
			buildGrid(3035
				, L"ETRS89 / ETRS-LAEA"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 4258
				, FalseNorthing(3210000.0)
				, FalseEasting(4321000.0)
				, LatLonOrigin(52.0, 10.0)),
			buildGrid(3034
				, L"ETRS89 / ETRS-LCC"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4258
				, FalseNorthing(2800000.0)
				, FalseEasting(4000000.0)
				, LatLonOrigin(52.0, 10.0)
				, ParallelNorth(35.0)
				, ParallelSouth(65.0)),
			buildGrid(3067
				, L"ETRS89 / ETRS-TM35FIN"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(3145
				, L"ETRS89 / Faroe Lambert"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(62.0, -9.0)),
			buildGrid(5316
				, L"ETRS89 / Faroe TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.999997)
				, FalseNorthing(-6000000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, -7.0)),
			buildGrid(3108
				, L"ETRS89 / Guernsey Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.999997)
				, FalseNorthing(50000.0)
				, FalseEasting(47000.0)
				, LatLonOrigin(49.5, -2.4166666666666701)),
			buildGrid(3109
				, L"ETRS89 / Jersey Transverse Mercator"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9999999000000001)
				, FalseNorthing(70000.0)
				, FalseEasting(40000.0)
				, LatLonOrigin(49.2250000000000014, -2.1349999999999998)),
			buildGrid(2198
				, L"ETRS89 / Kp2000 Bornholm"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseEasting(900000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(2196
				, L"ETRS89 / Kp2000 Jutland"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.99995)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 9.5)),
			buildGrid(2197
				, L"ETRS89 / Kp2000 Zealand"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.99995)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(5243
				, L"ETRS89 / LCC Germany (E-N)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4258
				, LatLonOrigin(51.0, 10.5)
				, ParallelNorth(48.6666666599999971)
				, ParallelSouth(53.6666665999999992)),
			buildGrid(5110
				, L"ETRS89 / NTM zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 10.5)),
			buildGrid(5111
				, L"ETRS89 / NTM zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 11.5)),
			buildGrid(5112
				, L"ETRS89 / NTM zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 12.5)),
			buildGrid(5113
				, L"ETRS89 / NTM zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 13.5)),
			buildGrid(5114
				, L"ETRS89 / NTM zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 14.5)),
			buildGrid(5115
				, L"ETRS89 / NTM zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 15.5)),
			buildGrid(5116
				, L"ETRS89 / NTM zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 16.5)),
			buildGrid(5117
				, L"ETRS89 / NTM zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 17.5)),
			buildGrid(5118
				, L"ETRS89 / NTM zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 18.5)),
			buildGrid(5119
				, L"ETRS89 / NTM zone 19"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 19.5)),
			buildGrid(5120
				, L"ETRS89 / NTM zone 20"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 20.5)),
			buildGrid(5121
				, L"ETRS89 / NTM zone 21"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 21.5)),
			buildGrid(5122
				, L"ETRS89 / NTM zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 22.5)),
			buildGrid(5123
				, L"ETRS89 / NTM zone 23"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 23.5)),
			buildGrid(5124
				, L"ETRS89 / NTM zone 24"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 24.5)),
			buildGrid(5125
				, L"ETRS89 / NTM zone 25"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 25.5)),
			buildGrid(5126
				, L"ETRS89 / NTM zone 26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 26.5)),
			buildGrid(5127
				, L"ETRS89 / NTM zone 27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 27.5)),
			buildGrid(5128
				, L"ETRS89 / NTM zone 28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 28.5)),
			buildGrid(5129
				, L"ETRS89 / NTM zone 29"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 29.5)),
			buildGrid(5130
				, L"ETRS89 / NTM zone 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 30.5)),
			buildGrid(5105
				, L"ETRS89 / NTM zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 5.5)),
			buildGrid(5106
				, L"ETRS89 / NTM zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 6.5)),
			buildGrid(5107
				, L"ETRS89 / NTM zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 7.5)),
			buildGrid(5108
				, L"ETRS89 / NTM zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 8.5)),
			buildGrid(5109
				, L"ETRS89 / NTM zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(58.0, 9.5)),
			buildGrid(2176
				, L"ETRS89 / Poland CS2000 zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.999923)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(2177
				, L"ETRS89 / Poland CS2000 zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.999923)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(2178
				, L"ETRS89 / Poland CS2000 zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.999923)
				, FalseEasting(7500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2179
				, L"ETRS89 / Poland CS2000 zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.999923)
				, FalseEasting(8500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(2180
				, L"ETRS89 / Poland CS92"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9993)
				, FalseNorthing(-5300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 19.0)),
			buildGrid(3763
				, L"ETRS89 / Portugal TM06"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(1.0)
				, LatLonOrigin(39.6682583333332985, -8.1331083333333396)),
			buildGrid(2213
				, L"ETRS89 / TM 30 NE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(25884
				, L"ETRS89 / TM Baltic93"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(3038
				, L"ETRS89 / TM26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(3039
				, L"ETRS89 / TM27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -21.0)),
			buildGrid(3040
				, L"ETRS89 / TM28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(3041
				, L"ETRS89 / TM29"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(3042
				, L"ETRS89 / TM30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(3043
				, L"ETRS89 / TM31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(3044
				, L"ETRS89 / TM32"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3045
				, L"ETRS89 / TM33"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3046
				, L"ETRS89 / TM34"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(3047
				, L"ETRS89 / TM35"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(5048
				, L"ETRS89 / TM35FIN(N,E)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(3048
				, L"ETRS89 / TM36"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(3049
				, L"ETRS89 / TM37"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(3050
				, L"ETRS89 / TM38"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(3051
				, L"ETRS89 / TM39"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(25828
				, L"ETRS89 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(25829
				, L"ETRS89 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(25830
				, L"ETRS89 / UTM zone 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(25831
				, L"ETRS89 / UTM zone 31N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(5651
				, L"ETRS89 / UTM zone 31N (N-zE)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(31500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(5649
				, L"ETRS89 / UTM zone 31N (zE-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(31500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(25832
				, L"ETRS89 / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(5652
				, L"ETRS89 / UTM zone 32N (N-zE)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(32500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(25833
				, L"ETRS89 / UTM zone 33N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(5653
				, L"ETRS89 / UTM zone 33N (N-zE)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(33500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(5650
				, L"ETRS89 / UTM zone 33N (zE-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(33500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(25834
				, L"ETRS89 / UTM zone 34N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(25835
				, L"ETRS89 / UTM zone 35N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(25836
				, L"ETRS89 / UTM zone 36N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(25837
				, L"ETRS89 / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(25838
				, L"ETRS89 / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(4647
				, L"ETRS89 / UTM zone N32"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4258
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(23239
				, L"Fahud / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4232
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(23240
				, L"Fahud / UTM zone 40N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4232
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(3303
				, L"Fatu Iva 72 / UTM zone 7S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4688
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(3144
				, L"FD54 / Faroe Lambert"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4741
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(62.0, -9.0)),
			buildGrid(3374
				, L"FD54 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4741
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(3200
				, L"FD58 / Iraq zone"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4132
				, Scale(0.9987864078000001)
				, FalseNorthing(1166200.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(32.5, 45.0)),
			buildGrid(5596
				, L"FEH2010 / Fehmarnbelt TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5593
				, Scale(1.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(0.0, 11.3333333330000006)),
			buildGrid(3142
				, L"Fiji 1956 / UTM zone 1S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4721
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(3141
				, L"Fiji 1956 / UTM zone 60S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4721
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(3460
				, L"Fiji 1986 / Fiji Map Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4720
				, Scale(0.99985)
				, FalseNorthing(4000000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(-17.0, 178.75)),
			buildGrid(3173
				, L"fk89 / Faroe Lambert FK89"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4753
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(700000.0)
				, LatLonOrigin(62.0, -9.0)),
			buildGrid(2969
				, L"Fort Marigot / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4621
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(2312
				, L"Garoua / UTM zone 33N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4197
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3577
				, L"GDA94 / Australian Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4283
				, LatLonOrigin(0.0, 132.0)
				, ParallelNorth(-18.0)
				, ParallelSouth(-36.0)),
			buildGrid(3113
				, L"GDA94 / BCSG02"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.99999)
				, FalseNorthing(100000.0)
				, FalseEasting(50000.0)
				, LatLonOrigin(-28.0, 153.0)),
			buildGrid(3112
				, L"GDA94 / Geoscience Australia Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4283
				, LatLonOrigin(0.0, 134.0)
				, ParallelNorth(-18.0)
				, ParallelSouth(-36.0)),
			buildGrid(28348
				, L"GDA94 / MGA zone 48"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(28349
				, L"GDA94 / MGA zone 49"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(28350
				, L"GDA94 / MGA zone 50"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(28351
				, L"GDA94 / MGA zone 51"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(28352
				, L"GDA94 / MGA zone 52"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(28353
				, L"GDA94 / MGA zone 53"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(28354
				, L"GDA94 / MGA zone 54"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(28355
				, L"GDA94 / MGA zone 55"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(28356
				, L"GDA94 / MGA zone 56"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(28357
				, L"GDA94 / MGA zone 57"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(28358
				, L"GDA94 / MGA zone 58"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4283
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(3308
				, L"GDA94 / NSW Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4283
				, FalseNorthing(4500000.0)
				, FalseEasting(9300000.0)
				, LatLonOrigin(-33.25, 147.0)
				, ParallelNorth(-30.75)
				, ParallelSouth(-35.75)),
			buildGrid(3107
				, L"GDA94 / SA Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4283
				, FalseNorthing(2000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(-32.0, 135.0)
				, ParallelNorth(-28.0)
				, ParallelSouth(-36.0)),
			buildGrid(3111
				, L"GDA94 / Vicgrid94"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4283
				, FalseNorthing(2500000.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(-37.0, 145.0)
				, ParallelNorth(-36.0)
				, ParallelSouth(-38.0)),
			buildGrid(5247
				, L"GDBD2009 / Brunei BRSO"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 5246
				, Scale(0.99984)
				, LatLonOrigin(4.0, 115.0)
				, Azimuth(53.315809999999999)
				, RectifiedGrid(53.1301020000000008)),
			buildGrid(3376
				, L"GDM2000 / East Malaysia BRSO"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4742
				, Scale(0.99984)
				, LatLonOrigin(4.0, 115.0)
				, Azimuth(53.315809950000002)
				, RectifiedGrid(53.1301023611110992)),
			buildGrid(3377
				, L"GDM2000 / Johor Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4742
				, FalseNorthing(8758.319999999999709)
				, FalseEasting(-14810.5619999999998981)
				, LatLonOrigin(2.12167974444445, 103.4279362361109946)),
			buildGrid(3383
				, L"GDM2000 / Kedah and Perlis Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4742
				, LatLonOrigin(5.9646727138888904, 100.6363711111110035)),
			buildGrid(3385
				, L"GDM2000 / Kelantan Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4742
				, FalseNorthing(8739.8940000000002328)
				, FalseEasting(13227.8510000000005675)
				, LatLonOrigin(5.97254365833333, 102.2952416694439961)),
			buildGrid(3379
				, L"GDM2000 / PahangGrid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4742
				, FalseNorthing(6485.8580000000001746)
				, FalseEasting(-7368.2280000000000655)
				, LatLonOrigin(3.7693880888888902, 102.3682989833330055)),
			buildGrid(3375
				, L"GDM2000 / Peninsula RSO"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4742
				, Scale(0.99984)
				, FalseEasting(804671.0)
				, LatLonOrigin(4.0, 102.25)
				, Azimuth(323.0257964699999889)
				, RectifiedGrid(323.1301023600000235)),
			buildGrid(3384
				, L"GDM2000 / Perak Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4742
				, FalseNorthing(133454.7790000000095461)
				, FalseEasting(-1.7689999999999999)
				, LatLonOrigin(4.8590630222222204, 100.8154105861109997)),
			buildGrid(3382
				, L"GDM2000 / Pinang Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4742
				, FalseNorthing(62.2830000000000013)
				, FalseEasting(-23.4140000000000015)
				, LatLonOrigin(5.4215175416666703, 100.3443769638890046)),
			buildGrid(3380
				, L"GDM2000 / Selangor Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4742
				, FalseNorthing(56464.0489999999990687)
				, FalseEasting(-34836.1610000000000582)
				, LatLonOrigin(3.68464905, 101.3891079138890063)),
			buildGrid(3378
				, L"GDM2000 / Sembilan and Melaka Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4742
				, FalseNorthing(-4240.5730000000003201)
				, FalseEasting(3673.7849999999998545)
				, LatLonOrigin(2.68234763611111, 101.9749050416670002)),
			buildGrid(3381
				, L"GDM2000 / Terengganu Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4742
				, FalseNorthing(3371.8949999999999818)
				, FalseEasting(19594.2449999999989814)
				, LatLonOrigin(4.9762852000000004, 103.0702756249999936)),
			buildGrid(2100
				, L"GGRS87 / Greek Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4121
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(3178
				, L"GR96 / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(3179
				, L"GR96 / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(3180
				, L"GR96 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(3181
				, L"GR96 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(3182
				, L"GR96 / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(3183
				, L"GR96 / UTM zone 23N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(3184
				, L"GR96 / UTM zone 24N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(3185
				, L"GR96 / UTM zone 25N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(3186
				, L"GR96 / UTM zone 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(3187
				, L"GR96 / UTM zone 27N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -21.0)),
			buildGrid(3188
				, L"GR96 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(3189
				, L"GR96 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4747
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(3356
				, L"Grand Cayman 1959 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4723
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(2999
				, L"Grand Comoros / UTM zone 38S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4646
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2003
				, L"Grenada 1953 / British West Indies Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4603
				, Scale(0.9995000000000001)
				, FalseEasting(400000.0)
				, LatLonOrigin(0.0, -62.0)),
			buildGrid(2970
				, L"Guadeloupe 1948 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4622
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(3993
				, L"Guam 1963 / Guam SPCS"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4675
				, StatePlane(15400)
				, FalseNorthing(50000.0)
				, FalseEasting(50000.0)
				, LatLonOrigin(13.4724663527778006, 144.7487507055560059)),
			buildGrid(3295
				, L"Guam 1963 / Yap Islands"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4675
				, FalseNorthing(60000.0)
				, FalseEasting(40000.0)
				, LatLonOrigin(9.5467083299999995, 138.1687444400000118)),
			buildGrid(3106
				, L"Gulshan 303 / Bangladesh Transverse Mercator"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4682
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(2044
				, L"Hanoi 1972 / Gauss-Kruger zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4147
				, Scale(1.0)
				, FalseEasting(18500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2045
				, L"Hanoi 1972 / Gauss-Kruger zone 19"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4147
				, Scale(1.0)
				, FalseEasting(19500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2093
				, L"Hanoi 1972 / GK 106 NE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4147
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 106.0)),
			buildGrid(2046
				, L"Hartebeesthoek94 / Lo15"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4148
				, Scale(1.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(2047
				, L"Hartebeesthoek94 / Lo17"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4148
				, Scale(1.0)
				, LatLonOrigin(0.0, 17.0)),
			buildGrid(2048
				, L"Hartebeesthoek94 / Lo19"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4148
				, Scale(1.0)
				, LatLonOrigin(0.0, 19.0)),
			buildGrid(2049
				, L"Hartebeesthoek94 / Lo21"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4148
				, Scale(1.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2050
				, L"Hartebeesthoek94 / Lo23"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4148
				, Scale(1.0)
				, LatLonOrigin(0.0, 23.0)),
			buildGrid(2051
				, L"Hartebeesthoek94 / Lo25"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4148
				, Scale(1.0)
				, LatLonOrigin(0.0, 25.0)),
			buildGrid(2052
				, L"Hartebeesthoek94 / Lo27"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4148
				, Scale(1.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(2053
				, L"Hartebeesthoek94 / Lo29"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4148
				, Scale(1.0)
				, LatLonOrigin(0.0, 29.0)),
			buildGrid(2054
				, L"Hartebeesthoek94 / Lo31"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4148
				, Scale(1.0)
				, LatLonOrigin(0.0, 31.0)),
			buildGrid(2055
				, L"Hartebeesthoek94 / Lo33"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::M
				, 4148
				, Scale(1.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(23700
				, L"HD72 / EOV"
				, ProjectionType::SWISSOBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4237
				, Scale(0.99993)
				, FalseNorthing(200000.0)
				, FalseEasting(650000.0)
				, LatLonOrigin(47.1443937199999965, 19.0485717799999996)
				, Azimuth(90.0)
				, RectifiedGrid(90.0)),
			buildGrid(3058
				, L"Helle 1954 / Jan Mayen Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4660
				, Scale(1.0)
				, FalseNorthing(-7800000.0)
				, FalseEasting(50000.0)
				, LatLonOrigin(0.0, -8.5)),
			buildGrid(2083
				, L"Hito XVIII 1963 / Argentina zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4254
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(-90.0, -69.0)),
			buildGrid(2084
				, L"Hito XVIII 1963 / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4254
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(3053
				, L"Hjorsey 1955 / Lambert 1955"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4658
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(65.0, -18.0)),
			buildGrid(3054
				, L"Hjorsey 1955 / UTM zone 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4658
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(3055
				, L"Hjorsey 1955 / UTM zone 27N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4658
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -21.0)),
			buildGrid(3056
				, L"Hjorsey 1955 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4658
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(103472
				, L"Hong Kong 1924 Grid System"
				, ProjectionType::CASSINI
				, ProjectionUnit::FT
				, 104105
				, Scale(1.0)
				, FalseNorthing(5.1799999999999997)
				, FalseEasting(0.38)
				, LatLonOrigin(22.3035609999999984, 114.171875)),
			buildGrid(3407
				, L"Hong Kong 1963 Grid System"
				, ProjectionType::CASSINI
				, ProjectionUnit::FTCLA
				, 4738
				, FalseNorthing(62565.9599999999991269)
				, FalseEasting(132033.9200000000128057)
				, LatLonOrigin(22.3121333333332998, 114.1785555555560023)),
			buildGrid(2326
				, L"Hong Kong 1980 Grid System"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4611
				, Scale(1.0)
				, FalseNorthing(819069.8000000000465661)
				, FalseEasting(836694.0500000000465661)
				, LatLonOrigin(22.3121333333332998, 114.1785555555560023)),
			buildGrid(3766
				, L"HTRS96 / Croatia LCC"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4761
				, LatLonOrigin(0.0, 16.5)
				, ParallelNorth(45.9166666666666998)
				, ParallelSouth(43.0833333333333002)),
			buildGrid(3765
				, L"HTRS96 / Croatia TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4761
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 16.5)),
			buildGrid(3767
				, L"HTRS96 / UTM zone 33N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4761
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3768
				, L"HTRS96 / UTM zone 34N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4761
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(3829
				, L"Hu Tzu Shan / UTM zone 51N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4236
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(23846
				, L"ID74 / UTM zone 46N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(23886
				, L"ID74 / UTM zone 46S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(23847
				, L"ID74 / UTM zone 47N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(23887
				, L"ID74 / UTM zone 47S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(23848
				, L"ID74 / UTM zone 48N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(23888
				, L"ID74 / UTM zone 48S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(23849
				, L"ID74 / UTM zone 49N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(23889
				, L"ID74 / UTM zone 49S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(23850
				, L"ID74 / UTM zone 50N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(23890
				, L"ID74 / UTM zone 50S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(23851
				, L"ID74 / UTM zone 51N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(23891
				, L"ID74 / UTM zone 51S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(23852
				, L"ID74 / UTM zone 52N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(23892
				, L"ID74 / UTM zone 52S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(23853
				, L"ID74 / UTM zone 53N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(23893
				, L"ID74 / UTM zone 53S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(23894
				, L"ID74 / UTM zone 54S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4238
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(3318
				, L"IGC 1962 / Congo TM zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4697
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(3319
				, L"IGC 1962 / Congo TM zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4697
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 14.0)),
			buildGrid(3320
				, L"IGC 1962 / Congo TM zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4697
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 16.0)),
			buildGrid(3321
				, L"IGC 1962 / Congo TM zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4697
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(3322
				, L"IGC 1962 / Congo TM zone 20"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4697
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 20.0)),
			buildGrid(3323
				, L"IGC 1962 / Congo TM zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4697
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 22.0)),
			buildGrid(3324
				, L"IGC 1962 / Congo TM zone 24"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4697
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(3325
				, L"IGC 1962 / Congo TM zone 26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4697
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 26.0)),
			buildGrid(3326
				, L"IGC 1962 / Congo TM zone 28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4697
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 28.0)),
			buildGrid(3327
				, L"IGC 1962 / Congo TM zone 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4697
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(3339
				, L"IGCB 1955 / Congo TM zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4701
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(3340
				, L"IGCB 1955 / Congo TM zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4701
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 14.0)),
			buildGrid(3341
				, L"IGCB 1955 / Congo TM zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4701
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 16.0)),
			buildGrid(3342
				, L"IGCB 1955 / UTM zone 33S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4701
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3064
				, L"IGM95 / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4670
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3065
				, L"IGM95 / UTM zone 33N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4670
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3336
				, L"IGN 1962 Kerguelen / UTM zone 42S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4698
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(3367
				, L"IGN Astro 1960 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4700
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(3368
				, L"IGN Astro 1960 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4700
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(3369
				, L"IGN Astro 1960 / UTM zone 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4700
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(2995
				, L"IGN53 Mare / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4641
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(3172
				, L"IGN53 Mare / UTM zone 59S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4641
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(2981
				, L"IGN56 Lifou / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4633
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(3302
				, L"IGN63 Hiva Oa / UTM zone 7S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4689
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(2982
				, L"IGN72 Grand Terre / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4634
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(3060
				, L"IGN72 Grande Terre / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4662
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(2978
				, L"IGN72 Nuku Hiva / UTM zone 7S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4630
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(3890
				, L"IGRS / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3889
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(3891
				, L"IGRS / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3889
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(3892
				, L"IGRS / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3889
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(23946
				, L"Indian 1954 / UTM zone 46N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4239
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(23947
				, L"Indian 1954 / UTM zone 47N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4239
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(23948
				, L"Indian 1954 / UTM zone 48N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4239
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(3176
				, L"Indian 1960 / TM 106 NE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4131
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 106.0)),
			buildGrid(3148
				, L"Indian 1960 / UTM zone 48N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4131
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(3149
				, L"Indian 1960 / UTM zone 49N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4131
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(24047
				, L"Indian 1975 / UTM zone 47N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4240
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(24048
				, L"Indian 1975 / UTM zone 48N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4240
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2157
				, L"IRENET95 / Irish Transverse Mercator"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4173
				, Scale(0.99982)
				, FalseNorthing(750000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(53.5, -8.0)),
			buildGrid(2158
				, L"IRENET95 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4173
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(5638
				, L"ISN2004 / LAEA Europe"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 5324
				, FalseNorthing(3210000.0)
				, FalseEasting(4321000.0)
				, LatLonOrigin(52.0, 10.0)),
			buildGrid(5325
				, L"ISN2004 / Lambert 2004"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 5324
				, FalseNorthing(300000.0)
				, FalseEasting(1700000.0)
				, LatLonOrigin(65.0, -19.0)
				, ParallelNorth(64.25)
				, ParallelSouth(64.75)),
			buildGrid(5639
				, L"ISN2004 / LCC Europe"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 5324
				, FalseNorthing(2800000.0)
				, FalseEasting(4000000.0)
				, LatLonOrigin(52.0, 10.0)
				, ParallelNorth(35.0)
				, ParallelSouth(65.0)),
			buildGrid(3057
				, L"ISN93 / Lambert 1993"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4659
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(65.0, -19.0)
				, ParallelNorth(64.25)
				, ParallelSouth(65.75)),
			buildGrid(2039
				, L"Israel / Israeli TM Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4141
				, Scale(1.0000066999999999)
				, FalseNorthing(626907.3900000000139698)
				, FalseEasting(219529.5840000000025611)
				, LatLonOrigin(31.7343936111110985, 35.2045169444444994)),
			buildGrid(3448
				, L"JAD2001 / Jamaica Metric Grid"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4758
				, Scale(1.0)
				, FalseNorthing(650000.0)
				, FalseEasting(750000.0)
				, LatLonOrigin(18.0, -77.0)),
			buildGrid(3449
				, L"JAD2001 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4758
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(3450
				, L"JAD2001 / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4758
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(24200
				, L"JAD69 / Jamaica National Grid"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4242
				, Scale(1.0)
				, FalseNorthing(150000.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(18.0, -77.0)),
			buildGrid(24100
				, L"Jamaica 1875 / Jamaica (Old Grid)"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::FTCLA
				, 4241
				, Scale(1.0)
				, FalseNorthing(400000.0)
				, FalseEasting(550000.0)
				, LatLonOrigin(18.0, -77.0)),
			buildGrid(2443
				, L"JGD2000 / Japan Plane Rectangular CS I"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(33.0, 129.5)),
			buildGrid(2444
				, L"JGD2000 / Japan Plane Rectangular CS II"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(33.0, 131.0)),
			buildGrid(2445
				, L"JGD2000 / Japan Plane Rectangular CS III"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(36.0, 132.1666666666669983)),
			buildGrid(2446
				, L"JGD2000 / Japan Plane Rectangular CS IV"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(33.0, 133.5)),
			buildGrid(2451
				, L"JGD2000 / Japan Plane Rectangular CS IX"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(36.0, 139.8333333333330017)),
			buildGrid(2447
				, L"JGD2000 / Japan Plane Rectangular CS V"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(36.0, 134.3333333333330017)),
			buildGrid(2448
				, L"JGD2000 / Japan Plane Rectangular CS VI"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(36.0, 136.0)),
			buildGrid(2449
				, L"JGD2000 / Japan Plane Rectangular CS VII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(36.0, 137.1666666666669983)),
			buildGrid(2450
				, L"JGD2000 / Japan Plane Rectangular CS VIII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(36.0, 138.5)),
			buildGrid(2452
				, L"JGD2000 / Japan Plane Rectangular CS X"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(40.0, 140.8333333333330017)),
			buildGrid(2453
				, L"JGD2000 / Japan Plane Rectangular CS XI"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(44.0, 140.25)),
			buildGrid(2454
				, L"JGD2000 / Japan Plane Rectangular CS XII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(44.0, 142.25)),
			buildGrid(2455
				, L"JGD2000 / Japan Plane Rectangular CS XIII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(44.0, 144.25)),
			buildGrid(2456
				, L"JGD2000 / Japan Plane Rectangular CS XIV"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(26.0, 142.0)),
			buildGrid(2461
				, L"JGD2000 / Japan Plane Rectangular CS XIX"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(26.0, 154.0)),
			buildGrid(2457
				, L"JGD2000 / Japan Plane Rectangular CS XV"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(26.0, 127.5)),
			buildGrid(2458
				, L"JGD2000 / Japan Plane Rectangular CS XVI"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(26.0, 124.0)),
			buildGrid(2459
				, L"JGD2000 / Japan Plane Rectangular CS XVII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(26.0, 131.0)),
			buildGrid(2460
				, L"JGD2000 / Japan Plane Rectangular CS XVIII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9999)
				, LatLonOrigin(20.0, 136.0)),
			buildGrid(3097
				, L"JGD2000 / UTM zone 51N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(3098
				, L"JGD2000 / UTM zone 52N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(3099
				, L"JGD2000 / UTM zone 53N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(3100
				, L"JGD2000 / UTM zone 54N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(3101
				, L"JGD2000 / UTM zone 55N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4612
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(2979
				, L"K0 1949 / UTM zone 42S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4631
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(24370
				, L"Kalianpur 1880 / India zone 0"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::YDIND
				, 4243
				, Scale(0.99846154)
				, FalseNorthing(2590000.0)
				, FalseEasting(2355500.0)
				, LatLonOrigin(39.5, 68.0)),
			buildGrid(24371
				, L"Kalianpur 1880 / India zone I"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::YDIND
				, 4243
				, Scale(0.99878641)
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(32.5, 68.0)),
			buildGrid(24372
				, L"Kalianpur 1880 / India zone IIa"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::YDIND
				, 4243
				, Scale(0.99878641)
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(26.0, 74.0)),
			buildGrid(24382
				, L"Kalianpur 1880 / India zone IIb"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::YDIND
				, 4243
				, Scale(0.99878641)
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(26.0, 90.0)),
			buildGrid(24373
				, L"Kalianpur 1880 / India zone III"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::YDIND
				, 4243
				, Scale(0.99878641)
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(19.0, 80.0)),
			buildGrid(24374
				, L"Kalianpur 1880 / India zone IV"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::YDIND
				, 4243
				, Scale(0.99878641)
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(12.0, 80.0)),
			buildGrid(24375
				, L"Kalianpur 1937 / India zone IIb"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4144
				, Scale(0.99878641)
				, FalseNorthing(914395.2299999999813735)
				, FalseEasting(2743185.6899999999441206)
				, LatLonOrigin(26.0, 90.0)),
			buildGrid(24305
				, L"Kalianpur 1937 / UTM zone 45N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4144
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(24306
				, L"Kalianpur 1937 / UTM zone 46N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4144
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(24376
				, L"Kalianpur 1962 / India zone I"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4145
				, Scale(0.99878641)
				, FalseNorthing(914398.8000000000465661)
				, FalseEasting(2743196.3999999999068677)
				, LatLonOrigin(32.5, 68.0)),
			buildGrid(24377
				, L"Kalianpur 1962 / India zone IIa"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4145
				, Scale(0.99878641)
				, FalseNorthing(914398.8000000000465661)
				, FalseEasting(2743196.3999999999068677)
				, LatLonOrigin(26.0, 74.0)),
			buildGrid(24311
				, L"Kalianpur 1962 / UTM zone 41N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4145
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(24312
				, L"Kalianpur 1962 / UTM zone 42N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4145
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(24313
				, L"Kalianpur 1962 / UTM zone 43N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4145
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(24378
				, L"Kalianpur 1975 / India zone I"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4146
				, Scale(0.99878641)
				, FalseNorthing(914398.5)
				, FalseEasting(2743195.5)
				, LatLonOrigin(32.5, 68.0)),
			buildGrid(24379
				, L"Kalianpur 1975 / India zone IIa"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4146
				, Scale(0.99878641)
				, FalseNorthing(914398.5)
				, FalseEasting(2743195.5)
				, LatLonOrigin(26.0, 74.0)),
			buildGrid(24380
				, L"Kalianpur 1975 / India zone IIb"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4146
				, Scale(0.99878641)
				, FalseNorthing(914398.5)
				, FalseEasting(2743195.5)
				, LatLonOrigin(26.0, 90.0)),
			buildGrid(24381
				, L"Kalianpur 1975 / India zone III"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4146
				, Scale(0.99878641)
				, FalseNorthing(914398.5)
				, FalseEasting(2743195.5)
				, LatLonOrigin(19.0, 80.0)),
			buildGrid(24383
				, L"Kalianpur 1975 / India zone IV"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4146
				, Scale(0.99878641)
				, FalseNorthing(914398.5)
				, FalseEasting(2743195.5)
				, LatLonOrigin(12.0, 80.0)),
			buildGrid(24342
				, L"Kalianpur 1975 / UTM zone 42N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4146
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(24343
				, L"Kalianpur 1975 / UTM zone 43N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4146
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(24344
				, L"Kalianpur 1975 / UTM zone 44N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4146
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(24345
				, L"Kalianpur 1975 / UTM zone 45N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4146
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(24346
				, L"Kalianpur 1975 / UTM zone 46N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4146
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(24347
				, L"Kalianpur 1975 / UTM zone 47N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4146
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(5234
				, L"Kandawala / Sri Lanka Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4244
				, Scale(0.999924)
				, FalseNorthing(200000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(7.0004799999999996, 80.7717109999999963)),
			buildGrid(3391
				, L"Karbala 1979 / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4743
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(3392
				, L"Karbala 1979 / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4743
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(3393
				, L"Karbala 1979 / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4743
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(3316
				, L"Kasai 1953 / Congo TM zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4696
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 22.0)),
			buildGrid(3317
				, L"Kasai 1953 / Congo TM zone 24"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4696
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(3986
				, L"Katanga 1955 / Katanga Gauss zone A"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4695
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(-9.0, 30.0)),
			buildGrid(3987
				, L"Katanga 1955 / Katanga Gauss zone B"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4695
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(-9.0, 28.0)),
			buildGrid(3988
				, L"Katanga 1955 / Katanga Gauss zone C"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4695
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(-9.0, 26.0)),
			buildGrid(3989
				, L"Katanga 1955 / Katanga Gauss zone D"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4695
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(-9.0, 24.0)),
			buildGrid(3314
				, L"Katanga 1955 / Katanga Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4695
				, LatLonOrigin(0.0, 26.0)
				, ParallelNorth(-6.5)
				, ParallelSouth(-11.5)),
			buildGrid(3315
				, L"Katanga 1955 / Katanga TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4695
				, Scale(0.9998)
				, LatLonOrigin(-9.0, 26.0)),
			buildGrid(3167
				, L"Kertau (RSO) / RSO Malaya (ch)"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::CHSE
				, 4751
				, Scale(0.99984)
				, FalseEasting(40000.0)
				, LatLonOrigin(4.0, 102.25)
				, Azimuth(323.0257905000000278)
				, RectifiedGrid(323.1301023600000235)),
			buildGrid(3168
				, L"Kertau (RSO) / RSO Malaya (m)"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4751
				, Scale(0.99984)
				, FalseEasting(804670.2399999999906868)
				, LatLonOrigin(4.0, 102.25)
				, Azimuth(323.0257905000000278)
				, RectifiedGrid(323.1301023611110281)),
			buildGrid(24571
				, L"Kertau / R.S.O. Malaya (ch)"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::CHBR
				, 4245
				, Scale(0.99984)
				, FalseEasting(40000.0)
				, LatLonOrigin(4.0, 102.25)
				, Azimuth(323.0257905000000278)
				, RectifiedGrid(323.1301023611110281)),
			buildGrid(24500
				, L"Kertau 1968 / Singapore Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4245
				, FalseNorthing(30000.0)
				, FalseEasting(30000.0)
				, LatLonOrigin(1.2876466666666699, 103.8530022222220026)),
			buildGrid(24547
				, L"Kertau 1968 / UTM zone 47N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4245
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(24548
				, L"Kertau 1968 / UTM zone 48N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4245
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2393
				, L"KKJ / Finland Uniform Coordinate System"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4123
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(3386
				, L"KKJ / Finland zone 0"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4123
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(2391
				, L"KKJ / Finland zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4123
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2392
				, L"KKJ / Finland zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4123
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(2394
				, L"KKJ / Finland zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4123
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(3387
				, L"KKJ / Finland zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4123
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(24600
				, L"KOC Lambert"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4246
				, Scale(0.9987864078000001)
				, FalseNorthing(1166200.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(32.5, 45.0)),
			buildGrid(5181
				, L"Korea 2000 / Central Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4737
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 127.0)),
			buildGrid(5186
				, L"Korea 2000 / Central Belt 2010"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4737
				, Scale(1.0)
				, FalseNorthing(600000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 127.0)),
			buildGrid(5182
				, L"Korea 2000 / Central Belt Jeju"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4737
				, Scale(1.0)
				, FalseNorthing(550000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 127.0)),
			buildGrid(5183
				, L"Korea 2000 / East Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4737
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 129.0)),
			buildGrid(5187
				, L"Korea 2000 / East Belt 2010"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4737
				, Scale(1.0)
				, FalseNorthing(600000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 129.0)),
			buildGrid(5184
				, L"Korea 2000 / East Sea Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4737
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 131.0)),
			buildGrid(5188
				, L"Korea 2000 / East Sea Belt 2010"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4737
				, Scale(1.0)
				, FalseNorthing(600000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 131.0)),
			buildGrid(5179
				, L"Korea 2000 / Unified CS"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4737
				, Scale(0.9996)
				, FalseNorthing(2000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(38.0, 127.5)),
			buildGrid(5180
				, L"Korea 2000 / West Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4737
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 125.0)),
			buildGrid(5185
				, L"Korea 2000 / West Belt 2010"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4737
				, Scale(1.0)
				, FalseNorthing(600000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 125.0)),
			buildGrid(5168
				, L"Korean 1985 / Central Belt Jeju"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4162
				, Scale(1.0)
				, FalseNorthing(550000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 127.0)),
			buildGrid(5167
				, L"Korean 1985 / East Sea Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4162
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 131.0)),
			buildGrid(2097
				, L"Korean 1985 / Korea Central Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4162
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 127.0)),
			buildGrid(2096
				, L"Korean 1985 / Korea East Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4162
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 129.0)),
			buildGrid(2098
				, L"Korean 1985 / Korea West Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4162
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 125.0)),
			buildGrid(5174
				, L"Korean 1985 / Modified Central Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4162
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 127.0028899999999936)),
			buildGrid(5175
				, L"Korean 1985 / Modified Central Belt Jeju"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4162
				, Scale(1.0)
				, FalseNorthing(550000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 127.0028899999999936)),
			buildGrid(5176
				, L"Korean 1985 / Modified East Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4162
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 129.0028900000000078)),
			buildGrid(5177
				, L"Korean 1985 / Modified East Sea Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4162
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 131.0028900000000078)),
			buildGrid(5173
				, L"Korean 1985 / Modified West Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4162
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 125.0028899999999936)),
			buildGrid(5178
				, L"Korean 1985 / Unified CS"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4162
				, Scale(0.9996)
				, FalseNorthing(2000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(38.0, 127.5)),
			buildGrid(2313
				, L"Kousseri / UTM zone 33N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4198
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(31901
				, L"KUDAMS / KTM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4319
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 48.0)),
			buildGrid(24718
				, L"La Canoa / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4247
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(24719
				, L"La Canoa / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4247
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(24720
				, L"La Canoa / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4247
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(2102
				, L"Lake / Maracaibo Grid"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4249
				, Scale(1.0)
				, FalseNorthing(147315.0279999999911524)
				, FalseEasting(200000.0)
				, LatLonOrigin(10.1666666666666998, -71.6056177777777947)),
			buildGrid(2101
				, L"Lake / Maracaibo Grid M1"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4249
				, Scale(1.0)
				, FalseNorthing(-52684.9720000000015716)
				, LatLonOrigin(10.1666666666666998, -71.6056177777777947)),
			buildGrid(2103
				, L"Lake / Maracaibo Grid M3"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4249
				, Scale(1.0)
				, FalseNorthing(447315.0279999999911524)
				, FalseEasting(500000.0)
				, LatLonOrigin(10.1666666666666998, -71.6056177777777947)),
			buildGrid(2104
				, L"Lake / Maracaibo La Rosa Grid"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4249
				, Scale(1.0)
				, FalseNorthing(-23139.9700000000011642)
				, FalseEasting(-17044.0)
				, LatLonOrigin(10.1666666666666998, -71.6056177777777947)),
			buildGrid(3337
				, L"Le Pouce 1934 / Mauritius Grid"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4699
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(-20.1950694444443997, 57.5218277777778013)),
			buildGrid(25000
				, L"Leigon / Ghana Metre Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4250
				, Scale(0.99975)
				, FalseEasting(274319.5100000000093132)
				, LatLonOrigin(4.6666666666666696, -1.0)),
			buildGrid(3177
				, L"LGD2006 / Libya TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.9965000000000001)
				, FalseEasting(1000000.0)
				, LatLonOrigin(0.0, 17.0)),
			buildGrid(3195
				, L"LGD2006 / Libya TM zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.99995)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 19.0)),
			buildGrid(3196
				, L"LGD2006 / Libya TM zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.99995)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(3197
				, L"LGD2006 / Libya TM zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.99995)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 23.0)),
			buildGrid(3198
				, L"LGD2006 / Libya TM zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.99995)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 25.0)),
			buildGrid(3190
				, L"LGD2006 / Libya TM zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.99995)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3191
				, L"LGD2006 / Libya TM zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.99995)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 11.0)),
			buildGrid(3192
				, L"LGD2006 / Libya TM zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.99995)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 13.0)),
			buildGrid(3193
				, L"LGD2006 / Libya TM zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.99995)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3194
				, L"LGD2006 / Libya TM zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.99995)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 17.0)),
			buildGrid(3199
				, L"LGD2006 / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3201
				, L"LGD2006 / UTM zone 33N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3202
				, L"LGD2006 / UTM zone 34N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(3203
				, L"LGD2006 / UTM zone 35N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4754
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(2600
				, L"Lietuvos Koordinoei Sistema 1994"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4669
				, Scale(0.9998)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(20791
				, L"Lisbon (Lisbon) / Portuguese Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4803
				, Scale(1.0)
				, LatLonOrigin(39.6666666666666998, 1.0)),
			buildGrid(20790
				, L"Lisbon (Lisbon) / Portuguese National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4803
				, Scale(1.0)
				, FalseNorthing(300000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(39.6666666666666998, 1.0)),
			buildGrid(5018
				, L"Lisbon / Portuguese Grid New"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4207
				, Scale(1.0)
				, LatLonOrigin(39.6666666599999971, -8.1319060000000007)),
			buildGrid(2963
				, L"Lisbon 1890 (Lisbon) / Portugal Bonne"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4904
				, LatLonOrigin(39.6666666699999979, 1.0)),
			buildGrid(5017
				, L"Lisbon 1890 / Portugal Bonne New"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4666
				, LatLonOrigin(39.6666666599999971, -8.1319060000000007)),
			buildGrid(3357
				, L"Little Cayman 1961 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4726
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(3059
				, L"LKS92 / Latvia TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4661
				, Scale(0.9996)
				, FalseNorthing(-6000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(3346
				, L"LKS94 / Lithuania TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4669
				, Scale(0.9998)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(2164
				, L"Locodjo 1965 / TM 5 NW"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4142
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -5.0)),
			buildGrid(2042
				, L"Locodjo 1965 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4142
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(2040
				, L"Locodjo 1965 / UTM zone 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4142
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(25231
				, L"Lome / UTM zone 31N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4252
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(2169
				, L"Luxembourg 1930 / Gauss"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4181
				, Scale(1.0)
				, FalseNorthing(100000.0)
				, FalseEasting(80000.0)
				, LatLonOrigin(49.8333333333333002, 6.1666666666666696)),
			buildGrid(25391
				, L"Luzon 1911 / Philippines zone I"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4253
				, Scale(0.99995)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(25392
				, L"Luzon 1911 / Philippines zone II"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4253
				, Scale(0.99995)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 119.0)),
			buildGrid(25393
				, L"Luzon 1911 / Philippines zone III"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4253
				, Scale(0.99995)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 121.0)),
			buildGrid(25394
				, L"Luzon 1911 / Philippines zone IV"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4253
				, Scale(0.99995)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(25395
				, L"Luzon 1911 / Philippines zone V"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4253
				, Scale(0.99995)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 125.0)),
			buildGrid(2191
				, L"Madeira 1936 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4185
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(2062
				, L"Madrid 1870 (Madrid) / Spain"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4903
				, Scale(0.9988085293)
				, FalseNorthing(600000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(40.0, 0.0)),
			buildGrid(3116
				, L"MAGNA-SIRGAS / Colombia Bogota zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4686
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(4.5962004166666697, -74.0775079166666046)),
			buildGrid(3117
				, L"MAGNA-SIRGAS / Colombia East Central zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4686
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(4.5962004166666697, -71.0775079166666046)),
			buildGrid(3118
				, L"MAGNA-SIRGAS / Colombia East zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4686
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(4.5962004166666697, -68.0775079166666046)),
			buildGrid(3114
				, L"MAGNA-SIRGAS / Colombia Far West zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4686
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(4.5962004166666697, -80.0775079166666046)),
			buildGrid(3115
				, L"MAGNA-SIRGAS / Colombia West zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4686
				, Scale(1.0)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(4.5962004166666697, -77.0775079166666046)),
			buildGrid(5331
				, L"Makassar (Jakarta) / NEIEZ"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4804
				, Scale(0.997)
				, FalseNorthing(900000.0)
				, FalseEasting(3900000.0)
				, LatLonOrigin(0.0, 3.1922809999999999)),
			buildGrid(25700
				, L"Makassar (Jakarta) / NEIEZ"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4804
				, Scale(0.997)
				, FalseNorthing(900000.0)
				, FalseEasting(3900000.0)
				, LatLonOrigin(0.0, 110.0)),
			buildGrid(3002
				, L"Makassar / NEIEZ"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4257
				, Scale(0.997)
				, FalseNorthing(900000.0)
				, FalseEasting(3900000.0)
				, LatLonOrigin(0.0, 110.0)),
			buildGrid(25932
				, L"Malongo 1987 / UTM zone 32S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4259
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(2215
				, L"Manoca 1962 / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4193
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(5356
				, L"MARGEN / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5354
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(5355
				, L"MARGEN / UTM zone 20S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5354
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(5357
				, L"MARGEN / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5354
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(2973
				, L"Martinique 1938 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4625
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(26237
				, L"Massawa / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4262
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(3306
				, L"Maupiti 83 / UTM zone 5S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4692
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(3343
				, L"Mauritania 1999 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4702
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(3344
				, L"Mauritania 1999 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4702
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(3345
				, L"Mauritania 1999 / UTM zone 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4702
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(26191
				, L"Merchich / Nord Maroc"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4261
				, Scale(0.999625769)
				, FalseNorthing(300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(33.2999999999999972, -5.4000000000000004)),
			buildGrid(26193
				, L"Merchich / Sahara"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4261
				, Scale(0.9996)
				, FalseNorthing(400000.0)
				, FalseEasting(1200000.0)
				, LatLonOrigin(26.1000000000000014, -5.4000000000000004)),
			buildGrid(26194
				, L"Merchich / Sahara Nord"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4261
				, Scale(0.999616304)
				, FalseNorthing(400000.0)
				, FalseEasting(1200000.0)
				, LatLonOrigin(26.1000000000000014, -5.4000000000000004)),
			buildGrid(26195
				, L"Merchich / Sahara Sud"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4261
				, Scale(0.999616437)
				, FalseNorthing(400000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(22.5, -5.4000000000000004)),
			buildGrid(26192
				, L"Merchich / Sud Maroc"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4261
				, Scale(0.9996155960000001)
				, FalseNorthing(300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(29.6999999999999993, -5.4000000000000004)),
			buildGrid(4484
				, L"Mexican Datum of 1993 / UTM zone 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4483
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(4485
				, L"Mexican Datum of 1993 / UTM zone 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4483
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(4486
				, L"Mexican Datum of 1993 / UTM zone 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4483
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(4487
				, L"Mexican Datum of 1993 / UTM zone 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4483
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(4488
				, L"Mexican Datum of 1993 / UTM zone 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4483
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(4489
				, L"Mexican Datum of 1993 / UTM zone 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4483
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(31282
				, L"MGI (Ferro) / Austria Central Zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4805
				, Scale(1.0)
				, LatLonOrigin(0.0, 31.0)),
			buildGrid(31283
				, L"MGI (Ferro) / Austria East Zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4805
				, Scale(1.0)
				, LatLonOrigin(0.0, 34.0)),
			buildGrid(31252
				, L"MGI (Ferro) / Austria GK Central Zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4805
				, Scale(1.0)
				, FalseNorthing(-5000000.0)
				, LatLonOrigin(0.0, 31.0)),
			buildGrid(31253
				, L"MGI (Ferro) / Austria GK East Zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4805
				, Scale(1.0)
				, FalseNorthing(-5000000.0)
				, LatLonOrigin(0.0, 34.0)),
			buildGrid(31251
				, L"MGI (Ferro) / Austria GK West Zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4805
				, Scale(1.0)
				, FalseNorthing(-5000000.0)
				, LatLonOrigin(0.0, 28.0)),
			buildGrid(31281
				, L"MGI (Ferro) / Austria West Zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4805
				, Scale(1.0)
				, LatLonOrigin(0.0, 28.0)),
			buildGrid(31288
				, L"MGI (Ferro) / M28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4805
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 28.0)),
			buildGrid(31289
				, L"MGI (Ferro) / M31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4805
				, Scale(1.0)
				, FalseEasting(450000.0)
				, LatLonOrigin(0.0, 31.0)),
			buildGrid(31290
				, L"MGI (Ferro) / M34"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4805
				, Scale(1.0)
				, FalseEasting(750000.0)
				, LatLonOrigin(0.0, 34.0)),
			buildGrid(31265
				, L"MGI / 3-degree Gauss zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(31266
				, L"MGI / 3-degree Gauss zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(31267
				, L"MGI / 3-degree Gauss zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseEasting(7500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(31268
				, L"MGI / 3-degree Gauss zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseEasting(8500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(31255
				, L"MGI / Austria GK Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseNorthing(-5000000.0)
				, LatLonOrigin(0.0, 13.3333333333333002)),
			buildGrid(31256
				, L"MGI / Austria GK East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseNorthing(-5000000.0)
				, LatLonOrigin(0.0, 16.3333333333333002)),
			buildGrid(31257
				, L"MGI / Austria GK M28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseNorthing(-5000000.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 10.3333333333333002)),
			buildGrid(31258
				, L"MGI / Austria GK M31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseNorthing(-5000000.0)
				, FalseEasting(450000.0)
				, LatLonOrigin(0.0, 13.3333333333333002)),
			buildGrid(31259
				, L"MGI / Austria GK M34"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseNorthing(-5000000.0)
				, FalseEasting(750000.0)
				, LatLonOrigin(0.0, 16.3333333333333002)),
			buildGrid(31254
				, L"MGI / Austria GK West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseNorthing(-5000000.0)
				, LatLonOrigin(0.0, 10.3333333333333002)),
			buildGrid(31287
				, L"MGI / Austria Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4312
				, FalseNorthing(400000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(47.5, 13.3333333333333002)
				, ParallelNorth(49.0)
				, ParallelSouth(46.0)),
			buildGrid(31284
				, L"MGI / Austria M28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 10.3333333333333002)),
			buildGrid(31285
				, L"MGI / Austria M31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseEasting(450000.0)
				, LatLonOrigin(0.0, 13.3333333333333002)),
			buildGrid(31286
				, L"MGI / Austria M34"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseEasting(750000.0)
				, LatLonOrigin(0.0, 16.3333333333333002)),
			buildGrid(31275
				, L"MGI / Balkans zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(0.9999)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(31276
				, L"MGI / Balkans zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(0.9999)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(31277
				, L"MGI / Balkans zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(0.9999)
				, FalseEasting(7500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(31279
				, L"MGI / Balkans zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(0.9999)
				, FalseEasting(8500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(31294
				, L"MGI / M28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 10.3333333333333002)),
			buildGrid(31295
				, L"MGI / M31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseEasting(450000.0)
				, LatLonOrigin(0.0, 13.3333333333333002)),
			buildGrid(31296
				, L"MGI / M34"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(1.0)
				, FalseEasting(750000.0)
				, LatLonOrigin(0.0, 16.3333333333333002)),
			buildGrid(3787
				, L"MGI / Slovene National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(0.9999)
				, FalseNorthing(-5000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(2170
				, L"MGI / Slovenia Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4312
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3907
				, L"MGI 1901 / Balkans zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3906
				, Scale(0.9999)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3908
				, L"MGI 1901 / Balkans zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3906
				, Scale(0.9999)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(3909
				, L"MGI 1901 / Balkans zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3906
				, Scale(0.9999)
				, FalseEasting(7500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(3910
				, L"MGI 1901 / Balkans zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3906
				, Scale(0.9999)
				, FalseEasting(8500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(3912
				, L"MGI 1901 / Slovene National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3906
				, Scale(0.9999)
				, FalseNorthing(-5000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3911
				, L"MGI 1901 / Slovenia Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3906
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3354
				, L"Mhast (offshore) / UTM zone 32S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4705
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3353
				, L"Mhast (onshore) / UTM zone 32S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4704
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(26432
				, L"Mhast / UTM zone 32S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4264
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(26393
				, L"Minna / Nigeria East Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4263
				, Scale(0.99975)
				, FalseEasting(1110369.6999999999534339)
				, LatLonOrigin(4.0, 12.5)),
			buildGrid(26392
				, L"Minna / Nigeria Mid Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4263
				, Scale(0.99975)
				, FalseEasting(670553.9799999999813735)
				, LatLonOrigin(4.0, 8.5)),
			buildGrid(26391
				, L"Minna / Nigeria West Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4263
				, Scale(0.99975)
				, FalseEasting(230738.2600000000093132)
				, LatLonOrigin(4.0, 4.5)),
			buildGrid(26331
				, L"Minna / UTM zone 31N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4263
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(26332
				, L"Minna / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4263
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(4026
				, L"MOLDREF99 / Moldova TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4023
				, Scale(0.9999400000000001)
				, FalseNorthing(-5000000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(0.0, 28.3999999999999986)),
			buildGrid(26591
				, L"Monte Mario (Rome) / Italy zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4806
				, Scale(0.9996)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, -3.4523333333333301)),
			buildGrid(26592
				, L"Monte Mario (Rome) / Italy zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4806
				, Scale(0.9996)
				, FalseEasting(2520000.0)
				, LatLonOrigin(0.0, 2.5476666666666601)),
			buildGrid(3003
				, L"Monte Mario / Italy zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4265
				, Scale(0.9996)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3004
				, L"Monte Mario / Italy zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4265
				, Scale(0.9996)
				, FalseEasting(2520000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(5659
				, L"Monte Mario / TM Emilia-Romagna"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4265
				, Scale(0.9996)
				, FalseNorthing(-3999820.0)
				, FalseEasting(500053.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(2004
				, L"Montserrat 1958 / British West Indies Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4604
				, Scale(0.9995000000000001)
				, FalseEasting(400000.0)
				, LatLonOrigin(0.0, -62.0)),
			buildGrid(3305
				, L"Moorea 87 / UTM zone 6S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4691
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(2988
				, L"MOP78 / UTM zone 1S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4639
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(2066
				, L"Mount Dillon / Tobago Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::LKCLA
				, 4157
				, FalseNorthing(180000.0)
				, FalseEasting(187500.0)
				, LatLonOrigin(11.2521786111111002, -60.6860088888888995)),
			buildGrid(3036
				, L"Moznet / UTM zone 36S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4130
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(3037
				, L"Moznet / UTM zone 37S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4130
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(5629
				, L"Moznet / UTM zone 38S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4130
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(26632
				, L"M'poraloko / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4266
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(26692
				, L"M'poraloko / UTM zone 32S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4266
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(26812
				, L"NAD Michigan / Michigan Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4268
				, StatePlane(12112)
				, FalseEasting(2000000.0)
				, LatLonOrigin(43.3166666666666984, -84.3333333333333002)
				, ParallelNorth(44.1833333333333016)
				, ParallelSouth(45.7000000000000028)),
			buildGrid(26801
				, L"NAD Michigan / Michigan East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4268
				, Scale(0.999942857)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.5, -83.6666666666666998)),
			buildGrid(26811
				, L"NAD Michigan / Michigan North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4268
				, StatePlane(12111)
				, FalseEasting(2000000.0)
				, LatLonOrigin(44.783333333333303, -87.0)
				, ParallelNorth(45.4833333333332988)
				, ParallelSouth(47.0833333333333002)),
			buildGrid(26802
				, L"NAD Michigan / Michigan Old Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4268
				, Scale(0.999909091)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.5, -85.75)),
			buildGrid(26813
				, L"NAD Michigan / Michigan South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4268
				, StatePlane(12113)
				, FalseEasting(2000000.0)
				, LatLonOrigin(41.5, -84.3333333333333002)
				, ParallelNorth(42.1000000000000014)
				, ParallelSouth(43.6666666666666998)),
			buildGrid(26803
				, L"NAD Michigan / Michigan West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4268
				, Scale(0.999909091)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.5, -88.75)),
			buildGrid(26729
				, L"NAD27 / Alabama East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10101)
				, Scale(0.99996)
				, FalseEasting(500000.0)
				, LatLonOrigin(30.5, -85.8333333333333002)),
			buildGrid(26730
				, L"NAD27 / Alabama West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10102)
				, Scale(0.999933333)
				, FalseEasting(500000.0)
				, LatLonOrigin(30.0, -87.5)),
			buildGrid(2964
				, L"NAD27 / Alaska Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::FTUS
				, 4267
				, LatLonOrigin(50.0, -154.0)
				, ParallelNorth(55.0)
				, ParallelSouth(65.0)),
			buildGrid(26731
				, L"NAD27 / Alaska zone 1"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(15001)
				, Scale(0.9999)
				, FalseNorthing(-16404166.6699999999254942)
				, FalseEasting(16404166.6699999999254942)
				, LatLonOrigin(57.0, -133.6666666666669983)
				, Azimuth(323.1301023611110281)
				, RectifiedGrid(323.1301023611110281)),
			buildGrid(26740
				, L"NAD27 / Alaska zone 10"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(15010)
				, FalseEasting(3000000.0)
				, LatLonOrigin(51.0, -176.0)
				, ParallelNorth(53.8333333333333002)
				, ParallelSouth(51.8333333333333002)),
			buildGrid(26732
				, L"NAD27 / Alaska zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(15002)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -142.0)),
			buildGrid(26733
				, L"NAD27 / Alaska zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(15003)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -146.0)),
			buildGrid(26734
				, L"NAD27 / Alaska zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(15004)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -150.0)),
			buildGrid(26735
				, L"NAD27 / Alaska zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(15005)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -154.0)),
			buildGrid(26736
				, L"NAD27 / Alaska zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(15006)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -158.0)),
			buildGrid(26737
				, L"NAD27 / Alaska zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(15007)
				, Scale(0.9999)
				, FalseEasting(700000.0)
				, LatLonOrigin(54.0, -162.0)),
			buildGrid(26738
				, L"NAD27 / Alaska zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(15008)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -166.0)),
			buildGrid(26739
				, L"NAD27 / Alaska zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(15009)
				, Scale(0.9999)
				, FalseEasting(600000.0)
				, LatLonOrigin(54.0, -170.0)),
			buildGrid(3771
				, L"NAD27 / Alberta 3TM ref merid 111 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9999)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(3772
				, L"NAD27 / Alberta 3TM ref merid 114 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9999)
				, LatLonOrigin(0.0, -114.0)),
			buildGrid(3773
				, L"NAD27 / Alberta 3TM ref merid 117 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9999)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(3800
				, L"NAD27 / Alberta 3TM ref merid 120 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9999)
				, LatLonOrigin(0.0, -120.0)),
			buildGrid(26749
				, L"NAD27 / Arizona Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10202)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(31.0, -111.9166666666669983)),
			buildGrid(26748
				, L"NAD27 / Arizona East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10201)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(31.0, -110.1666666666669983)),
			buildGrid(26750
				, L"NAD27 / Arizona West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10203)
				, Scale(0.999933333)
				, FalseEasting(500000.0)
				, LatLonOrigin(31.0, -113.75)),
			buildGrid(26751
				, L"NAD27 / Arkansas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10301)
				, FalseEasting(2000000.0)
				, LatLonOrigin(34.3333333333333002, -92.0)
				, ParallelNorth(36.2333333333332988)
				, ParallelSouth(34.9333333333333016)),
			buildGrid(26752
				, L"NAD27 / Arkansas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10302)
				, FalseEasting(2000000.0)
				, LatLonOrigin(32.6666666666666998, -92.0)
				, ParallelNorth(34.7666666666667012)
				, ParallelSouth(33.2999999999999972)),
			buildGrid(32074
				, L"NAD27 / BLM 14N (feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(32064
				, L"NAD27 / BLM 14N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(32075
				, L"NAD27 / BLM 15N (feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(32065
				, L"NAD27 / BLM 15N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(32076
				, L"NAD27 / BLM 16N (feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(32066
				, L"NAD27 / BLM 16N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(32077
				, L"NAD27 / BLM 17N (feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(32067
				, L"NAD27 / BLM 17N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(3309
				, L"NAD27 / California Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4267
				, FalseNorthing(-4000000.0)
				, LatLonOrigin(0.0, -120.0)
				, ParallelNorth(34.0)
				, ParallelSouth(40.5)),
			buildGrid(26741
				, L"NAD27 / California zone I"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10401)
				, FalseEasting(2000000.0)
				, LatLonOrigin(39.3333333333333002, -122.0)
				, ParallelNorth(41.6666666666666998)
				, ParallelSouth(40.0)),
			buildGrid(26742
				, L"NAD27 / California zone II"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10402)
				, FalseEasting(2000000.0)
				, LatLonOrigin(37.6666666666666998, -122.0)
				, ParallelNorth(39.8333333333333002)
				, ParallelSouth(38.3333333333333002)),
			buildGrid(26743
				, L"NAD27 / California zone III"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10403)
				, FalseEasting(2000000.0)
				, LatLonOrigin(36.5, -120.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.0666666666666984)),
			buildGrid(26744
				, L"NAD27 / California zone IV"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10404)
				, FalseEasting(2000000.0)
				, LatLonOrigin(35.3333333333333002, -119.0)
				, ParallelNorth(37.25)
				, ParallelSouth(36.0)),
			buildGrid(26745
				, L"NAD27 / California zone V"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10405)
				, FalseEasting(2000000.0)
				, LatLonOrigin(33.5, -118.0)
				, ParallelNorth(35.466666666666697)
				, ParallelSouth(34.033333333333303)),
			buildGrid(26746
				, L"NAD27 / California zone VI"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10406)
				, FalseEasting(2000000.0)
				, LatLonOrigin(32.1666666666666998, -116.25)
				, ParallelNorth(33.8833333333332973)
				, ParallelSouth(32.783333333333303)),
			buildGrid(26799
				, L"NAD27 / California zone VII"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10407)
				, FalseNorthing(4160926.7400000002235174)
				, FalseEasting(4186692.5800000000745058)
				, LatLonOrigin(34.1333333333332973, -118.3333333333330017)
				, ParallelNorth(34.4166666666666998)
				, ParallelSouth(33.8666666666667027)),
			buildGrid(26754
				, L"NAD27 / Colorado Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10502)
				, FalseEasting(2000000.0)
				, LatLonOrigin(37.8333333333333002, -105.5)
				, ParallelNorth(39.75)
				, ParallelSouth(38.4500000000000028)),
			buildGrid(26753
				, L"NAD27 / Colorado North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10501)
				, FalseEasting(2000000.0)
				, LatLonOrigin(39.3333333333333002, -105.5)
				, ParallelNorth(39.716666666666697)
				, ParallelSouth(40.783333333333303)),
			buildGrid(26755
				, L"NAD27 / Colorado South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10503)
				, FalseEasting(2000000.0)
				, LatLonOrigin(36.6666666666666998, -105.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.2333333333332988)),
			buildGrid(26756
				, L"NAD27 / Connecticut"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10600)
				, FalseEasting(600000.0)
				, LatLonOrigin(40.8333333333333002, -72.75)
				, ParallelNorth(41.8666666666667027)
				, ParallelSouth(41.2000000000000028)),
			buildGrid(5069
				, L"NAD27 / Conus Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4267
				, LatLonOrigin(23.0, -96.0)
				, ParallelNorth(29.5)
				, ParallelSouth(45.5)),
			buildGrid(3795
				, L"NAD27 / Cuba Norte"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4267
				, FalseNorthing(280296.0160000000032596)
				, FalseEasting(500000.0)
				, LatLonOrigin(22.3500000000000014, -81.0)
				, ParallelNorth(23.0)
				, ParallelSouth(21.6999999999999993)),
			buildGrid(3796
				, L"NAD27 / Cuba Sur"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4267
				, FalseNorthing(229126.9390000000130385)
				, FalseEasting(500000.0)
				, LatLonOrigin(20.7166666666667005, -76.8333333333333002)
				, ParallelNorth(21.3000000000000007)
				, ParallelSouth(20.1333333333333009)),
			buildGrid(26757
				, L"NAD27 / Delaware"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10700)
				, Scale(0.999995)
				, FalseEasting(500000.0)
				, LatLonOrigin(38.0, -75.4166666666666998)),
			buildGrid(26758
				, L"NAD27 / Florida East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10901)
				, Scale(0.999941177)
				, FalseEasting(500000.0)
				, LatLonOrigin(24.3333333333333002, -81.0)),
			buildGrid(26760
				, L"NAD27 / Florida North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10903)
				, FalseEasting(2000000.0)
				, LatLonOrigin(29.0, -84.5)
				, ParallelNorth(30.75)
				, ParallelSouth(29.5833333333333002)),
			buildGrid(26759
				, L"NAD27 / Florida West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(10901)
				, Scale(0.999941177)
				, FalseEasting(500000.0)
				, LatLonOrigin(24.3333333333333002, -82.0)),
			buildGrid(26766
				, L"NAD27 / Georgia East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11001)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(30.0, -82.1666666666666998)),
			buildGrid(26767
				, L"NAD27 / Georgia West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11002)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(30.0, -84.1666666666666998)),
			buildGrid(32061
				, L"NAD27 / Guatemala Norte"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4267
				, Scale(0.99992226)
				, FalseNorthing(292209.5790000000270084)
				, FalseEasting(500000.0)
				, LatLonOrigin(16.8166666666666984, -90.3333333333333002)),
			buildGrid(32062
				, L"NAD27 / Guatemala Sur"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4267
				, Scale(0.99989906)
				, FalseNorthing(325992.6809999999823049)
				, FalseEasting(500000.0)
				, LatLonOrigin(14.9000000000000004, -90.3333333333333002)),
			buildGrid(26769
				, L"NAD27 / Idaho Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11102)
				, Scale(0.9999473679999999)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.6666666666666998, -114.0)),
			buildGrid(26768
				, L"NAD27 / Idaho East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11101)
				, Scale(0.9999473679999999)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.6666666666666998, -112.1666666666669983)),
			buildGrid(26770
				, L"NAD27 / Idaho West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11103)
				, Scale(0.999933333)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.6666666666666998, -115.75)),
			buildGrid(26771
				, L"NAD27 / Illinois East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11201)
				, Scale(0.9999749999999999)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.6666666666666998, -88.3333333333333002)),
			buildGrid(26772
				, L"NAD27 / Illinois West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11202)
				, Scale(0.999941177)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.6666666666666998, -90.1666666666666998)),
			buildGrid(26773
				, L"NAD27 / Indiana East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11301)
				, Scale(0.999966667)
				, FalseEasting(500000.0)
				, LatLonOrigin(37.5, -85.6666666666666998)),
			buildGrid(26774
				, L"NAD27 / Indiana West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11302)
				, Scale(0.999966667)
				, FalseEasting(500000.0)
				, LatLonOrigin(37.5, -87.0833333333333002)),
			buildGrid(26775
				, L"NAD27 / Iowa North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11401)
				, FalseEasting(2000000.0)
				, LatLonOrigin(41.5, -93.5)
				, ParallelNorth(43.2666666666667012)
				, ParallelSouth(42.0666666666666984)),
			buildGrid(26776
				, L"NAD27 / Iowa South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11402)
				, FalseEasting(2000000.0)
				, LatLonOrigin(40.0, -93.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.6166666666667027)),
			buildGrid(26777
				, L"NAD27 / Kansas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11501)
				, FalseEasting(2000000.0)
				, LatLonOrigin(38.3333333333333002, -98.0)
				, ParallelNorth(39.783333333333303)
				, ParallelSouth(38.716666666666697)),
			buildGrid(26778
				, L"NAD27 / Kansas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11502)
				, FalseEasting(2000000.0)
				, LatLonOrigin(36.6666666666666998, -98.5)
				, ParallelNorth(38.5666666666666984)
				, ParallelSouth(37.2666666666667012)),
			buildGrid(26779
				, L"NAD27 / Kentucky North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11601)
				, FalseEasting(2000000.0)
				, LatLonOrigin(37.5, -84.25)
				, ParallelNorth(37.966666666666697)
				, ParallelSouth(38.966666666666697)),
			buildGrid(26780
				, L"NAD27 / Kentucky South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11602)
				, FalseEasting(2000000.0)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(36.7333333333332988)
				, ParallelSouth(37.9333333333333016)),
			buildGrid(26781
				, L"NAD27 / Louisiana North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11701)
				, FalseEasting(2000000.0)
				, LatLonOrigin(30.6666666666666998, -92.5)
				, ParallelNorth(31.1666666666666998)
				, ParallelSouth(32.6666666666666998)),
			buildGrid(32099
				, L"NAD27 / Louisiana Offshore"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, FalseEasting(2000000.0)
				, LatLonOrigin(25.6666666666666998, -91.3333333333333002)
				, ParallelNorth(27.8333333333333002)
				, ParallelSouth(26.1666666666666998)),
			buildGrid(26782
				, L"NAD27 / Louisiana South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11702)
				, FalseEasting(2000000.0)
				, LatLonOrigin(28.6666666666666998, -91.3333333333333002)
				, ParallelNorth(29.3000000000000007)
				, ParallelSouth(30.6999999999999993)),
			buildGrid(26783
				, L"NAD27 / Maine East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11801)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(43.8333333333333002, -68.5)),
			buildGrid(26784
				, L"NAD27 / Maine West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11802)
				, Scale(0.999966667)
				, FalseEasting(500000.0)
				, LatLonOrigin(42.8333333333333002, -70.1666666666666998)),
			buildGrid(26785
				, L"NAD27 / Maryland"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(11900)
				, FalseEasting(800000.0)
				, LatLonOrigin(37.8333333333333002, -77.0)
				, ParallelNorth(38.2999999999999972)
				, ParallelSouth(39.4500000000000028)),
			buildGrid(26787
				, L"NAD27 / Massachusetts Island"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12002)
				, FalseEasting(200000.0)
				, LatLonOrigin(41.0, -70.5)
				, ParallelNorth(41.283333333333303)
				, ParallelSouth(41.4833333333332988)),
			buildGrid(26786
				, L"NAD27 / Massachusetts Mainland"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12001)
				, FalseEasting(600000.0)
				, LatLonOrigin(41.0, -71.5)
				, ParallelNorth(41.716666666666697)
				, ParallelSouth(42.6833333333333016)),
			buildGrid(5623
				, L"NAD27 / Michigan East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12101)
				, Scale(0.999943)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.5, -83.6666666699999979)),
			buildGrid(5624
				, L"NAD27 / Michigan Old Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12102)
				, Scale(0.999909)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.5, -85.75)),
			buildGrid(5625
				, L"NAD27 / Michigan West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12103)
				, Scale(0.999909)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.5, -88.75)),
			buildGrid(26792
				, L"NAD27 / Minnesota Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12202)
				, FalseEasting(2000000.0)
				, LatLonOrigin(45.0, -94.25)
				, ParallelNorth(45.6166666666667027)
				, ParallelSouth(47.0499999999999972)),
			buildGrid(26791
				, L"NAD27 / Minnesota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12201)
				, FalseEasting(2000000.0)
				, LatLonOrigin(46.5, -93.0999999999999943)
				, ParallelNorth(47.033333333333303)
				, ParallelSouth(48.6333333333332973)),
			buildGrid(26793
				, L"NAD27 / Minnesota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12203)
				, FalseEasting(2000000.0)
				, LatLonOrigin(43.0, -94.0)
				, ParallelNorth(43.783333333333303)
				, ParallelSouth(45.216666666666697)),
			buildGrid(26794
				, L"NAD27 / Mississippi East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12301)
				, Scale(0.99996)
				, FalseEasting(500000.0)
				, LatLonOrigin(29.6666666666666998, -88.8333333333333002)),
			buildGrid(26795
				, L"NAD27 / Mississippi West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12302)
				, Scale(0.999941177)
				, FalseEasting(500000.0)
				, LatLonOrigin(30.5, -90.3333333333333002)),
			buildGrid(26797
				, L"NAD27 / Missouri Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12402)
				, Scale(0.999933333)
				, FalseEasting(500000.0)
				, LatLonOrigin(35.8333333333333002, -92.5)),
			buildGrid(26796
				, L"NAD27 / Missouri East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12401)
				, Scale(0.999933333)
				, FalseEasting(500000.0)
				, LatLonOrigin(35.8333333333333002, -90.5)),
			buildGrid(26798
				, L"NAD27 / Missouri West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12403)
				, Scale(0.999941177)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.1666666666666998, -94.5)),
			buildGrid(32002
				, L"NAD27 / Montana Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12502)
				, FalseEasting(2000000.0)
				, LatLonOrigin(45.8333333333333002, -109.5)
				, ParallelNorth(47.8833333333332973)
				, ParallelSouth(46.4500000000000028)),
			buildGrid(32001
				, L"NAD27 / Montana North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12501)
				, FalseEasting(2000000.0)
				, LatLonOrigin(47.0, -109.5)
				, ParallelNorth(48.716666666666697)
				, ParallelSouth(47.8500000000000014)),
			buildGrid(32003
				, L"NAD27 / Montana South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12503)
				, FalseEasting(2000000.0)
				, LatLonOrigin(44.0, -109.5)
				, ParallelNorth(46.3999999999999986)
				, ParallelSouth(44.8666666666667027)),
			buildGrid(32081
				, L"NAD27 / MTM zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -53.0)),
			buildGrid(32082
				, L"NAD27 / MTM zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -56.0)),
			buildGrid(32083
				, L"NAD27 / MTM zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -58.5)),
			buildGrid(32084
				, L"NAD27 / MTM zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -61.5)),
			buildGrid(32085
				, L"NAD27 / MTM zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -64.5)),
			buildGrid(32086
				, L"NAD27 / MTM zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -67.5)),
			buildGrid(3797
				, L"NAD27 / MTQ Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4267
				, FalseEasting(800000.0)
				, LatLonOrigin(44.0, -70.0)
				, ParallelNorth(50.0)
				, ParallelSouth(46.0)),
			buildGrid(32005
				, L"NAD27 / Nebraska North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12601)
				, FalseEasting(2000000.0)
				, LatLonOrigin(41.3333333333333002, -100.0)
				, ParallelNorth(41.8500000000000014)
				, ParallelSouth(42.8166666666666984)),
			buildGrid(32006
				, L"NAD27 / Nebraska South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12602)
				, FalseEasting(2000000.0)
				, LatLonOrigin(39.6666666666666998, -99.5)
				, ParallelNorth(40.283333333333303)
				, ParallelSouth(41.716666666666697)),
			buildGrid(32008
				, L"NAD27 / Nevada Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12702)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(34.75, -116.6666666666669983)),
			buildGrid(32007
				, L"NAD27 / Nevada East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12701)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(34.75, -115.5833333333330017)),
			buildGrid(32009
				, L"NAD27 / Nevada West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12703)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(34.75, -118.5833333333330017)),
			buildGrid(5588
				, L"NAD27 / New Brunswick Stereographic (NAD27)"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::FT
				, 4267
				, Scale(0.999912)
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(46.5, 66.5)),
			buildGrid(32010
				, L"NAD27 / New Hampshire"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12800)
				, Scale(0.999966667)
				, FalseEasting(500000.0)
				, LatLonOrigin(42.5, -71.6666666666666998)),
			buildGrid(32011
				, L"NAD27 / New Jersey"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(12900)
				, Scale(0.9999749999999999)
				, FalseEasting(2000000.0)
				, LatLonOrigin(38.8333333333333002, -74.6666666666666998)),
			buildGrid(32013
				, L"NAD27 / New Mexico Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13002)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(31.0, -106.25)),
			buildGrid(32012
				, L"NAD27 / New Mexico East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13001)
				, Scale(0.999909091)
				, FalseEasting(500000.0)
				, LatLonOrigin(31.0, -104.3333333333330017)),
			buildGrid(32014
				, L"NAD27 / New Mexico West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13003)
				, Scale(0.999916667)
				, FalseEasting(500000.0)
				, LatLonOrigin(31.0, -107.8333333333330017)),
			buildGrid(32016
				, L"NAD27 / New York Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13102)
				, Scale(0.9999375)
				, FalseEasting(500000.0)
				, LatLonOrigin(40.0, -76.5833333333333002)),
			buildGrid(32015
				, L"NAD27 / New York East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13101)
				, Scale(0.999966667)
				, FalseEasting(500000.0)
				, LatLonOrigin(40.0, -74.3333333333333002)),
			buildGrid(32018
				, L"NAD27 / New York Long Island"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13104)
				, FalseEasting(1000000.0)
				, LatLonOrigin(40.5, -74.0)
				, ParallelNorth(41.033333333333303)
				, ParallelSouth(40.6666666666666998)),
			buildGrid(32017
				, L"NAD27 / New York West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13103)
				, Scale(0.9999375)
				, FalseEasting(500000.0)
				, LatLonOrigin(40.0, -78.5833333333333002)),
			buildGrid(32019
				, L"NAD27 / North Carolina"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13200)
				, FalseEasting(2000000.0)
				, LatLonOrigin(33.75, -79.0)
				, ParallelNorth(34.3333333333333002)
				, ParallelSouth(36.1666666666666998)),
			buildGrid(32020
				, L"NAD27 / North Dakota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13301)
				, FalseEasting(2000000.0)
				, LatLonOrigin(47.0, -100.5)
				, ParallelNorth(47.4333333333333016)
				, ParallelSouth(48.7333333333332988)),
			buildGrid(32021
				, L"NAD27 / North Dakota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13302)
				, FalseEasting(2000000.0)
				, LatLonOrigin(45.6666666666666998, -100.5)
				, ParallelNorth(46.1833333333333016)
				, ParallelSouth(47.4833333333332988)),
			buildGrid(32022
				, L"NAD27 / Ohio North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13401)
				, FalseEasting(2000000.0)
				, LatLonOrigin(39.6666666666666998, -82.5)
				, ParallelNorth(40.4333333333333016)
				, ParallelSouth(41.7000000000000028)),
			buildGrid(32023
				, L"NAD27 / Ohio South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13402)
				, FalseEasting(2000000.0)
				, LatLonOrigin(38.0, -82.5)
				, ParallelNorth(38.7333333333332988)
				, ParallelSouth(40.033333333333303)),
			buildGrid(32024
				, L"NAD27 / Oklahoma North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13501)
				, FalseEasting(2000000.0)
				, LatLonOrigin(35.0, -98.0)
				, ParallelNorth(35.5666666666666984)
				, ParallelSouth(36.7666666666667012)),
			buildGrid(32025
				, L"NAD27 / Oklahoma South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13502)
				, FalseEasting(2000000.0)
				, LatLonOrigin(33.3333333333333002, -98.0)
				, ParallelNorth(33.9333333333333016)
				, ParallelSouth(35.2333333333332988)),
			buildGrid(32026
				, L"NAD27 / Oregon North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13601)
				, FalseEasting(2000000.0)
				, LatLonOrigin(43.6666666666666998, -120.5)
				, ParallelNorth(44.3333333333333002)
				, ParallelSouth(46.0)),
			buildGrid(32027
				, L"NAD27 / Oregon South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13602)
				, FalseEasting(2000000.0)
				, LatLonOrigin(41.6666666666666998, -120.5)
				, ParallelNorth(42.3333333333333002)
				, ParallelSouth(44.0)),
			buildGrid(32028
				, L"NAD27 / Pennsylvania North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13701)
				, FalseEasting(2000000.0)
				, LatLonOrigin(40.1666666666666998, -77.75)
				, ParallelNorth(40.8833333333332973)
				, ParallelSouth(41.9500000000000028)),
			buildGrid(32029
				, L"NAD27 / Pennsylvania South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13702)
				, FalseEasting(2000000.0)
				, LatLonOrigin(39.3333333333333002, -77.75)
				, ParallelNorth(39.9333333333333016)
				, ParallelSouth(40.7999999999999972)),
			buildGrid(32098
				, L"NAD27 / Quebec Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4267
				, LatLonOrigin(44.0, -68.5)
				, ParallelNorth(60.0)
				, ParallelSouth(46.0)),
			buildGrid(32030
				, L"NAD27 / Rhode Island"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13800)
				, Scale(0.9999938)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.0833333333333002, -71.5)),
			buildGrid(3080
				, L"NAD27 / Shackleford"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4267
				, FalseNorthing(3000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(31.1666666666666998, -100.0)
				, ParallelNorth(27.4166666666666998)
				, ParallelSouth(34.9166666666666998)),
			buildGrid(32031
				, L"NAD27 / South Carolina North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13901)
				, FalseEasting(2000000.0)
				, LatLonOrigin(33.0, -81.0)
				, ParallelNorth(33.7666666666667012)
				, ParallelSouth(34.966666666666697)),
			buildGrid(32033
				, L"NAD27 / South Carolina South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(13902)
				, FalseEasting(2000000.0)
				, LatLonOrigin(31.8333333333333002, -81.0)
				, ParallelNorth(32.3333333333333002)
				, ParallelSouth(33.6666666666666998)),
			buildGrid(32034
				, L"NAD27 / South Dakota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14001)
				, FalseEasting(2000000.0)
				, LatLonOrigin(43.8333333333333002, -100.0)
				, ParallelNorth(44.4166666666666998)
				, ParallelSouth(45.6833333333333016)),
			buildGrid(32035
				, L"NAD27 / South Dakota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14002)
				, FalseEasting(2000000.0)
				, LatLonOrigin(42.3333333333333002, -100.3333333333330017)
				, ParallelNorth(42.8333333333333002)
				, ParallelSouth(44.3999999999999986)),
			buildGrid(2204
				, L"NAD27 / Tennessee"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14100)
				, FalseNorthing(100000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(34.6666666666666998, -86.0)
				, ParallelNorth(35.25)
				, ParallelSouth(36.4166666666666998)),
			buildGrid(32039
				, L"NAD27 / Texas Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14203)
				, FalseEasting(2000000.0)
				, LatLonOrigin(29.6666666666666998, -100.3333333333330017)
				, ParallelNorth(30.1166666666666991)
				, ParallelSouth(31.8833333333333009)),
			buildGrid(32037
				, L"NAD27 / Texas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14201)
				, FalseEasting(2000000.0)
				, LatLonOrigin(34.0, -101.5)
				, ParallelNorth(34.6499999999999986)
				, ParallelSouth(36.1833333333333016)),
			buildGrid(32038
				, L"NAD27 / Texas North Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14202)
				, FalseEasting(2000000.0)
				, LatLonOrigin(31.6666666666666998, -97.5)
				, ParallelNorth(32.1333333333332973)
				, ParallelSouth(33.966666666666697)),
			buildGrid(32041
				, L"NAD27 / Texas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14205)
				, FalseEasting(2000000.0)
				, LatLonOrigin(25.6666666666666998, -98.5)
				, ParallelNorth(26.1666666666666998)
				, ParallelSouth(27.8333333333333002)),
			buildGrid(32040
				, L"NAD27 / Texas South Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14204)
				, FalseEasting(2000000.0)
				, LatLonOrigin(27.8333333333333002, -99.0)
				, ParallelNorth(28.3833333333333009)
				, ParallelSouth(30.2833333333332995)),
			buildGrid(32043
				, L"NAD27 / Utah Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14302)
				, FalseEasting(2000000.0)
				, LatLonOrigin(38.3333333333333002, -111.5)
				, ParallelNorth(39.0166666666667012)
				, ParallelSouth(40.6499999999999986)),
			buildGrid(32042
				, L"NAD27 / Utah North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14301)
				, FalseEasting(2000000.0)
				, LatLonOrigin(40.3333333333333002, -111.5)
				, ParallelNorth(40.716666666666697)
				, ParallelSouth(41.783333333333303)),
			buildGrid(32044
				, L"NAD27 / Utah South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14303)
				, FalseEasting(2000000.0)
				, LatLonOrigin(36.6666666666666998, -111.5)
				, ParallelNorth(37.216666666666697)
				, ParallelSouth(38.3500000000000014)),
			buildGrid(26710
				, L"NAD27 / UTM zone 10N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -123.0)),
			buildGrid(26711
				, L"NAD27 / UTM zone 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(26712
				, L"NAD27 / UTM zone 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(26713
				, L"NAD27 / UTM zone 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(26714
				, L"NAD27 / UTM zone 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(26715
				, L"NAD27 / UTM zone 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(26716
				, L"NAD27 / UTM zone 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(26717
				, L"NAD27 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(26718
				, L"NAD27 / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(26719
				, L"NAD27 / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(26701
				, L"NAD27 / UTM zone 1N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(26720
				, L"NAD27 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(26721
				, L"NAD27 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(26722
				, L"NAD27 / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(26702
				, L"NAD27 / UTM zone 2N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(26703
				, L"NAD27 / UTM zone 3N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -165.0)),
			buildGrid(26704
				, L"NAD27 / UTM zone 4N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -159.0)),
			buildGrid(3370
				, L"NAD27 / UTM zone 59N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(26705
				, L"NAD27 / UTM zone 5N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(3371
				, L"NAD27 / UTM zone 60N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(26706
				, L"NAD27 / UTM zone 6N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(26707
				, L"NAD27 / UTM zone 7N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(26708
				, L"NAD27 / UTM zone 8N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -135.0)),
			buildGrid(26709
				, L"NAD27 / UTM zone 9N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -129.0)),
			buildGrid(32045
				, L"NAD27 / Vermont"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14400)
				, Scale(0.999964286)
				, FalseEasting(500000.0)
				, LatLonOrigin(42.5, -72.5)),
			buildGrid(32046
				, L"NAD27 / Virginia North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14501)
				, FalseEasting(2000000.0)
				, LatLonOrigin(37.6666666666666998, -78.5)
				, ParallelNorth(38.033333333333303)
				, ParallelSouth(39.2000000000000028)),
			buildGrid(32047
				, L"NAD27 / Virginia South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14502)
				, FalseEasting(2000000.0)
				, LatLonOrigin(36.3333333333333002, -78.5)
				, ParallelNorth(36.7666666666667012)
				, ParallelSouth(37.966666666666697)),
			buildGrid(32048
				, L"NAD27 / Washington North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14601)
				, FalseEasting(2000000.0)
				, LatLonOrigin(47.0, -120.8333333333330017)
				, ParallelNorth(47.5)
				, ParallelSouth(48.7333333333332988)),
			buildGrid(32049
				, L"NAD27 / Washington South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14602)
				, FalseEasting(2000000.0)
				, LatLonOrigin(45.3333333333333002, -120.5)
				, ParallelNorth(45.8333333333333002)
				, ParallelSouth(47.3333333333333002)),
			buildGrid(32050
				, L"NAD27 / West Virginia North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14701)
				, FalseEasting(2000000.0)
				, LatLonOrigin(38.5, -79.5)
				, ParallelNorth(39.0)
				, ParallelSouth(40.25)),
			buildGrid(32051
				, L"NAD27 / West Virginia South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14702)
				, FalseEasting(2000000.0)
				, LatLonOrigin(37.0, -81.0)
				, ParallelNorth(37.4833333333332988)
				, ParallelSouth(38.8833333333332973)),
			buildGrid(32053
				, L"NAD27 / Wisconsin Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14802)
				, FalseEasting(2000000.0)
				, LatLonOrigin(43.8333333333333002, -90.0)
				, ParallelNorth(44.25)
				, ParallelSouth(45.5)),
			buildGrid(32052
				, L"NAD27 / Wisconsin North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14801)
				, FalseEasting(2000000.0)
				, LatLonOrigin(45.1666666666666998, -90.0)
				, ParallelNorth(45.5666666666666984)
				, ParallelSouth(46.7666666666667012)),
			buildGrid(32054
				, L"NAD27 / Wisconsin South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14803)
				, FalseEasting(2000000.0)
				, LatLonOrigin(42.0, -90.0)
				, ParallelNorth(42.7333333333332988)
				, ParallelSouth(44.0666666666666984)),
			buildGrid(3069
				, L"NAD27 / Wisconsin Transverse Mercator"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseNorthing(-4500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -90.0)),
			buildGrid(32055
				, L"NAD27 / Wyoming East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14901)
				, Scale(0.999941177)
				, FalseEasting(500000.0)
				, LatLonOrigin(40.6666666666666998, -105.1666666666669983)),
			buildGrid(32056
				, L"NAD27 / Wyoming East Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14902)
				, Scale(0.999941177)
				, FalseEasting(500000.0)
				, LatLonOrigin(40.6666666666666998, -107.3333333333330017)),
			buildGrid(32058
				, L"NAD27 / Wyoming West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14904)
				, Scale(0.999941177)
				, FalseEasting(500000.0)
				, LatLonOrigin(40.6666666666666998, -110.0833333333330017)),
			buildGrid(32057
				, L"NAD27 / Wyoming West Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4267
				, StatePlane(14903)
				, Scale(0.999941177)
				, FalseEasting(500000.0)
				, LatLonOrigin(40.6666666666666998, -108.75)),
			buildGrid(2019
				, L"NAD27(76) / MTM zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -79.5)),
			buildGrid(2020
				, L"NAD27(76) / MTM zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -82.5)),
			buildGrid(2021
				, L"NAD27(76) / MTM zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(2022
				, L"NAD27(76) / MTM zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -84.0)),
			buildGrid(2023
				, L"NAD27(76) / MTM zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(2024
				, L"NAD27(76) / MTM zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -90.0)),
			buildGrid(2025
				, L"NAD27(76) / MTM zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(2026
				, L"NAD27(76) / MTM zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -96.0)),
			buildGrid(2017
				, L"NAD27(76) / MTM zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -73.5)),
			buildGrid(2018
				, L"NAD27(76) / MTM zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -76.5)),
			buildGrid(2027
				, L"NAD27(76) / UTM zone 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(2028
				, L"NAD27(76) / UTM zone 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(2029
				, L"NAD27(76) / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(2030
				, L"NAD27(76) / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4608
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(2138
				, L"NAD27(CGQ77) / Quebec Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4609
				, LatLonOrigin(44.0, -68.5)
				, ParallelNorth(60.0)
				, ParallelSouth(46.0)),
			buildGrid(2016
				, L"NAD27(CGQ77) / SCoPQ zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -79.5)),
			buildGrid(2008
				, L"NAD27(CGQ77) / SCoPQ zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -55.5)),
			buildGrid(2009
				, L"NAD27(CGQ77) / SCoPQ zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -58.5)),
			buildGrid(2010
				, L"NAD27(CGQ77) / SCoPQ zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -61.5)),
			buildGrid(2011
				, L"NAD27(CGQ77) / SCoPQ zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -64.5)),
			buildGrid(2012
				, L"NAD27(CGQ77) / SCoPQ zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -67.5)),
			buildGrid(2013
				, L"NAD27(CGQ77) / SCoPQ zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -70.5)),
			buildGrid(2014
				, L"NAD27(CGQ77) / SCoPQ zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -73.5)),
			buildGrid(2015
				, L"NAD27(CGQ77) / SCoPQ zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -76.5)),
			buildGrid(2031
				, L"NAD27(CGQ77) / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(2032
				, L"NAD27(CGQ77) / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(2033
				, L"NAD27(CGQ77) / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(2034
				, L"NAD27(CGQ77) / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(2035
				, L"NAD27(CGQ77) / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4609
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(26929
				, L"NAD83 / Alabama East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(101)
				, Scale(0.99996)
				, FalseEasting(200000.0)
				, LatLonOrigin(30.5, -85.8333333333333002)),
			buildGrid(26930
				, L"NAD83 / Alabama West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(102)
				, Scale(0.999933333)
				, FalseEasting(600000.0)
				, LatLonOrigin(30.0, -87.5)),
			buildGrid(3338
				, L"NAD83 / Alaska Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4269
				, LatLonOrigin(50.0, -154.0)
				, ParallelNorth(55.0)
				, ParallelSouth(65.0)),
			buildGrid(26931
				, L"NAD83 / Alaska zone 1"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5001)
				, Scale(0.9999)
				, FalseNorthing(-5000000.0)
				, FalseEasting(5000000.0)
				, LatLonOrigin(57.0, -133.6666666666669983)
				, Azimuth(323.1301023611110281)
				, RectifiedGrid(323.1301023611110281)),
			buildGrid(26940
				, L"NAD83 / Alaska zone 10"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(5010)
				, FalseEasting(1000000.0)
				, LatLonOrigin(51.0, -176.0)
				, ParallelNorth(53.8333333333333002)
				, ParallelSouth(51.8333333333333002)),
			buildGrid(26932
				, L"NAD83 / Alaska zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5002)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -142.0)),
			buildGrid(26933
				, L"NAD83 / Alaska zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5003)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -146.0)),
			buildGrid(26934
				, L"NAD83 / Alaska zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5004)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -150.0)),
			buildGrid(26935
				, L"NAD83 / Alaska zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5005)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -154.0)),
			buildGrid(26936
				, L"NAD83 / Alaska zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5006)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -158.0)),
			buildGrid(26937
				, L"NAD83 / Alaska zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5007)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -162.0)),
			buildGrid(26938
				, L"NAD83 / Alaska zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5008)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -166.0)),
			buildGrid(26939
				, L"NAD83 / Alaska zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5009)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -170.0)),
			buildGrid(3400
				, L"NAD83 / Alberta 10-TM (Forest)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9992)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -115.0)),
			buildGrid(3401
				, L"NAD83 / Alberta 10-TM (Resource)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9992)
				, LatLonOrigin(0.0, -115.0)),
			buildGrid(3775
				, L"NAD83 / Alberta 3TM ref merid 111 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(3776
				, L"NAD83 / Alberta 3TM ref merid 114 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, LatLonOrigin(0.0, -114.0)),
			buildGrid(3777
				, L"NAD83 / Alberta 3TM ref merid 117 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(3801
				, L"NAD83 / Alberta 3TM ref merid 120 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, LatLonOrigin(0.0, -120.0)),
			buildGrid(26949
				, L"NAD83 / Arizona Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(202)
				, Scale(0.9999)
				, FalseEasting(213360.0)
				, LatLonOrigin(31.0, -111.9166666666669983)),
			buildGrid(2223
				, L"NAD83 / Arizona Central (ft)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FT
				, 4269
				, Scale(0.9999)
				, FalseEasting(700000.0)
				, LatLonOrigin(31.0, -111.9166666666669983)),
			buildGrid(26948
				, L"NAD83 / Arizona East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(201)
				, Scale(0.9999)
				, FalseEasting(213360.0)
				, LatLonOrigin(31.0, -110.1666666666669983)),
			buildGrid(2222
				, L"NAD83 / Arizona East (ft)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FT
				, 4269
				, Scale(0.9999)
				, FalseEasting(700000.0)
				, LatLonOrigin(31.0, -110.1666666666669983)),
			buildGrid(26950
				, L"NAD83 / Arizona West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(203)
				, Scale(0.999933333)
				, FalseEasting(213360.0)
				, LatLonOrigin(31.0, -113.75)),
			buildGrid(2224
				, L"NAD83 / Arizona West (ft)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FT
				, 4269
				, Scale(0.999933333)
				, FalseEasting(700000.0)
				, LatLonOrigin(31.0, -113.75)),
			buildGrid(26951
				, L"NAD83 / Arkansas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(301)
				, FalseEasting(400000.0)
				, LatLonOrigin(34.3333333333333002, -92.0)
				, ParallelNorth(36.2333333333332988)
				, ParallelSouth(34.9333333333333016)),
			buildGrid(3433
				, L"NAD83 / Arkansas North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(34.3333333333333002, -92.0)
				, ParallelNorth(36.2333333333332988)
				, ParallelSouth(34.9333333333333016)),
			buildGrid(26952
				, L"NAD83 / Arkansas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(302)
				, FalseNorthing(400000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(32.6666666666666998, -92.0)
				, ParallelNorth(34.7666666666667012)
				, ParallelSouth(33.2999999999999972)),
			buildGrid(3434
				, L"NAD83 / Arkansas South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1312333.3333000000566244)
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(32.6666666666666998, -92.0)
				, ParallelNorth(34.7666666666667012)
				, ParallelSouth(33.2999999999999972)),
			buildGrid(3005
				, L"NAD83 / BC Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4269
				, FalseEasting(1000000.0)
				, LatLonOrigin(45.0, -126.0)
				, ParallelNorth(50.0)
				, ParallelSouth(58.5)),
			buildGrid(32164
				, L"NAD83 / BLM 14N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(32165
				, L"NAD83 / BLM 15N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(32166
				, L"NAD83 / BLM 16N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(32167
				, L"NAD83 / BLM 17N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(3310
				, L"NAD83 / California Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4269
				, FalseNorthing(-4000000.0)
				, LatLonOrigin(0.0, -120.0)
				, ParallelNorth(34.0)
				, ParallelSouth(40.5)),
			buildGrid(26941
				, L"NAD83 / California zone 1"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(401)
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(39.3333333333333002, -122.0)
				, ParallelNorth(41.6666666666666998)
				, ParallelSouth(40.0)),
			buildGrid(2225
				, L"NAD83 / California zone 1 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(39.3333333333333002, -122.0)
				, ParallelNorth(41.6666666666666998)
				, ParallelSouth(40.0)),
			buildGrid(26942
				, L"NAD83 / California zone 2"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(402)
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(37.6666666666666998, -122.0)
				, ParallelNorth(39.8333333333333002)
				, ParallelSouth(38.3333333333333002)),
			buildGrid(2226
				, L"NAD83 / California zone 2 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(37.6666666666666998, -122.0)
				, ParallelNorth(39.8333333333333002)
				, ParallelSouth(38.3333333333333002)),
			buildGrid(26943
				, L"NAD83 / California zone 3"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(403)
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(36.5, -120.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.0666666666666984)),
			buildGrid(2227
				, L"NAD83 / California zone 3 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(36.5, -120.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.0666666666666984)),
			buildGrid(26944
				, L"NAD83 / California zone 4"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(404)
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(35.3333333333333002, -119.0)
				, ParallelNorth(37.25)
				, ParallelSouth(36.0)),
			buildGrid(2228
				, L"NAD83 / California zone 4 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(35.3333333333333002, -119.0)
				, ParallelNorth(37.25)
				, ParallelSouth(36.0)),
			buildGrid(26945
				, L"NAD83 / California zone 5"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(405)
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(33.5, -118.0)
				, ParallelNorth(35.466666666666697)
				, ParallelSouth(34.033333333333303)),
			buildGrid(2229
				, L"NAD83 / California zone 5 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(33.5, -118.0)
				, ParallelNorth(35.466666666666697)
				, ParallelSouth(34.033333333333303)),
			buildGrid(26946
				, L"NAD83 / California zone 6"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(406)
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(32.1666666666666998, -116.25)
				, ParallelNorth(33.8833333333332973)
				, ParallelSouth(32.783333333333303)),
			buildGrid(2230
				, L"NAD83 / California zone 6 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(32.1666666666666998, -116.25)
				, ParallelNorth(33.8833333333332973)
				, ParallelSouth(32.783333333333303)),
			buildGrid(3978
				, L"NAD83 / Canada Atlas Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, LatLonOrigin(49.0, -95.0)
				, ParallelNorth(49.0)
				, ParallelSouth(77.0)),
			buildGrid(26954
				, L"NAD83 / Colorado Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(502)
				, FalseNorthing(304800.6096000000252388)
				, FalseEasting(914401.8288999999640509)
				, LatLonOrigin(37.8333333333333002, -105.5)
				, ParallelNorth(39.75)
				, ParallelSouth(38.4500000000000028)),
			buildGrid(2232
				, L"NAD83 / Colorado Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(37.8333333333333002, -105.5)
				, ParallelNorth(39.75)
				, ParallelSouth(38.4500000000000028)),
			buildGrid(26953
				, L"NAD83 / Colorado North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(501)
				, FalseNorthing(304800.6096000000252388)
				, FalseEasting(914401.8288999999640509)
				, LatLonOrigin(39.3333333333333002, -105.5)
				, ParallelNorth(40.783333333333303)
				, ParallelSouth(39.716666666666697)),
			buildGrid(2231
				, L"NAD83 / Colorado North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(39.3333333333333002, -105.5)
				, ParallelNorth(40.783333333333303)
				, ParallelSouth(39.716666666666697)),
			buildGrid(26955
				, L"NAD83 / Colorado South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(503)
				, FalseNorthing(304800.6096000000252388)
				, FalseEasting(914401.8288999999640509)
				, LatLonOrigin(36.6666666666666998, -105.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.2333333333332988)),
			buildGrid(2233
				, L"NAD83 / Colorado South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(36.6666666666666998, -105.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.2333333333332988)),
			buildGrid(26956
				, L"NAD83 / Connecticut"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(600)
				, FalseNorthing(152400.3048000000126194)
				, FalseEasting(304800.6096000000252388)
				, LatLonOrigin(40.8333333333333002, -72.75)
				, ParallelNorth(41.8666666666667027)
				, ParallelSouth(41.2000000000000028)),
			buildGrid(2234
				, L"NAD83 / Connecticut (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(500000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(40.8333333333333002, -72.75)
				, ParallelNorth(41.8666666666667027)
				, ParallelSouth(41.2000000000000028)),
			buildGrid(5070
				, L"NAD83 / Conus Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4269
				, LatLonOrigin(23.0, -96.0)
				, ParallelNorth(29.5)
				, ParallelSouth(45.5)),
			buildGrid(26957
				, L"NAD83 / Delaware"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(700)
				, Scale(0.999995)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, -75.4166666666666998)),
			buildGrid(2235
				, L"NAD83 / Delaware (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.999995)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(38.0, -75.4166666666666998)),
			buildGrid(26958
				, L"NAD83 / Florida East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(901)
				, Scale(0.999941177)
				, FalseEasting(200000.0)
				, LatLonOrigin(24.3333333333333002, -81.0)),
			buildGrid(2236
				, L"NAD83 / Florida East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.999941177)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(24.3333333333333002, -81.0)),
			buildGrid(3086
				, L"NAD83 / Florida GDL Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4269
				, FalseEasting(400000.0)
				, LatLonOrigin(24.0, -84.0)
				, ParallelNorth(24.0)
				, ParallelSouth(31.5)),
			buildGrid(26960
				, L"NAD83 / Florida North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(903)
				, FalseEasting(600000.0)
				, LatLonOrigin(29.0, -84.5)
				, ParallelNorth(30.75)
				, ParallelSouth(29.5833333333333002)),
			buildGrid(2238
				, L"NAD83 / Florida North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(29.0, -84.5)
				, ParallelNorth(30.75)
				, ParallelSouth(29.5833333333333002)),
			buildGrid(26959
				, L"NAD83 / Florida West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(902)
				, Scale(0.999941177)
				, FalseEasting(200000.0)
				, LatLonOrigin(24.3333333333333002, -82.0)),
			buildGrid(2237
				, L"NAD83 / Florida West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.999941177)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(24.3333333333333002, -82.0)),
			buildGrid(26966
				, L"NAD83 / Georgia East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(1001)
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(30.0, -82.1666666666666998)),
			buildGrid(2239
				, L"NAD83 / Georgia East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(30.0, -82.1666666666666998)),
			buildGrid(26967
				, L"NAD83 / Georgia West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(1002)
				, Scale(0.9999)
				, FalseEasting(700000.0)
				, LatLonOrigin(30.0, -84.1666666666666998)),
			buildGrid(2240
				, L"NAD83 / Georgia West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999)
				, FalseEasting(2296583.3330000001005828)
				, LatLonOrigin(30.0, -84.1666666666666998)),
			buildGrid(3174
				, L"NAD83 / Great Lakes Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4269
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(45.5689769999999967, -84.455955000000003)
				, ParallelNorth(42.1227739999999997)
				, ParallelSouth(49.0151800000000009)),
			buildGrid(3175
				, L"NAD83 / Great Lakes and St Lawrence Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4269
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(45.5689769999999967, -83.248626999999999)
				, ParallelNorth(42.1227739999999997)
				, ParallelSouth(49.0151800000000009)),
			buildGrid(26961
				, L"NAD83 / Hawaii zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5101)
				, Scale(0.999966667)
				, FalseEasting(500000.0)
				, LatLonOrigin(18.8333333333333002, -155.5)),
			buildGrid(26962
				, L"NAD83 / Hawaii zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5102)
				, Scale(0.999966667)
				, FalseEasting(500000.0)
				, LatLonOrigin(20.3333333333333002, -156.6666666666669983)),
			buildGrid(26963
				, L"NAD83 / Hawaii zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5103)
				, Scale(0.99999)
				, FalseEasting(500000.0)
				, LatLonOrigin(21.1666666666666998, -158.0)),
			buildGrid(3759
				, L"NAD83 / Hawaii zone 3 (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.99999)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(21.1666666666666998, -158.0)),
			buildGrid(26964
				, L"NAD83 / Hawaii zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5104)
				, Scale(0.99999)
				, FalseEasting(500000.0)
				, LatLonOrigin(21.8333333333333002, -159.5)),
			buildGrid(26965
				, L"NAD83 / Hawaii zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(5105)
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(21.6666666666666998, -160.1666666666669983)),
			buildGrid(26969
				, L"NAD83 / Idaho Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(1102)
				, Scale(0.9999473679999999)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.6666666666666998, -114.0)),
			buildGrid(2242
				, L"NAD83 / Idaho Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999473679999999)
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(41.6666666666666998, -114.0)),
			buildGrid(26968
				, L"NAD83 / Idaho East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(1101)
				, Scale(0.9999473679999999)
				, FalseEasting(200000.0)
				, LatLonOrigin(41.6666666666666998, -112.1666666666669983)),
			buildGrid(2241
				, L"NAD83 / Idaho East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999473679999999)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(41.6666666666666998, -112.1666666666669983)),
			buildGrid(26970
				, L"NAD83 / Idaho West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(1103)
				, Scale(0.999933333)
				, FalseEasting(800000.0)
				, LatLonOrigin(41.6666666666666998, -115.75)),
			buildGrid(2243
				, L"NAD83 / Idaho West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.999933333)
				, FalseEasting(2624666.6669999998994172)
				, LatLonOrigin(41.6666666666666998, -115.75)),
			buildGrid(26971
				, L"NAD83 / Illinois East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(1201)
				, Scale(0.9999749999999999)
				, FalseEasting(300000.0)
				, LatLonOrigin(36.6666666666666998, -88.3333333333333002)),
			buildGrid(3435
				, L"NAD83 / Illinois East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999749999999999)
				, FalseEasting(984250.0)
				, LatLonOrigin(36.6666666666666998, -88.3333333333333002)),
			buildGrid(26972
				, L"NAD83 / Illinois West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(1202)
				, Scale(0.999941177)
				, FalseEasting(700000.0)
				, LatLonOrigin(36.6666666666666998, -90.1666666666666998)),
			buildGrid(3436
				, L"NAD83 / Illinois West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.999941177)
				, FalseEasting(2296583.3333000000566244)
				, LatLonOrigin(36.6666666666666998, -90.1666666666666998)),
			buildGrid(26973
				, L"NAD83 / Indiana East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(1301)
				, Scale(0.999966667)
				, FalseNorthing(250000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(37.5, -85.6666666666666998)),
			buildGrid(2965
				, L"NAD83 / Indiana East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.999966667)
				, FalseNorthing(820208.3329999999841675)
				, FalseEasting(328083.3329999999841675)
				, LatLonOrigin(37.5, -85.6666666666666998)),
			buildGrid(26974
				, L"NAD83 / Indiana West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(1302)
				, Scale(0.999966667)
				, FalseNorthing(250000.0)
				, FalseEasting(900000.0)
				, LatLonOrigin(37.5, -87.0833333333333002)),
			buildGrid(2966
				, L"NAD83 / Indiana West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.999966667)
				, FalseNorthing(820208.3329999999841675)
				, FalseEasting(2952750.0)
				, LatLonOrigin(37.5, -87.0833333333333002)),
			buildGrid(26975
				, L"NAD83 / Iowa North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(1401)
				, FalseNorthing(1000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(41.5, -93.5)
				, ParallelNorth(43.2666666666667012)
				, ParallelSouth(42.0666666666666984)),
			buildGrid(3417
				, L"NAD83 / Iowa North (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(3280833.3333000000566244)
				, FalseEasting(4921250.0)
				, LatLonOrigin(41.5, -93.5)
				, ParallelNorth(43.2666666666667012)
				, ParallelSouth(42.0666666666666984)),
			buildGrid(26976
				, L"NAD83 / Iowa South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(1402)
				, FalseEasting(500000.0)
				, LatLonOrigin(40.0, -93.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.6166666666667027)),
			buildGrid(3418
				, L"NAD83 / Iowa South (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(40.0, -93.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.6166666666667027)),
			buildGrid(26977
				, L"NAD83 / Kansas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(1501)
				, FalseEasting(400000.0)
				, LatLonOrigin(38.3333333333333002, -98.0)
				, ParallelNorth(39.783333333333303)
				, ParallelSouth(38.716666666666697)),
			buildGrid(3419
				, L"NAD83 / Kansas North (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(38.3333333333333002, -98.0)
				, ParallelNorth(39.783333333333303)
				, ParallelSouth(38.716666666666697)),
			buildGrid(26978
				, L"NAD83 / Kansas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(1502)
				, FalseNorthing(400000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(36.6666666666666998, -98.5)
				, ParallelNorth(38.5666666666666984)
				, ParallelSouth(37.2666666666667012)),
			buildGrid(3420
				, L"NAD83 / Kansas South (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1312333.3333000000566244)
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(36.6666666666666998, -98.5)
				, ParallelNorth(38.5666666666666984)
				, ParallelSouth(37.2666666666667012)),
			buildGrid(2205
				, L"NAD83 / Kentucky North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(1601)
				, FalseEasting(500000.0)
				, LatLonOrigin(37.5, -84.25)
				, ParallelNorth(37.966666666666697)
				, ParallelSouth(38.966666666666697)),
			buildGrid(2246
				, L"NAD83 / Kentucky North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(37.5, -84.25)
				, ParallelNorth(37.966666666666697)
				, ParallelSouth(38.966666666666697)),
			buildGrid(3088
				, L"NAD83 / Kentucky Single Zone"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(1600)
				, FalseNorthing(1000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.0833333333333002)
				, ParallelSouth(38.6666666666666998)),
			buildGrid(3089
				, L"NAD83 / Kentucky Single Zone (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(3280833.3330000001005828)
				, FalseEasting(4921250.0)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.0833333333333002)
				, ParallelSouth(38.6666666666666998)),
			buildGrid(26980
				, L"NAD83 / Kentucky South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(1602)
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.9333333333333016)
				, ParallelSouth(36.7333333333332988)),
			buildGrid(2247
				, L"NAD83 / Kentucky South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.9333333333333016)
				, ParallelSouth(36.7333333333332988)),
			buildGrid(26981
				, L"NAD83 / Louisiana North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(1701)
				, FalseEasting(1000000.0)
				, LatLonOrigin(30.5, -92.5)
				, ParallelNorth(32.6666666666666998)
				, ParallelSouth(31.1666666666666998)),
			buildGrid(3451
				, L"NAD83 / Louisiana North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(3280833.3333000000566244)
				, LatLonOrigin(30.5, -92.5)
				, ParallelNorth(32.6666666666666998)
				, ParallelSouth(31.1666666666666998)),
			buildGrid(32199
				, L"NAD83 / Louisiana Offshore"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(1703)
				, FalseEasting(1000000.0)
				, LatLonOrigin(25.5, -91.3333333333333002)
				, ParallelNorth(27.8333333333333002)
				, ParallelSouth(26.1666666666666998)),
			buildGrid(3453
				, L"NAD83 / Louisiana Offshore (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(3280833.3333000000566244)
				, LatLonOrigin(25.5, -91.3333333333333002)
				, ParallelNorth(27.8333333333333002)
				, ParallelSouth(26.1666666666666998)),
			buildGrid(26982
				, L"NAD83 / Louisiana South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(1702)
				, FalseEasting(1000000.0)
				, LatLonOrigin(28.5, -91.3333333333333002)
				, ParallelNorth(30.6999999999999993)
				, ParallelSouth(29.3000000000000007)),
			buildGrid(3452
				, L"NAD83 / Louisiana South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(3280833.3333000000566244)
				, LatLonOrigin(28.5, -91.3333333333333002)
				, ParallelNorth(30.6999999999999993)
				, ParallelSouth(29.3000000000000007)),
			buildGrid(3463
				, L"NAD83 / Maine CS2000 Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.99998)
				, FalseEasting(500000.0)
				, LatLonOrigin(43.5, -69.125)),
			buildGrid(3072
				, L"NAD83 / Maine CS2000 East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.99998)
				, FalseEasting(700000.0)
				, LatLonOrigin(43.8333333333333002, -67.875)),
			buildGrid(3074
				, L"NAD83 / Maine CS2000 West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.99998)
				, FalseEasting(300000.0)
				, LatLonOrigin(42.8333333333333002, -70.375)),
			buildGrid(26983
				, L"NAD83 / Maine East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(1801)
				, Scale(0.9999)
				, FalseEasting(300000.0)
				, LatLonOrigin(43.6666666666666998, -68.5)),
			buildGrid(26847
				, L"NAD83 / Maine East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999)
				, FalseEasting(984250.0)
				, LatLonOrigin(43.6666666666666998, -68.5)),
			buildGrid(26984
				, L"NAD83 / Maine West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(1802)
				, Scale(0.999966667)
				, FalseEasting(900000.0)
				, LatLonOrigin(42.8333333333333002, -70.1666666666666998)),
			buildGrid(26848
				, L"NAD83 / Maine West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.999966667)
				, FalseEasting(2952750.0)
				, LatLonOrigin(42.8333333333333002, -70.1666666666666998)),
			buildGrid(26985
				, L"NAD83 / Maryland"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(1900)
				, FalseEasting(400000.0)
				, LatLonOrigin(37.6666666666666998, -77.0)
				, ParallelNorth(39.4500000000000028)
				, ParallelSouth(38.2999999999999972)),
			buildGrid(2248
				, L"NAD83 / Maryland (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1312333.3330000001005828)
				, LatLonOrigin(37.6666666666666998, -77.0)
				, ParallelNorth(39.4500000000000028)
				, ParallelSouth(38.2999999999999972)),
			buildGrid(26987
				, L"NAD83 / Massachusetts Island"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(2002)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.0, -70.5)
				, ParallelNorth(41.4833333333332988)
				, ParallelSouth(41.283333333333303)),
			buildGrid(2250
				, L"NAD83 / Massachusetts Island (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(41.0, -70.5)
				, ParallelNorth(41.4833333333332988)
				, ParallelSouth(41.283333333333303)),
			buildGrid(26986
				, L"NAD83 / Massachusetts Mainland"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(2001)
				, FalseNorthing(750000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(41.0, -71.5)
				, ParallelNorth(42.6833333333333016)
				, ParallelSouth(41.716666666666697)),
			buildGrid(2249
				, L"NAD83 / Massachusetts Mainland (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(2460625.0)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(41.0, -71.5)
				, ParallelNorth(42.6833333333333016)
				, ParallelSouth(41.716666666666697)),
			buildGrid(26989
				, L"NAD83 / Michigan Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(2112)
				, FalseEasting(6000000.0)
				, LatLonOrigin(43.3166666666666984, -84.3666666666667027)
				, ParallelNorth(45.7000000000000028)
				, ParallelSouth(44.1833333333333016)),
			buildGrid(2252
				, L"NAD83 / Michigan Central (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseEasting(19685039.3700000010430813)
				, LatLonOrigin(43.3166666666666984, -84.3666666666667027)
				, ParallelNorth(45.7000000000000028)
				, ParallelSouth(44.1833333333333016)),
			buildGrid(26988
				, L"NAD83 / Michigan North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(2111)
				, FalseEasting(8000000.0)
				, LatLonOrigin(44.783333333333303, -87.0)
				, ParallelNorth(47.0833333333333002)
				, ParallelSouth(45.4833333333332988)),
			buildGrid(2251
				, L"NAD83 / Michigan North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseEasting(26246719.1600000001490116)
				, LatLonOrigin(44.783333333333303, -87.0)
				, ParallelNorth(47.0833333333333002)
				, ParallelSouth(45.4833333333332988)),
			buildGrid(3078
				, L"NAD83 / Michigan Oblique Mercator"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseNorthing(-4354009.8159999996423721)
				, FalseEasting(2546731.4959999998100102)
				, LatLonOrigin(45.3091666700000033, -86.0)
				, Azimuth(337.2555600000000027)
				, RectifiedGrid(337.2555600000000027)),
			buildGrid(26990
				, L"NAD83 / Michigan South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(2113)
				, FalseEasting(4000000.0)
				, LatLonOrigin(41.5, -84.3666666666667027)
				, ParallelNorth(43.6666666666666998)
				, ParallelSouth(42.1000000000000014)),
			buildGrid(2253
				, L"NAD83 / Michigan South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseEasting(13123359.5800000000745058)
				, LatLonOrigin(41.5, -84.3666666666667027)
				, ParallelNorth(43.6666666666666998)
				, ParallelSouth(42.1000000000000014)),
			buildGrid(26992
				, L"NAD83 / Minnesota Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(2202)
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(45.0, -94.25)
				, ParallelNorth(47.0499999999999972)
				, ParallelSouth(45.6166666666667027)),
			buildGrid(26850
				, L"NAD83 / Minnesota Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(45.0, -94.25)
				, ParallelNorth(47.0499999999999972)
				, ParallelSouth(45.6166666666667027)),
			buildGrid(26991
				, L"NAD83 / Minnesota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(2201)
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(46.5, -93.0999999999999943)
				, ParallelNorth(48.6333333333332973)
				, ParallelSouth(47.033333333333303)),
			buildGrid(26849
				, L"NAD83 / Minnesota North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(46.5, -93.0999999999999943)
				, ParallelNorth(48.6333333333332973)
				, ParallelSouth(47.033333333333303)),
			buildGrid(26993
				, L"NAD83 / Minnesota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(2203)
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(43.0, -94.0)
				, ParallelNorth(45.216666666666697)
				, ParallelSouth(43.783333333333303)),
			buildGrid(26851
				, L"NAD83 / Minnesota South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(43.0, -94.0)
				, ParallelNorth(45.216666666666697)
				, ParallelSouth(43.783333333333303)),
			buildGrid(26994
				, L"NAD83 / Mississippi East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(2301)
				, Scale(0.99995)
				, FalseEasting(300000.0)
				, LatLonOrigin(29.5, -88.8333333333333002)),
			buildGrid(2254
				, L"NAD83 / Mississippi East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.99995)
				, FalseEasting(984250.0)
				, LatLonOrigin(29.5, -88.8333333333333002)),
			buildGrid(3814
				, L"NAD83 / Mississippi TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9998335)
				, FalseNorthing(1300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(32.5, -89.75)),
			buildGrid(26995
				, L"NAD83 / Mississippi West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(2302)
				, Scale(0.99995)
				, FalseEasting(700000.0)
				, LatLonOrigin(29.5, -90.3333333333333002)),
			buildGrid(2255
				, L"NAD83 / Mississippi West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.99995)
				, FalseEasting(2296583.3330000001005828)
				, LatLonOrigin(29.5, -90.3333333333333002)),
			buildGrid(26997
				, L"NAD83 / Missouri Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(2402)
				, Scale(0.999933333)
				, FalseEasting(500000.0)
				, LatLonOrigin(35.8333333333333002, -92.5)),
			buildGrid(26996
				, L"NAD83 / Missouri East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(2401)
				, Scale(0.999933333)
				, FalseEasting(250000.0)
				, LatLonOrigin(35.8333333333333002, -90.5)),
			buildGrid(26998
				, L"NAD83 / Missouri West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(2403)
				, Scale(0.999941177)
				, FalseEasting(850000.0)
				, LatLonOrigin(36.1666666666666998, -94.5)),
			buildGrid(32100
				, L"NAD83 / Montana"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(2500)
				, FalseEasting(600000.0)
				, LatLonOrigin(44.25, -109.5)
				, ParallelNorth(49.0)
				, ParallelSouth(45.0)),
			buildGrid(2256
				, L"NAD83 / Montana (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseEasting(1968503.9369999999180436)
				, LatLonOrigin(44.25, -109.5)
				, ParallelNorth(49.0)
				, ParallelSouth(45.0)),
			buildGrid(32181
				, L"NAD83 / MTM zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -53.0)),
			buildGrid(32190
				, L"NAD83 / MTM zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -79.5)),
			buildGrid(32191
				, L"NAD83 / MTM zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -82.5)),
			buildGrid(32192
				, L"NAD83 / MTM zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(32193
				, L"NAD83 / MTM zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -84.0)),
			buildGrid(32194
				, L"NAD83 / MTM zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(32195
				, L"NAD83 / MTM zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -90.0)),
			buildGrid(32196
				, L"NAD83 / MTM zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(32197
				, L"NAD83 / MTM zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -96.0)),
			buildGrid(32182
				, L"NAD83 / MTM zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -56.0)),
			buildGrid(32183
				, L"NAD83 / MTM zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -58.5)),
			buildGrid(32184
				, L"NAD83 / MTM zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -61.5)),
			buildGrid(32185
				, L"NAD83 / MTM zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -64.5)),
			buildGrid(32186
				, L"NAD83 / MTM zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -67.5)),
			buildGrid(32187
				, L"NAD83 / MTM zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -70.5)),
			buildGrid(32188
				, L"NAD83 / MTM zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -73.5)),
			buildGrid(32189
				, L"NAD83 / MTM zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -76.5)),
			buildGrid(3798
				, L"NAD83 / MTQ Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, FalseEasting(800000.0)
				, LatLonOrigin(44.0, -70.0)
				, ParallelNorth(50.0)
				, ParallelSouth(46.0)),
			buildGrid(32104
				, L"NAD83 / Nebraska"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(2600)
				, FalseEasting(500000.0)
				, LatLonOrigin(39.8333333333333002, -100.0)
				, ParallelNorth(43.0)
				, ParallelSouth(40.0)),
			buildGrid(26852
				, L"NAD83 / Nebraska (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(39.8333333333333002, -100.0)
				, ParallelNorth(43.0)
				, ParallelSouth(40.0)),
			buildGrid(32108
				, L"NAD83 / Nevada Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(2702)
				, Scale(0.9999)
				, FalseNorthing(6000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(34.75, -116.6666666666669983)),
			buildGrid(3422
				, L"NAD83 / Nevada Central (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999)
				, FalseNorthing(19685000.0)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(34.75, -116.6666666666669983)),
			buildGrid(32107
				, L"NAD83 / Nevada East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(2701)
				, Scale(0.9999)
				, FalseNorthing(8000000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(34.75, -115.5833333333330017)),
			buildGrid(3421
				, L"NAD83 / Nevada East (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999)
				, FalseNorthing(26246666.6667000018060207)
				, FalseEasting(656166.6666999999433756)
				, LatLonOrigin(34.75, -115.5833333333330017)),
			buildGrid(32109
				, L"NAD83 / Nevada West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(2703)
				, Scale(0.9999)
				, FalseNorthing(4000000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(34.75, -118.5833333333330017)),
			buildGrid(3423
				, L"NAD83 / Nevada West (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999)
				, FalseNorthing(13123333.3333000000566244)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(34.75, -118.5833333333330017)),
			buildGrid(32110
				, L"NAD83 / New Hampshire"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(2800)
				, Scale(0.999966667)
				, FalseEasting(300000.0)
				, LatLonOrigin(42.5, -71.6666666666666998)),
			buildGrid(3437
				, L"NAD83 / New Hampshire (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.999966667)
				, FalseEasting(984250.0)
				, LatLonOrigin(42.5, -71.6666666666666998)),
			buildGrid(32111
				, L"NAD83 / New Jersey"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(2900)
				, Scale(0.9999)
				, FalseEasting(150000.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(3424
				, L"NAD83 / New Jersey (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999)
				, FalseEasting(492125.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(32113
				, L"NAD83 / New Mexico Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(3002)
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(31.0, -106.25)),
			buildGrid(2258
				, L"NAD83 / New Mexico Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999)
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(31.0, -106.25)),
			buildGrid(32112
				, L"NAD83 / New Mexico East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(3001)
				, Scale(0.999909091)
				, FalseEasting(165000.0)
				, LatLonOrigin(31.0, -104.3333333333330017)),
			buildGrid(2257
				, L"NAD83 / New Mexico East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.999909091)
				, FalseEasting(541337.5)
				, LatLonOrigin(31.0, -104.3333333333330017)),
			buildGrid(32114
				, L"NAD83 / New Mexico West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(3003)
				, Scale(0.999916667)
				, FalseEasting(830000.0)
				, LatLonOrigin(31.0, -107.8333333333330017)),
			buildGrid(2259
				, L"NAD83 / New Mexico West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.999916667)
				, FalseEasting(2723091.6669999998994172)
				, LatLonOrigin(31.0, -107.8333333333330017)),
			buildGrid(32116
				, L"NAD83 / New York Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(3102)
				, Scale(0.9999375)
				, FalseEasting(250000.0)
				, LatLonOrigin(40.0, -76.5833333333333002)),
			buildGrid(2261
				, L"NAD83 / New York Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999375)
				, FalseEasting(820208.3329999999841675)
				, LatLonOrigin(40.0, -76.5833333333333002)),
			buildGrid(32115
				, L"NAD83 / New York East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(3101)
				, Scale(0.9999)
				, FalseEasting(150000.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(2260
				, L"NAD83 / New York East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999)
				, FalseEasting(492125.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(32118
				, L"NAD83 / New York Long Island"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3104)
				, FalseEasting(300000.0)
				, LatLonOrigin(40.1666666666666998, -74.0)
				, ParallelNorth(41.033333333333303)
				, ParallelSouth(40.6666666666666998)),
			buildGrid(2263
				, L"NAD83 / New York Long Island (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(984250.0)
				, LatLonOrigin(40.1666666666666998, -74.0)
				, ParallelNorth(41.033333333333303)
				, ParallelSouth(40.6666666666666998)),
			buildGrid(32117
				, L"NAD83 / New York West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(3103)
				, Scale(0.9999375)
				, FalseEasting(350000.0)
				, LatLonOrigin(40.0, -78.5833333333333002)),
			buildGrid(2262
				, L"NAD83 / New York West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999375)
				, FalseEasting(1148291.6669999998994172)
				, LatLonOrigin(40.0, -78.5833333333333002)),
			buildGrid(32119
				, L"NAD83 / North Carolina"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3200)
				, FalseEasting(609601.2199999999720603)
				, LatLonOrigin(33.75, -79.0)
				, ParallelNorth(36.1666666666666998)
				, ParallelSouth(34.3333333333333002)),
			buildGrid(2264
				, L"NAD83 / North Carolina (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(2000000.0)
				, LatLonOrigin(33.75, -79.0)
				, ParallelNorth(36.1666666666666998)
				, ParallelSouth(34.3333333333333002)),
			buildGrid(32120
				, L"NAD83 / North Dakota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3301)
				, FalseEasting(600000.0)
				, LatLonOrigin(47.0, -100.5)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.4333333333333016)),
			buildGrid(2265
				, L"NAD83 / North Dakota North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseEasting(1968503.9369999999180436)
				, LatLonOrigin(47.0, -100.5)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.4333333333333016)),
			buildGrid(32121
				, L"NAD83 / North Dakota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3302)
				, FalseEasting(600000.0)
				, LatLonOrigin(45.6666666666666998, -100.5)
				, ParallelNorth(47.4833333333332988)
				, ParallelSouth(46.1833333333333016)),
			buildGrid(2266
				, L"NAD83 / North Dakota South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseEasting(1968503.9369999999180436)
				, LatLonOrigin(45.6666666666666998, -100.5)
				, ParallelNorth(47.4833333333332988)
				, ParallelSouth(46.1833333333333016)),
			buildGrid(3580
				, L"NAD83 / NWT Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, LatLonOrigin(0.0, -112.0)
				, ParallelNorth(62.0)
				, ParallelSouth(70.0)),
			buildGrid(32122
				, L"NAD83 / Ohio North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3401)
				, FalseEasting(600000.0)
				, LatLonOrigin(39.6666666666666998, -82.5)
				, ParallelNorth(41.7000000000000028)
				, ParallelSouth(40.4333333333333016)),
			buildGrid(3734
				, L"NAD83 / Ohio North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(39.6666666666666998, -82.5)
				, ParallelNorth(41.7000000000000028)
				, ParallelSouth(40.4333333333333016)),
			buildGrid(32123
				, L"NAD83 / Ohio South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3402)
				, FalseEasting(600000.0)
				, LatLonOrigin(38.0, -82.5)
				, ParallelNorth(40.033333333333303)
				, ParallelSouth(38.7333333333332988)),
			buildGrid(3735
				, L"NAD83 / Ohio South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(38.0, -82.5)
				, ParallelNorth(40.033333333333303)
				, ParallelSouth(38.7333333333332988)),
			buildGrid(32124
				, L"NAD83 / Oklahoma North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3501)
				, FalseEasting(600000.0)
				, LatLonOrigin(35.0, -98.0)
				, ParallelNorth(36.7666666666667012)
				, ParallelSouth(35.5666666666666984)),
			buildGrid(2267
				, L"NAD83 / Oklahoma North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(35.0, -98.0)
				, ParallelNorth(36.7666666666667012)
				, ParallelSouth(35.5666666666666984)),
			buildGrid(32125
				, L"NAD83 / Oklahoma South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3502)
				, FalseEasting(600000.0)
				, LatLonOrigin(33.3333333333333002, -98.0)
				, ParallelNorth(35.2333333333332988)
				, ParallelSouth(33.9333333333333016)),
			buildGrid(2268
				, L"NAD83 / Oklahoma South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(33.3333333333333002, -98.0)
				, ParallelNorth(35.2333333333332988)
				, ParallelSouth(33.9333333333333016)),
			buildGrid(3161
				, L"NAD83 / Ontario MNR Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, FalseNorthing(6430000.0)
				, FalseEasting(930000.0)
				, LatLonOrigin(0.0, -85.0)
				, ParallelNorth(44.5)
				, ParallelSouth(53.5)),
			buildGrid(2991
				, L"NAD83 / Oregon Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, FalseEasting(400000.0)
				, LatLonOrigin(41.75, -120.5)
				, ParallelNorth(43.0)
				, ParallelSouth(45.5)),
			buildGrid(2992
				, L"NAD83 / Oregon Lambert (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseEasting(1312335.9580000001005828)
				, LatLonOrigin(41.75, -120.5)
				, ParallelNorth(43.0)
				, ParallelSouth(45.5)),
			buildGrid(32126
				, L"NAD83 / Oregon North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3601)
				, FalseEasting(2500000.0)
				, LatLonOrigin(43.6666666666666998, -120.5)
				, ParallelNorth(46.0)
				, ParallelSouth(44.3333333333333002)),
			buildGrid(2269
				, L"NAD83 / Oregon North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseEasting(8202099.7379999998956919)
				, LatLonOrigin(43.6666666666666998, -120.5)
				, ParallelNorth(46.0)
				, ParallelSouth(44.3333333333333002)),
			buildGrid(32127
				, L"NAD83 / Oregon South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3602)
				, FalseEasting(1500000.0)
				, LatLonOrigin(41.6666666666666998, -120.5)
				, ParallelNorth(44.0)
				, ParallelSouth(42.3333333333333002)),
			buildGrid(2270
				, L"NAD83 / Oregon South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseEasting(4921259.8430000003427267)
				, LatLonOrigin(41.6666666666666998, -120.5)
				, ParallelNorth(44.0)
				, ParallelSouth(42.3333333333333002)),
			buildGrid(32128
				, L"NAD83 / Pennsylvania North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3701)
				, FalseEasting(600000.0)
				, LatLonOrigin(40.1666666666666998, -77.75)
				, ParallelNorth(41.9500000000000028)
				, ParallelSouth(40.8833333333332973)),
			buildGrid(2271
				, L"NAD83 / Pennsylvania North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(40.1666666666666998, -77.75)
				, ParallelNorth(41.9500000000000028)
				, ParallelSouth(40.8833333333332973)),
			buildGrid(32129
				, L"NAD83 / Pennsylvania South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3702)
				, FalseEasting(600000.0)
				, LatLonOrigin(39.3333333333333002, -77.75)
				, ParallelNorth(40.966666666666697)
				, ParallelSouth(39.9333333333333016)),
			buildGrid(2272
				, L"NAD83 / Pennsylvania South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(39.3333333333333002, -77.75)
				, ParallelNorth(40.966666666666697)
				, ParallelSouth(39.9333333333333016)),
			buildGrid(32161
				, L"NAD83 / Puerto Rico & Virgin Is."
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(5200)
				, FalseNorthing(200000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(17.8333333333333002, -66.433333333333394)
				, ParallelNorth(18.4333333333333016)
				, ParallelSouth(18.0333333333332995)),
			buildGrid(32198
				, L"NAD83 / Quebec Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, LatLonOrigin(44.0, -68.5)
				, ParallelNorth(60.0)
				, ParallelSouth(46.0)),
			buildGrid(32130
				, L"NAD83 / Rhode Island"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(3800)
				, Scale(0.99999375)
				, FalseEasting(100000.0)
				, LatLonOrigin(41.0833333333333002, -71.5)),
			buildGrid(3438
				, L"NAD83 / Rhode Island (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.99999375)
				, FalseEasting(328083.3332999999984168)
				, LatLonOrigin(41.0833333333333002, -71.5)),
			buildGrid(32180
				, L"NAD83 / SCoPQ zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -55.5)),
			buildGrid(32133
				, L"NAD83 / South Carolina"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(3900)
				, FalseEasting(609600.0)
				, LatLonOrigin(31.8333333333333002, -81.0)
				, ParallelNorth(34.8333333333333002)
				, ParallelSouth(32.5)),
			buildGrid(2273
				, L"NAD83 / South Carolina (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseEasting(2000000.0)
				, LatLonOrigin(31.8333333333333002, -81.0)
				, ParallelNorth(34.8333333333333002)
				, ParallelSouth(32.5)),
			buildGrid(32134
				, L"NAD83 / South Dakota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4001)
				, FalseEasting(600000.0)
				, LatLonOrigin(43.8333333333333002, -100.0)
				, ParallelNorth(45.6833333333333016)
				, ParallelSouth(44.4166666666666998)),
			buildGrid(3454
				, L"NAD83 / South Dakota North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(42.3333333333333002, -100.3333333333330017)
				, ParallelNorth(44.3999999999999986)
				, ParallelSouth(42.8333333333333002)),
			buildGrid(32135
				, L"NAD83 / South Dakota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4002)
				, FalseEasting(600000.0)
				, LatLonOrigin(42.3333333333333002, -100.3333333333330017)
				, ParallelNorth(44.3999999999999986)
				, ParallelSouth(42.8333333333333002)),
			buildGrid(3455
				, L"NAD83 / South Dakota South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(42.3333333333333002, -100.3333333333330017)
				, ParallelNorth(44.3999999999999986)
				, ParallelSouth(42.8333333333333002)),
			buildGrid(3347
				, L"NAD83 / Statistics Canada Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, FalseNorthing(3000000.0)
				, FalseEasting(6200000.0)
				, LatLonOrigin(63.3906750000000017, -91.8666666666667027)
				, ParallelNorth(49.0)
				, ParallelSouth(77.0)),
			buildGrid(32136
				, L"NAD83 / Tennessee"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4100)
				, FalseEasting(600000.0)
				, LatLonOrigin(34.3333333333333002, -86.0)
				, ParallelNorth(36.4166666666666998)
				, ParallelSouth(35.25)),
			buildGrid(2274
				, L"NAD83 / Tennessee (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(34.3333333333333002, -86.0)
				, ParallelNorth(36.4166666666666998)
				, ParallelSouth(35.25)),
			buildGrid(5320
				, L"NAD83 / Teranet Ontario Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, FalseEasting(1000000.0)
				, LatLonOrigin(0.0, -84.0)
				, ParallelNorth(44.5)
				, ParallelSouth(54.5)),
			buildGrid(32139
				, L"NAD83 / Texas Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4203)
				, FalseNorthing(3000000.0)
				, FalseEasting(700000.0)
				, LatLonOrigin(29.6666666666666998, -100.3333333333330017)
				, ParallelNorth(31.8833333333333009)
				, ParallelSouth(30.1166666666666991)),
			buildGrid(2277
				, L"NAD83 / Texas Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(9842500.0)
				, FalseEasting(2296583.3330000001005828)
				, LatLonOrigin(29.6666666666666998, -100.3333333333330017)
				, ParallelNorth(31.8833333333333009)
				, ParallelSouth(30.1166666666666991)),
			buildGrid(3083
				, L"NAD83 / Texas Centric Albers Equal Area"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4269
				, FalseNorthing(6000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(18.0, -100.0)
				, ParallelNorth(27.5)
				, ParallelSouth(35.0)),
			buildGrid(3082
				, L"NAD83 / Texas Centric Lambert Conformal"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, FalseNorthing(5000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(18.0, -100.0)
				, ParallelNorth(27.5)
				, ParallelSouth(35.0)),
			buildGrid(32137
				, L"NAD83 / Texas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4201)
				, FalseNorthing(1000000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(34.0, -101.5)
				, ParallelNorth(36.1833333333333016)
				, ParallelSouth(34.6499999999999986)),
			buildGrid(2275
				, L"NAD83 / Texas North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(3280833.3330000001005828)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(34.0, -101.5)
				, ParallelNorth(36.1833333333333016)
				, ParallelSouth(34.6499999999999986)),
			buildGrid(32138
				, L"NAD83 / Texas North Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4202)
				, FalseNorthing(2000000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(31.6666666666666998, -98.5)
				, ParallelNorth(33.966666666666697)
				, ParallelSouth(32.1333333333332973)),
			buildGrid(2276
				, L"NAD83 / Texas North Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(6561666.6670000003650784)
				, FalseEasting(1968500.0)
				, LatLonOrigin(31.6666666666666998, -98.5)
				, ParallelNorth(33.966666666666697)
				, ParallelSouth(32.1333333333332973)),
			buildGrid(32141
				, L"NAD83 / Texas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4205)
				, FalseNorthing(5000000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(25.6666666666666998, -98.5)
				, ParallelNorth(27.8333333333333002)
				, ParallelSouth(26.1666666666666998)),
			buildGrid(2279
				, L"NAD83 / Texas South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(16404166.6669999994337559)
				, FalseEasting(984250.0)
				, LatLonOrigin(25.6666666666666998, -98.5)
				, ParallelNorth(27.8333333333333002)
				, ParallelSouth(26.1666666666666998)),
			buildGrid(32140
				, L"NAD83 / Texas South Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4204)
				, FalseNorthing(4000000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(27.8333333333333002, -99.0)
				, ParallelNorth(30.2833333333332995)
				, ParallelSouth(28.3833333333333009)),
			buildGrid(2278
				, L"NAD83 / Texas South Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(13123333.3330000005662441)
				, FalseEasting(1968500.0)
				, LatLonOrigin(27.8333333333333002, -99.0)
				, ParallelNorth(30.2833333333332995)
				, ParallelSouth(28.3833333333333009)),
			buildGrid(3081
				, L"NAD83 / Texas State Mapping System"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(31.1666666666666998, -100.0)
				, ParallelNorth(27.4166666666666998)
				, ParallelSouth(34.9166666666666998)),
			buildGrid(32143
				, L"NAD83 / Utah Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4302)
				, FalseNorthing(2000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(38.3333333333333002, -111.5)
				, ParallelNorth(40.6499999999999986)
				, ParallelSouth(39.0166666666667012)),
			buildGrid(2281
				, L"NAD83 / Utah Central (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseNorthing(6561679.7900000000372529)
				, FalseEasting(1640419.9480000000912696)
				, LatLonOrigin(38.3333333333333002, -111.5)
				, ParallelNorth(40.6499999999999986)
				, ParallelSouth(39.0166666666667012)),
			buildGrid(3566
				, L"NAD83 / Utah Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(6561666.6666999999433756)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(38.3333333333333002, -111.5)
				, ParallelNorth(40.6499999999999986)
				, ParallelSouth(39.0166666666667012)),
			buildGrid(32142
				, L"NAD83 / Utah North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4301)
				, FalseNorthing(1000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(40.3333333333333002, -111.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.716666666666697)),
			buildGrid(2280
				, L"NAD83 / Utah North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseNorthing(3280839.8950000000186265)
				, FalseEasting(1640419.9480000000912696)
				, LatLonOrigin(40.3333333333333002, -111.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.716666666666697)),
			buildGrid(3560
				, L"NAD83 / Utah North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(3280833.3333000000566244)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(40.3333333333333002, -111.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.716666666666697)),
			buildGrid(32144
				, L"NAD83 / Utah South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4303)
				, FalseNorthing(3000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.6666666666666998, -111.5)
				, ParallelNorth(38.3500000000000014)
				, ParallelSouth(37.216666666666697)),
			buildGrid(2282
				, L"NAD83 / Utah South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4269
				, FalseNorthing(9842519.6850000005215406)
				, FalseEasting(1640419.9480000000912696)
				, LatLonOrigin(36.6666666666666998, -111.5)
				, ParallelNorth(38.3500000000000014)
				, ParallelSouth(37.216666666666697)),
			buildGrid(3567
				, L"NAD83 / Utah South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(9842500.0)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(36.6666666666666998, -111.5)
				, ParallelNorth(38.3500000000000014)
				, ParallelSouth(37.216666666666697)),
			buildGrid(26910
				, L"NAD83 / UTM zone 10N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -123.0)),
			buildGrid(26911
				, L"NAD83 / UTM zone 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(26912
				, L"NAD83 / UTM zone 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(26913
				, L"NAD83 / UTM zone 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(26914
				, L"NAD83 / UTM zone 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(26915
				, L"NAD83 / UTM zone 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(26916
				, L"NAD83 / UTM zone 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(26917
				, L"NAD83 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(26918
				, L"NAD83 / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(26919
				, L"NAD83 / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(26901
				, L"NAD83 / UTM zone 1N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(26920
				, L"NAD83 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(26921
				, L"NAD83 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(26922
				, L"NAD83 / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(26923
				, L"NAD83 / UTM zone 23N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(26902
				, L"NAD83 / UTM zone 2N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(26903
				, L"NAD83 / UTM zone 3N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -165.0)),
			buildGrid(26904
				, L"NAD83 / UTM zone 4N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -159.0)),
			buildGrid(3372
				, L"NAD83 / UTM zone 59N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(26905
				, L"NAD83 / UTM zone 5N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(3373
				, L"NAD83 / UTM zone 60N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(26906
				, L"NAD83 / UTM zone 6N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(26907
				, L"NAD83 / UTM zone 7N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(26908
				, L"NAD83 / UTM zone 8N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -135.0)),
			buildGrid(26909
				, L"NAD83 / UTM zone 9N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -129.0)),
			buildGrid(32145
				, L"NAD83 / Vermont"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(4400)
				, Scale(0.999964286)
				, FalseEasting(500000.0)
				, LatLonOrigin(42.5, -72.5)),
			buildGrid(5646
				, L"NAD83 / Vermont (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269),
			buildGrid(3968
				, L"NAD83 / Virginia Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, LatLonOrigin(36.0, -79.5)
				, ParallelNorth(37.0)
				, ParallelSouth(39.5)),
			buildGrid(32146
				, L"NAD83 / Virginia North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4501)
				, FalseNorthing(2000000.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(37.6666666666666998, -78.5)
				, ParallelNorth(39.2000000000000028)
				, ParallelSouth(38.033333333333303)),
			buildGrid(2283
				, L"NAD83 / Virginia North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(6561666.6670000003650784)
				, FalseEasting(11482916.6669999994337559)
				, LatLonOrigin(37.6666666666666998, -78.5)
				, ParallelNorth(39.2000000000000028)
				, ParallelSouth(38.033333333333303)),
			buildGrid(32147
				, L"NAD83 / Virginia South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4502)
				, FalseNorthing(1000000.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(36.3333333333333002, -78.5)
				, ParallelNorth(37.966666666666697)
				, ParallelSouth(36.7666666666667012)),
			buildGrid(2284
				, L"NAD83 / Virginia South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseNorthing(3280833.3330000001005828)
				, FalseEasting(11482916.6669999994337559)
				, LatLonOrigin(36.3333333333333002, -78.5)
				, ParallelNorth(37.966666666666697)
				, ParallelSouth(36.7666666666667012)),
			buildGrid(32148
				, L"NAD83 / Washington North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4601)
				, FalseEasting(500000.0)
				, LatLonOrigin(47.0, -120.8333333333330017)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.5)),
			buildGrid(2285
				, L"NAD83 / Washington North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(47.0, -120.8333333333330017)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.5)),
			buildGrid(32149
				, L"NAD83 / Washington South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4602)
				, FalseEasting(500000.0)
				, LatLonOrigin(45.3333333333333002, -120.5)
				, ParallelNorth(47.3333333333333002)
				, ParallelSouth(45.8333333333333002)),
			buildGrid(2286
				, L"NAD83 / Washington South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(45.3333333333333002, -120.5)
				, ParallelNorth(47.3333333333333002)
				, ParallelSouth(45.8333333333333002)),
			buildGrid(32150
				, L"NAD83 / West Virginia North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4701)
				, FalseEasting(600000.0)
				, LatLonOrigin(38.5, -79.5)
				, ParallelNorth(40.25)
				, ParallelSouth(39.0)),
			buildGrid(26853
				, L"NAD83 / West Virginia North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(38.5, -79.5)
				, ParallelNorth(40.25)
				, ParallelSouth(39.0)),
			buildGrid(32151
				, L"NAD83 / West Virginia South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4702)
				, FalseEasting(600000.0)
				, LatLonOrigin(37.0, -81.0)
				, ParallelNorth(38.8833333333332973)
				, ParallelSouth(37.4833333333332988)),
			buildGrid(26854
				, L"NAD83 / West Virginia South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(37.0, -81.0)
				, ParallelNorth(38.8833333333332973)
				, ParallelSouth(37.4833333333332988)),
			buildGrid(32153
				, L"NAD83 / Wisconsin Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4802)
				, FalseEasting(600000.0)
				, LatLonOrigin(43.8333333333333002, -90.0)
				, ParallelNorth(45.5)
				, ParallelSouth(44.25)),
			buildGrid(2288
				, L"NAD83 / Wisconsin Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(43.8333333333333002, -90.0)
				, ParallelNorth(45.5)
				, ParallelSouth(44.25)),
			buildGrid(32152
				, L"NAD83 / Wisconsin North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4801)
				, FalseEasting(600000.0)
				, LatLonOrigin(45.1666666666666998, -90.0)
				, ParallelNorth(46.7666666666667012)
				, ParallelSouth(45.5666666666666984)),
			buildGrid(2287
				, L"NAD83 / Wisconsin North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(45.1666666666666998, -90.0)
				, ParallelNorth(46.7666666666667012)
				, ParallelSouth(45.5666666666666984)),
			buildGrid(32154
				, L"NAD83 / Wisconsin South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4269
				, StatePlane(4803)
				, FalseEasting(600000.0)
				, LatLonOrigin(42.0, -90.0)
				, ParallelNorth(44.0666666666666984)
				, ParallelSouth(42.7333333333332988)),
			buildGrid(2289
				, L"NAD83 / Wisconsin South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4269
				, FalseEasting(1968500.0)
				, LatLonOrigin(42.0, -90.0)
				, ParallelNorth(44.0666666666666984)
				, ParallelSouth(42.7333333333332988)),
			buildGrid(3070
				, L"NAD83 / Wisconsin Transverse Mercator"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, Scale(0.9996)
				, FalseNorthing(-4480000.0)
				, FalseEasting(520000.0)
				, LatLonOrigin(0.0, -90.0)),
			buildGrid(32155
				, L"NAD83 / Wyoming East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(4901)
				, Scale(0.9999375)
				, FalseEasting(200000.0)
				, LatLonOrigin(40.5, -105.1666666666669983)),
			buildGrid(3736
				, L"NAD83 / Wyoming East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999375)
				, FalseEasting(656166.6666999999433756)
				, LatLonOrigin(40.5, -105.1666666666669983)),
			buildGrid(32156
				, L"NAD83 / Wyoming East Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(4902)
				, Scale(0.9999375)
				, FalseNorthing(100000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(40.5, -107.3333333333330017)),
			buildGrid(3737
				, L"NAD83 / Wyoming East Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999375)
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(40.5, -107.3333333333330017)),
			buildGrid(32158
				, L"NAD83 / Wyoming West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(4904)
				, Scale(0.9999375)
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(40.5, -110.0833333333330017)),
			buildGrid(3739
				, L"NAD83 / Wyoming West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999375)
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(40.5, -110.0833333333330017)),
			buildGrid(32157
				, L"NAD83 / Wyoming West Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4269
				, StatePlane(4903)
				, Scale(0.9999375)
				, FalseEasting(600000.0)
				, LatLonOrigin(40.5, -108.75)),
			buildGrid(3738
				, L"NAD83 / Wyoming West Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4269
				, Scale(0.9999375)
				, FalseEasting(1968500.0)
				, LatLonOrigin(40.5, -108.75)),
			buildGrid(3578
				, L"NAD83 / Yukon Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4269
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(59.0, -132.5)
				, ParallelNorth(61.6666666666666998)
				, ParallelSouth(68.0)),
			buildGrid(3402
				, L"NAD83(CSRS) / Alberta 10-TM (Forest)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9992)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -115.0)),
			buildGrid(3403
				, L"NAD83(CSRS) / Alberta 10-TM (Resource)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9992)
				, LatLonOrigin(0.0, -115.0)),
			buildGrid(3779
				, L"NAD83(CSRS) / Alberta 3TM ref merid 111 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(3780
				, L"NAD83(CSRS) / Alberta 3TM ref merid 114 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, LatLonOrigin(0.0, -114.0)),
			buildGrid(3781
				, L"NAD83(CSRS) / Alberta 3TM ref merid 117 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(3802
				, L"NAD83(CSRS) / Alberta 3TM ref merid 120 W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, LatLonOrigin(0.0, -120.0)),
			buildGrid(3153
				, L"NAD83(CSRS) / BC Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4617
				, FalseEasting(1000000.0)
				, LatLonOrigin(45.0, -126.0)
				, ParallelNorth(50.0)
				, ParallelSouth(58.5)),
			buildGrid(3979
				, L"NAD83(CSRS) / Canada Atlas Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4617
				, LatLonOrigin(49.0, -95.0)
				, ParallelNorth(49.0)
				, ParallelSouth(77.0)),
			buildGrid(26898
				, L"NAD83(CSRS) / MTM zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -53.0)),
			buildGrid(2952
				, L"NAD83(CSRS) / MTM zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -79.5)),
			buildGrid(26891
				, L"NAD83(CSRS) / MTM zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -82.5)),
			buildGrid(26892
				, L"NAD83(CSRS) / MTM zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(26893
				, L"NAD83(CSRS) / MTM zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -84.0)),
			buildGrid(26894
				, L"NAD83(CSRS) / MTM zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(26895
				, L"NAD83(CSRS) / MTM zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -90.0)),
			buildGrid(26896
				, L"NAD83(CSRS) / MTM zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(26897
				, L"NAD83(CSRS) / MTM zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -96.0)),
			buildGrid(26899
				, L"NAD83(CSRS) / MTM zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -56.0)),
			buildGrid(2945
				, L"NAD83(CSRS) / MTM zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -58.5)),
			buildGrid(2946
				, L"NAD83(CSRS) / MTM zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -61.5)),
			buildGrid(2947
				, L"NAD83(CSRS) / MTM zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -64.5)),
			buildGrid(2948
				, L"NAD83(CSRS) / MTM zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -67.5)),
			buildGrid(2949
				, L"NAD83(CSRS) / MTM zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -70.5)),
			buildGrid(2950
				, L"NAD83(CSRS) / MTM zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -73.5)),
			buildGrid(2951
				, L"NAD83(CSRS) / MTM zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -76.5)),
			buildGrid(3799
				, L"NAD83(CSRS) / MTQ Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4617
				, FalseEasting(800000.0)
				, LatLonOrigin(44.0, -70.0)
				, ParallelNorth(50.0)
				, ParallelSouth(46.0)),
			buildGrid(2953
				, L"NAD83(CSRS) / New Brunswick Stereographic"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4617
				, Scale(0.999912)
				, FalseNorthing(7500000.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(46.5, -66.5)),
			buildGrid(3581
				, L"NAD83(CSRS) / NWT Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4617
				, LatLonOrigin(0.0, -112.0)
				, ParallelNorth(62.0)
				, ParallelSouth(70.0)),
			buildGrid(3162
				, L"NAD83(CSRS) / Ontario MNR Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4617
				, FalseNorthing(6430000.0)
				, FalseEasting(930000.0)
				, LatLonOrigin(0.0, -85.0)
				, ParallelNorth(44.5)
				, ParallelSouth(53.5)),
			buildGrid(2954
				, L"NAD83(CSRS) / Prince Edward Isl. Stereographic (NAD83)"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4617
				, Scale(0.999912)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(47.25, -63.0)),
			buildGrid(2944
				, L"NAD83(CSRS) / SCoPQ zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -55.5)),
			buildGrid(3348
				, L"NAD83(CSRS) / Statistics Canada Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4617
				, FalseNorthing(3000000.0)
				, FalseEasting(6200000.0)
				, LatLonOrigin(63.3906750000000017, -91.8666666666667027)
				, ParallelNorth(49.0)
				, ParallelSouth(77.0)),
			buildGrid(5321
				, L"NAD83(CSRS) / Teranet Ontario Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4617
				, FalseEasting(1000000.0)
				, LatLonOrigin(0.0, -84.0)
				, ParallelNorth(44.5)
				, ParallelSouth(54.5)),
			buildGrid(3157
				, L"NAD83(CSRS) / UTM zone 10N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -123.0)),
			buildGrid(2955
				, L"NAD83(CSRS) / UTM zone 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(2956
				, L"NAD83(CSRS) / UTM zone 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(2957
				, L"NAD83(CSRS) / UTM zone 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(3158
				, L"NAD83(CSRS) / UTM zone 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(3159
				, L"NAD83(CSRS) / UTM zone 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(3160
				, L"NAD83(CSRS) / UTM zone 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(2958
				, L"NAD83(CSRS) / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(2959
				, L"NAD83(CSRS) / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(2960
				, L"NAD83(CSRS) / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(2961
				, L"NAD83(CSRS) / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(2962
				, L"NAD83(CSRS) / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(3761
				, L"NAD83(CSRS) / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(3154
				, L"NAD83(CSRS) / UTM zone 7N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(3155
				, L"NAD83(CSRS) / UTM zone 8N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -135.0)),
			buildGrid(3156
				, L"NAD83(CSRS) / UTM zone 9N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4617
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -129.0)),
			buildGrid(3579
				, L"NAD83(CSRS) / Yukon Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4617
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(59.0, -132.5)
				, ParallelNorth(61.6666666666666998)
				, ParallelSouth(68.0)),
			buildGrid(2147
				, L"NAD83(CSRS98) / MTM zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -79.5)),
			buildGrid(2140
				, L"NAD83(CSRS98) / MTM zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -58.5)),
			buildGrid(2141
				, L"NAD83(CSRS98) / MTM zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -61.5)),
			buildGrid(2142
				, L"NAD83(CSRS98) / MTM zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -64.5)),
			buildGrid(2143
				, L"NAD83(CSRS98) / MTM zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -67.5)),
			buildGrid(2144
				, L"NAD83(CSRS98) / MTM zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -70.5)),
			buildGrid(2145
				, L"NAD83(CSRS98) / MTM zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -73.5)),
			buildGrid(2146
				, L"NAD83(CSRS98) / MTM zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -76.5)),
			buildGrid(2036
				, L"NAD83(CSRS98) / New Brunswick Stereo"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4140
				, Scale(0.999912)
				, FalseNorthing(7500000.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(46.5, -66.5)),
			buildGrid(2292
				, L"NAD83(CSRS98) / Prince Edward Isl. Stereographic (NAD83)"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4140
				, Scale(0.999912)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(47.25, -63.0)),
			buildGrid(2139
				, L"NAD83(CSRS98) / SCoPQ zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9999)
				, FalseEasting(304800.0)
				, LatLonOrigin(0.0, -55.5)),
			buildGrid(2153
				, L"NAD83(CSRS98) / UTM zone 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(2152
				, L"NAD83(CSRS98) / UTM zone 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(2151
				, L"NAD83(CSRS98) / UTM zone 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(2150
				, L"NAD83(CSRS98) / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(2149
				, L"NAD83(CSRS98) / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(2037
				, L"NAD83(CSRS98) / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(2038
				, L"NAD83(CSRS98) / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(2148
				, L"NAD83(CSRS98) / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4140
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(2759
				, L"NAD83(HARN) / Alabama East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50061
				, Scale(0.99996)
				, FalseEasting(200000.0)
				, LatLonOrigin(30.5, -85.8333333300000021)),
			buildGrid(2760
				, L"NAD83(HARN) / Alabama West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50061
				, Scale(0.999933)
				, FalseEasting(600000.0)
				, LatLonOrigin(30.0, -87.5)),
			buildGrid(2762
				, L"NAD83(HARN) / Arizona Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50062
				, Scale(0.9999)
				, FalseEasting(213360.0)
				, LatLonOrigin(31.0, -111.9166666699999979)),
			buildGrid(2868
				, L"NAD83(HARN) / Arizona Central (ft)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FT
				, 50062
				, Scale(0.9999)
				, FalseEasting(700000.0)
				, LatLonOrigin(31.0, -111.9166666699999979)),
			buildGrid(2761
				, L"NAD83(HARN) / Arizona East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50062
				, Scale(0.9999)
				, FalseEasting(213360.0)
				, LatLonOrigin(31.0, -110.1666666699999979)),
			buildGrid(2867
				, L"NAD83(HARN) / Arizona East (ft)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FT
				, 50062
				, Scale(0.9999)
				, FalseEasting(700000.0)
				, LatLonOrigin(31.0, -110.1666666699999979)),
			buildGrid(2763
				, L"NAD83(HARN) / Arizona West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50062
				, Scale(0.999933)
				, FalseEasting(213360.0)
				, LatLonOrigin(31.0, -113.75)),
			buildGrid(2869
				, L"NAD83(HARN) / Arizona West (ft)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FT
				, 50062
				, Scale(0.999933)
				, FalseEasting(700000.0)
				, LatLonOrigin(31.0, -113.75)),
			buildGrid(2764
				, L"NAD83(HARN) / Arkansas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50063
				, FalseEasting(400000.0)
				, LatLonOrigin(34.3333333300000021, -92.0)
				, ParallelNorth(36.2333333300000007)
				, ParallelSouth(34.9333333300000035)),
			buildGrid(3441
				, L"NAD83(HARN) / Arkansas North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50063
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(34.3333333300000021, -92.0)
				, ParallelNorth(36.2333333300000007)
				, ParallelSouth(34.9333333300000035)),
			buildGrid(2765
				, L"NAD83(HARN) / Arkansas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50063
				, FalseNorthing(400000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(32.6666666699999979, -92.0)
				, ParallelNorth(34.7666666699999993)
				, ParallelSouth(33.2999999999999972)),
			buildGrid(3442
				, L"NAD83(HARN) / Arkansas South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50063
				, FalseNorthing(1312333.3333000000566244)
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(32.6666666699999979, -92.0)
				, ParallelNorth(34.7666666699999993)
				, ParallelSouth(33.2999999999999972)),
			buildGrid(3311
				, L"NAD83(HARN) / California Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(-4000000.0)
				, LatLonOrigin(0.0, -120.0)
				, ParallelNorth(34.0)
				, ParallelSouth(40.5)),
			buildGrid(2766
				, L"NAD83(HARN) / California zone 1"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(39.3333333333333002, -122.0)
				, ParallelNorth(41.6666666666666998)
				, ParallelSouth(40.0)),
			buildGrid(2870
				, L"NAD83(HARN) / California zone 1 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4152
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(39.3333333333333002, -122.0)
				, ParallelNorth(41.6666666666666998)
				, ParallelSouth(40.0)),
			buildGrid(2767
				, L"NAD83(HARN) / California zone 2"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(37.6666666666666998, -122.0)
				, ParallelNorth(39.8333333333333002)
				, ParallelSouth(38.3333333333333002)),
			buildGrid(2871
				, L"NAD83(HARN) / California zone 2 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4152
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(37.6666666666666998, -122.0)
				, ParallelNorth(39.8333333333333002)
				, ParallelSouth(38.3333333333333002)),
			buildGrid(2768
				, L"NAD83(HARN) / California zone 3"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(36.5, -120.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.0666666666666984)),
			buildGrid(2872
				, L"NAD83(HARN) / California zone 3 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4152
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(36.5, -120.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.0666666666666984)),
			buildGrid(2769
				, L"NAD83(HARN) / California zone 4"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(35.3333333333333002, -119.0)
				, ParallelNorth(37.25)
				, ParallelSouth(36.0)),
			buildGrid(2873
				, L"NAD83(HARN) / California zone 4 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4152
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(35.3333333333333002, -119.0)
				, ParallelNorth(37.25)
				, ParallelSouth(36.0)),
			buildGrid(2770
				, L"NAD83(HARN) / California zone 5"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(33.5, -118.0)
				, ParallelNorth(35.466666666666697)
				, ParallelSouth(34.033333333333303)),
			buildGrid(2874
				, L"NAD83(HARN) / California zone 5 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4152
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(33.5, -118.0)
				, ParallelNorth(35.466666666666697)
				, ParallelSouth(34.033333333333303)),
			buildGrid(2771
				, L"NAD83(HARN) / California zone 6"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(32.1666666666666998, -116.25)
				, ParallelNorth(33.8833333333332973)
				, ParallelSouth(32.783333333333303)),
			buildGrid(2875
				, L"NAD83(HARN) / California zone 6 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4152
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(32.1666666666666998, -116.25)
				, ParallelNorth(33.8833333333332973)
				, ParallelSouth(32.783333333333303)),
			buildGrid(2773
				, L"NAD83(HARN) / Colorado Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50066
				, FalseNorthing(304800.6096000000252388)
				, FalseEasting(914401.8288999999640509)
				, LatLonOrigin(37.8333333333333002, -105.5)
				, ParallelNorth(39.75)
				, ParallelSouth(38.4500000000000028)),
			buildGrid(2877
				, L"NAD83(HARN) / Colorado Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50066
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(37.8333333333333002, -105.5)
				, ParallelNorth(39.75)
				, ParallelSouth(38.4500000000000028)),
			buildGrid(2772
				, L"NAD83(HARN) / Colorado North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50066
				, FalseNorthing(304800.6096000000252388)
				, FalseEasting(914401.8288999999640509)
				, LatLonOrigin(39.3333333333333002, -105.5)
				, ParallelNorth(40.783333333333303)
				, ParallelSouth(39.716666666666697)),
			buildGrid(2876
				, L"NAD83(HARN) / Colorado North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50066
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(39.3333333333333002, -105.5)
				, ParallelNorth(40.783333333333303)
				, ParallelSouth(39.716666666666697)),
			buildGrid(2774
				, L"NAD83(HARN) / Colorado South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50066
				, FalseNorthing(304800.6096000000252388)
				, FalseEasting(914401.8288999999640509)
				, LatLonOrigin(36.6666666666666998, -105.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.2333333333332988)),
			buildGrid(2878
				, L"NAD83(HARN) / Colorado South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50066
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(36.6666666666666998, -105.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.2333333333332988)),
			buildGrid(2775
				, L"NAD83(HARN) / Connecticut"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50109
				, FalseNorthing(152400.3048000000126194)
				, FalseEasting(304800.6096000000252388)
				, LatLonOrigin(40.8333333300000021, -72.75)
				, ParallelNorth(41.8666666700000007)
				, ParallelSouth(41.2000000000000028)),
			buildGrid(2879
				, L"NAD83(HARN) / Connecticut (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50109
				, FalseNorthing(500000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(40.8333333300000021, -72.75)
				, ParallelNorth(41.8666666700000007)
				, ParallelSouth(41.2000000000000028)),
			buildGrid(5071
				, L"NAD83(HARN) / Conus Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4152
				, LatLonOrigin(23.0, -96.0)
				, ParallelNorth(29.5)
				, ParallelSouth(45.5)),
			buildGrid(2776
				, L"NAD83(HARN) / Delaware"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50079
				, Scale(0.999995)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, -75.4166666666666998)),
			buildGrid(2880
				, L"NAD83(HARN) / Delaware (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50079
				, Scale(0.999995)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(38.0, -75.4166666666666998)),
			buildGrid(2777
				, L"NAD83(HARN) / Florida East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50067
				, Scale(0.999941177)
				, FalseEasting(200000.0)
				, LatLonOrigin(24.3333333333333002, -81.0)),
			buildGrid(2881
				, L"NAD83(HARN) / Florida East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50067
				, Scale(0.999941177)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(24.3333333333333002, -81.0)),
			buildGrid(3087
				, L"NAD83(HARN) / Florida GDL Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 50067
				, FalseEasting(400000.0)
				, LatLonOrigin(24.0, -84.0)
				, ParallelNorth(24.0)
				, ParallelSouth(31.5)),
			buildGrid(2779
				, L"NAD83(HARN) / Florida North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50067
				, FalseEasting(600000.0)
				, LatLonOrigin(29.0, -84.5)
				, ParallelNorth(30.75)
				, ParallelSouth(29.5833333333333002)),
			buildGrid(2883
				, L"NAD83(HARN) / Florida North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50067
				, FalseEasting(1968500.0)
				, LatLonOrigin(29.0, -84.5)
				, ParallelNorth(30.75)
				, ParallelSouth(29.5833333333333002)),
			buildGrid(2778
				, L"NAD83(HARN) / Florida West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50067
				, Scale(0.999941177)
				, FalseEasting(200000.0)
				, LatLonOrigin(24.3333333333333002, -82.0)),
			buildGrid(2882
				, L"NAD83(HARN) / Florida West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50067
				, Scale(0.999941177)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(24.3333333333333002, -82.0)),
			buildGrid(2780
				, L"NAD83(HARN) / Georgia East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50068
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(30.0, -82.1666666666666998)),
			buildGrid(2884
				, L"NAD83(HARN) / Georgia East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50068
				, Scale(0.9999)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(30.0, -82.1666666666666998)),
			buildGrid(2781
				, L"NAD83(HARN) / Georgia West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50068
				, Scale(0.9999)
				, FalseEasting(700000.0)
				, LatLonOrigin(30.0, -84.1666666666666998)),
			buildGrid(2885
				, L"NAD83(HARN) / Georgia West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50068
				, Scale(0.9999)
				, FalseEasting(2296583.3330000001005828)
				, LatLonOrigin(30.0, -84.1666666666666998)),
			buildGrid(4414
				, L"NAD83(HARN) / Guam Map Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0)
				, FalseNorthing(200000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(13.5, 144.75)),
			buildGrid(2782
				, L"NAD83(HARN) / Hawaii zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50069
				, Scale(0.999966667)
				, FalseEasting(500000.0)
				, LatLonOrigin(18.8333333333333002, -155.5)),
			buildGrid(2783
				, L"NAD83(HARN) / Hawaii zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50069
				, Scale(0.999966667)
				, FalseEasting(500000.0)
				, LatLonOrigin(20.3333333333333002, -156.6666666666669983)),
			buildGrid(2784
				, L"NAD83(HARN) / Hawaii zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50069
				, Scale(0.99999)
				, FalseEasting(500000.0)
				, LatLonOrigin(21.1666666666666998, -158.0)),
			buildGrid(3760
				, L"NAD83(HARN) / Hawaii zone 3 (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50069
				, Scale(0.99999)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(21.1666666666666998, -158.0)),
			buildGrid(2785
				, L"NAD83(HARN) / Hawaii zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50069
				, Scale(0.99999)
				, FalseEasting(500000.0)
				, LatLonOrigin(21.8333333333333002, -159.5)),
			buildGrid(2786
				, L"NAD83(HARN) / Hawaii zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50069
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(21.6666666666666998, -160.1666666666669983)),
			buildGrid(2788
				, L"NAD83(HARN) / Idaho Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9999473679999999)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.6666666666666998, -114.0)),
			buildGrid(2887
				, L"NAD83(HARN) / Idaho Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(0.9999473679999999)
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(41.6666666666666998, -114.0)),
			buildGrid(2787
				, L"NAD83(HARN) / Idaho East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9999473679999999)
				, FalseEasting(200000.0)
				, LatLonOrigin(41.6666666666666998, -112.1666666666669983)),
			buildGrid(2886
				, L"NAD83(HARN) / Idaho East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(0.9999473679999999)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(41.6666666666666998, -112.1666666666669983)),
			buildGrid(2789
				, L"NAD83(HARN) / Idaho West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.999933333)
				, FalseEasting(800000.0)
				, LatLonOrigin(41.6666666666666998, -115.75)),
			buildGrid(2888
				, L"NAD83(HARN) / Idaho West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(0.999933333)
				, FalseEasting(2624666.6669999998994172)
				, LatLonOrigin(41.6666666666666998, -115.75)),
			buildGrid(2790
				, L"NAD83(HARN) / Illinois East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50072
				, Scale(0.9999749999999999)
				, FalseEasting(300000.0)
				, LatLonOrigin(36.6666666666666998, -88.3333333333333002)),
			buildGrid(3443
				, L"NAD83(HARN) / Illinois East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50072
				, Scale(0.9999749999999999)
				, FalseEasting(984250.0)
				, LatLonOrigin(36.6666666666666998, -88.3333333333333002)),
			buildGrid(2791
				, L"NAD83(HARN) / Illinois West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50072
				, Scale(0.999941177)
				, FalseEasting(700000.0)
				, LatLonOrigin(36.6666666666666998, -90.1666666666666998)),
			buildGrid(3444
				, L"NAD83(HARN) / Illinois West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50072
				, Scale(0.999941177)
				, FalseEasting(2296583.3333000000566244)
				, LatLonOrigin(36.6666666666666998, -90.1666666666666998)),
			buildGrid(2792
				, L"NAD83(HARN) / Indiana East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50073
				, Scale(0.999966667)
				, FalseNorthing(250000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(37.5, -85.6666666666666998)),
			buildGrid(2967
				, L"NAD83(HARN) / Indiana East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50073
				, Scale(0.999966667)
				, FalseNorthing(820208.3329999999841675)
				, FalseEasting(328083.3329999999841675)
				, LatLonOrigin(37.5, -85.6666666666666998)),
			buildGrid(2793
				, L"NAD83(HARN) / Indiana West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50073
				, Scale(0.999966667)
				, FalseNorthing(250000.0)
				, FalseEasting(900000.0)
				, LatLonOrigin(37.5, -87.0833333333333002)),
			buildGrid(2968
				, L"NAD83(HARN) / Indiana West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50073
				, Scale(0.999966667)
				, FalseNorthing(820208.3329999999841675)
				, FalseEasting(2952750.0)
				, LatLonOrigin(37.5, -87.0833333333333002)),
			buildGrid(2794
				, L"NAD83(HARN) / Iowa North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50074
				, FalseNorthing(1000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(41.5, -93.5)
				, ParallelNorth(43.2666666666667012)
				, ParallelSouth(42.0666666666666984)),
			buildGrid(3425
				, L"NAD83(HARN) / Iowa North (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50074
				, FalseNorthing(3280833.3333000000566244)
				, FalseEasting(4921250.0)
				, LatLonOrigin(41.5, -93.5)
				, ParallelNorth(43.2666666666667012)
				, ParallelSouth(42.0666666666666984)),
			buildGrid(2795
				, L"NAD83(HARN) / Iowa South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50074
				, FalseEasting(500000.0)
				, LatLonOrigin(40.0, -93.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.6166666666667027)),
			buildGrid(3426
				, L"NAD83(HARN) / Iowa South (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50074
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(40.0, -93.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.6166666666667027)),
			buildGrid(2796
				, L"NAD83(HARN) / Kansas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50075
				, FalseEasting(400000.0)
				, LatLonOrigin(38.3333333333333002, -98.0)
				, ParallelNorth(39.783333333333303)
				, ParallelSouth(38.716666666666697)),
			buildGrid(3427
				, L"NAD83(HARN) / Kansas North (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50075
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(38.3333333333333002, -98.0)
				, ParallelNorth(39.783333333333303)
				, ParallelSouth(38.716666666666697)),
			buildGrid(2797
				, L"NAD83(HARN) / Kansas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50075
				, FalseNorthing(400000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(36.6666666666666998, -98.5)
				, ParallelNorth(38.5666666666666984)
				, ParallelSouth(37.2666666666667012)),
			buildGrid(3428
				, L"NAD83(HARN) / Kansas South (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50075
				, FalseNorthing(1312333.3333000000566244)
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(36.6666666666666998, -98.5)
				, ParallelNorth(38.5666666666666984)
				, ParallelSouth(37.2666666666667012)),
			buildGrid(2798
				, L"NAD83(HARN) / Kentucky North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50076
				, FalseEasting(500000.0)
				, LatLonOrigin(37.5, -84.25)
				, ParallelNorth(37.966666666666697)
				, ParallelSouth(38.966666666666697)),
			buildGrid(2891
				, L"NAD83(HARN) / Kentucky North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50076
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(37.5, -84.25)
				, ParallelNorth(37.966666666666697)
				, ParallelSouth(38.966666666666697)),
			buildGrid(3090
				, L"NAD83(HARN) / Kentucky Single Zone"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50076
				, FalseNorthing(1000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.0833333333333002)
				, ParallelSouth(38.6666666666666998)),
			buildGrid(3091
				, L"NAD83(HARN) / Kentucky Single Zone (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50076
				, FalseNorthing(3280833.3330000001005828)
				, FalseEasting(4921250.0)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.0833333333333002)
				, ParallelSouth(38.6666666666666998)),
			buildGrid(2799
				, L"NAD83(HARN) / Kentucky South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50076
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.9333333333333016)
				, ParallelSouth(36.7333333333332988)),
			buildGrid(2892
				, L"NAD83(HARN) / Kentucky South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50076
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.9333333333333016)
				, ParallelSouth(36.7333333333332988)),
			buildGrid(2800
				, L"NAD83(HARN) / Louisiana North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50077
				, FalseEasting(1000000.0)
				, LatLonOrigin(30.5, -92.5)
				, ParallelNorth(32.6666666666666998)
				, ParallelSouth(31.1666666666666998)),
			buildGrid(3456
				, L"NAD83(HARN) / Louisiana North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50077
				, FalseEasting(3280833.3333000000566244)
				, LatLonOrigin(30.5, -92.5)
				, ParallelNorth(32.6666666666666998)
				, ParallelSouth(31.1666666666666998)),
			buildGrid(2801
				, L"NAD83(HARN) / Louisiana South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50077
				, FalseEasting(1000000.0)
				, LatLonOrigin(28.5, -91.3333333333333002)
				, ParallelNorth(30.6999999999999993)
				, ParallelSouth(29.3000000000000007)),
			buildGrid(3457
				, L"NAD83(HARN) / Louisiana South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50077
				, FalseEasting(3280833.3333000000566244)
				, LatLonOrigin(28.5, -91.3333333333333002)
				, ParallelNorth(30.6999999999999993)
				, ParallelSouth(29.3000000000000007)),
			buildGrid(3464
				, L"NAD83(HARN) / Maine CS2000 Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50078
				, Scale(0.99998)
				, FalseEasting(500000.0)
				, LatLonOrigin(43.5, -69.125)),
			buildGrid(3075
				, L"NAD83(HARN) / Maine CS2000 East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50078
				, Scale(0.99998)
				, FalseEasting(700000.0)
				, LatLonOrigin(43.8333333333333002, -67.875)),
			buildGrid(3077
				, L"NAD83(HARN) / Maine CS2000 West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50078
				, Scale(0.99998)
				, FalseEasting(300000.0)
				, LatLonOrigin(42.8333333333333002, -70.375)),
			buildGrid(2802
				, L"NAD83(HARN) / Maine East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50078
				, Scale(0.9999)
				, FalseEasting(300000.0)
				, LatLonOrigin(43.6666666666666998, -68.5)),
			buildGrid(26855
				, L"NAD83(HARN) / Maine East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50078
				, Scale(0.9999)
				, FalseEasting(984250.0)
				, LatLonOrigin(43.6666666666666998, -68.5)),
			buildGrid(2803
				, L"NAD83(HARN) / Maine West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50078
				, Scale(0.999966667)
				, FalseEasting(900000.0)
				, LatLonOrigin(42.8333333333333002, -70.1666666666666998)),
			buildGrid(26856
				, L"NAD83(HARN) / Maine West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50078
				, Scale(0.999966667)
				, FalseEasting(2952750.0)
				, LatLonOrigin(42.8333333333333002, -70.1666666666666998)),
			buildGrid(2804
				, L"NAD83(HARN) / Maryland"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50079
				, FalseEasting(400000.0)
				, LatLonOrigin(37.6666666666666998, -77.0)
				, ParallelNorth(39.4500000000000028)
				, ParallelSouth(38.2999999999999972)),
			buildGrid(2893
				, L"NAD83(HARN) / Maryland (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50079
				, FalseEasting(1312333.3330000001005828)
				, LatLonOrigin(37.6666666666666998, -77.0)
				, ParallelNorth(39.4500000000000028)
				, ParallelSouth(38.2999999999999972)),
			buildGrid(2806
				, L"NAD83(HARN) / Massachusetts Island"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50107
				, FalseEasting(500000.0)
				, LatLonOrigin(41.0, -70.5)
				, ParallelNorth(41.4833333300000007)
				, ParallelSouth(41.2833333299999978)),
			buildGrid(2895
				, L"NAD83(HARN) / Massachusetts Island (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50107
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(41.0, -70.5)
				, ParallelNorth(41.4833333300000007)
				, ParallelSouth(41.2833333299999978)),
			buildGrid(2805
				, L"NAD83(HARN) / Massachusetts Mainland"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50107
				, FalseNorthing(750000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(41.0, -71.5)
				, ParallelNorth(42.6833333300000035)
				, ParallelSouth(41.7166666700000022)),
			buildGrid(2894
				, L"NAD83(HARN) / Massachusetts Mainland (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50107
				, FalseNorthing(2460625.0)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(41.0, -71.5)
				, ParallelNorth(42.6833333300000035)
				, ParallelSouth(41.7166666700000022)),
			buildGrid(2808
				, L"NAD83(HARN) / Michigan Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50080
				, FalseEasting(6000000.0)
				, LatLonOrigin(43.3166666666666984, -84.3666666666667027)
				, ParallelNorth(45.7000000000000028)
				, ParallelSouth(44.1833333333333016)),
			buildGrid(2897
				, L"NAD83(HARN) / Michigan Central (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50080
				, FalseEasting(19685039.3700000010430813)
				, LatLonOrigin(43.3166666666666984, -84.3666666666667027)
				, ParallelNorth(45.7000000000000028)
				, ParallelSouth(44.1833333333333016)),
			buildGrid(2807
				, L"NAD83(HARN) / Michigan North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50080
				, FalseEasting(8000000.0)
				, LatLonOrigin(44.783333333333303, -87.0)
				, ParallelNorth(47.0833333333333002)
				, ParallelSouth(45.4833333333332988)),
			buildGrid(2896
				, L"NAD83(HARN) / Michigan North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50080
				, FalseEasting(26246719.1600000001490116)
				, LatLonOrigin(44.783333333333303, -87.0)
				, ParallelNorth(47.0833333333333002)
				, ParallelSouth(45.4833333333332988)),
			buildGrid(3079
				, L"NAD83(HARN) / Michigan Oblique Mercator"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 50080
				, Scale(0.9996)
				, FalseNorthing(-4354009.8159999996423721)
				, FalseEasting(2546731.4959999998100102)
				, LatLonOrigin(45.3091666700000033, -86.0)
				, Azimuth(337.2555600000000027)
				, RectifiedGrid(337.2555600000000027)),
			buildGrid(2809
				, L"NAD83(HARN) / Michigan South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50080
				, FalseEasting(4000000.0)
				, LatLonOrigin(41.5, -84.3666666666667027)
				, ParallelNorth(43.6666666666666998)
				, ParallelSouth(42.1000000000000014)),
			buildGrid(2898
				, L"NAD83(HARN) / Michigan South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50080
				, FalseEasting(13123359.5800000000745058)
				, LatLonOrigin(41.5, -84.3666666666667027)
				, ParallelNorth(43.6666666666666998)
				, ParallelSouth(42.1000000000000014)),
			buildGrid(2811
				, L"NAD83(HARN) / Minnesota Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50081
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(45.0, -94.25)
				, ParallelNorth(47.0499999999999972)
				, ParallelSouth(45.6166666666667027)),
			buildGrid(26858
				, L"NAD83(HARN) / Minnesota Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50081
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(45.0, -94.25)
				, ParallelNorth(47.0499999999999972)
				, ParallelSouth(45.6166666666667027)),
			buildGrid(2810
				, L"NAD83(HARN) / Minnesota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50081
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(46.5, -93.0999999999999943)
				, ParallelNorth(48.6333333333332973)
				, ParallelSouth(47.033333333333303)),
			buildGrid(26857
				, L"NAD83(HARN) / Minnesota North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50081
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(46.5, -93.0999999999999943)
				, ParallelNorth(48.6333333333332973)
				, ParallelSouth(47.033333333333303)),
			buildGrid(2812
				, L"NAD83(HARN) / Minnesota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50081
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(43.0, -94.0)
				, ParallelNorth(45.216666666666697)
				, ParallelSouth(43.783333333333303)),
			buildGrid(26859
				, L"NAD83(HARN) / Minnesota South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50081
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(43.0, -94.0)
				, ParallelNorth(45.216666666666697)
				, ParallelSouth(43.783333333333303)),
			buildGrid(2813
				, L"NAD83(HARN) / Mississippi East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50082
				, Scale(0.99995)
				, FalseEasting(300000.0)
				, LatLonOrigin(29.5, -88.8333333333333002)),
			buildGrid(2899
				, L"NAD83(HARN) / Mississippi East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50082
				, Scale(0.99995)
				, FalseEasting(984250.0)
				, LatLonOrigin(29.5, -88.8333333333333002)),
			buildGrid(3815
				, L"NAD83(HARN) / Mississippi TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50082
				, Scale(0.9998335)
				, FalseNorthing(1300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(32.5, -89.75)),
			buildGrid(2814
				, L"NAD83(HARN) / Mississippi West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50082
				, Scale(0.99995)
				, FalseEasting(700000.0)
				, LatLonOrigin(29.5, -90.3333333333333002)),
			buildGrid(2900
				, L"NAD83(HARN) / Mississippi West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50082
				, Scale(0.99995)
				, FalseEasting(2296583.3330000001005828)
				, LatLonOrigin(29.5, -90.3333333333333002)),
			buildGrid(2816
				, L"NAD83(HARN) / Missouri Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.999933333)
				, FalseEasting(500000.0)
				, LatLonOrigin(35.8333333333333002, -92.5)),
			buildGrid(2815
				, L"NAD83(HARN) / Missouri East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.999933333)
				, FalseEasting(250000.0)
				, LatLonOrigin(35.8333333333333002, -90.5)),
			buildGrid(2817
				, L"NAD83(HARN) / Missouri West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.999941177)
				, FalseEasting(850000.0)
				, LatLonOrigin(36.1666666666666998, -94.5)),
			buildGrid(2818
				, L"NAD83(HARN) / Montana"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50083
				, FalseEasting(600000.0)
				, LatLonOrigin(44.25, -109.5)
				, ParallelNorth(49.0)
				, ParallelSouth(45.0)),
			buildGrid(2901
				, L"NAD83(HARN) / Montana (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50083
				, FalseEasting(1968503.9369999999180436)
				, LatLonOrigin(44.25, -109.5)
				, ParallelNorth(49.0)
				, ParallelSouth(45.0)),
			buildGrid(2819
				, L"NAD83(HARN) / Nebraska"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50084
				, FalseEasting(500000.0)
				, LatLonOrigin(39.8333333333333002, -100.0)
				, ParallelNorth(43.0)
				, ParallelSouth(40.0)),
			buildGrid(26860
				, L"NAD83(HARN) / Nebraska (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50084
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(39.8333333333333002, -100.0)
				, ParallelNorth(43.0)
				, ParallelSouth(40.0)),
			buildGrid(2821
				, L"NAD83(HARN) / Nevada Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50085
				, Scale(0.9999)
				, FalseNorthing(6000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(34.75, -116.6666666666669983)),
			buildGrid(3430
				, L"NAD83(HARN) / Nevada Central (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50085
				, Scale(0.9999)
				, FalseNorthing(19685000.0)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(34.75, -116.6666666666669983)),
			buildGrid(2820
				, L"NAD83(HARN) / Nevada East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50085
				, Scale(0.9999)
				, FalseNorthing(8000000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(34.75, -115.5833333333330017)),
			buildGrid(3429
				, L"NAD83(HARN) / Nevada East (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50085
				, Scale(0.9999)
				, FalseNorthing(26246666.6667000018060207)
				, FalseEasting(656166.6666999999433756)
				, LatLonOrigin(34.75, -115.5833333333330017)),
			buildGrid(2822
				, L"NAD83(HARN) / Nevada West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50085
				, Scale(0.9999)
				, FalseNorthing(4000000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(34.75, -118.5833333333330017)),
			buildGrid(3431
				, L"NAD83(HARN) / Nevada West (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50085
				, Scale(0.9999)
				, FalseNorthing(13123333.3333000000566244)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(34.75, -118.5833333333330017)),
			buildGrid(2823
				, L"NAD83(HARN) / New Hampshire"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50105
				, Scale(0.9999670000000001)
				, FalseEasting(300000.0)
				, LatLonOrigin(42.5, -71.6666666699999979)),
			buildGrid(3445
				, L"NAD83(HARN) / New Hampshire (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50105
				, Scale(0.9999670000000001)
				, FalseEasting(984250.0)
				, LatLonOrigin(42.5, -71.6666666699999979)),
			buildGrid(2824
				, L"NAD83(HARN) / New Jersey"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50087
				, Scale(0.9999)
				, FalseEasting(150000.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(3432
				, L"NAD83(HARN) / New Jersey (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50087
				, Scale(0.9999)
				, FalseEasting(492125.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(2826
				, L"NAD83(HARN) / New Mexico Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50088
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(31.0, -106.25)),
			buildGrid(2903
				, L"NAD83(HARN) / New Mexico Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50088
				, Scale(0.9999)
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(31.0, -106.25)),
			buildGrid(2825
				, L"NAD83(HARN) / New Mexico East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50088
				, Scale(0.999909091)
				, FalseEasting(165000.0)
				, LatLonOrigin(31.0, -104.3333333333330017)),
			buildGrid(2902
				, L"NAD83(HARN) / New Mexico East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50088
				, Scale(0.999909091)
				, FalseEasting(541337.5)
				, LatLonOrigin(31.0, -104.3333333333330017)),
			buildGrid(2827
				, L"NAD83(HARN) / New Mexico West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50088
				, Scale(0.999916667)
				, FalseEasting(830000.0)
				, LatLonOrigin(31.0, -107.8333333333330017)),
			buildGrid(2904
				, L"NAD83(HARN) / New Mexico West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50088
				, Scale(0.999916667)
				, FalseEasting(2723091.6669999998994172)
				, LatLonOrigin(31.0, -107.8333333333330017)),
			buildGrid(2829
				, L"NAD83(HARN) / New York Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50089
				, Scale(0.9999375)
				, FalseEasting(250000.0)
				, LatLonOrigin(40.0, -76.5833333333333002)),
			buildGrid(2906
				, L"NAD83(HARN) / New York Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50089
				, Scale(0.9999375)
				, FalseEasting(820208.3329999999841675)
				, LatLonOrigin(40.0, -76.5833333333333002)),
			buildGrid(2828
				, L"NAD83(HARN) / New York East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50089
				, Scale(0.9999)
				, FalseEasting(150000.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(2905
				, L"NAD83(HARN) / New York East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50089
				, Scale(0.9999)
				, FalseEasting(492125.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(2831
				, L"NAD83(HARN) / New York Long Island"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50089
				, FalseEasting(300000.0)
				, LatLonOrigin(40.1666666666666998, -74.0)
				, ParallelNorth(41.033333333333303)
				, ParallelSouth(40.6666666666666998)),
			buildGrid(2908
				, L"NAD83(HARN) / New York Long Island (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50089
				, FalseEasting(984250.0)
				, LatLonOrigin(40.1666666666666998, -74.0)
				, ParallelNorth(41.033333333333303)
				, ParallelSouth(40.6666666666666998)),
			buildGrid(2830
				, L"NAD83(HARN) / New York West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50089
				, Scale(0.9999375)
				, FalseEasting(350000.0)
				, LatLonOrigin(40.0, -78.5833333333333002)),
			buildGrid(2907
				, L"NAD83(HARN) / New York West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50089
				, Scale(0.9999375)
				, FalseEasting(1148291.6669999998994172)
				, LatLonOrigin(40.0, -78.5833333333333002)),
			buildGrid(3358
				, L"NAD83(HARN) / North Carolina"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50111
				, FalseEasting(609601.2199999999720603)
				, LatLonOrigin(33.75, -79.0)
				, ParallelNorth(36.1666666699999979)
				, ParallelSouth(34.3333333300000021)),
			buildGrid(3404
				, L"NAD83(HARN) / North Carolina (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50111
				, FalseEasting(2000000.0)
				, LatLonOrigin(33.75, -79.0)
				, ParallelNorth(36.1666666699999979)
				, ParallelSouth(34.3333333300000021)),
			buildGrid(2832
				, L"NAD83(HARN) / North Dakota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50090
				, FalseEasting(600000.0)
				, LatLonOrigin(47.0, -100.5)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.4333333333333016)),
			buildGrid(2909
				, L"NAD83(HARN) / North Dakota North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50090
				, FalseEasting(1968503.9369999999180436)
				, LatLonOrigin(47.0, -100.5)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.4333333333333016)),
			buildGrid(2833
				, L"NAD83(HARN) / North Dakota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50090
				, FalseEasting(600000.0)
				, LatLonOrigin(45.6666666666666998, -100.5)
				, ParallelNorth(47.4833333333332988)
				, ParallelSouth(46.1833333333333016)),
			buildGrid(2910
				, L"NAD83(HARN) / North Dakota South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50090
				, FalseEasting(1968503.9369999999180436)
				, LatLonOrigin(45.6666666666666998, -100.5)
				, ParallelNorth(47.4833333333332988)
				, ParallelSouth(46.1833333333333016)),
			buildGrid(2834
				, L"NAD83(HARN) / Ohio North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50091
				, FalseEasting(600000.0)
				, LatLonOrigin(39.6666666666666998, -82.5)
				, ParallelNorth(41.7000000000000028)
				, ParallelSouth(40.4333333333333016)),
			buildGrid(3753
				, L"NAD83(HARN) / Ohio North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50091
				, FalseEasting(1968500.0)
				, LatLonOrigin(39.6666666666666998, -82.5)
				, ParallelNorth(41.7000000000000028)
				, ParallelSouth(40.4333333333333016)),
			buildGrid(2835
				, L"NAD83(HARN) / Ohio South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50091
				, FalseEasting(600000.0)
				, LatLonOrigin(38.0, -82.5)
				, ParallelNorth(40.033333333333303)
				, ParallelSouth(38.7333333333332988)),
			buildGrid(3754
				, L"NAD83(HARN) / Ohio South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50091
				, FalseEasting(1968500.0)
				, LatLonOrigin(38.0, -82.5)
				, ParallelNorth(40.033333333333303)
				, ParallelSouth(38.7333333333332988)),
			buildGrid(2836
				, L"NAD83(HARN) / Oklahoma North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50092
				, FalseEasting(600000.0)
				, LatLonOrigin(35.0, -98.0)
				, ParallelNorth(36.7666666666667012)
				, ParallelSouth(35.5666666666666984)),
			buildGrid(2911
				, L"NAD83(HARN) / Oklahoma North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50092
				, FalseEasting(1968500.0)
				, LatLonOrigin(35.0, -98.0)
				, ParallelNorth(36.7666666666667012)
				, ParallelSouth(35.5666666666666984)),
			buildGrid(2837
				, L"NAD83(HARN) / Oklahoma South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50092
				, FalseEasting(600000.0)
				, LatLonOrigin(33.3333333333333002, -98.0)
				, ParallelNorth(35.2333333333332988)
				, ParallelSouth(33.9333333333333016)),
			buildGrid(2912
				, L"NAD83(HARN) / Oklahoma South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50092
				, FalseEasting(1968500.0)
				, LatLonOrigin(33.3333333333333002, -98.0)
				, ParallelNorth(35.2333333333332988)
				, ParallelSouth(33.9333333333333016)),
			buildGrid(2993
				, L"NAD83(HARN) / Oregon Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50101
				, FalseEasting(400000.0)
				, LatLonOrigin(41.75, -120.5)
				, ParallelNorth(43.0)
				, ParallelSouth(45.5)),
			buildGrid(2994
				, L"NAD83(HARN) / Oregon Lambert (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50101
				, FalseEasting(1312335.9580000001005828)
				, LatLonOrigin(41.75, -120.5)
				, ParallelNorth(43.0)
				, ParallelSouth(45.5)),
			buildGrid(2838
				, L"NAD83(HARN) / Oregon North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50101
				, FalseEasting(2500000.0)
				, LatLonOrigin(43.6666666666666998, -120.5)
				, ParallelNorth(46.0)
				, ParallelSouth(44.3333333333333002)),
			buildGrid(2913
				, L"NAD83(HARN) / Oregon North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50101
				, FalseEasting(8202099.7379999998956919)
				, LatLonOrigin(43.6666666666666998, -120.5)
				, ParallelNorth(46.0)
				, ParallelSouth(44.3333333333333002)),
			buildGrid(2839
				, L"NAD83(HARN) / Oregon South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50101
				, FalseEasting(1500000.0)
				, LatLonOrigin(41.6666666666666998, -120.5)
				, ParallelNorth(44.0)
				, ParallelSouth(42.3333333333333002)),
			buildGrid(2914
				, L"NAD83(HARN) / Oregon South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50101
				, FalseEasting(4921259.8430000003427267)
				, LatLonOrigin(41.6666666666666998, -120.5)
				, ParallelNorth(44.0)
				, ParallelSouth(42.3333333333333002)),
			buildGrid(3362
				, L"NAD83(HARN) / Pennsylvania North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50093
				, FalseEasting(600000.0)
				, LatLonOrigin(40.1666666666666998, -77.75)
				, ParallelNorth(41.9500000000000028)
				, ParallelSouth(40.8833333333332973)),
			buildGrid(3363
				, L"NAD83(HARN) / Pennsylvania North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50093
				, FalseEasting(1968500.0)
				, LatLonOrigin(40.1666666666666998, -77.75)
				, ParallelNorth(41.9500000000000028)
				, ParallelSouth(40.8833333333332973)),
			buildGrid(3364
				, L"NAD83(HARN) / Pennsylvania South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50093
				, FalseEasting(600000.0)
				, LatLonOrigin(39.3333333333333002, -77.75)
				, ParallelNorth(40.966666666666697)
				, ParallelSouth(39.9333333333333016)),
			buildGrid(3365
				, L"NAD83(HARN) / Pennsylvania South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50093
				, FalseEasting(1968500.0)
				, LatLonOrigin(39.3333333333333002, -77.75)
				, ParallelNorth(40.966666666666697)
				, ParallelSouth(39.9333333333333016)),
			buildGrid(2866
				, L"NAD83(HARN) / Puerto Rico and Virgin Is."
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50094
				, FalseNorthing(200000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(17.8333333333333002, -66.433333333333394)
				, ParallelNorth(18.4333333333333016)
				, ParallelSouth(18.0333333333332995)),
			buildGrid(2840
				, L"NAD83(HARN) / Rhode Island"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50108
				, Scale(0.999994)
				, FalseEasting(100000.0)
				, LatLonOrigin(41.0833333300000021, -71.5)),
			buildGrid(3446
				, L"NAD83(HARN) / Rhode Island (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50108
				, Scale(0.999994)
				, FalseEasting(328083.3332999999984168)
				, LatLonOrigin(41.0833333300000021, -71.5)),
			buildGrid(3360
				, L"NAD83(HARN) / South Carolina"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50112
				, FalseEasting(609600.0)
				, LatLonOrigin(31.8333333299999985, -81.0)
				, ParallelNorth(34.8333333300000021)
				, ParallelSouth(32.5)),
			buildGrid(3361
				, L"NAD83(HARN) / South Carolina (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50112
				, FalseEasting(2000000.0)
				, LatLonOrigin(31.8333333299999985, -81.0)
				, ParallelNorth(34.8333333300000021)
				, ParallelSouth(32.5)),
			buildGrid(2841
				, L"NAD83(HARN) / South Dakota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50095
				, FalseEasting(600000.0)
				, LatLonOrigin(43.8333333333333002, -100.0)
				, ParallelNorth(45.6833333333333016)
				, ParallelSouth(44.4166666666666998)),
			buildGrid(3458
				, L"NAD83(HARN) / South Dakota North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50095
				, FalseEasting(1968500.0)
				, LatLonOrigin(43.8333333333333002, -100.0)
				, ParallelNorth(45.6833333333333016)
				, ParallelSouth(44.4166666666666998)),
			buildGrid(2842
				, L"NAD83(HARN) / South Dakota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50095
				, FalseEasting(600000.0)
				, LatLonOrigin(42.3333333333333002, -100.3333333333330017)
				, ParallelNorth(44.3999999999999986)
				, ParallelSouth(42.8333333333333002)),
			buildGrid(3459
				, L"NAD83(HARN) / South Dakota South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50095
				, FalseEasting(1968500.0)
				, LatLonOrigin(42.3333333333333002, -100.3333333333330017)
				, ParallelNorth(44.3999999999999986)
				, ParallelSouth(42.8333333333333002)),
			buildGrid(2843
				, L"NAD83(HARN) / Tennessee"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50096
				, FalseEasting(600000.0)
				, LatLonOrigin(34.3333333333333002, -86.0)
				, ParallelNorth(36.4166666666666998)
				, ParallelSouth(35.25)),
			buildGrid(2915
				, L"NAD83(HARN) / Tennessee (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50096
				, FalseEasting(1968500.0)
				, LatLonOrigin(34.3333333333333002, -86.0)
				, ParallelNorth(36.4166666666666998)
				, ParallelSouth(35.25)),
			buildGrid(2846
				, L"NAD83(HARN) / Texas Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(3000000.0)
				, FalseEasting(700000.0)
				, LatLonOrigin(29.6666666666666998, -100.3333333333330017)
				, ParallelNorth(31.8833333333333009)
				, ParallelSouth(30.1166666666666991)),
			buildGrid(2918
				, L"NAD83(HARN) / Texas Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4152
				, FalseNorthing(9842500.0)
				, FalseEasting(2296583.3330000001005828)
				, LatLonOrigin(29.6666666666666998, -100.3333333333330017)
				, ParallelNorth(31.8833333333333009)
				, ParallelSouth(30.1166666666666991)),
			buildGrid(3085
				, L"NAD83(HARN) / Texas Centric Albers Equal Area"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(6000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(18.0, -100.0)
				, ParallelNorth(27.5)
				, ParallelSouth(35.0)),
			buildGrid(3084
				, L"NAD83(HARN) / Texas Centric Lambert Conformal"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(5000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(18.0, -100.0)
				, ParallelNorth(27.5)
				, ParallelSouth(35.0)),
			buildGrid(2844
				, L"NAD83(HARN) / Texas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(1000000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(34.0, -101.5)
				, ParallelNorth(36.1833333333333016)
				, ParallelSouth(34.6499999999999986)),
			buildGrid(2916
				, L"NAD83(HARN) / Texas North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4152
				, FalseNorthing(3280833.3330000001005828)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(34.0, -101.5)
				, ParallelNorth(36.1833333333333016)
				, ParallelSouth(34.6499999999999986)),
			buildGrid(2845
				, L"NAD83(HARN) / Texas North Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(2000000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(31.6666666666666998, -98.5)
				, ParallelNorth(33.966666666666697)
				, ParallelSouth(32.1333333333332973)),
			buildGrid(2917
				, L"NAD83(HARN) / Texas North Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4152
				, FalseNorthing(6561666.6670000003650784)
				, FalseEasting(1968500.0)
				, LatLonOrigin(31.6666666666666998, -98.5)
				, ParallelNorth(33.966666666666697)
				, ParallelSouth(32.1333333333332973)),
			buildGrid(2848
				, L"NAD83(HARN) / Texas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(5000000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(25.6666666666666998, -98.5)
				, ParallelNorth(27.8333333333333002)
				, ParallelSouth(26.1666666666666998)),
			buildGrid(2920
				, L"NAD83(HARN) / Texas South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4152
				, FalseNorthing(16404166.6669999994337559)
				, FalseEasting(984250.0)
				, LatLonOrigin(25.6666666666666998, -98.5)
				, ParallelNorth(27.8333333333333002)
				, ParallelSouth(26.1666666666666998)),
			buildGrid(2847
				, L"NAD83(HARN) / Texas South Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4152
				, FalseNorthing(4000000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(27.8333333333333002, -99.0)
				, ParallelNorth(30.2833333333332995)
				, ParallelSouth(28.3833333333333009)),
			buildGrid(2919
				, L"NAD83(HARN) / Texas South Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4152
				, FalseNorthing(13123333.3330000005662441)
				, FalseEasting(1968500.0)
				, LatLonOrigin(27.8333333333333002, -99.0)
				, ParallelNorth(30.2833333333332995)
				, ParallelSouth(28.3833333333333009)),
			buildGrid(2850
				, L"NAD83(HARN) / Utah Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50099
				, FalseNorthing(2000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(38.3333333333333002, -111.5)
				, ParallelNorth(40.6499999999999986)
				, ParallelSouth(39.0166666666667012)),
			buildGrid(2922
				, L"NAD83(HARN) / Utah Central (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50099
				, FalseNorthing(6561679.7900000000372529)
				, FalseEasting(1640419.9480000000912696)
				, LatLonOrigin(38.3333333333333002, -111.5)
				, ParallelNorth(40.6499999999999986)
				, ParallelSouth(39.0166666666667012)),
			buildGrid(3569
				, L"NAD83(HARN) / Utah Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50099
				, FalseNorthing(6561666.6666999999433756)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(38.3333333333333002, -111.5)
				, ParallelNorth(40.6499999999999986)
				, ParallelSouth(39.0166666666667012)),
			buildGrid(2849
				, L"NAD83(HARN) / Utah North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50099
				, FalseNorthing(1000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(40.3333333333333002, -111.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.716666666666697)),
			buildGrid(2921
				, L"NAD83(HARN) / Utah North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50099
				, FalseNorthing(3280839.8950000000186265)
				, FalseEasting(1640419.9480000000912696)
				, LatLonOrigin(40.3333333333333002, -111.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.716666666666697)),
			buildGrid(3568
				, L"NAD83(HARN) / Utah North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50099
				, FalseNorthing(3280833.3333000000566244)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(40.3333333333333002, -111.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.716666666666697)),
			buildGrid(2851
				, L"NAD83(HARN) / Utah South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50099
				, FalseNorthing(3000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.6666666666666998, -111.5)
				, ParallelNorth(38.3500000000000014)
				, ParallelSouth(37.216666666666697)),
			buildGrid(2923
				, L"NAD83(HARN) / Utah South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 50099
				, FalseNorthing(9842519.6850000005215406)
				, FalseEasting(1640419.9480000000912696)
				, LatLonOrigin(36.6666666666666998, -111.5)
				, ParallelNorth(38.3500000000000014)
				, ParallelSouth(37.216666666666697)),
			buildGrid(3570
				, L"NAD83(HARN) / Utah South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50099
				, FalseNorthing(9842500.0)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(36.6666666666666998, -111.5)
				, ParallelNorth(38.3500000000000014)
				, ParallelSouth(37.216666666666697)),
			buildGrid(3740
				, L"NAD83(HARN) / UTM zone 10N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -123.0)),
			buildGrid(3741
				, L"NAD83(HARN) / UTM zone 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(3742
				, L"NAD83(HARN) / UTM zone 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(3743
				, L"NAD83(HARN) / UTM zone 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(3744
				, L"NAD83(HARN) / UTM zone 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(3745
				, L"NAD83(HARN) / UTM zone 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(3746
				, L"NAD83(HARN) / UTM zone 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(3747
				, L"NAD83(HARN) / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(3748
				, L"NAD83(HARN) / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(3749
				, L"NAD83(HARN) / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(2195
				, L"NAD83(HARN) / UTM zone 2S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(3750
				, L"NAD83(HARN) / UTM zone 4N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -159.0)),
			buildGrid(2156
				, L"NAD83(HARN) / UTM zone 59S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(3751
				, L"NAD83(HARN) / UTM zone 5N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(2852
				, L"NAD83(HARN) / Vermont"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50106
				, Scale(0.999964)
				, FalseEasting(500000.0)
				, LatLonOrigin(42.5, -72.5)),
			buildGrid(5654
				, L"NAD83(HARN) / Vermont (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(0.999964286)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(42.5, -72.5)),
			buildGrid(3969
				, L"NAD83(HARN) / Virginia Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50100
				, LatLonOrigin(36.0, -79.5)
				, ParallelNorth(37.0)
				, ParallelSouth(39.5)),
			buildGrid(2853
				, L"NAD83(HARN) / Virginia North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50100
				, FalseNorthing(2000000.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(37.6666666699999979, -78.5)
				, ParallelNorth(39.2000000000000028)
				, ParallelSouth(38.0333333299999978)),
			buildGrid(2924
				, L"NAD83(HARN) / Virginia North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50100
				, FalseNorthing(6561666.6670000003650784)
				, FalseEasting(11482916.6669999994337559)
				, LatLonOrigin(37.6666666699999979, -78.5)
				, ParallelNorth(39.2000000000000028)
				, ParallelSouth(38.0333333299999978)),
			buildGrid(2854
				, L"NAD83(HARN) / Virginia South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50100
				, FalseNorthing(1000000.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(36.3333333300000021, -78.5)
				, ParallelNorth(37.9666666700000022)
				, ParallelSouth(36.7666666699999993)),
			buildGrid(2925
				, L"NAD83(HARN) / Virginia South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50100
				, FalseNorthing(3280833.3330000001005828)
				, FalseEasting(11482916.6669999994337559)
				, LatLonOrigin(36.3333333300000021, -78.5)
				, ParallelNorth(37.9666666700000022)
				, ParallelSouth(36.7666666699999993)),
			buildGrid(2855
				, L"NAD83(HARN) / Washington North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50101
				, FalseEasting(500000.0)
				, LatLonOrigin(47.0, -120.8333333333330017)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.5)),
			buildGrid(2926
				, L"NAD83(HARN) / Washington North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50101
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(47.0, -120.8333333333330017)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.5)),
			buildGrid(2856
				, L"NAD83(HARN) / Washington South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50101
				, FalseEasting(500000.0)
				, LatLonOrigin(45.3333333333333002, -120.5)
				, ParallelNorth(47.3333333333333002)
				, ParallelSouth(45.8333333333333002)),
			buildGrid(2927
				, L"NAD83(HARN) / Washington South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50101
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(45.3333333333333002, -120.5)
				, ParallelNorth(47.3333333333333002)
				, ParallelSouth(45.8333333333333002)),
			buildGrid(2857
				, L"NAD83(HARN) / West Virginia North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50102
				, FalseEasting(600000.0)
				, LatLonOrigin(38.5, -79.5)
				, ParallelNorth(40.25)
				, ParallelSouth(39.0)),
			buildGrid(26861
				, L"NAD83(HARN) / West Virginia North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50102
				, FalseEasting(1968500.0)
				, LatLonOrigin(38.5, -79.5)
				, ParallelNorth(40.25)
				, ParallelSouth(39.0)),
			buildGrid(2858
				, L"NAD83(HARN) / West Virginia South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50102
				, FalseEasting(600000.0)
				, LatLonOrigin(37.0, -81.0)
				, ParallelNorth(38.8833333333332973)
				, ParallelSouth(37.4833333333332988)),
			buildGrid(26862
				, L"NAD83(HARN) / West Virginia South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50102
				, FalseEasting(1968500.0)
				, LatLonOrigin(37.0, -81.0)
				, ParallelNorth(38.8833333333332973)
				, ParallelSouth(37.4833333333332988)),
			buildGrid(2860
				, L"NAD83(HARN) / Wisconsin Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50103
				, FalseEasting(600000.0)
				, LatLonOrigin(43.8333333333333002, -90.0)
				, ParallelNorth(45.5)
				, ParallelSouth(44.25)),
			buildGrid(2929
				, L"NAD83(HARN) / Wisconsin Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50103
				, FalseEasting(1968500.0)
				, LatLonOrigin(43.8333333333333002, -90.0)
				, ParallelNorth(45.5)
				, ParallelSouth(44.25)),
			buildGrid(2859
				, L"NAD83(HARN) / Wisconsin North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50103
				, FalseEasting(600000.0)
				, LatLonOrigin(45.1666666666666998, -90.0)
				, ParallelNorth(46.7666666666667012)
				, ParallelSouth(45.5666666666666984)),
			buildGrid(2928
				, L"NAD83(HARN) / Wisconsin North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50103
				, FalseEasting(1968500.0)
				, LatLonOrigin(45.1666666666666998, -90.0)
				, ParallelNorth(46.7666666666667012)
				, ParallelSouth(45.5666666666666984)),
			buildGrid(2861
				, L"NAD83(HARN) / Wisconsin South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50103
				, FalseEasting(600000.0)
				, LatLonOrigin(42.0, -90.0)
				, ParallelNorth(44.0666666666666984)
				, ParallelSouth(42.7333333333332988)),
			buildGrid(2930
				, L"NAD83(HARN) / Wisconsin South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 50103
				, FalseEasting(1968500.0)
				, LatLonOrigin(42.0, -90.0)
				, ParallelNorth(44.0666666666666984)
				, ParallelSouth(42.7333333333332988)),
			buildGrid(3071
				, L"NAD83(HARN) / Wisconsin Transverse Mercator"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50103
				, Scale(0.9996)
				, FalseNorthing(-4480000.0)
				, FalseEasting(520000.0)
				, LatLonOrigin(0.0, -90.0)),
			buildGrid(103300
				, L"NAD83(HARN) / WISCRS Adams County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000365284999999)
				, FalseNorthing(0.0037)
				, FalseEasting(147218.6941999999980908)
				, LatLonOrigin(43.3666666700000007, 90.0)),
			buildGrid(103400
				, L"NAD83(HARN) / WISCRS Adams County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000365284999999)
				, FalseNorthing(0.012)
				, FalseEasting(482999.9990000000107102)
				, LatLonOrigin(43.3666666700000007, 90.0)),
			buildGrid(103301
				, L"NAD83(HARN) / WISCRS Ashland County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000495682999999)
				, FalseNorthing(0.0017)
				, FalseEasting(172821.9461000000010245)
				, LatLonOrigin(45.7061109999999999, 90.6222219999999936)),
			buildGrid(103401
				, L"NAD83(HARN) / WISCRS Ashland County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000495682999999)
				, FalseNorthing(0.006)
				, FalseEasting(567000.0010000000474975)
				, LatLonOrigin(45.7061109999999999, 90.6222219999999936)),
			buildGrid(103302
				, L"NAD83(HARN) / WISCRS Barron County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000486664999999)
				, FalseNorthing(0.0029)
				, FalseEasting(93150.0)
				, LatLonOrigin(45.1333330000000004, 91.8499999999999943)),
			buildGrid(103402
				, L"NAD83(HARN) / WISCRS Barron County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000486664999999)
				, FalseNorthing(0.01)
				, FalseEasting(305609.625)
				, LatLonOrigin(45.1333330000000004, 91.8499999999999943)),
			buildGrid(103303
				, L"NAD83(HARN) / WISCRS Bayfield County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000331195000001)
				, FalseNorthing(148551.483700000011595)
				, FalseEasting(228600.4574999999895226)
				, LatLonOrigin(46.6696483799999982, 91.1527777799999939)),
			buildGrid(103403
				, L"NAD83(HARN) / WISCRS Bayfield County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000331195000001)
				, FalseNorthing(487372.6589999999850988)
				, FalseEasting(750000.0010000000474975)
				, LatLonOrigin(46.6696483799999982, 91.1527777799999939)),
			buildGrid(103304
				, L"NAD83(HARN) / WISCRS Brown County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000199999999999)
				, FalseNorthing(4600.0)
				, FalseEasting(31600.0)
				, LatLonOrigin(43.0, 88.0)),
			buildGrid(103404
				, L"NAD83(HARN) / WISCRS Brown County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000199999999999)
				, FalseNorthing(15091.8330000000005384)
				, FalseEasting(103674.3329999999987194)
				, LatLonOrigin(43.0, 88.0)),
			buildGrid(103305
				, L"NAD83(HARN) / WISCRS Buffalo County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000382778000001)
				, FalseNorthing(0.0048)
				, FalseEasting(175260.3501999999862164)
				, LatLonOrigin(43.4813890000000001, 91.797222000000005)),
			buildGrid(103405
				, L"NAD83(HARN) / WISCRS Buffalo County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000382778000001)
				, FalseNorthing(0.016)
				, FalseEasting(574999.9989999999525025)
				, LatLonOrigin(43.4813890000000001, 91.797222000000005)),
			buildGrid(103306
				, L"NAD83(HARN) / WISCRS Burnett County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000383841)
				, FalseNorthing(59445.9043000000019674)
				, FalseEasting(64008.1275999999998021)
				, LatLonOrigin(45.8987148699999992, 92.4577777800000007)),
			buildGrid(103406
				, L"NAD83(HARN) / WISCRS Burnett County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000383841)
				, FalseNorthing(195032.1039999999920838)
				, FalseEasting(209999.9990000000107102)
				, LatLonOrigin(45.8987148699999992, 92.4577777800000007)),
			buildGrid(103307
				, L"NAD83(HARN) / WISCRS Calumet County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000286569000001)
				, FalseNorthing(0.0049)
				, FalseEasting(244754.8893000000098255)
				, LatLonOrigin(42.7194440000000029, 88.5)),
			buildGrid(103407
				, L"NAD83(HARN) / WISCRS Calumet County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000286569000001)
				, FalseNorthing(0.016)
				, FalseEasting(802999.9989999999525025)
				, LatLonOrigin(42.7194440000000029, 88.5)),
			buildGrid(103308
				, L"NAD83(HARN) / WISCRS Chippewa County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000391126999999)
				, FalseNorthing(44091.4346000000005006)
				, FalseEasting(60045.7200000000011642)
				, LatLonOrigin(44.9778570000000002, 91.2944439999999986)),
			buildGrid(103408
				, L"NAD83(HARN) / WISCRS Chippewa County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000391126999999)
				, FalseNorthing(144656.6479999999864958)
				, FalseEasting(197000.0)
				, LatLonOrigin(44.9778570000000002, 91.2944439999999986)),
			buildGrid(103309
				, L"NAD83(HARN) / WISCRS Clark County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000463003)
				, FalseNorthing(0.0086)
				, FalseEasting(199949.1988999999884982)
				, LatLonOrigin(43.6000000000000014, 90.7083329999999961)),
			buildGrid(103409
				, L"NAD83(HARN) / WISCRS Clark County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000463003)
				, FalseNorthing(0.028)
				, FalseEasting(655999.996999999973923)
				, LatLonOrigin(43.6000000000000014, 90.7083329999999961)),
			buildGrid(103310
				, L"NAD83(HARN) / WISCRS Columbia County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000349799999999)
				, FalseNorthing(111569.6134000000020023)
				, FalseEasting(169164.3380999999935739)
				, LatLonOrigin(43.4625470000000007, 89.3944439999999929)),
			buildGrid(103410
				, L"NAD83(HARN) / WISCRS Columbia County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000349799999999)
				, FalseNorthing(366041.3069999999715947)
				, FalseEasting(554999.9989999999525025)
				, LatLonOrigin(43.4625470000000007, 89.3944439999999929)),
			buildGrid(103311
				, L"NAD83(HARN) / WISCRS Crawford County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.000035)
				, FalseNorthing(53703.1201000000000931)
				, FalseEasting(113690.6273999999975786)
				, LatLonOrigin(43.2000559999999965, 90.9388890000000032)),
			buildGrid(103411
				, L"NAD83(HARN) / WISCRS Crawford County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.000035)
				, FalseNorthing(176190.9869999999937136)
				, FalseEasting(373000.0)
				, LatLonOrigin(43.2000559999999965, 90.9388890000000032)),
			buildGrid(103312
				, L"NAD83(HARN) / WISCRS Dane County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000384786000001)
				, FalseNorthing(146591.9896000000007916)
				, FalseEasting(247193.294400000013411)
				, LatLonOrigin(43.0695160000000001, 89.422222000000005)),
			buildGrid(103412
				, L"NAD83(HARN) / WISCRS Dane County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000384786000001)
				, FalseNorthing(480943.885999999998603)
				, FalseEasting(811000.0)
				, LatLonOrigin(43.0695160000000001, 89.422222000000005)),
			buildGrid(103313
				, L"NAD83(HARN) / WISCRS Dodge County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000346417999999)
				, FalseNorthing(0.0076)
				, FalseEasting(263347.726299999980256)
				, LatLonOrigin(41.4722220000000021, 88.7750000000000057)),
			buildGrid(103413
				, L"NAD83(HARN) / WISCRS Dodge County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000346417999999)
				, FalseNorthing(0.025)
				, FalseEasting(863999.9989999999525025)
				, LatLonOrigin(41.4722220000000021, 88.7750000000000057)),
			buildGrid(103314
				, L"NAD83(HARN) / WISCRS Door County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000187520999999)
				, FalseNorthing(0.0023)
				, FalseEasting(158801.1175999999977648)
				, LatLonOrigin(44.3999999999999986, 87.2722219999999993)),
			buildGrid(103414
				, L"NAD83(HARN) / WISCRS Door County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000187520999999)
				, FalseNorthing(0.008)
				, FalseEasting(521000.0)
				, LatLonOrigin(44.3999999999999986, 87.2722219999999993)),
			buildGrid(103315
				, L"NAD83(HARN) / WISCRS Douglas County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000385418)
				, FalseNorthing(0.0041)
				, FalseEasting(59131.3182999999989988)
				, LatLonOrigin(45.8833330000000004, 91.9166670000000039)),
			buildGrid(103415
				, L"NAD83(HARN) / WISCRS Douglas County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000385418)
				, FalseNorthing(0.013)
				, FalseEasting(194000.0)
				, LatLonOrigin(45.8833330000000004, 91.9166670000000039)),
			buildGrid(103316
				, L"NAD83(HARN) / WISCRS Dunn County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000410324)
				, FalseNorthing(0.003)
				, FalseEasting(51816.1039999999993597)
				, LatLonOrigin(44.4083329999999989, 91.8944439999999929)),
			buildGrid(103416
				, L"NAD83(HARN) / WISCRS Dunn County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000410324)
				, FalseNorthing(0.01)
				, FalseEasting(170000.0009999999892898)
				, LatLonOrigin(44.4083329999999989, 91.8944439999999929)),
			buildGrid(103317
				, L"NAD83(HARN) / WISCRS Eau Claire County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000350790000001)
				, FalseNorthing(91687.9238999999943189)
				, FalseEasting(120091.4401999999972759)
				, LatLonOrigin(44.872281000000001, 91.2888889999999975)),
			buildGrid(103417
				, L"NAD83(HARN) / WISCRS Eau Claire County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000350790000001)
				, FalseNorthing(300812.7970000000204891)
				, FalseEasting(394000.0)
				, LatLonOrigin(44.872281000000001, 91.2888889999999975)),
			buildGrid(103318
				, L"NAD83(HARN) / WISCRS Florence County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000552094999999)
				, FalseNorthing(0.0063)
				, FalseEasting(133502.6682999999902677)
				, LatLonOrigin(45.4388890000000032, 88.1416669999999982)),
			buildGrid(103418
				, L"NAD83(HARN) / WISCRS Florence County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000552094999999)
				, FalseNorthing(0.021)
				, FalseEasting(438000.0040000000153668)
				, LatLonOrigin(45.4388890000000032, 88.1416669999999982)),
			buildGrid(103319
				, L"NAD83(HARN) / WISCRS Fond du Lac County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000286569000001)
				, FalseNorthing(0.0049)
				, FalseEasting(244754.8893000000098255)
				, LatLonOrigin(42.7194440000000029, 88.5)),
			buildGrid(103419
				, L"NAD83(HARN) / WISCRS Fond du Lac County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000286569000001)
				, FalseNorthing(0.016)
				, FalseEasting(802999.9989999999525025)
				, LatLonOrigin(42.7194440000000029, 88.5)),
			buildGrid(103320
				, L"NAD83(HARN) / WISCRS Forest County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000673004)
				, FalseNorthing(0.0157)
				, FalseEasting(275844.5533000000286847)
				, LatLonOrigin(44.0055559999999986, 88.6333329999999933)),
			buildGrid(103420
				, L"NAD83(HARN) / WISCRS Forest County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000673004)
				, FalseNorthing(0.052)
				, FalseEasting(905000.0050000000046566)
				, LatLonOrigin(44.0055559999999986, 88.6333329999999933)),
			buildGrid(103321
				, L"NAD83(HARN) / WISCRS Grant County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000349451999999)
				, FalseNorthing(0.01)
				, FalseEasting(242316.4841000000014901)
				, LatLonOrigin(41.4111109999999982, 90.7999999999999972)),
			buildGrid(103421
				, L"NAD83(HARN) / WISCRS Grant County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000349451999999)
				, FalseNorthing(0.033)
				, FalseEasting(794999.9980000000214204)
				, LatLonOrigin(41.4111109999999982, 90.7999999999999972)),
			buildGrid(103322
				, L"NAD83(HARN) / WISCRS Green County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000390486999999)
				, FalseNorthing(45830.2946999999985565)
				, FalseEasting(170078.740300000004936)
				, LatLonOrigin(42.6375620000000026, 89.8388889999999947)),
			buildGrid(103422
				, L"NAD83(HARN) / WISCRS Green County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000390486999999)
				, FalseNorthing(150361.5590000000083819)
				, FalseEasting(558000.0)
				, LatLonOrigin(42.6375620000000026, 89.8388889999999947)),
			buildGrid(103323
				, L"NAD83(HARN) / WISCRS Green Lake County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000344056999999)
				, FalseNorthing(79170.779500000004191)
				, FalseEasting(150876.3017999999865424)
				, LatLonOrigin(43.8070000000000022, 89.2416670000000067)),
			buildGrid(103423
				, L"NAD83(HARN) / WISCRS Green Lake County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000344056999999)
				, FalseNorthing(259746.13200000001234)
				, FalseEasting(495000.0)
				, LatLonOrigin(43.8070000000000022, 89.2416670000000067)),
			buildGrid(103324
				, L"NAD83(HARN) / WISCRS Iowa County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000394961000001)
				, FalseNorthing(0.0045)
				, FalseEasting(113081.0261000000027707)
				, LatLonOrigin(42.5388889999999975, 90.1611110000000053)),
			buildGrid(103424
				, L"NAD83(HARN) / WISCRS Iowa County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000394961000001)
				, FalseNorthing(0.015)
				, FalseEasting(371000.0)
				, LatLonOrigin(42.5388889999999975, 90.1611110000000053)),
			buildGrid(103325
				, L"NAD83(HARN) / WISCRS Iron County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000677152999999)
				, FalseNorthing(0.0085)
				, FalseEasting(220980.441900000005262)
				, LatLonOrigin(45.4333329999999975, 90.2555559999999986)),
			buildGrid(103425
				, L"NAD83(HARN) / WISCRS Iron County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000677152999999)
				, FalseNorthing(0.028)
				, FalseEasting(725000.0)
				, LatLonOrigin(45.4333329999999975, 90.2555559999999986)),
			buildGrid(103326
				, L"NAD83(HARN) / WISCRS Jackson County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000353)
				, FalseNorthing(25000.0)
				, FalseEasting(27000.0)
				, LatLonOrigin(44.2533349999999999, 90.8442969999999974)),
			buildGrid(103426
				, L"NAD83(HARN) / WISCRS Jackson County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000353)
				, FalseNorthing(82020.8329999999987194)
				, FalseEasting(88582.5)
				, LatLonOrigin(44.2533349999999999, 90.8442969999999974)),
			buildGrid(103327
				, L"NAD83(HARN) / WISCRS Jefferson County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000346417999999)
				, FalseNorthing(0.0076)
				, FalseEasting(263347.726299999980256)
				, LatLonOrigin(41.4722220000000021, 88.7750000000000057)),
			buildGrid(103427
				, L"NAD83(HARN) / WISCRS Jefferson County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000346417999999)
				, FalseNorthing(0.025)
				, FalseEasting(863999.9989999999525025)
				, LatLonOrigin(41.4722220000000021, 88.7750000000000057)),
			buildGrid(103328
				, L"NAD83(HARN) / WISCRS Juneau County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000365284999999)
				, FalseNorthing(0.0037)
				, FalseEasting(147218.6941999999980908)
				, LatLonOrigin(43.3666669999999996, 90.0)),
			buildGrid(103428
				, L"NAD83(HARN) / WISCRS Juneau County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000365284999999)
				, FalseNorthing(0.012)
				, FalseEasting(482999.9990000000107102)
				, LatLonOrigin(43.3666669999999996, 90.0)),
			buildGrid(103329
				, L"NAD83(HARN) / WISCRS Kenosha County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000260648999999)
				, FalseNorthing(0.0009)
				, FalseEasting(185928.3728000000119209)
				, LatLonOrigin(42.2166670000000011, 87.8944439999999929)),
			buildGrid(103429
				, L"NAD83(HARN) / WISCRS Kenosha County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000260648999999)
				, FalseNorthing(0.003)
				, FalseEasting(610000.003000000026077)
				, LatLonOrigin(42.2166670000000011, 87.8944439999999929)),
			buildGrid(103330
				, L"NAD83(HARN) / WISCRS Kewaunee County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000233703999999)
				, FalseNorthing(0.0012)
				, FalseEasting(79857.7614000000030501)
				, LatLonOrigin(43.2666669999999982, 87.5499999999999972)),
			buildGrid(103430
				, L"NAD83(HARN) / WISCRS Kewaunee County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000233703999999)
				, FalseNorthing(0.004)
				, FalseEasting(262000.0059999999939464)
				, LatLonOrigin(43.2666669999999982, 87.5499999999999972)),
			buildGrid(103331
				, L"NAD83(HARN) / WISCRS La Crosse County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000319984999999)
				, FalseNorthing(0.0033)
				, FalseEasting(130454.659799999993993)
				, LatLonOrigin(43.4511109999999974, 91.3166669999999954)),
			buildGrid(103431
				, L"NAD83(HARN) / WISCRS La Crosse County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000319984999999)
				, FalseNorthing(0.011)
				, FalseEasting(427999.9959999999846332)
				, LatLonOrigin(43.4511109999999974, 91.3166669999999954)),
			buildGrid(103332
				, L"NAD83(HARN) / WISCRS Lafayette County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000390486999999)
				, FalseNorthing(45830.2946999999985565)
				, FalseEasting(170078.740300000004936)
				, LatLonOrigin(42.6375620000000026, 89.8388889999999947)),
			buildGrid(103432
				, L"NAD83(HARN) / WISCRS Lafayette County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000390486999999)
				, FalseNorthing(150361.5590000000083819)
				, FalseEasting(558000.0)
				, LatLonOrigin(42.6375620000000026, 89.8388889999999947)),
			buildGrid(103333
				, L"NAD83(HARN) / WISCRS Langlade County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000627023999999)
				, FalseNorthing(105279.7829000000056112)
				, FalseEasting(198425.1969999999855645)
				, LatLonOrigin(45.154237000000002, 89.0333329999999989)),
			buildGrid(103433
				, L"NAD83(HARN) / WISCRS Langlade County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000629999999999)
				, FalseNorthing(345405.4209999999729916)
				, FalseEasting(651000.0)
				, LatLonOrigin(45.154237000000002, 89.0333333300000049)),
			buildGrid(103334
				, L"NAD83(HARN) / WISCRS Lincoln County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000599002999999)
				, FalseNorthing(0.0058)
				, FalseEasting(116129.0323000000062166)
				, LatLonOrigin(44.8444440000000029, 89.7333330000000018)),
			buildGrid(103434
				, L"NAD83(HARN) / WISCRS Lincoln County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000599002999999)
				, FalseNorthing(0.019)
				, FalseEasting(381000.0)
				, LatLonOrigin(44.8444440000000029, 89.7333330000000018)),
			buildGrid(103335
				, L"NAD83(HARN) / WISCRS Manitowoc County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000233703999999)
				, FalseNorthing(0.0012)
				, FalseEasting(79857.7614000000030501)
				, LatLonOrigin(43.2666669999999982, 87.5499999999999972)),
			buildGrid(103435
				, L"NAD83(HARN) / WISCRS Manitowoc County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000233703999999)
				, FalseNorthing(0.004)
				, FalseEasting(262000.0059999999939464)
				, LatLonOrigin(43.2666669999999982, 87.5499999999999972)),
			buildGrid(103336
				, L"NAD83(HARN) / WISCRS Marathon County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.000053289)
				, FalseNorthing(55049.2669000000023516)
				, FalseEasting(74676.1493000000045868)
				, LatLonOrigin(44.900903999999997, 89.769999999999996)),
			buildGrid(103436
				, L"NAD83(HARN) / WISCRS Marathon County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.000053289)
				, FalseNorthing(180607.4700000000011642)
				, FalseEasting(245000.0)
				, LatLonOrigin(44.900903999999997, 89.769999999999996)),
			buildGrid(103337
				, L"NAD83(HARN) / WISCRS Marinette County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000234982)
				, FalseNorthing(0.0032)
				, FalseEasting(238658.879400000005262)
				, LatLonOrigin(44.6916670000000025, 87.7111110000000025)),
			buildGrid(103437
				, L"NAD83(HARN) / WISCRS Marinette County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000234982)
				, FalseNorthing(0.01)
				, FalseEasting(783000.0069999999832362)
				, LatLonOrigin(44.6916670000000025, 87.7111110000000025)),
			buildGrid(103338
				, L"NAD83(HARN) / WISCRS Marquette County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000344056999999)
				, FalseNorthing(79170.779500000004191)
				, FalseEasting(150876.3017999999865424)
				, LatLonOrigin(43.8070000000000022, 89.2416670000000067)),
			buildGrid(103438
				, L"NAD83(HARN) / WISCRS Marquette County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000344056999999)
				, FalseNorthing(259746.13200000001234)
				, FalseEasting(495000.0)
				, LatLonOrigin(43.8070000000000022, 89.2416670000000067)),
			buildGrid(103339
				, L"NAD83(HARN) / WISCRS Menominee County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000362499)
				, FalseNorthing(0.0029)
				, FalseEasting(105461.0121000000071945)
				, LatLonOrigin(44.7166670000000011, 88.4166670000000039)),
			buildGrid(103439
				, L"NAD83(HARN) / WISCRS Menominee County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000362499)
				, FalseNorthing(0.01)
				, FalseEasting(346000.0040000000153668)
				, LatLonOrigin(44.7166670000000011, 88.4166670000000039)),
			buildGrid(103340
				, L"NAD83(HARN) / WISCRS Milwaukee County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000260648999999)
				, FalseNorthing(0.0009)
				, FalseEasting(185928.3728000000119209)
				, LatLonOrigin(42.2166670000000011, 87.8944439999999929)),
			buildGrid(103440
				, L"NAD83(HARN) / WISCRS Milwaukee County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000260648999999)
				, FalseNorthing(0.03)
				, FalseEasting(610000.003000000026077)
				, LatLonOrigin(42.2166670000000011, 87.8944439999999929)),
			buildGrid(103341
				, L"NAD83(HARN) / WISCRS Monroe County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000434121999999)
				, FalseNorthing(121923.9860999999946216)
				, FalseEasting(204521.2090000000025611)
				, LatLonOrigin(44.0000739999999979, 90.6416669999999982)),
			buildGrid(103441
				, L"NAD83(HARN) / WISCRS Monroe County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000434121999999)
				, FalseNorthing(400012.2779999999911524)
				, FalseEasting(671000.0)
				, LatLonOrigin(44.0000739999999979, 90.6416669999999982)),
			buildGrid(103342
				, L"NAD83(HARN) / WISCRS Oconto County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000236869000001)
				, FalseNorthing(0.0033)
				, FalseEasting(182880.3675999999977648)
				, LatLonOrigin(44.3972219999999993, 87.9083329999999989)),
			buildGrid(103442
				, L"NAD83(HARN) / WISCRS Oconto County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000236869000001)
				, FalseNorthing(0.011)
				, FalseEasting(600000.0060000000521541)
				, LatLonOrigin(44.3972219999999993, 87.9083329999999989)),
			buildGrid(103343
				, L"NAD83(HARN) / WISCRS Oneida County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000686968000001)
				, FalseNorthing(57588.0345999999990454)
				, FalseEasting(70104.1401000000041677)
				, LatLonOrigin(45.7042240000000035, 89.5444439999999986)),
			buildGrid(103443
				, L"NAD83(HARN) / WISCRS Oneida County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000686968000001)
				, FalseNorthing(188936.7440000000060536)
				, FalseEasting(230000.0)
				, LatLonOrigin(45.7042240000000035, 89.5444439999999986)),
			buildGrid(103344
				, L"NAD83(HARN) / WISCRS Outagamie County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000286569000001)
				, FalseNorthing(0.0049)
				, FalseEasting(244754.8893000000098255)
				, LatLonOrigin(42.7194440000000029, 88.5)),
			buildGrid(103444
				, L"NAD83(HARN) / WISCRS Outagamie County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000286569000001)
				, FalseNorthing(0.016)
				, FalseEasting(802999.9989999999525025)
				, LatLonOrigin(42.7194440000000029, 88.5)),
			buildGrid(103345
				, L"NAD83(HARN) / WISCRS Ozaukee County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000260648999999)
				, FalseNorthing(0.0009)
				, FalseEasting(185928.3728000000119209)
				, LatLonOrigin(42.2166670000000011, 88.4166670000000039)),
			buildGrid(103445
				, L"NAD83(HARN) / WISCRS Ozaukee County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000260648999999)
				, FalseNorthing(0.03)
				, FalseEasting(610000.003000000026077)
				, LatLonOrigin(42.2166670000000011, 88.4166670000000039)),
			buildGrid(103346
				, L"NAD83(HARN) / WISCRS Pepin County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000362976999999)
				, FalseNorthing(86033.087599999998929)
				, FalseEasting(167640.3354000000108499)
				, LatLonOrigin(44.6361490000000032, 92.2277780000000007)),
			buildGrid(103446
				, L"NAD83(HARN) / WISCRS Pepin County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000362976999999)
				, FalseNorthing(282260.2220000000088476)
				, FalseEasting(550000.0)
				, LatLonOrigin(44.6361490000000032, 92.2277780000000007)),
			buildGrid(103347
				, L"NAD83(HARN) / WISCRS Pierce County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000362976999999)
				, FalseNorthing(86033.087599999998929)
				, FalseEasting(167640.3354000000108499)
				, LatLonOrigin(44.6361490000000032, 92.2277780000000007)),
			buildGrid(103447
				, L"NAD83(HARN) / WISCRS Pierce County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000362976999999)
				, FalseNorthing(282260.2220000000088476)
				, FalseEasting(550000.0)
				, LatLonOrigin(44.6361490000000032, 92.2277780000000007)),
			buildGrid(103348
				, L"NAD83(HARN) / WISCRS Polk County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000433849000001)
				, FalseNorthing(0.0059)
				, FalseEasting(141732.2822999999916647)
				, LatLonOrigin(44.6611109999999982, 92.6333329999999933)),
			buildGrid(103448
				, L"NAD83(HARN) / WISCRS Polk County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000433849000001)
				, FalseNorthing(0.019)
				, FalseEasting(464999.9959999999846332)
				, LatLonOrigin(44.6611109999999982, 92.6333329999999933)),
			buildGrid(103349
				, L"NAD83(HARN) / WISCRS Portage County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000399360000001)
				, FalseNorthing(50022.1874000000025262)
				, FalseEasting(56388.1128000000026077)
				, LatLonOrigin(44.4168239999999983, 89.5)),
			buildGrid(103449
				, L"NAD83(HARN) / WISCRS Portage County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000399360000001)
				, FalseNorthing(164114.4599999999918509)
				, FalseEasting(185000.0)
				, LatLonOrigin(44.4168239999999983, 89.5)),
			buildGrid(103350
				, L"NAD83(HARN) / WISCRS Price County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000649554000001)
				, FalseNorthing(0.0109)
				, FalseEasting(227990.8545999999914784)
				, LatLonOrigin(44.5555560000000028, 90.4888890000000004)),
			buildGrid(103450
				, L"NAD83(HARN) / WISCRS Price County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000649554000001)
				, FalseNorthing(0.036)
				, FalseEasting(747999.9949999999953434)
				, LatLonOrigin(44.5555560000000028, 90.4888890000000004)),
			buildGrid(103351
				, L"NAD83(HARN) / WISCRS Racine County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000260648999999)
				, FalseNorthing(0.0009)
				, FalseEasting(185928.3728000000119209)
				, LatLonOrigin(42.2166670000000011, 88.4166670000000039)),
			buildGrid(103451
				, L"NAD83(HARN) / WISCRS Racine County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000260648999999)
				, FalseNorthing(0.003)
				, FalseEasting(610000.003000000026077)
				, LatLonOrigin(42.2166670000000011, 88.4166670000000039)),
			buildGrid(103352
				, L"NAD83(HARN) / WISCRS Richland County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000375653)
				, FalseNorthing(134255.4253000000026077)
				, FalseEasting(202387.6048000000009779)
				, LatLonOrigin(43.3223130000000012, 90.4305559999999957)),
			buildGrid(103452
				, L"NAD83(HARN) / WISCRS Richland County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000375653)
				, FalseNorthing(440469.6749999999883585)
				, FalseEasting(664000.0)
				, LatLonOrigin(43.3223130000000012, 90.4305559999999957)),
			buildGrid(103353
				, L"NAD83(HARN) / WISCRS Rock County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000337311)
				, FalseNorthing(0.0068)
				, FalseEasting(146304.2925999999861233)
				, LatLonOrigin(41.9444439999999972, 89.0722219999999965)),
			buildGrid(103453
				, L"NAD83(HARN) / WISCRS Rock County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000337311)
				, FalseNorthing(0.022)
				, FalseEasting(480000.0)
				, LatLonOrigin(41.9444439999999972, 89.0722219999999965)),
			buildGrid(103354
				, L"NAD83(HARN) / WISCRS Rusk County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000495975999999)
				, FalseNorthing(0.0234)
				, FalseEasting(250546.1013000000093598)
				, LatLonOrigin(43.9194439999999986, 91.0666669999999954)),
			buildGrid(103454
				, L"NAD83(HARN) / WISCRS Rusk County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000495975999999)
				, FalseNorthing(0.077)
				, FalseEasting(822000.0010000000474975)
				, LatLonOrigin(43.9194439999999986, 91.0666669999999954)),
			buildGrid(103355
				, L"NAD83(HARN) / WISCRS Sauk Country (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000373868000001)
				, FalseNorthing(0.0051)
				, FalseEasting(185623.5715999999956694)
				, LatLonOrigin(42.8194439999999972, 89.9000000000000057)),
			buildGrid(103455
				, L"NAD83(HARN) / WISCRS Sauk Country (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000373868000001)
				, FalseNorthing(0.017)
				, FalseEasting(609000.0010000000474975)
				, LatLonOrigin(42.8194439999999972, 89.9000000000000057)),
			buildGrid(103356
				, L"NAD83(HARN) / WISCRS Sawyer County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000573461)
				, FalseNorthing(120734.1631000000052154)
				, FalseEasting(216713.2336000000068452)
				, LatLonOrigin(45.9000989999999973, 91.1166670000000067)),
			buildGrid(103456
				, L"NAD83(HARN) / WISCRS Sawyer County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000573461)
				, FalseNorthing(396108.6670000000158325)
				, FalseEasting(711000.0010000000474975)
				, LatLonOrigin(45.9000989999999973, 91.1166670000000067)),
			buildGrid(103357
				, L"NAD83(HARN) / WISCRS Shawano County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.000032144)
				, FalseNorthing(0.0096)
				, FalseEasting(262433.3253000000258908)
				, LatLonOrigin(44.0361109999999982, 88.6055560000000071)),
			buildGrid(103457
				, L"NAD83(HARN) / WISCRS Shawano County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.000032144)
				, FalseNorthing(0.031)
				, FalseEasting(861000.0010000000474975)
				, LatLonOrigin(44.0361109999999982, 88.6055560000000071)),
			buildGrid(103358
				, L"NAD83(HARN) / WISCRS Sheboygan County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000233703999999)
				, FalseNorthing(0.0012)
				, FalseEasting(79857.7614000000030501)
				, LatLonOrigin(43.2666669999999982, 87.5499999999999972)),
			buildGrid(103458
				, L"NAD83(HARN) / WISCRS Sheboygan County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000233703999999)
				, FalseNorthing(0.004)
				, FalseEasting(262000.0059999999939464)
				, LatLonOrigin(43.2666669999999982, 87.5499999999999972)),
			buildGrid(103359
				, L"NAD83(HARN) / WISCRS St. Croix County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000381803)
				, FalseNorthing(0.0103)
				, FalseEasting(165506.730199999990873)
				, LatLonOrigin(44.0361109999999982, 92.6333329999999933)),
			buildGrid(103459
				, L"NAD83(HARN) / WISCRS St. Croix County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000381803)
				, FalseNorthing(0.034)
				, FalseEasting(542999.996999999973923)
				, LatLonOrigin(44.0361109999999982, 92.6333329999999933)),
			buildGrid(103360
				, L"NAD83(HARN) / WISCRS Taylor County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000597566)
				, FalseNorthing(107746.752200000002631)
				, FalseEasting(187147.5744000000122469)
				, LatLonOrigin(45.177821999999999, 90.4833330000000018)),
			buildGrid(103460
				, L"NAD83(HARN) / WISCRS Taylor County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000597566)
				, FalseNorthing(353499.135999999998603)
				, FalseEasting(614000.0)
				, LatLonOrigin(45.177821999999999, 90.4833330000000018)),
			buildGrid(103361
				, L"NAD83(HARN) / WISCRS Trempealeau County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000361538)
				, FalseNorthing(0.0041)
				, FalseEasting(256946.9138000000093598)
				, LatLonOrigin(43.1611109999999982, 91.3666670000000067)),
			buildGrid(103461
				, L"NAD83(HARN) / WISCRS Trempealeau County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000361538)
				, FalseNorthing(0.013)
				, FalseEasting(843000.0)
				, LatLonOrigin(43.1611109999999982, 91.3666670000000067)),
			buildGrid(103362
				, L"NAD83(HARN) / WISCRS Vernon County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000408158)
				, FalseNorthing(47532.0601999999998952)
				, FalseEasting(222504.4451000000117347)
				, LatLonOrigin(43.5750329999999977, 90.7833329999999989)),
			buildGrid(103462
				, L"NAD83(HARN) / WISCRS Vernon County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000408158)
				, FalseNorthing(155944.768000000010943)
				, FalseEasting(730000.0)
				, LatLonOrigin(43.5750329999999977, 90.7833329999999989)),
			buildGrid(103363
				, L"NAD83(HARN) / WISCRS Vilas County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000730142000001)
				, FalseNorthing(50337.1091999999989639)
				, FalseEasting(134417.0689000000129454)
				, LatLonOrigin(46.0778439999999989, 89.4888890000000004)),
			buildGrid(103463
				, L"NAD83(HARN) / WISCRS Vilas County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000730142000001)
				, FalseNorthing(165147.6659999999974389)
				, FalseEasting(441000.0)
				, LatLonOrigin(46.0778439999999989, 89.4888890000000004)),
			buildGrid(103364
				, L"NAD83(HARN) / WISCRS Walworth County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000367191999999)
				, FalseNorthing(111088.2223999999987427)
				, FalseEasting(232562.8650999999954365)
				, LatLonOrigin(42.6694620000000029, 88.5416670000000039)),
			buildGrid(103464
				, L"NAD83(HARN) / WISCRS Walworth County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000367191999999)
				, FalseNorthing(364461.9430000000284053)
				, FalseEasting(763000.0)
				, LatLonOrigin(42.6694620000000029, 88.5416670000000039)),
			buildGrid(103365
				, L"NAD83(HARN) / WISCRS Washburn County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000475376)
				, FalseNorthing(188358.6057999999902677)
				, FalseEasting(234086.8681999999971595)
				, LatLonOrigin(45.9612199999999973, 91.7833329999999989)),
			buildGrid(103465
				, L"NAD83(HARN) / WISCRS Washburn County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000475376)
				, FalseNorthing(617973.1929999999701977)
				, FalseEasting(768000.0)
				, LatLonOrigin(45.9612199999999973, 91.7833329999999989)),
			buildGrid(103366
				, L"NAD83(HARN) / WISCRS Washington County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.00003738)
				, FalseNorthing(0.003)
				, FalseEasting(120091.4415000000008149)
				, LatLonOrigin(42.918056, 88.0638890000000032)),
			buildGrid(103466
				, L"NAD83(HARN) / WISCRS Washington County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.00003738)
				, FalseNorthing(0.01)
				, FalseEasting(394000.0040000000153668)
				, LatLonOrigin(42.918056, 88.0638890000000032)),
			buildGrid(103367
				, L"NAD83(HARN) / WISCRS Waukesha County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000346178999999)
				, FalseNorthing(0.0034)
				, FalseEasting(208788.4180000000051223)
				, LatLonOrigin(42.5694439999999972, 88.2249999999999943)),
			buildGrid(103467
				, L"NAD83(HARN) / WISCRS Waukesha County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000346178999999)
				, FalseNorthing(0.011)
				, FalseEasting(685000.0010000000474975)
				, LatLonOrigin(42.5694439999999972, 88.2249999999999943)),
			buildGrid(103368
				, L"NAD83(HARN) / WISCRS Waupaca County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000333644999999)
				, FalseNorthing(0.007)
				, FalseEasting(185013.9708999999857042)
				, LatLonOrigin(43.4202780000000033, 88.8166669999999954)),
			buildGrid(103468
				, L"NAD83(HARN) / WISCRS Waupaca County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000333644999999)
				, FalseNorthing(0.023)
				, FalseEasting(607000.003000000026077)
				, LatLonOrigin(43.4202780000000033, 88.8166669999999954)),
			buildGrid(103369
				, L"NAD83(HARN) / WISCRS Waushara County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000392095999999)
				, FalseNorthing(45069.7586999999984982)
				, FalseEasting(120091.4401999999972759)
				, LatLonOrigin(44.1139439999999965, 89.2416670000000067)),
			buildGrid(103469
				, L"NAD83(HARN) / WISCRS Waushara County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000392095999999)
				, FalseNorthing(147866.3669999999983702)
				, FalseEasting(394000.0)
				, LatLonOrigin(44.1139439999999965, 89.2416670000000067)),
			buildGrid(103370
				, L"NAD83(HARN) / WISCRS Winnebago County (meters)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000286569000001)
				, FalseNorthing(0.0049)
				, FalseEasting(244754.8893000000098255)
				, LatLonOrigin(42.7194440000000029, 88.5)),
			buildGrid(103470
				, L"NAD83(HARN) / WISCRS Winnebago County (US feet)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000286569000001)
				, FalseNorthing(0.016)
				, FalseEasting(802999.9989999999525025)
				, LatLonOrigin(42.7194440000000029, 88.5)),
			buildGrid(103371
				, L"NAD83(HARN) / WISCRS Wood County (meters)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4152
				, Scale(1.0000421209000001)
				, FalseNorthing(134589.753999999986263)
				, FalseEasting(208483.6173000000126194)
				, LatLonOrigin(44.3625949999999989, 90.0)),
			buildGrid(103471
				, L"NAD83(HARN) / WISCRS Wood County (US feet)"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::FTUS
				, 4152
				, Scale(1.0000421209000001)
				, FalseNorthing(441566.5509999999776483)
				, FalseEasting(684000.0010000000474975)
				, LatLonOrigin(44.3625949999999989, 90.0)),
			buildGrid(2862
				, L"NAD83(HARN) / Wyoming East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50104
				, Scale(0.9999375)
				, FalseEasting(200000.0)
				, LatLonOrigin(40.5, -105.1666666666669983)),
			buildGrid(3755
				, L"NAD83(HARN) / Wyoming East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50104
				, Scale(0.9999375)
				, FalseEasting(656166.6666999999433756)
				, LatLonOrigin(40.5, -105.1666666666669983)),
			buildGrid(2863
				, L"NAD83(HARN) / Wyoming East Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50104
				, Scale(0.9999375)
				, FalseNorthing(100000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(40.5, -107.3333333333330017)),
			buildGrid(3756
				, L"NAD83(HARN) / Wyoming East Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50104
				, Scale(0.999938)
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(40.5, -107.3333333300000021)),
			buildGrid(2865
				, L"NAD83(HARN) / Wyoming West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50104
				, Scale(0.9999375)
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(40.5, -110.0833333333330017)),
			buildGrid(3758
				, L"NAD83(HARN) / Wyoming West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50104
				, Scale(0.9999375)
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(40.5, -110.0833333333330017)),
			buildGrid(2864
				, L"NAD83(HARN) / Wyoming West Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 50104
				, Scale(0.9999375)
				, FalseEasting(600000.0)
				, LatLonOrigin(40.5, -108.75)),
			buildGrid(3757
				, L"NAD83(HARN) / Wyoming West Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 50104
				, Scale(0.9999375)
				, FalseEasting(1968500.0)
				, LatLonOrigin(40.5, -108.75)),
			buildGrid(3465
				, L"NAD83(NSRS2007) / Alabama East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.99996)
				, FalseEasting(200000.0)
				, LatLonOrigin(30.5, -85.8333333333333002)),
			buildGrid(3466
				, L"NAD83(NSRS2007) / Alabama West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999933333)
				, FalseEasting(600000.0)
				, LatLonOrigin(30.0, -87.5)),
			buildGrid(3467
				, L"NAD83(NSRS2007) / Alaska Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4759
				, LatLonOrigin(50.0, -154.0)
				, ParallelNorth(55.0)
				, ParallelSouth(65.0)),
			buildGrid(3468
				, L"NAD83(NSRS2007) / Alaska zone 1"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseNorthing(-5000000.0)
				, FalseEasting(5000000.0)
				, LatLonOrigin(57.0, -133.6666666666669983)
				, Azimuth(323.1301023611110281)
				, RectifiedGrid(323.1301023611110281)),
			buildGrid(3477
				, L"NAD83(NSRS2007) / Alaska zone 10"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(1000000.0)
				, LatLonOrigin(51.0, -176.0)
				, ParallelNorth(53.8333333333333002)
				, ParallelSouth(51.8333333333333002)),
			buildGrid(3469
				, L"NAD83(NSRS2007) / Alaska zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -142.0)),
			buildGrid(3470
				, L"NAD83(NSRS2007) / Alaska zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -146.0)),
			buildGrid(3471
				, L"NAD83(NSRS2007) / Alaska zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -150.0)),
			buildGrid(3472
				, L"NAD83(NSRS2007) / Alaska zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -154.0)),
			buildGrid(3473
				, L"NAD83(NSRS2007) / Alaska zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -158.0)),
			buildGrid(3474
				, L"NAD83(NSRS2007) / Alaska zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -162.0)),
			buildGrid(3475
				, L"NAD83(NSRS2007) / Alaska zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -166.0)),
			buildGrid(3476
				, L"NAD83(NSRS2007) / Alaska zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(54.0, -170.0)),
			buildGrid(3478
				, L"NAD83(NSRS2007) / Arizona Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(213360.0)
				, LatLonOrigin(31.0, -111.9166666666669983)),
			buildGrid(3479
				, L"NAD83(NSRS2007) / Arizona Central (ft)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FT
				, 4759
				, Scale(0.9999)
				, FalseEasting(700000.0)
				, LatLonOrigin(31.0, -111.9166666666669983)),
			buildGrid(3480
				, L"NAD83(NSRS2007) / Arizona East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(213360.0)
				, LatLonOrigin(31.0, -110.1666666666669983)),
			buildGrid(3481
				, L"NAD83(NSRS2007) / Arizona East (ft)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FT
				, 4759
				, Scale(0.9999)
				, FalseEasting(700000.0)
				, LatLonOrigin(31.0, -110.1666666666669983)),
			buildGrid(3482
				, L"NAD83(NSRS2007) / Arizona West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999933333)
				, FalseEasting(213360.0)
				, LatLonOrigin(31.0, -113.75)),
			buildGrid(3483
				, L"NAD83(NSRS2007) / Arizona West (ft)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FT
				, 4759
				, Scale(0.999933333)
				, FalseEasting(700000.0)
				, LatLonOrigin(31.0, -113.75)),
			buildGrid(3484
				, L"NAD83(NSRS2007) / Arkansas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(400000.0)
				, LatLonOrigin(34.3333333333333002, -92.0)
				, ParallelNorth(36.2333333333332988)
				, ParallelSouth(34.9333333333333016)),
			buildGrid(3485
				, L"NAD83(NSRS2007) / Arkansas North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(34.3333333333333002, -92.0)
				, ParallelNorth(36.2333333333332988)
				, ParallelSouth(34.9333333333333016)),
			buildGrid(3486
				, L"NAD83(NSRS2007) / Arkansas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(400000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(32.6666666666666998, -92.0)
				, ParallelNorth(34.7666666666667012)
				, ParallelSouth(33.2999999999999972)),
			buildGrid(3487
				, L"NAD83(NSRS2007) / Arkansas South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1312333.3333000000566244)
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(32.6666666666666998, -92.0)
				, ParallelNorth(34.7666666666667012)
				, ParallelSouth(33.2999999999999972)),
			buildGrid(3488
				, L"NAD83(NSRS2007) / California Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(-4000000.0)
				, LatLonOrigin(0.0, -120.0)
				, ParallelNorth(34.0)
				, ParallelSouth(40.5)),
			buildGrid(3489
				, L"NAD83(NSRS2007) / California zone 1"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(39.3333333333333002, -122.0)
				, ParallelNorth(41.6666666666666998)
				, ParallelSouth(40.0)),
			buildGrid(3490
				, L"NAD83(NSRS2007) / California zone 1 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(39.3333333333333002, -122.0)
				, ParallelNorth(41.6666666666666998)
				, ParallelSouth(40.0)),
			buildGrid(3491
				, L"NAD83(NSRS2007) / California zone 2"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(37.6666666666666998, -122.0)
				, ParallelNorth(39.8333333333333002)
				, ParallelSouth(38.3333333333333002)),
			buildGrid(3492
				, L"NAD83(NSRS2007) / California zone 2 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(37.6666666666666998, -122.0)
				, ParallelNorth(39.8333333333333002)
				, ParallelSouth(38.3333333333333002)),
			buildGrid(3493
				, L"NAD83(NSRS2007) / California zone 3"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(36.5, -120.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.0666666666666984)),
			buildGrid(3494
				, L"NAD83(NSRS2007) / California zone 3 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(36.5, -120.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.0666666666666984)),
			buildGrid(3495
				, L"NAD83(NSRS2007) / California zone 4"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(35.3333333333333002, -119.0)
				, ParallelNorth(37.25)
				, ParallelSouth(36.0)),
			buildGrid(3496
				, L"NAD83(NSRS2007) / California zone 4 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(35.3333333333333002, -119.0)
				, ParallelNorth(37.25)
				, ParallelSouth(36.0)),
			buildGrid(3497
				, L"NAD83(NSRS2007) / California zone 5"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(33.5, -118.0)
				, ParallelNorth(35.466666666666697)
				, ParallelSouth(34.033333333333303)),
			buildGrid(3498
				, L"NAD83(NSRS2007) / California zone 5 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(33.5, -118.0)
				, ParallelNorth(35.466666666666697)
				, ParallelSouth(34.033333333333303)),
			buildGrid(3499
				, L"NAD83(NSRS2007) / California zone 6"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(500000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(32.1666666666666998, -116.25)
				, ParallelNorth(33.8833333333332973)
				, ParallelSouth(32.783333333333303)),
			buildGrid(3500
				, L"NAD83(NSRS2007) / California zone 6 (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(6561666.6670000003650784)
				, LatLonOrigin(32.1666666666666998, -116.25)
				, ParallelNorth(33.8833333333332973)
				, ParallelSouth(32.783333333333303)),
			buildGrid(3501
				, L"NAD83(NSRS2007) / Colorado Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(304800.6096000000252388)
				, FalseEasting(914401.8288999999640509)
				, LatLonOrigin(37.8333333333333002, -105.5)
				, ParallelNorth(39.75)
				, ParallelSouth(38.4500000000000028)),
			buildGrid(3502
				, L"NAD83(NSRS2007) / Colorado Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(37.8333333333333002, -105.5)
				, ParallelNorth(39.75)
				, ParallelSouth(38.4500000000000028)),
			buildGrid(3503
				, L"NAD83(NSRS2007) / Colorado North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(304800.6096000000252388)
				, FalseEasting(914401.8288999999640509)
				, LatLonOrigin(39.3333333333333002, -105.5)
				, ParallelNorth(40.783333333333303)
				, ParallelSouth(39.716666666666697)),
			buildGrid(3504
				, L"NAD83(NSRS2007) / Colorado North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(39.3333333333333002, -105.5)
				, ParallelNorth(40.783333333333303)
				, ParallelSouth(39.716666666666697)),
			buildGrid(3505
				, L"NAD83(NSRS2007) / Colorado South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(304800.6096000000252388)
				, FalseEasting(914401.8288999999640509)
				, LatLonOrigin(36.6666666666666998, -105.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.2333333333332988)),
			buildGrid(3506
				, L"NAD83(NSRS2007) / Colorado South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(36.6666666666666998, -105.5)
				, ParallelNorth(38.4333333333333016)
				, ParallelSouth(37.2333333333332988)),
			buildGrid(3507
				, L"NAD83(NSRS2007) / Connecticut"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(152400.3048000000126194)
				, FalseEasting(304800.6096000000252388)
				, LatLonOrigin(40.8333333333333002, -72.75)
				, ParallelNorth(41.8666666666667027)
				, ParallelSouth(41.2000000000000028)),
			buildGrid(3508
				, L"NAD83(NSRS2007) / Connecticut (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(500000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(40.8333333333333002, -72.75)
				, ParallelNorth(41.8666666666667027)
				, ParallelSouth(41.2000000000000028)),
			buildGrid(5072
				, L"NAD83(NSRS2007) / Conus Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4759
				, LatLonOrigin(23.0, -96.0)
				, ParallelNorth(29.5)
				, ParallelSouth(45.5)),
			buildGrid(3509
				, L"NAD83(NSRS2007) / Delaware"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999995)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, -75.4166666666666998)),
			buildGrid(3510
				, L"NAD83(NSRS2007) / Delaware (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999995)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(38.0, -75.4166666666666998)),
			buildGrid(3511
				, L"NAD83(NSRS2007) / Florida East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999941177)
				, FalseEasting(200000.0)
				, LatLonOrigin(24.3333333333333002, -81.0)),
			buildGrid(3512
				, L"NAD83(NSRS2007) / Florida East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999941177)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(24.3333333333333002, -81.0)),
			buildGrid(3513
				, L"NAD83(NSRS2007) / Florida GDL Albers"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4759
				, FalseEasting(400000.0)
				, LatLonOrigin(24.0, -84.0)
				, ParallelNorth(24.0)
				, ParallelSouth(31.5)),
			buildGrid(3514
				, L"NAD83(NSRS2007) / Florida North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(29.0, -84.5)
				, ParallelNorth(30.75)
				, ParallelSouth(29.5833333333333002)),
			buildGrid(3515
				, L"NAD83(NSRS2007) / Florida North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(29.0, -84.5)
				, ParallelNorth(30.75)
				, ParallelSouth(29.5833333333333002)),
			buildGrid(3516
				, L"NAD83(NSRS2007) / Florida West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999941177)
				, FalseEasting(200000.0)
				, LatLonOrigin(24.3333333333333002, -82.0)),
			buildGrid(3517
				, L"NAD83(NSRS2007) / Florida West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999941177)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(24.3333333333333002, -82.0)),
			buildGrid(3518
				, L"NAD83(NSRS2007) / Georgia East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(200000.0)
				, LatLonOrigin(30.0, -82.1666666666666998)),
			buildGrid(3519
				, L"NAD83(NSRS2007) / Georgia East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(30.0, -82.1666666666666998)),
			buildGrid(3520
				, L"NAD83(NSRS2007) / Georgia West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(700000.0)
				, LatLonOrigin(30.0, -84.1666666666666998)),
			buildGrid(3521
				, L"NAD83(NSRS2007) / Georgia West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999)
				, FalseEasting(2296583.3330000001005828)
				, LatLonOrigin(30.0, -84.1666666666666998)),
			buildGrid(3522
				, L"NAD83(NSRS2007) / Idaho Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999473679999999)
				, FalseEasting(500000.0)
				, LatLonOrigin(41.6666666666666998, -114.0)),
			buildGrid(3523
				, L"NAD83(NSRS2007) / Idaho Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999473679999999)
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(41.6666666666666998, -114.0)),
			buildGrid(3524
				, L"NAD83(NSRS2007) / Idaho East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999473679999999)
				, FalseEasting(200000.0)
				, LatLonOrigin(41.6666666666666998, -112.1666666666669983)),
			buildGrid(3525
				, L"NAD83(NSRS2007) / Idaho East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999473679999999)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(41.6666666666666998, -112.1666666666669983)),
			buildGrid(3526
				, L"NAD83(NSRS2007) / Idaho West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999933333)
				, FalseEasting(800000.0)
				, LatLonOrigin(41.6666666666666998, -115.75)),
			buildGrid(3527
				, L"NAD83(NSRS2007) / Idaho West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999933333)
				, FalseEasting(2624666.6669999998994172)
				, LatLonOrigin(41.6666666666666998, -115.75)),
			buildGrid(3528
				, L"NAD83(NSRS2007) / Illinois East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999749999999999)
				, FalseEasting(300000.0)
				, LatLonOrigin(36.6666666666666998, -88.3333333333333002)),
			buildGrid(3529
				, L"NAD83(NSRS2007) / Illinois East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999749999999999)
				, FalseEasting(984250.0)
				, LatLonOrigin(36.6666666666666998, -88.3333333333333002)),
			buildGrid(3530
				, L"NAD83(NSRS2007) / Illinois West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999941177)
				, FalseEasting(700000.0)
				, LatLonOrigin(36.6666666666666998, -90.1666666666666998)),
			buildGrid(3531
				, L"NAD83(NSRS2007) / Illinois West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999941177)
				, FalseEasting(2296583.3333000000566244)
				, LatLonOrigin(36.6666666666666998, -90.1666666666666998)),
			buildGrid(3532
				, L"NAD83(NSRS2007) / Indiana East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999966667)
				, FalseNorthing(250000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(37.5, -85.6666666666666998)),
			buildGrid(3533
				, L"NAD83(NSRS2007) / Indiana East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999966667)
				, FalseNorthing(820208.3329999999841675)
				, FalseEasting(328083.3329999999841675)
				, LatLonOrigin(37.5, -85.6666666666666998)),
			buildGrid(3534
				, L"NAD83(NSRS2007) / Indiana West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999966667)
				, FalseNorthing(250000.0)
				, FalseEasting(900000.0)
				, LatLonOrigin(37.5, -87.0833333333333002)),
			buildGrid(3535
				, L"NAD83(NSRS2007) / Indiana West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999966667)
				, FalseNorthing(820208.3329999999841675)
				, FalseEasting(2952750.0)
				, LatLonOrigin(37.5, -87.0833333333333002)),
			buildGrid(3536
				, L"NAD83(NSRS2007) / Iowa North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(1000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(41.5, -93.5)
				, ParallelNorth(43.2666666666667012)
				, ParallelSouth(42.0666666666666984)),
			buildGrid(3537
				, L"NAD83(NSRS2007) / Iowa North (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(3280833.3333000000566244)
				, FalseEasting(4921250.0)
				, LatLonOrigin(41.5, -93.5)
				, ParallelNorth(43.2666666666667012)
				, ParallelSouth(42.0666666666666984)),
			buildGrid(3538
				, L"NAD83(NSRS2007) / Iowa South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(500000.0)
				, LatLonOrigin(40.0, -93.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.6166666666667027)),
			buildGrid(3539
				, L"NAD83(NSRS2007) / Iowa South (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(40.0, -93.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.6166666666667027)),
			buildGrid(3540
				, L"NAD83(NSRS2007) / Kansas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(400000.0)
				, LatLonOrigin(38.3333333333333002, -98.0)
				, ParallelNorth(39.783333333333303)
				, ParallelSouth(38.716666666666697)),
			buildGrid(3541
				, L"NAD83(NSRS2007) / Kansas North (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(38.3333333333333002, -98.0)
				, ParallelNorth(39.783333333333303)
				, ParallelSouth(38.716666666666697)),
			buildGrid(3542
				, L"NAD83(NSRS2007) / Kansas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(400000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(36.6666666666666998, -98.5)
				, ParallelNorth(38.5666666666666984)
				, ParallelSouth(37.2666666666667012)),
			buildGrid(3543
				, L"NAD83(NSRS2007) / Kansas South (ft US)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1312333.3333000000566244)
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(36.6666666666666998, -98.5)
				, ParallelNorth(38.5666666666666984)
				, ParallelSouth(37.2666666666667012)),
			buildGrid(3544
				, L"NAD83(NSRS2007) / Kentucky North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(500000.0)
				, LatLonOrigin(37.5, -84.25)
				, ParallelNorth(37.966666666666697)
				, ParallelSouth(38.966666666666697)),
			buildGrid(3545
				, L"NAD83(NSRS2007) / Kentucky North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(37.5, -84.25)
				, ParallelNorth(37.966666666666697)
				, ParallelSouth(38.966666666666697)),
			buildGrid(3546
				, L"NAD83(NSRS2007) / Kentucky Single Zone"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(1000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.0833333333333002)
				, ParallelSouth(38.6666666666666998)),
			buildGrid(3547
				, L"NAD83(NSRS2007) / Kentucky Single Zone (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(3280833.3330000001005828)
				, FalseEasting(4921250.0)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.0833333333333002)
				, ParallelSouth(38.6666666666666998)),
			buildGrid(3548
				, L"NAD83(NSRS2007) / Kentucky South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.9333333333333016)
				, ParallelSouth(36.7333333333332988)),
			buildGrid(3549
				, L"NAD83(NSRS2007) / Kentucky South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(1640416.6669999998994172)
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(36.3333333333333002, -85.75)
				, ParallelNorth(37.9333333333333016)
				, ParallelSouth(36.7333333333332988)),
			buildGrid(3550
				, L"NAD83(NSRS2007) / Louisiana North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(1000000.0)
				, LatLonOrigin(30.5, -92.5)
				, ParallelNorth(32.6666666666666998)
				, ParallelSouth(31.1666666666666998)),
			buildGrid(3551
				, L"NAD83(NSRS2007) / Louisiana North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(3280833.3333000000566244)
				, LatLonOrigin(30.5, -92.5)
				, ParallelNorth(32.6666666666666998)
				, ParallelSouth(31.1666666666666998)),
			buildGrid(3552
				, L"NAD83(NSRS2007) / Louisiana South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(1000000.0)
				, LatLonOrigin(28.5, -91.3333333333333002)
				, ParallelNorth(30.6999999999999993)
				, ParallelSouth(29.3000000000000007)),
			buildGrid(3553
				, L"NAD83(NSRS2007) / Louisiana South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(3280833.3333000000566244)
				, LatLonOrigin(28.5, -91.3333333333333002)
				, ParallelNorth(30.6999999999999993)
				, ParallelSouth(29.3000000000000007)),
			buildGrid(3554
				, L"NAD83(NSRS2007) / Maine CS2000 Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.99998)
				, FalseEasting(500000.0)
				, LatLonOrigin(43.5, -69.125)),
			buildGrid(3555
				, L"NAD83(NSRS2007) / Maine CS2000 East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.99998)
				, FalseEasting(700000.0)
				, LatLonOrigin(43.8333333333333002, -67.875)),
			buildGrid(3556
				, L"NAD83(NSRS2007) / Maine CS2000 West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.99998)
				, FalseEasting(300000.0)
				, LatLonOrigin(42.8333333333333002, -70.375)),
			buildGrid(3557
				, L"NAD83(NSRS2007) / Maine East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(300000.0)
				, LatLonOrigin(43.6666666666666998, -68.5)),
			buildGrid(26863
				, L"NAD83(NSRS2007) / Maine East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999)
				, FalseEasting(984250.0)
				, LatLonOrigin(43.6666666666666998, -68.5)),
			buildGrid(3558
				, L"NAD83(NSRS2007) / Maine West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999966667)
				, FalseEasting(900000.0)
				, LatLonOrigin(42.8333333333333002, -70.1666666666666998)),
			buildGrid(26864
				, L"NAD83(NSRS2007) / Maine West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999966667)
				, FalseEasting(2952750.0)
				, LatLonOrigin(42.8333333333333002, -70.1666666666666998)),
			buildGrid(3559
				, L"NAD83(NSRS2007) / Maryland"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(400000.0)
				, LatLonOrigin(37.6666666666666998, -77.0)
				, ParallelNorth(39.4500000000000028)
				, ParallelSouth(38.2999999999999972)),
			buildGrid(3582
				, L"NAD83(NSRS2007) / Maryland (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1312333.3330000001005828)
				, LatLonOrigin(37.6666666666666998, -77.0)
				, ParallelNorth(39.4500000000000028)
				, ParallelSouth(38.2999999999999972)),
			buildGrid(3583
				, L"NAD83(NSRS2007) / Massachusetts Island"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(500000.0)
				, LatLonOrigin(41.0, -70.5)
				, ParallelNorth(41.4833333333332988)
				, ParallelSouth(41.283333333333303)),
			buildGrid(3584
				, L"NAD83(NSRS2007) / Massachusetts Island (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(41.0, -70.5)
				, ParallelNorth(41.4833333333332988)
				, ParallelSouth(41.283333333333303)),
			buildGrid(3585
				, L"NAD83(NSRS2007) / Massachusetts Mainland"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(750000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(41.0, -71.5)
				, ParallelNorth(42.6833333333333016)
				, ParallelSouth(41.716666666666697)),
			buildGrid(3586
				, L"NAD83(NSRS2007) / Massachusetts Mainland (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(2460625.0)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(41.0, -71.5)
				, ParallelNorth(42.6833333333333016)
				, ParallelSouth(41.716666666666697)),
			buildGrid(3587
				, L"NAD83(NSRS2007) / Michigan Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(6000000.0)
				, LatLonOrigin(43.3166666666666984, -84.3666666666667027)
				, ParallelNorth(45.7000000000000028)
				, ParallelSouth(44.1833333333333016)),
			buildGrid(3588
				, L"NAD83(NSRS2007) / Michigan Central (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseEasting(19685039.3700000010430813)
				, LatLonOrigin(43.3166666666666984, -84.3666666666667027)
				, ParallelNorth(45.7000000000000028)
				, ParallelSouth(44.1833333333333016)),
			buildGrid(3589
				, L"NAD83(NSRS2007) / Michigan North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(8000000.0)
				, LatLonOrigin(44.783333333333303, -87.0)
				, ParallelNorth(47.0833333333333002)
				, ParallelSouth(45.4833333333332988)),
			buildGrid(3590
				, L"NAD83(NSRS2007) / Michigan North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseEasting(26246719.1600000001490116)
				, LatLonOrigin(44.783333333333303, -87.0)
				, ParallelNorth(47.0833333333333002)
				, ParallelSouth(45.4833333333332988)),
			buildGrid(3591
				, L"NAD83(NSRS2007) / Michigan Oblique Mercator"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseNorthing(-4354009.8159999996423721)
				, FalseEasting(2546731.4959999998100102)
				, LatLonOrigin(45.3091666666666981, -86.0)
				, Azimuth(337.2555600000000027)
				, RectifiedGrid(337.2555600000000027)),
			buildGrid(3592
				, L"NAD83(NSRS2007) / Michigan South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(4000000.0)
				, LatLonOrigin(41.5, -84.3666666666667027)
				, ParallelNorth(43.6666666666666998)
				, ParallelSouth(42.1000000000000014)),
			buildGrid(3593
				, L"NAD83(NSRS2007) / Michigan South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseEasting(13123359.5800000000745058)
				, LatLonOrigin(41.5, -84.3666666666667027)
				, ParallelNorth(43.6666666666666998)
				, ParallelSouth(42.1000000000000014)),
			buildGrid(3594
				, L"NAD83(NSRS2007) / Minnesota Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(45.0, -94.25)
				, ParallelNorth(47.0499999999999972)
				, ParallelSouth(45.6166666666667027)),
			buildGrid(26866
				, L"NAD83(NSRS2007) / Minnesota Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(45.0, -94.25)
				, ParallelNorth(47.0499999999999972)
				, ParallelSouth(45.6166666666667027)),
			buildGrid(3595
				, L"NAD83(NSRS2007) / Minnesota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(46.5, -93.0999999999999943)
				, ParallelNorth(48.6333333333332973)
				, ParallelSouth(47.033333333333303)),
			buildGrid(26865
				, L"NAD83(NSRS2007) / Minnesota North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(46.5, -93.0999999999999943)
				, ParallelNorth(48.6333333333332973)
				, ParallelSouth(47.033333333333303)),
			buildGrid(3596
				, L"NAD83(NSRS2007) / Minnesota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(43.0, -94.0)
				, ParallelNorth(45.216666666666697)
				, ParallelSouth(43.783333333333303)),
			buildGrid(26867
				, L"NAD83(NSRS2007) / Minnesota South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(43.0, -94.0)
				, ParallelNorth(45.216666666666697)
				, ParallelSouth(43.783333333333303)),
			buildGrid(3597
				, L"NAD83(NSRS2007) / Mississippi East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.99995)
				, FalseEasting(300000.0)
				, LatLonOrigin(29.5, -88.8333333333333002)),
			buildGrid(3598
				, L"NAD83(NSRS2007) / Mississippi East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.99995)
				, FalseEasting(984250.0)
				, LatLonOrigin(29.5, -88.8333333333333002)),
			buildGrid(3816
				, L"NAD83(NSRS2007) / Mississippi TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9998335)
				, FalseNorthing(1300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(32.5, -89.75)),
			buildGrid(3599
				, L"NAD83(NSRS2007) / Mississippi West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.99995)
				, FalseEasting(700000.0)
				, LatLonOrigin(29.5, -90.3333333333333002)),
			buildGrid(3600
				, L"NAD83(NSRS2007) / Mississippi West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.99995)
				, FalseEasting(2296583.3330000001005828)
				, LatLonOrigin(29.5, -90.3333333333333002)),
			buildGrid(3601
				, L"NAD83(NSRS2007) / Missouri Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999933333)
				, FalseEasting(500000.0)
				, LatLonOrigin(35.8333333333333002, -92.5)),
			buildGrid(3602
				, L"NAD83(NSRS2007) / Missouri East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999933333)
				, FalseEasting(250000.0)
				, LatLonOrigin(35.8333333333333002, -90.5)),
			buildGrid(3603
				, L"NAD83(NSRS2007) / Missouri West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999941177)
				, FalseEasting(850000.0)
				, LatLonOrigin(36.1666666666666998, -94.5)),
			buildGrid(3604
				, L"NAD83(NSRS2007) / Montana"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(44.25, -109.5)
				, ParallelNorth(49.0)
				, ParallelSouth(45.0)),
			buildGrid(3605
				, L"NAD83(NSRS2007) / Montana (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseEasting(1968503.9369999999180436)
				, LatLonOrigin(44.25, -109.5)
				, ParallelNorth(49.0)
				, ParallelSouth(45.0)),
			buildGrid(3606
				, L"NAD83(NSRS2007) / Nebraska"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(500000.0)
				, LatLonOrigin(39.8333333333333002, -100.0)
				, ParallelNorth(43.0)
				, ParallelSouth(40.0)),
			buildGrid(26868
				, L"NAD83(NSRS2007) / Nebraska (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(39.8333333333333002, -100.0)
				, ParallelNorth(43.0)
				, ParallelSouth(40.0)),
			buildGrid(3607
				, L"NAD83(NSRS2007) / Nevada Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseNorthing(6000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(34.75, -116.6666666666669983)),
			buildGrid(3608
				, L"NAD83(NSRS2007) / Nevada Central (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999)
				, FalseNorthing(19685000.0)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(34.75, -116.6666666666669983)),
			buildGrid(3609
				, L"NAD83(NSRS2007) / Nevada East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseNorthing(8000000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(34.75, -115.5833333333330017)),
			buildGrid(3610
				, L"NAD83(NSRS2007) / Nevada East (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999)
				, FalseNorthing(26246666.6667000018060207)
				, FalseEasting(656166.6666999999433756)
				, LatLonOrigin(34.75, -115.5833333333330017)),
			buildGrid(3611
				, L"NAD83(NSRS2007) / Nevada West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseNorthing(4000000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(34.75, -118.5833333333330017)),
			buildGrid(3612
				, L"NAD83(NSRS2007) / Nevada West (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999)
				, FalseNorthing(13123333.3333000000566244)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(34.75, -118.5833333333330017)),
			buildGrid(3613
				, L"NAD83(NSRS2007) / New Hampshire"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999966667)
				, FalseEasting(300000.0)
				, LatLonOrigin(42.5, -71.6666666666666998)),
			buildGrid(3614
				, L"NAD83(NSRS2007) / New Hampshire (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999966667)
				, FalseEasting(984250.0)
				, LatLonOrigin(42.5, -71.6666666666666998)),
			buildGrid(3615
				, L"NAD83(NSRS2007) / New Jersey"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(150000.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(3616
				, L"NAD83(NSRS2007) / New Jersey (ft US)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999)
				, FalseEasting(492125.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(3617
				, L"NAD83(NSRS2007) / New Mexico Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(31.0, -106.25)),
			buildGrid(3618
				, L"NAD83(NSRS2007) / New Mexico Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999)
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(31.0, -106.25)),
			buildGrid(3619
				, L"NAD83(NSRS2007) / New Mexico East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999909091)
				, FalseEasting(165000.0)
				, LatLonOrigin(31.0, -104.3333333333330017)),
			buildGrid(3620
				, L"NAD83(NSRS2007) / New Mexico East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999909091)
				, FalseEasting(541337.5)
				, LatLonOrigin(31.0, -104.3333333333330017)),
			buildGrid(3621
				, L"NAD83(NSRS2007) / New Mexico West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999916667)
				, FalseEasting(830000.0)
				, LatLonOrigin(31.0, -107.8333333333330017)),
			buildGrid(3622
				, L"NAD83(NSRS2007) / New Mexico West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999916667)
				, FalseEasting(2723091.6669999998994172)
				, LatLonOrigin(31.0, -107.8333333333330017)),
			buildGrid(3623
				, L"NAD83(NSRS2007) / New York Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999375)
				, FalseEasting(250000.0)
				, LatLonOrigin(40.0, -76.5833333333333002)),
			buildGrid(3624
				, L"NAD83(NSRS2007) / New York Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999375)
				, FalseEasting(820208.3329999999841675)
				, LatLonOrigin(40.0, -76.5833333333333002)),
			buildGrid(3625
				, L"NAD83(NSRS2007) / New York East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999)
				, FalseEasting(150000.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(3626
				, L"NAD83(NSRS2007) / New York East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999)
				, FalseEasting(492125.0)
				, LatLonOrigin(38.8333333333333002, -74.5)),
			buildGrid(3627
				, L"NAD83(NSRS2007) / New York Long Island"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(300000.0)
				, LatLonOrigin(40.1666666666666998, -74.0)
				, ParallelNorth(41.033333333333303)
				, ParallelSouth(40.6666666666666998)),
			buildGrid(3628
				, L"NAD83(NSRS2007) / New York Long Island (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(984250.0)
				, LatLonOrigin(40.1666666666666998, -74.0)
				, ParallelNorth(41.033333333333303)
				, ParallelSouth(40.6666666666666998)),
			buildGrid(3629
				, L"NAD83(NSRS2007) / New York West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999375)
				, FalseEasting(350000.0)
				, LatLonOrigin(40.0, -78.5833333333333002)),
			buildGrid(3630
				, L"NAD83(NSRS2007) / New York West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999375)
				, FalseEasting(1148291.6669999998994172)
				, LatLonOrigin(40.0, -78.5833333333333002)),
			buildGrid(3631
				, L"NAD83(NSRS2007) / North Carolina"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(609601.2199999999720603)
				, LatLonOrigin(33.75, -79.0)
				, ParallelNorth(36.1666666666666998)
				, ParallelSouth(34.3333333333333002)),
			buildGrid(3632
				, L"NAD83(NSRS2007) / North Carolina (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(2000000.0)
				, LatLonOrigin(33.75, -79.0)
				, ParallelNorth(36.1666666666666998)
				, ParallelSouth(34.3333333333333002)),
			buildGrid(3633
				, L"NAD83(NSRS2007) / North Dakota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(47.0, -100.5)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.4333333333333016)),
			buildGrid(3634
				, L"NAD83(NSRS2007) / North Dakota North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseEasting(1968503.9369999999180436)
				, LatLonOrigin(47.0, -100.5)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.4333333333333016)),
			buildGrid(3635
				, L"NAD83(NSRS2007) / North Dakota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(45.6666666666666998, -100.5)
				, ParallelNorth(47.4833333333332988)
				, ParallelSouth(46.1833333333333016)),
			buildGrid(3636
				, L"NAD83(NSRS2007) / North Dakota South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseEasting(1968503.9369999999180436)
				, LatLonOrigin(45.6666666666666998, -100.5)
				, ParallelNorth(47.4833333333332988)
				, ParallelSouth(46.1833333333333016)),
			buildGrid(3637
				, L"NAD83(NSRS2007) / Ohio North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(39.6666666666666998, -82.5)
				, ParallelNorth(41.7000000000000028)
				, ParallelSouth(40.4333333333333016)),
			buildGrid(3728
				, L"NAD83(NSRS2007) / Ohio North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(39.6666666666666998, -82.5)
				, ParallelNorth(41.7000000000000028)
				, ParallelSouth(40.4333333333333016)),
			buildGrid(3638
				, L"NAD83(NSRS2007) / Ohio South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(38.0, -82.5)
				, ParallelNorth(40.033333333333303)
				, ParallelSouth(38.7333333333332988)),
			buildGrid(3729
				, L"NAD83(NSRS2007) / Ohio South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(38.0, -82.5)
				, ParallelNorth(40.033333333333303)
				, ParallelSouth(38.7333333333332988)),
			buildGrid(3639
				, L"NAD83(NSRS2007) / Oklahoma North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(35.0, -98.0)
				, ParallelNorth(36.7666666666667012)
				, ParallelSouth(35.5666666666666984)),
			buildGrid(3640
				, L"NAD83(NSRS2007) / Oklahoma North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(35.0, -98.0)
				, ParallelNorth(36.7666666666667012)
				, ParallelSouth(35.5666666666666984)),
			buildGrid(3641
				, L"NAD83(NSRS2007) / Oklahoma South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(33.3333333333333002, -98.0)
				, ParallelNorth(35.2333333333332988)
				, ParallelSouth(33.9333333333333016)),
			buildGrid(3642
				, L"NAD83(NSRS2007) / Oklahoma South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(33.3333333333333002, -98.0)
				, ParallelNorth(35.2333333333332988)
				, ParallelSouth(33.9333333333333016)),
			buildGrid(3643
				, L"NAD83(NSRS2007) / Oregon Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(400000.0)
				, LatLonOrigin(41.75, -120.5)
				, ParallelNorth(43.0)
				, ParallelSouth(45.5)),
			buildGrid(3644
				, L"NAD83(NSRS2007) / Oregon Lambert (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseEasting(1312335.9580000001005828)
				, LatLonOrigin(41.75, -120.5)
				, ParallelNorth(43.0)
				, ParallelSouth(45.5)),
			buildGrid(3645
				, L"NAD83(NSRS2007) / Oregon North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(2500000.0)
				, LatLonOrigin(43.6666666666666998, -120.5)
				, ParallelNorth(46.0)
				, ParallelSouth(44.3333333333333002)),
			buildGrid(3646
				, L"NAD83(NSRS2007) / Oregon North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseEasting(8202099.7379999998956919)
				, LatLonOrigin(43.6666666666666998, -120.5)
				, ParallelNorth(46.0)
				, ParallelSouth(44.3333333333333002)),
			buildGrid(3647
				, L"NAD83(NSRS2007) / Oregon South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(1500000.0)
				, LatLonOrigin(41.6666666666666998, -120.5)
				, ParallelNorth(44.0)
				, ParallelSouth(42.3333333333333002)),
			buildGrid(3648
				, L"NAD83(NSRS2007) / Oregon South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseEasting(4921259.8430000003427267)
				, LatLonOrigin(41.6666666666666998, -120.5)
				, ParallelNorth(44.0)
				, ParallelSouth(42.3333333333333002)),
			buildGrid(3649
				, L"NAD83(NSRS2007) / Pennsylvania North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(40.1666666666666998, -77.75)
				, ParallelNorth(41.9500000000000028)
				, ParallelSouth(40.8833333333332973)),
			buildGrid(3650
				, L"NAD83(NSRS2007) / Pennsylvania North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(40.1666666666666998, -77.75)
				, ParallelNorth(41.9500000000000028)
				, ParallelSouth(40.8833333333332973)),
			buildGrid(3651
				, L"NAD83(NSRS2007) / Pennsylvania South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(39.3333333333333002, -77.75)
				, ParallelNorth(40.966666666666697)
				, ParallelSouth(39.9333333333333016)),
			buildGrid(3652
				, L"NAD83(NSRS2007) / Pennsylvania South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(39.3333333333333002, -77.75)
				, ParallelNorth(40.966666666666697)
				, ParallelSouth(39.9333333333333016)),
			buildGrid(4437
				, L"NAD83(NSRS2007) / Puerto Rico and Virgin Is."
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(200000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(17.8333333333333002, -66.433333333333394)
				, ParallelNorth(18.4333333333333016)
				, ParallelSouth(18.0333333333332995)),
			buildGrid(3653
				, L"NAD83(NSRS2007) / Rhode Island"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.99999375)
				, FalseEasting(100000.0)
				, LatLonOrigin(41.0833333333333002, -71.5)),
			buildGrid(3654
				, L"NAD83(NSRS2007) / Rhode Island (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.99999375)
				, FalseEasting(328083.3332999999984168)
				, LatLonOrigin(41.0833333333333002, -71.5)),
			buildGrid(3655
				, L"NAD83(NSRS2007) / South Carolina"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(609600.0)
				, LatLonOrigin(31.8333333333333002, -81.0)
				, ParallelNorth(34.8333333333333002)
				, ParallelSouth(32.5)),
			buildGrid(3656
				, L"NAD83(NSRS2007) / South Carolina (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseEasting(2000000.0)
				, LatLonOrigin(31.8333333333333002, -81.0)
				, ParallelNorth(34.8333333333333002)
				, ParallelSouth(32.5)),
			buildGrid(3657
				, L"NAD83(NSRS2007) / South Dakota North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(43.8333333333333002, -100.0)
				, ParallelNorth(45.6833333333333016)
				, ParallelSouth(44.4166666666666998)),
			buildGrid(3658
				, L"NAD83(NSRS2007) / South Dakota North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(43.8333333333333002, -100.0)
				, ParallelNorth(45.6833333333333016)
				, ParallelSouth(44.4166666666666998)),
			buildGrid(3659
				, L"NAD83(NSRS2007) / South Dakota South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(42.3333333333333002, -100.3333333333330017)
				, ParallelNorth(44.3999999999999986)
				, ParallelSouth(42.8333333333333002)),
			buildGrid(3660
				, L"NAD83(NSRS2007) / South Dakota South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(42.3333333333333002, -100.3333333333330017)
				, ParallelNorth(44.3999999999999986)
				, ParallelSouth(42.8333333333333002)),
			buildGrid(3661
				, L"NAD83(NSRS2007) / Tennessee"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(34.3333333333333002, -86.0)
				, ParallelNorth(36.4166666666666998)
				, ParallelSouth(35.25)),
			buildGrid(3662
				, L"NAD83(NSRS2007) / Tennessee (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(34.3333333333333002, -86.0)
				, ParallelNorth(36.4166666666666998)
				, ParallelSouth(35.25)),
			buildGrid(3663
				, L"NAD83(NSRS2007) / Texas Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(3000000.0)
				, FalseEasting(700000.0)
				, LatLonOrigin(29.6666666666666998, -100.3333333333330017)
				, ParallelNorth(31.8833333333333009)
				, ParallelSouth(30.1166666666666991)),
			buildGrid(3664
				, L"NAD83(NSRS2007) / Texas Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(9842500.0)
				, FalseEasting(2296583.3330000001005828)
				, LatLonOrigin(29.6666666666666998, -100.3333333333330017)
				, ParallelNorth(31.8833333333333009)
				, ParallelSouth(30.1166666666666991)),
			buildGrid(3665
				, L"NAD83(NSRS2007) / Texas Centric Albers Equal Area"
				, ProjectionType::ALBERSEQUALAREA
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(6000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(18.0, -100.0)
				, ParallelNorth(27.5)
				, ParallelSouth(35.0)),
			buildGrid(3666
				, L"NAD83(NSRS2007) / Texas Centric Lambert Conformal"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(5000000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(18.0, -100.0)
				, ParallelNorth(27.5)
				, ParallelSouth(35.0)),
			buildGrid(3667
				, L"NAD83(NSRS2007) / Texas North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(1000000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(34.0, -101.5)
				, ParallelNorth(36.1833333333333016)
				, ParallelSouth(34.6499999999999986)),
			buildGrid(3668
				, L"NAD83(NSRS2007) / Texas North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(3280833.3330000001005828)
				, FalseEasting(656166.6670000000158325)
				, LatLonOrigin(34.0, -101.5)
				, ParallelNorth(36.1833333333333016)
				, ParallelSouth(34.6499999999999986)),
			buildGrid(3669
				, L"NAD83(NSRS2007) / Texas North Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(2000000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(31.6666666666666998, -98.5)
				, ParallelNorth(33.966666666666697)
				, ParallelSouth(32.1333333333332973)),
			buildGrid(3670
				, L"NAD83(NSRS2007) / Texas North Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(6561666.6670000003650784)
				, FalseEasting(1968500.0)
				, LatLonOrigin(31.6666666666666998, -98.5)
				, ParallelNorth(33.966666666666697)
				, ParallelSouth(32.1333333333332973)),
			buildGrid(3671
				, L"NAD83(NSRS2007) / Texas South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(5000000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(25.6666666666666998, -98.5)
				, ParallelNorth(27.8333333333333002)
				, ParallelSouth(26.1666666666666998)),
			buildGrid(3672
				, L"NAD83(NSRS2007) / Texas South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(16404166.6669999994337559)
				, FalseEasting(984250.0)
				, LatLonOrigin(25.6666666666666998, -98.5)
				, ParallelNorth(27.8333333333333002)
				, ParallelSouth(26.1666666666666998)),
			buildGrid(3673
				, L"NAD83(NSRS2007) / Texas South Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(4000000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(27.8333333333333002, -99.0)
				, ParallelNorth(30.2833333333332995)
				, ParallelSouth(28.3833333333333009)),
			buildGrid(3674
				, L"NAD83(NSRS2007) / Texas South Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(13123333.3330000005662441)
				, FalseEasting(1968500.0)
				, LatLonOrigin(27.8333333333333002, -99.0)
				, ParallelNorth(30.2833333333332995)
				, ParallelSouth(28.3833333333333009)),
			buildGrid(3675
				, L"NAD83(NSRS2007) / Utah Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(2000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(38.3333333333333002, -111.5)
				, ParallelNorth(40.6499999999999986)
				, ParallelSouth(39.0166666666667012)),
			buildGrid(3676
				, L"NAD83(NSRS2007) / Utah Central (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseNorthing(6561679.7900000000372529)
				, FalseEasting(1640419.9480000000912696)
				, LatLonOrigin(38.3333333333333002, -111.5)
				, ParallelNorth(40.6499999999999986)
				, ParallelSouth(39.0166666666667012)),
			buildGrid(3677
				, L"NAD83(NSRS2007) / Utah Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(6561666.6666999999433756)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(38.3333333333333002, -111.5)
				, ParallelNorth(40.6499999999999986)
				, ParallelSouth(39.0166666666667012)),
			buildGrid(3678
				, L"NAD83(NSRS2007) / Utah North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(1000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(40.3333333333333002, -111.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.716666666666697)),
			buildGrid(3679
				, L"NAD83(NSRS2007) / Utah North (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseNorthing(3280839.8950000000186265)
				, FalseEasting(1640419.9480000000912696)
				, LatLonOrigin(40.3333333333333002, -111.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.716666666666697)),
			buildGrid(3680
				, L"NAD83(NSRS2007) / Utah North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(3280833.3333000000566244)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(40.3333333333333002, -111.5)
				, ParallelNorth(41.783333333333303)
				, ParallelSouth(40.716666666666697)),
			buildGrid(3681
				, L"NAD83(NSRS2007) / Utah South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(3000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.6666666666666998, -111.5)
				, ParallelNorth(38.3500000000000014)
				, ParallelSouth(37.216666666666697)),
			buildGrid(3682
				, L"NAD83(NSRS2007) / Utah South (ft)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FT
				, 4759
				, FalseNorthing(9842519.6850000005215406)
				, FalseEasting(1640419.9480000000912696)
				, LatLonOrigin(36.6666666666666998, -111.5)
				, ParallelNorth(38.3500000000000014)
				, ParallelSouth(37.216666666666697)),
			buildGrid(3683
				, L"NAD83(NSRS2007) / Utah South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(9842500.0)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(36.6666666666666998, -111.5)
				, ParallelNorth(38.3500000000000014)
				, ParallelSouth(37.216666666666697)),
			buildGrid(3717
				, L"NAD83(NSRS2007) / UTM zone 10N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -123.0)),
			buildGrid(3718
				, L"NAD83(NSRS2007) / UTM zone 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(3719
				, L"NAD83(NSRS2007) / UTM zone 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(3720
				, L"NAD83(NSRS2007) / UTM zone 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(3721
				, L"NAD83(NSRS2007) / UTM zone 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(3722
				, L"NAD83(NSRS2007) / UTM zone 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(3723
				, L"NAD83(NSRS2007) / UTM zone 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(3724
				, L"NAD83(NSRS2007) / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(3725
				, L"NAD83(NSRS2007) / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(3726
				, L"NAD83(NSRS2007) / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(3708
				, L"NAD83(NSRS2007) / UTM zone 1N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(3709
				, L"NAD83(NSRS2007) / UTM zone 2N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(3710
				, L"NAD83(NSRS2007) / UTM zone 3N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -165.0)),
			buildGrid(3711
				, L"NAD83(NSRS2007) / UTM zone 4N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -159.0)),
			buildGrid(3706
				, L"NAD83(NSRS2007) / UTM zone 59N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(3712
				, L"NAD83(NSRS2007) / UTM zone 5N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(3707
				, L"NAD83(NSRS2007) / UTM zone 60N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(3713
				, L"NAD83(NSRS2007) / UTM zone 6N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(3714
				, L"NAD83(NSRS2007) / UTM zone 7N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(3715
				, L"NAD83(NSRS2007) / UTM zone 8N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -135.0)),
			buildGrid(3716
				, L"NAD83(NSRS2007) / UTM zone 9N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -129.0)),
			buildGrid(3684
				, L"NAD83(NSRS2007) / Vermont"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.999964286)
				, FalseEasting(500000.0)
				, LatLonOrigin(42.5, -72.5)),
			buildGrid(5655
				, L"NAD83(NSRS2007) / Vermont (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.999964286)
				, FalseEasting(1640416.6666999999433756)
				, LatLonOrigin(42.5, -72.5)),
			buildGrid(3970
				, L"NAD83(NSRS2007) / Virginia Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, LatLonOrigin(36.0, -79.5)
				, ParallelNorth(37.0)
				, ParallelSouth(39.5)),
			buildGrid(3685
				, L"NAD83(NSRS2007) / Virginia North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(2000000.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(37.6666666666666998, -78.5)
				, ParallelNorth(39.2000000000000028)
				, ParallelSouth(38.033333333333303)),
			buildGrid(3686
				, L"NAD83(NSRS2007) / Virginia North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(6561666.6670000003650784)
				, FalseEasting(11482916.6669999994337559)
				, LatLonOrigin(37.6666666666666998, -78.5)
				, ParallelNorth(39.2000000000000028)
				, ParallelSouth(38.033333333333303)),
			buildGrid(3687
				, L"NAD83(NSRS2007) / Virginia South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseNorthing(1000000.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(36.3333333333333002, -78.5)
				, ParallelNorth(37.966666666666697)
				, ParallelSouth(36.7666666666667012)),
			buildGrid(3688
				, L"NAD83(NSRS2007) / Virginia South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseNorthing(3280833.3330000001005828)
				, FalseEasting(11482916.6669999994337559)
				, LatLonOrigin(36.3333333333333002, -78.5)
				, ParallelNorth(37.966666666666697)
				, ParallelSouth(36.7666666666667012)),
			buildGrid(3689
				, L"NAD83(NSRS2007) / Washington North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(500000.0)
				, LatLonOrigin(47.0, -120.8333333333330017)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.5)),
			buildGrid(3690
				, L"NAD83(NSRS2007) / Washington North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(47.0, -120.8333333333330017)
				, ParallelNorth(48.7333333333332988)
				, ParallelSouth(47.5)),
			buildGrid(3691
				, L"NAD83(NSRS2007) / Washington South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(500000.0)
				, LatLonOrigin(45.3333333333333002, -120.5)
				, ParallelNorth(47.3333333333333002)
				, ParallelSouth(45.8333333333333002)),
			buildGrid(3692
				, L"NAD83(NSRS2007) / Washington South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1640416.6669999998994172)
				, LatLonOrigin(45.3333333333333002, -120.5)
				, ParallelNorth(47.3333333333333002)
				, ParallelSouth(45.8333333333333002)),
			buildGrid(3693
				, L"NAD83(NSRS2007) / West Virginia North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(38.5, -79.5)
				, ParallelNorth(40.25)
				, ParallelSouth(39.0)),
			buildGrid(26869
				, L"NAD83(NSRS2007) / West Virginia North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(38.5, -79.5)
				, ParallelNorth(40.25)
				, ParallelSouth(39.0)),
			buildGrid(3694
				, L"NAD83(NSRS2007) / West Virginia South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(37.0, -81.0)
				, ParallelNorth(38.8833333333332973)
				, ParallelSouth(37.4833333333332988)),
			buildGrid(26870
				, L"NAD83(NSRS2007) / West Virginia South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(37.0, -81.0)
				, ParallelNorth(38.8833333333332973)
				, ParallelSouth(37.4833333333332988)),
			buildGrid(3695
				, L"NAD83(NSRS2007) / Wisconsin Central"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(43.8333333333333002, -90.0)
				, ParallelNorth(45.5)
				, ParallelSouth(44.25)),
			buildGrid(3696
				, L"NAD83(NSRS2007) / Wisconsin Central (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(43.8333333333333002, -90.0)
				, ParallelNorth(45.5)
				, ParallelSouth(44.25)),
			buildGrid(3697
				, L"NAD83(NSRS2007) / Wisconsin North"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(45.1666666666666998, -90.0)
				, ParallelNorth(46.7666666666667012)
				, ParallelSouth(45.5666666666666984)),
			buildGrid(3698
				, L"NAD83(NSRS2007) / Wisconsin North (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(45.1666666666666998, -90.0)
				, ParallelNorth(46.7666666666667012)
				, ParallelSouth(45.5666666666666984)),
			buildGrid(3699
				, L"NAD83(NSRS2007) / Wisconsin South"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4759
				, FalseEasting(600000.0)
				, LatLonOrigin(42.0, -90.0)
				, ParallelNorth(44.0666666666666984)
				, ParallelSouth(42.7333333333332988)),
			buildGrid(3700
				, L"NAD83(NSRS2007) / Wisconsin South (ftUS)"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4759
				, FalseEasting(1968500.0)
				, LatLonOrigin(42.0, -90.0)
				, ParallelNorth(44.0666666666666984)
				, ParallelSouth(42.7333333333332988)),
			buildGrid(3701
				, L"NAD83(NSRS2007) / Wisconsin Transverse Mercator"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9996)
				, FalseNorthing(-4480000.0)
				, FalseEasting(520000.0)
				, LatLonOrigin(0.0, -90.0)),
			buildGrid(3702
				, L"NAD83(NSRS2007) / Wyoming East"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999375)
				, FalseEasting(200000.0)
				, LatLonOrigin(40.5, -105.1666666666669983)),
			buildGrid(3730
				, L"NAD83(NSRS2007) / Wyoming East (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999375)
				, FalseEasting(656166.6666999999433756)
				, LatLonOrigin(40.5, -105.1666666666669983)),
			buildGrid(3703
				, L"NAD83(NSRS2007) / Wyoming East Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999375)
				, FalseNorthing(100000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(40.5, -107.3333333333330017)),
			buildGrid(3731
				, L"NAD83(NSRS2007) / Wyoming East Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999375)
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(1312333.3333000000566244)
				, LatLonOrigin(40.5, -107.3333333333330017)),
			buildGrid(3705
				, L"NAD83(NSRS2007) / Wyoming West"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999375)
				, FalseNorthing(100000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(40.5, -110.0833333333330017)),
			buildGrid(3733
				, L"NAD83(NSRS2007) / Wyoming West (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999375)
				, FalseNorthing(328083.3332999999984168)
				, FalseEasting(2624666.6666999999433756)
				, LatLonOrigin(40.5, -110.0833333333330017)),
			buildGrid(3704
				, L"NAD83(NSRS2007) / Wyoming West Central"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4759
				, Scale(0.9999375)
				, FalseEasting(600000.0)
				, LatLonOrigin(40.5, -108.75)),
			buildGrid(3732
				, L"NAD83(NSRS2007) / Wyoming West Central (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4759
				, Scale(0.9999375)
				, FalseEasting(1968500.0)
				, LatLonOrigin(40.5, -108.75)),
			buildGrid(3394
				, L"Nahrwan 1934 / Iraq zone"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4744
				, Scale(0.998786)
				, FalseNorthing(1166200.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(32.5, 45.0)),
			buildGrid(27037
				, L"Nahrwan 1967 / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4270
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(27038
				, L"Nahrwan 1967 / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4270
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(27039
				, L"Nahrwan 1967 / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4270
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(27040
				, L"Nahrwan 1967 / UTM zone 40N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4270
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(3307
				, L"Nakhl-e Ghanem / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4693
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2067
				, L"Naparima 1955 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4158
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(27120
				, L"Naparima 1972 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4271
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(3165
				, L"NEA74 Noumea / Noumea Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4644
				, FalseNorthing(1.02)
				, FalseEasting(0.66)
				, LatLonOrigin(-22.2696917499999998, 166.4424257500000124)
				, ParallelNorth(-22.2446917500000012)
				, ParallelSouth(-22.2946917499999984)),
			buildGrid(3166
				, L"NEA74 Noumea / Noumea Lambert 2"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4644
				, FalseNorthing(-2.3540000000000001)
				, FalseEasting(8.3130000000000006)
				, LatLonOrigin(-22.2697222222221995, 166.4424999999999955)
				, ParallelNorth(-22.244722222222201)
				, ParallelSouth(-22.2947222222222017)),
			buildGrid(2998
				, L"NEA74 Noumea / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4644
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(4791
				, L"New Beijing / 3-degree Gauss-Kruger CM 102E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(4792
				, L"New Beijing / 3-degree Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(4793
				, L"New Beijing / 3-degree Gauss-Kruger CM 108E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(4794
				, L"New Beijing / 3-degree Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(4795
				, L"New Beijing / 3-degree Gauss-Kruger CM 114E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(4796
				, L"New Beijing / 3-degree Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(4797
				, L"New Beijing / 3-degree Gauss-Kruger CM 120E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(4798
				, L"New Beijing / 3-degree Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(4799
				, L"New Beijing / 3-degree Gauss-Kruger CM 126E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(4800
				, L"New Beijing / 3-degree Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(4812
				, L"New Beijing / 3-degree Gauss-Kruger CM 132E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(4822
				, L"New Beijing / 3-degree Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(4782
				, L"New Beijing / 3-degree Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(4783
				, L"New Beijing / 3-degree Gauss-Kruger CM 78E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(4784
				, L"New Beijing / 3-degree Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(4785
				, L"New Beijing / 3-degree Gauss-Kruger CM 84E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(4786
				, L"New Beijing / 3-degree Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(4787
				, L"New Beijing / 3-degree Gauss-Kruger CM 90E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(4788
				, L"New Beijing / 3-degree Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(4789
				, L"New Beijing / 3-degree Gauss-Kruger CM 96E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(4790
				, L"New Beijing / 3-degree Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(4652
				, L"New Beijing / 3-degree Gauss-Kruger zone 25"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(25500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(4653
				, L"New Beijing / 3-degree Gauss-Kruger zone 26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(26500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(4654
				, L"New Beijing / 3-degree Gauss-Kruger zone 27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(27500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(4655
				, L"New Beijing / 3-degree Gauss-Kruger zone 28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(28500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(4656
				, L"New Beijing / 3-degree Gauss-Kruger zone 29"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(29500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(4766
				, L"New Beijing / 3-degree Gauss-Kruger zone 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(30500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(4767
				, L"New Beijing / 3-degree Gauss-Kruger zone 31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(31500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(4768
				, L"New Beijing / 3-degree Gauss-Kruger zone 32"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(32500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(4769
				, L"New Beijing / 3-degree Gauss-Kruger zone 33"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(33500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(4770
				, L"New Beijing / 3-degree Gauss-Kruger zone 34"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(34500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(4771
				, L"New Beijing / 3-degree Gauss-Kruger zone 35"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(35500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(4772
				, L"New Beijing / 3-degree Gauss-Kruger zone 36"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(36500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(4773
				, L"New Beijing / 3-degree Gauss-Kruger zone 37"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(37500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(4774
				, L"New Beijing / 3-degree Gauss-Kruger zone 38"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(38500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(4775
				, L"New Beijing / 3-degree Gauss-Kruger zone 39"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(39500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(4776
				, L"New Beijing / 3-degree Gauss-Kruger zone 40"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(40500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(4777
				, L"New Beijing / 3-degree Gauss-Kruger zone 41"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(41500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(4778
				, L"New Beijing / 3-degree Gauss-Kruger zone 42"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(42500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(4779
				, L"New Beijing / 3-degree Gauss-Kruger zone 43"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(43500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(4780
				, L"New Beijing / 3-degree Gauss-Kruger zone 44"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(44500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(4781
				, L"New Beijing / 3-degree Gauss-Kruger zone 45"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(45500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(4584
				, L"New Beijing / Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(4585
				, L"New Beijing / Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(4586
				, L"New Beijing / Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(4587
				, L"New Beijing / Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(4588
				, L"New Beijing / Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(4589
				, L"New Beijing / Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(4579
				, L"New Beijing / Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(4580
				, L"New Beijing / Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(4581
				, L"New Beijing / Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(4582
				, L"New Beijing / Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(4583
				, L"New Beijing / Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(4568
				, L"New Beijing / Gauss-Kruger zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(13500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(4569
				, L"New Beijing / Gauss-Kruger zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(14500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(4570
				, L"New Beijing / Gauss-Kruger zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(15500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(4571
				, L"New Beijing / Gauss-Kruger zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(16500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(4572
				, L"New Beijing / Gauss-Kruger zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(17500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(4573
				, L"New Beijing / Gauss-Kruger zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(18500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(4574
				, L"New Beijing / Gauss-Kruger zone 19"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(19500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(4575
				, L"New Beijing / Gauss-Kruger zone 20"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(20500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(4576
				, L"New Beijing / Gauss-Kruger zone 21"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(21500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(4577
				, L"New Beijing / Gauss-Kruger zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(22500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(4578
				, L"New Beijing / Gauss-Kruger zone 23"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4555
				, Scale(1.0)
				, FalseEasting(23500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(31838
				, L"NGN / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4318
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(31839
				, L"NGN / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4318
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(27391
				, L"NGO 1948 (Oslo) / NGO zone I"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4817
				, Scale(1.0)
				, LatLonOrigin(58.0, -4.6666666666666696)),
			buildGrid(27392
				, L"NGO 1948 (Oslo) / NGO zone II"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4817
				, Scale(1.0)
				, LatLonOrigin(58.0, -2.3333333333333299)),
			buildGrid(27393
				, L"NGO 1948 (Oslo) / NGO zone III"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4817
				, Scale(1.0)
				, LatLonOrigin(58.0, 0.0)),
			buildGrid(27394
				, L"NGO 1948 (Oslo) / NGO zone IV"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4817
				, Scale(1.0)
				, LatLonOrigin(58.0, 2.5)),
			buildGrid(27395
				, L"NGO 1948 (Oslo) / NGO zone V"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4817
				, Scale(1.0)
				, LatLonOrigin(58.0, 6.1666666666666696)),
			buildGrid(27396
				, L"NGO 1948 (Oslo) / NGO zone VI"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4817
				, Scale(1.0)
				, LatLonOrigin(58.0, 10.1666666666666998)),
			buildGrid(27397
				, L"NGO 1948 (Oslo) / NGO zone VII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4817
				, Scale(1.0)
				, LatLonOrigin(58.0, 14.1666666666666998)),
			buildGrid(27398
				, L"NGO 1948 (Oslo) / NGO zone VIII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4817
				, Scale(1.0)
				, LatLonOrigin(58.0, 18.3333333333333002)),
			buildGrid(30729
				, L"Nord Sahara 1959 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4307
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(30730
				, L"Nord Sahara 1959 / UTM zone 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4307
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(30731
				, L"Nord Sahara 1959 / UTM zone 31N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4307
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(30732
				, L"Nord Sahara 1959 / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4307
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(30791
				, L"Nord Sahara 1959 / Voirol Unifie Nord"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4307
				, Scale(0.999625544)
				, FalseNorthing(300090.0)
				, FalseEasting(500135.0)
				, LatLonOrigin(36.0, 2.7000000000000002)),
			buildGrid(30792
				, L"Nord Sahara 1959 / Voirol Unifie Sud"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4307
				, Scale(0.999625769)
				, FalseNorthing(300090.0)
				, FalseEasting(500135.0)
				, LatLonOrigin(33.2999999999999972, 2.7000000000000002)),
			buildGrid(3410
				, L"NSIDC EASE-Grid Global"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4053
				, ParallelNorth(30.0)),
			buildGrid(3411
				, L"NSIDC Sea Ice Polar Stereographic North"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4054
				, LatLonOrigin(70.0, -45.0)),
			buildGrid(3412
				, L"NSIDC Sea Ice Polar Stereographic South"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4054
				, LatLonOrigin(-70.0, 0.0)),
			buildGrid(27592
				, L"NTF (Paris) / Centre France"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.99987742)
				, FalseNorthing(200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(46.7999999999999972, 0.0)),
			buildGrid(27594
				, L"NTF (Paris) / Corse"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.99994471)
				, FalseNorthing(185861.3690000000060536)
				, FalseEasting(234.3580000000000041)
				, LatLonOrigin(42.1649999999999991, 0.0)),
			buildGrid(27581
				, L"NTF (Paris) / France I"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.999877341)
				, FalseNorthing(1200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(49.5, 0.0)),
			buildGrid(27582
				, L"NTF (Paris) / France II"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.99987742)
				, FalseNorthing(2200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(46.7999999999999972, 0.0)),
			buildGrid(27583
				, L"NTF (Paris) / France III"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.999877499)
				, FalseNorthing(3200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(44.1000000000000014, 0.0)),
			buildGrid(27584
				, L"NTF (Paris) / France IV"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.99994471)
				, FalseNorthing(4185861.3689999999478459)
				, FalseEasting(234.3580000000000041)
				, LatLonOrigin(42.1649999999999991, 0.0)),
			buildGrid(27562
				, L"NTF (Paris) / Lambert Centre France"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.99987742)
				, FalseNorthing(200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(46.7999999999999972, 0.0)),
			buildGrid(27564
				, L"NTF (Paris) / Lambert Corse"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.99994471)
				, FalseNorthing(185861.3690000000060536)
				, FalseEasting(234.3580000000000041)
				, LatLonOrigin(42.1649999999999991, 0.0)),
			buildGrid(27561
				, L"NTF (Paris) / Lambert Nord France"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.999877341)
				, FalseNorthing(200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(49.5, 0.0)),
			buildGrid(27563
				, L"NTF (Paris) / Lambert Sud France"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.999877499)
				, FalseNorthing(200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(44.1000000000000014, 0.0)),
			buildGrid(27571
				, L"NTF (Paris) / Lambert zone I"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.999877341)
				, FalseNorthing(1200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(49.5, 0.0)),
			buildGrid(27572
				, L"NTF (Paris) / Lambert zone II"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4807
				, Scale(1.0)
				, FalseNorthing(2200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(46.7999999999999972, 0.0)
				, ParallelNorth(45.8989188899999974)
				, ParallelSouth(47.696014439999999)),
			buildGrid(50002
				, L"NTF (Paris) / Lambert zone II �tendue"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 50131
				, Scale(1.0)
				, FalseNorthing(2200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(46.7999999999999972, 0.0)
				, ParallelNorth(45.8989188899999974)
				, ParallelSouth(47.696014439999999)),
			buildGrid(27573
				, L"NTF (Paris) / Lambert zone III"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.999877499)
				, FalseNorthing(3200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(44.1000000000000014, 0.0)),
			buildGrid(27574
				, L"NTF (Paris) / Lambert zone IV"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.99994471)
				, FalseNorthing(4185861.3689999999478459)
				, FalseEasting(234.3580000000000041)
				, LatLonOrigin(42.1649999999999991, 0.0)),
			buildGrid(27591
				, L"NTF (Paris) / Nord France"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.999877341)
				, FalseNorthing(200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(49.5, 0.0)),
			buildGrid(27593
				, L"NTF (Paris) / Sud France"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4807
				, Scale(0.999877499)
				, FalseNorthing(200000.0)
				, FalseEasting(600000.0)
				, LatLonOrigin(44.1000000000000014, 0.0)),
			buildGrid(2119
				, L"NZGD2000 / Amuri 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-42.6888888888888971, 173.0099999999999909)),
			buildGrid(3790
				, L"NZGD2000 / Antipodes Islands TM 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(10000000.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 179.0)),
			buildGrid(3788
				, L"NZGD2000 / Auckland Islands TM 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(10000000.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 166.0)),
			buildGrid(2106
				, L"NZGD2000 / Bay of Plenty 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-37.7611111111110986, 176.4661111111109904)),
			buildGrid(2132
				, L"NZGD2000 / Bluff 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-46.6000000000000014, 168.3427777777779966)),
			buildGrid(2117
				, L"NZGD2000 / Buller 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-41.8105555555556023, 171.5811111111109994)),
			buildGrid(3789
				, L"NZGD2000 / Campbell Island TM 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(10000000.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 169.0)),
			buildGrid(3764
				, L"NZGD2000 / Chatham Island Circuit 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-44.0, -176.5)),
			buildGrid(3793
				, L"NZGD2000 / Chatham Islands TM 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(10000000.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, -176.5)),
			buildGrid(2114
				, L"NZGD2000 / Collingwood 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-40.7147222222221998, 172.6719444444439944)),
			buildGrid(2125
				, L"NZGD2000 / Gawler 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-43.7486111111111029, 171.3605555555560045)),
			buildGrid(2118
				, L"NZGD2000 / Grey 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-42.3336111111110966, 171.5497222222219875)),
			buildGrid(2108
				, L"NZGD2000 / Hawkes Bay 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-39.6508333333333027, 176.6736111111110006)),
			buildGrid(2121
				, L"NZGD2000 / Hokitika 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-42.8861111111110986, 170.9797222222219943)),
			buildGrid(2123
				, L"NZGD2000 / Jacksons Bay 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-43.9777777777778027, 168.6061111111110051)),
			buildGrid(2116
				, L"NZGD2000 / Karamea 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-41.2897222222222027, 172.1088888888889983)),
			buildGrid(2127
				, L"NZGD2000 / Lindis Peak 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-44.7349999999999994, 169.4675000000000011)),
			buildGrid(2120
				, L"NZGD2000 / Marlborough 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-41.5444444444444017, 173.801944444445013)),
			buildGrid(2105
				, L"NZGD2000 / Mount Eden 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(0.9999)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-36.879722222222199, 174.7641666666669948)),
			buildGrid(2128
				, L"NZGD2000 / Mount Nicholas 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-45.1327777777777968, 168.3986111111109949)),
			buildGrid(2124
				, L"NZGD2000 / Mount Pleasant 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-43.5905555555556035, 172.7269444444440012)),
			buildGrid(2129
				, L"NZGD2000 / Mount York 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-45.5636111111111006, 167.7386111111109983)),
			buildGrid(2115
				, L"NZGD2000 / Nelson 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-41.2744444444443985, 173.2991666666669914)),
			buildGrid(2193
				, L"NZGD2000 / New Zealand Transverse Mercator 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(1600000.0)
				, LatLonOrigin(0.0, 173.0)),
			buildGrid(2131
				, L"NZGD2000 / North Taieri 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(0.99996)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-45.8613888888888965, 170.2824999999999989)),
			buildGrid(3851
				, L"NZGD2000 / NZCS2000"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4167
				, FalseNorthing(7000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(-41.0, 173.0)
				, ParallelNorth(-37.5)
				, ParallelSouth(-44.5)),
			buildGrid(2130
				, L"NZGD2000 / Observation Point 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-45.8161111111110984, 170.6283333333329892)),
			buildGrid(2122
				, L"NZGD2000 / Okarito 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-43.1099999999999994, 170.2608333333330108)),
			buildGrid(2107
				, L"NZGD2000 / Poverty Bay 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-38.6244444444443999, 177.8855555555560102)),
			buildGrid(3791
				, L"NZGD2000 / Raoul Island TM 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(10000000.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, -178.0)),
			buildGrid(2109
				, L"NZGD2000 / Taranaki 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-39.1355555555555981, 174.2277777777779875)),
			buildGrid(2126
				, L"NZGD2000 / Timaru 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-44.4019444444444034, 171.0572222222220091)),
			buildGrid(2110
				, L"NZGD2000 / Tuhirangi 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-39.5122222222221993, 175.6399999999999864)),
			buildGrid(5700
				, L"NZGD2000 / UTM zone 1S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(2133
				, L"NZGD2000 / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(2134
				, L"NZGD2000 / UTM zone 59S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(2135
				, L"NZGD2000 / UTM zone 60S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(2112
				, L"NZGD2000 / Wairarapa 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-40.9252777777778007, 175.6472222222220125)),
			buildGrid(2111
				, L"NZGD2000 / Wanganui 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-40.2419444444443997, 175.4880555555560022)),
			buildGrid(2113
				, L"NZGD2000 / Wellington 2000"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4167
				, Scale(1.0)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-41.3011111111110978, 174.776388888888988)),
			buildGrid(27219
				, L"NZGD49 / Amuri Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-42.6891165833333019, 173.0101333888889883)),
			buildGrid(27206
				, L"NZGD49 / Bay of Plenty Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-37.7612498055555008, 176.4661972499999933)),
			buildGrid(27232
				, L"NZGD49 / Bluff Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(699999.5799999999580905)
				, FalseEasting(300002.6599999999743886)
				, LatLonOrigin(-46.6000096111110977, 168.3428719999999998)),
			buildGrid(27217
				, L"NZGD49 / Buller Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-41.8108028611110996, 171.5812600555559868)),
			buildGrid(27214
				, L"NZGD49 / Collingwood Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-40.7147590555555965, 172.6720464999999933)),
			buildGrid(27225
				, L"NZGD49 / Gawler Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-43.7487115555556016, 171.3607484722220136)),
			buildGrid(27218
				, L"NZGD49 / Grey Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-42.333694277777802, 171.5497713055559927)),
			buildGrid(27208
				, L"NZGD49 / Hawkes Bay Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-39.6509293055556, 176.6736805277780036)),
			buildGrid(27221
				, L"NZGD49 / Hokitika Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-42.8863223611110982, 170.9799935000000062)),
			buildGrid(27223
				, L"NZGD49 / Jacksons Bay Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-43.9778028888889025, 168.6062670000000026)),
			buildGrid(27216
				, L"NZGD49 / Karamea Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-41.2899115277777966, 172.1090281944439937)),
			buildGrid(27227
				, L"NZGD49 / Lindis Peak Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-44.7352679722222035, 169.4677550833330031)),
			buildGrid(27220
				, L"NZGD49 / Marlborough Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-41.5444866666666996, 173.8020741111110112)),
			buildGrid(27205
				, L"NZGD49 / Mount Eden Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(0.9999)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-36.8798652799999971, 174.7643393600000081)),
			buildGrid(27228
				, L"NZGD49 / Mount Nicholas Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-45.1329025833332977, 168.3986411944439965)),
			buildGrid(27224
				, L"NZGD49 / Mount Pleasant Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-43.5906375833332973, 172.7271935833329906)),
			buildGrid(27229
				, L"NZGD49 / Mount York Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-45.5637261666666973, 167.7388617777779984)),
			buildGrid(27215
				, L"NZGD49 / Nelson Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-41.2745447222222026, 173.2993168055560034)),
			buildGrid(27200
				, L"NZGD49 / New Zealand Map Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, FalseNorthing(6023150.0)
				, FalseEasting(2510000.0)
				, LatLonOrigin(-41.0, 173.0)),
			buildGrid(27291
				, L"NZGD49 / North Island Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::YDSE
				, 4272
				, Scale(1.0)
				, FalseNorthing(400000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-39.0, 175.5)),
			buildGrid(27231
				, L"NZGD49 / North Taieri Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(0.99996)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-45.8615133611111006, 170.2825891111110082)),
			buildGrid(27230
				, L"NZGD49 / Observation Point Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-45.8161966111111028, 170.6285951666669973)),
			buildGrid(27222
				, L"NZGD49 / Okarito Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-43.1101281388889035, 170.2609258333330047)),
			buildGrid(27207
				, L"NZGD49 / Poverty Bay Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-38.6247027777777987, 177.8856362777779907)),
			buildGrid(27292
				, L"NZGD49 / South Island Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::YDSE
				, 4272
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(-44.0, 171.5)),
			buildGrid(27209
				, L"NZGD49 / Taranaki Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-39.1357583055555978, 174.2280117500000074)),
			buildGrid(27226
				, L"NZGD49 / Timaru Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-44.4022203611110982, 171.0572508333330006)),
			buildGrid(27210
				, L"NZGD49 / Tuhirangi Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-39.5124703888889002, 175.6400368055560079)),
			buildGrid(27258
				, L"NZGD49 / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(27259
				, L"NZGD49 / UTM zone 59S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(27260
				, L"NZGD49 / UTM zone 60S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(27212
				, L"NZGD49 / Wairarapa Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-40.9255326388889031, 175.6473496666669973)),
			buildGrid(27211
				, L"NZGD49 / Wanganui Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-40.2419471388888965, 175.4880996111110107)),
			buildGrid(27213
				, L"NZGD49 / Wellington Circuit"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4272
				, Scale(1.0)
				, FalseNorthing(700000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-41.3013196388888986, 174.7766231111110073)),
			buildGrid(5456
				, L"Ocotepeque 1935 / Costa Rica Norte"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 5451
				, Scale(0.999957)
				, FalseNorthing(271820.521999999997206)
				, FalseEasting(500000.0)
				, LatLonOrigin(10.4666666700000004, -84.3333333300000021)),
			buildGrid(5457
				, L"Ocotepeque 1935 / Costa Rica Sur"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 5451
				, Scale(0.999957)
				, FalseNorthing(327987.4359999999869615)
				, FalseEasting(500000.0)
				, LatLonOrigin(9.0, -83.6666666699999979)),
			buildGrid(5460
				, L"Ocotepeque 1935 / El Salvador Lambert"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 5451
				, Scale(0.9999670000000001)
				, FalseNorthing(295809.1840000000083819)
				, FalseEasting(500000.0)
				, LatLonOrigin(13.7833333299999996, -89.0)),
			buildGrid(5559
				, L"Ocotepeque 1935 / Guatemala Norte"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 5451
				, Scale(0.99992226)
				, FalseNorthing(292209.5790000000270084)
				, FalseEasting(500000.0)
				, LatLonOrigin(16.8166666665999998, -90.3333333300000021)),
			buildGrid(5459
				, L"Ocotepeque 1935 / Guatemala Sur"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 5451
				, Scale(0.99989906)
				, FalseNorthing(325992.6809999999823049)
				, FalseEasting(500000.0)
				, LatLonOrigin(14.9000000000000004, -90.3333333329999988)),
			buildGrid(5461
				, L"Ocotepeque 1935 / Nicaragua Norte"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 5451
				, Scale(0.99990314)
				, FalseNorthing(359891.8159999999916181)
				, FalseEasting(500000.0)
				, LatLonOrigin(13.8666666660000004, -85.5)),
			buildGrid(5462
				, L"Ocotepeque 1935 / Nicaragua Sur"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 5451
				, Scale(0.999922)
				, FalseNorthing(288876.3269999999902211)
				, FalseEasting(500000.0)
				, LatLonOrigin(11.7333333300000007, -85.5)),
			buildGrid(3561
				, L"Old Hawaiian / Hawaii zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4135
				, StatePlane(15101)
				, Scale(0.999966667)
				, FalseEasting(500000.0)
				, LatLonOrigin(18.8333333333333002, -155.5)),
			buildGrid(3562
				, L"Old Hawaiian / Hawaii zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4135
				, StatePlane(15102)
				, Scale(0.999966667)
				, FalseEasting(500000.0)
				, LatLonOrigin(20.3333333333333002, -156.6666666666669983)),
			buildGrid(3563
				, L"Old Hawaiian / Hawaii zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4135
				, StatePlane(15103)
				, Scale(0.99999)
				, FalseEasting(500000.0)
				, LatLonOrigin(21.1666666666666998, -158.0)),
			buildGrid(3564
				, L"Old Hawaiian / Hawaii zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4135
				, StatePlane(15104)
				, Scale(0.99999)
				, FalseEasting(500000.0)
				, LatLonOrigin(21.8333333333333002, -159.5)),
			buildGrid(3565
				, L"Old Hawaiian / Hawaii zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4135
				, StatePlane(15105)
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(21.6666666666666998, -160.1666666666669983)),
			buildGrid(27700
				, L"OSGB 1936 / British National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4279
				, Scale(0.999601)
				, FalseNorthing(-100000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(49.0, -2.0)),
			buildGrid(29901
				, L"OSNI 1952 / Irish National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4188
				, Scale(1.0)
				, FalseNorthing(250000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(53.5, -8.0)),
			buildGrid(28193
				, L"Palestine 1923 / Israeli CS Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4281
				, FalseNorthing(1126867.9089999999850988)
				, FalseEasting(170251.5549999999930151)
				, LatLonOrigin(31.7340969444443992, 35.2120805555556018)),
			buildGrid(28192
				, L"Palestine 1923 / Palestine Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4281
				, Scale(1.0)
				, FalseNorthing(1126867.9089999999850988)
				, FalseEasting(170251.5549999999930151)
				, LatLonOrigin(31.7340969444443992, 35.2120805555556018)),
			buildGrid(28191
				, L"Palestine 1923 / Palestine Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4281
				, FalseNorthing(126867.9089999999996508)
				, FalseEasting(170251.5549999999930151)
				, LatLonOrigin(31.7340969444443992, 35.2120805555556018)),
			buildGrid(2082
				, L"Pampa del Castillo / Argentina zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4161
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(-90.0, -69.0)),
			buildGrid(5469
				, L"Panama-Colon 1911 / Panama Lambert"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 5467
				, Scale(0.999899)
				, FalseNorthing(294865.3030000000144355)
				, FalseEasting(500000.0)
				, LatLonOrigin(8.4166666699999997, -80.0)),
			buildGrid(5472
				, L"Panama-Colon 1911 / Panama Polyconic"
				, ProjectionType::NONE
				, ProjectionUnit::YDCLA
				, 5467
				, Scale(1.0)
				, FalseNorthing(1092972.1000000000931323)
				, FalseEasting(1000000.0)
				, LatLonOrigin(8.25, -81.0)),
			buildGrid(3396
				, L"PD/83 / 3-degree Gauss-Kruger zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4746
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(5666
				, L"PD/83 / 3-degree Gauss-Kruger zone 3 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4746
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3397
				, L"PD/83 / 3-degree Gauss-Kruger zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4746
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(5667
				, L"PD/83 / 3-degree Gauss-Kruger zone 4 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4746
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(2986
				, L"Perroud 1950 / Terre Adelie Polar Stereographic"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4637
				, FalseNorthing(200000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-67.0, 140.0)),
			buildGrid(5388
				, L"Peru96 / UTM zone 17S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5373
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(5839
				, L"Peru96 / UTM zone 17S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5373
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(5387
				, L"Peru96 / UTM zone 18S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5373
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(5389
				, L"Peru96 / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5373
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(2985
				, L"Petrels 1972 / Terre Adelie Polar Stereographic"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4636
				, FalseNorthing(200000.0)
				, FalseEasting(300000.0)
				, LatLonOrigin(-67.0, 140.0)),
			buildGrid(3784
				, L"Pitcairn 1967 / UTM zone 9S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4729
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -129.0)),
			buildGrid(3783
				, L"Pitcairn 2006 / Pitcairn TM 2006"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4763
				, Scale(1.0)
				, FalseNorthing(15500.0)
				, FalseEasting(14200.0)
				, LatLonOrigin(-25.0685526111111017, -130.1129671111110042)),
			buildGrid(5550
				, L"PNG94 / PNGMG94 zone 54"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5546
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(5551
				, L"PNG94 / PNGMG94 zone 55"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5546
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(5552
				, L"PNG94 / PNGMG94 zone 56"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5546
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(28232
				, L"Pointe Noire / UTM zone 32S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4282
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3785
				, L"Popular Visualisation CRS / Mercator"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4055
				, Scale(1.0)),
			buildGrid(50003
				, L"Popular Visualisation Sphere - EEA"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 4055
				, Scale(1.0)
				, FalseNorthing(3210000.0)
				, FalseEasting(5071000.0)
				, LatLonOrigin(52.0, 20.0)),
			buildGrid(2942
				, L"Porto Santo / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4615
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(3061
				, L"Porto Santo 1995 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4663
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(5343
				, L"POSGAR 2007 / Argentina 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5340
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(-90.0, -72.0)),
			buildGrid(5344
				, L"POSGAR 2007 / Argentina 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5340
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(-90.0, -69.0)),
			buildGrid(5345
				, L"POSGAR 2007 / Argentina 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5340
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(-90.0, -66.0)),
			buildGrid(5346
				, L"POSGAR 2007 / Argentina 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5340
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(-90.0, -63.0)),
			buildGrid(5347
				, L"POSGAR 2007 / Argentina 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5340
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(-90.0, -60.0)),
			buildGrid(5348
				, L"POSGAR 2007 / Argentina 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5340
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(-90.0, -57.0)),
			buildGrid(5349
				, L"POSGAR 2007 / Argentina 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5340
				, Scale(1.0)
				, FalseEasting(7500000.0)
				, LatLonOrigin(-90.0, -54.0)),
			buildGrid(22181
				, L"POSGAR 94 / Argentina 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4694
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(-90.0, -72.0)),
			buildGrid(22182
				, L"POSGAR 94 / Argentina 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4694
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(-90.0, -69.0)),
			buildGrid(22183
				, L"POSGAR 94 / Argentina 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4694
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(-90.0, -66.0)),
			buildGrid(22184
				, L"POSGAR 94 / Argentina 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4694
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(-90.0, -63.0)),
			buildGrid(22185
				, L"POSGAR 94 / Argentina 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4694
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(-90.0, -60.0)),
			buildGrid(22186
				, L"POSGAR 94 / Argentina 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4694
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(-90.0, -57.0)),
			buildGrid(22187
				, L"POSGAR 94 / Argentina 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4694
				, Scale(1.0)
				, FalseEasting(7500000.0)
				, LatLonOrigin(-90.0, -54.0)),
			buildGrid(22171
				, L"POSGAR 98 / Argentina 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4190
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(-90.0, -72.0)),
			buildGrid(22172
				, L"POSGAR 98 / Argentina 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4190
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(-90.0, -69.0)),
			buildGrid(22173
				, L"POSGAR 98 / Argentina 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4190
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(-90.0, -66.0)),
			buildGrid(22174
				, L"POSGAR 98 / Argentina 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4190
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(-90.0, -63.0)),
			buildGrid(22175
				, L"POSGAR 98 / Argentina 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4190
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(-90.0, -60.0)),
			buildGrid(22176
				, L"POSGAR 98 / Argentina 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4190
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(-90.0, -57.0)),
			buildGrid(22177
				, L"POSGAR 98 / Argentina 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4190
				, Scale(1.0)
				, FalseEasting(7500000.0)
				, LatLonOrigin(-90.0, -54.0)),
			buildGrid(3121
				, L"PRS92 / Philippines zone 1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4683
				, Scale(0.99995)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(3122
				, L"PRS92 / Philippines zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4683
				, Scale(0.99995)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 119.0)),
			buildGrid(3123
				, L"PRS92 / Philippines zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4683
				, Scale(0.99995)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 121.0)),
			buildGrid(3124
				, L"PRS92 / Philippines zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4683
				, Scale(0.99995)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(3125
				, L"PRS92 / Philippines zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4683
				, Scale(0.99995)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 125.0)),
			buildGrid(2317
				, L"PSAD56 / ICN Regional"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4248
				, FalseNorthing(1000000.0)
				, FalseEasting(1000000.0)
				, LatLonOrigin(6.0, -66.0)
				, ParallelNorth(9.0)
				, ParallelSouth(3.0)),
			buildGrid(24892
				, L"PSAD56 / Peru central zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.99932994)
				, FalseNorthing(1039979.1589999999850988)
				, FalseEasting(720000.0)
				, LatLonOrigin(-9.5, -76.0)),
			buildGrid(24893
				, L"PSAD56 / Peru east zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.99952992)
				, FalseNorthing(1040084.5579999999608845)
				, FalseEasting(1324000.0)
				, LatLonOrigin(-9.5, -70.5)),
			buildGrid(24891
				, L"PSAD56 / Peru west zone"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.99983008)
				, FalseNorthing(1426834.7430000000167638)
				, FalseEasting(222000.0)
				, LatLonOrigin(-6.0, -80.5)),
			buildGrid(24817
				, L"PSAD56 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(24877
				, L"PSAD56 / UTM zone 17S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(24818
				, L"PSAD56 / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(24878
				, L"PSAD56 / UTM zone 18S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(24819
				, L"PSAD56 / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(24879
				, L"PSAD56 / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(24820
				, L"PSAD56 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(24880
				, L"PSAD56 / UTM zone 20S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(24821
				, L"PSAD56 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(24881
				, L"PSAD56 / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(24882
				, L"PSAD56 / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4248
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(3439
				, L"PSD93 / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4134
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(3440
				, L"PSD93 / UTM zone 40N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4134
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(5633
				, L"PTRA08 / LAEA Europe"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 5013
				, FalseNorthing(3210000.0)
				, FalseEasting(4321000.0)
				, LatLonOrigin(52.0, 10.0)),
			buildGrid(5632
				, L"PTRA08 / LCC Europe"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 5013
				, FalseNorthing(2800000.0)
				, FalseEasting(4000000.0)
				, LatLonOrigin(52.0, 10.0)
				, ParallelNorth(35.0)
				, ParallelSouth(65.0)),
			buildGrid(5014
				, L"PTRA08 / UTM zone 25N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5013
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(5015
				, L"PTRA08 / UTM zone 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5013
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(5016
				, L"PTRA08 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5013
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(3992
				, L"Puerto Rico / St. Croix"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4139
				, StatePlane(15202)
				, FalseNorthing(100000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(17.8333333333333002, -66.433333333333394)
				, ParallelNorth(18.4333333333333016)
				, ParallelSouth(18.0333333333332995)),
			buildGrid(3920
				, L"Puerto Rico / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4139
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(3991
				, L"Puerto Rico State Plane CS of 1927"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::FTUS
				, 4139
				, StatePlane(15201)
				, FalseEasting(500000.0)
				, LatLonOrigin(17.8333333333333002, -66.433333333333394)
				, ParallelNorth(18.4333333333333016)
				, ParallelSouth(18.0333333333332995)),
			buildGrid(2610
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 102E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(2611
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2612
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 108E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(2613
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2614
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 114E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(2615
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2616
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 120E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(2617
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2618
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 126E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(2619
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2620
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 132E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(2621
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(2622
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 138E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 138.0)),
			buildGrid(2623
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 141E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(2624
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 144E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 144.0)),
			buildGrid(2625
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 147E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(2626
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 150E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 150.0)),
			buildGrid(2627
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 153E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(2628
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 156E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 156.0)),
			buildGrid(2629
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 159E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(2630
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 162E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 162.0)),
			buildGrid(2631
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 165E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(2632
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 168E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 168.0)),
			buildGrid(2640
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 168W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -168.0)),
			buildGrid(2633
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 171E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(2639
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 171W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(2634
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 174E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 174.0)),
			buildGrid(2638
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 174W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -174.0)),
			buildGrid(2635
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 177E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(2637
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 177W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(2636
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 180E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 180.0)),
			buildGrid(3147
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 18E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(2582
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 21E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2583
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 24E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(2584
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 27E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(2585
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 30E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(2586
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 33E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(2587
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 36E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 36.0)),
			buildGrid(2588
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 39E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(2589
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 42E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 42.0)),
			buildGrid(2590
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 45E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2591
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 48E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 48.0)),
			buildGrid(2592
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 51E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2593
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 54E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 54.0)),
			buildGrid(2594
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 57E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(2595
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 60E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 60.0)),
			buildGrid(2596
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 63E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(2597
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 66E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 66.0)),
			buildGrid(2598
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 69E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(2599
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 72E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 72.0)),
			buildGrid(2601
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2602
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 78E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(2603
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2604
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 84E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(2605
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2606
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 90E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(2607
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2608
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 96E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(2609
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(2526
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(10500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(2527
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(11500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(2528
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(12500000.0)
				, LatLonOrigin(0.0, 36.0)),
			buildGrid(2529
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(13500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(2530
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(14500000.0)
				, LatLonOrigin(0.0, 42.0)),
			buildGrid(2531
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(15500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2532
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(16500000.0)
				, LatLonOrigin(0.0, 48.0)),
			buildGrid(2533
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(17500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2534
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(18500000.0)
				, LatLonOrigin(0.0, 54.0)),
			buildGrid(2535
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 19"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(19500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(2536
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 20"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(20500000.0)
				, LatLonOrigin(0.0, 60.0)),
			buildGrid(2537
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 21"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(21500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(2538
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(22500000.0)
				, LatLonOrigin(0.0, 66.0)),
			buildGrid(2539
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 23"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(23500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(2540
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 24"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(24500000.0)
				, LatLonOrigin(0.0, 72.0)),
			buildGrid(2541
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 25"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(25500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2542
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(26500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(2543
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(27500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2544
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(28500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(2545
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 29"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(29500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2546
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(30500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(2547
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(31500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2548
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 32"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(32500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(2549
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 33"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(33500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(2551
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 34"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(34500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(2552
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 35"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(35500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2553
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 36"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(36500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(2554
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 37"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(37500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2555
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 38"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(38500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(2556
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 39"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(39500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2557
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 40"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(40500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(2558
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 41"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(41500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2559
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 42"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(42500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(2560
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 43"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(43500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2561
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 44"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(44500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(2562
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 45"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(45500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(2563
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 46"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(46500000.0)
				, LatLonOrigin(0.0, 138.0)),
			buildGrid(2564
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 47"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(47500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(2565
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 48"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(48500000.0)
				, LatLonOrigin(0.0, 144.0)),
			buildGrid(2566
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 49"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(49500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(2567
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 50"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(50500000.0)
				, LatLonOrigin(0.0, 150.0)),
			buildGrid(2568
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 51"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(51500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(2569
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 52"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(52500000.0)
				, LatLonOrigin(0.0, 156.0)),
			buildGrid(2570
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 53"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(53500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(2571
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 54"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(54500000.0)
				, LatLonOrigin(0.0, 162.0)),
			buildGrid(2572
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 55"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(55500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(2573
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 56"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(56500000.0)
				, LatLonOrigin(0.0, 168.0)),
			buildGrid(2574
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 57"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(57500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(2575
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 58"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(58500000.0)
				, LatLonOrigin(0.0, 174.0)),
			buildGrid(2576
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 59"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(59500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(3146
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(3389
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 60"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(60500000.0)
				, LatLonOrigin(0.0, 180.0)),
			buildGrid(2578
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 61"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(61500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(2579
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 62"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(62500000.0)
				, LatLonOrigin(0.0, -174.0)),
			buildGrid(2580
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 63"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(63500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(2581
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 64"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(64500000.0)
				, LatLonOrigin(0.0, -168.0)),
			buildGrid(2523
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(7500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2524
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(8500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(2525
				, L"Pulkovo 1942 / 3-degree Gauss-Kruger zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(9500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(3388
				, L"Pulkovo 1942 / Caspian Sea Mercator"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2935
				, L"Pulkovo 1942 / CS63 zone A1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(1300000.0)
				, LatLonOrigin(0.116666666666667, 41.533333333333303)),
			buildGrid(2936
				, L"Pulkovo 1942 / CS63 zone A2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(2300000.0)
				, LatLonOrigin(0.116666666666667, 44.533333333333303)),
			buildGrid(2937
				, L"Pulkovo 1942 / CS63 zone A3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(3300000.0)
				, LatLonOrigin(0.116666666666667, 47.533333333333303)),
			buildGrid(2938
				, L"Pulkovo 1942 / CS63 zone A4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(4300000.0)
				, LatLonOrigin(0.116666666666667, 50.533333333333303)),
			buildGrid(3350
				, L"Pulkovo 1942 / CS63 zone C0"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.1, 21.9499999999999993)),
			buildGrid(3351
				, L"Pulkovo 1942 / CS63 zone C1"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(1250000.0)
				, LatLonOrigin(0.1, 24.9499999999999993)),
			buildGrid(3352
				, L"Pulkovo 1942 / CS63 zone C2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(2250000.0)
				, LatLonOrigin(0.1, 27.9499999999999993)),
			buildGrid(2939
				, L"Pulkovo 1942 / CS63 zone K2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(2300000.0)
				, LatLonOrigin(0.133333333333333, 50.7666666666667012)),
			buildGrid(2940
				, L"Pulkovo 1942 / CS63 zone K3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(3300000.0)
				, LatLonOrigin(0.133333333333333, 53.7666666666667012)),
			buildGrid(2941
				, L"Pulkovo 1942 / CS63 zone K4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(4300000.0)
				, LatLonOrigin(0.133333333333333, 56.7666666666667012)),
			buildGrid(28470
				, L"Pulkovo 1942 / Gauss-Kruger 10N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(28471
				, L"Pulkovo 1942 / Gauss-Kruger 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(28472
				, L"Pulkovo 1942 / Gauss-Kruger 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(28473
				, L"Pulkovo 1942 / Gauss-Kruger 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(28474
				, L"Pulkovo 1942 / Gauss-Kruger 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(28475
				, L"Pulkovo 1942 / Gauss-Kruger 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(28476
				, L"Pulkovo 1942 / Gauss-Kruger 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(28477
				, L"Pulkovo 1942 / Gauss-Kruger 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(28478
				, L"Pulkovo 1942 / Gauss-Kruger 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(28479
				, L"Pulkovo 1942 / Gauss-Kruger 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(28480
				, L"Pulkovo 1942 / Gauss-Kruger 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(28481
				, L"Pulkovo 1942 / Gauss-Kruger 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(28482
				, L"Pulkovo 1942 / Gauss-Kruger 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(28483
				, L"Pulkovo 1942 / Gauss-Kruger 23N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(28484
				, L"Pulkovo 1942 / Gauss-Kruger 24N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(28485
				, L"Pulkovo 1942 / Gauss-Kruger 25N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(28486
				, L"Pulkovo 1942 / Gauss-Kruger 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(28487
				, L"Pulkovo 1942 / Gauss-Kruger 27N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(28488
				, L"Pulkovo 1942 / Gauss-Kruger 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(28489
				, L"Pulkovo 1942 / Gauss-Kruger 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(28462
				, L"Pulkovo 1942 / Gauss-Kruger 2N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(28490
				, L"Pulkovo 1942 / Gauss-Kruger 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(28491
				, L"Pulkovo 1942 / Gauss-Kruger 31N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(28492
				, L"Pulkovo 1942 / Gauss-Kruger 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(28463
				, L"Pulkovo 1942 / Gauss-Kruger 3N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(28464
				, L"Pulkovo 1942 / Gauss-Kruger 4N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(28465
				, L"Pulkovo 1942 / Gauss-Kruger 5N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(28466
				, L"Pulkovo 1942 / Gauss-Kruger 6N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(28467
				, L"Pulkovo 1942 / Gauss-Kruger 7N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(28468
				, L"Pulkovo 1942 / Gauss-Kruger 8N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(28469
				, L"Pulkovo 1942 / Gauss-Kruger 9N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2508
				, L"Pulkovo 1942 / Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2509
				, L"Pulkovo 1942 / Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2510
				, L"Pulkovo 1942 / Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2511
				, L"Pulkovo 1942 / Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2512
				, L"Pulkovo 1942 / Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2513
				, L"Pulkovo 1942 / Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(2514
				, L"Pulkovo 1942 / Gauss-Kruger CM 141E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(2515
				, L"Pulkovo 1942 / Gauss-Kruger CM 147E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(2516
				, L"Pulkovo 1942 / Gauss-Kruger CM 153E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(2517
				, L"Pulkovo 1942 / Gauss-Kruger CM 159E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(2493
				, L"Pulkovo 1942 / Gauss-Kruger CM 15E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(2518
				, L"Pulkovo 1942 / Gauss-Kruger CM 165E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(2519
				, L"Pulkovo 1942 / Gauss-Kruger CM 171E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(2522
				, L"Pulkovo 1942 / Gauss-Kruger CM 171W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(2520
				, L"Pulkovo 1942 / Gauss-Kruger CM 177E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(2521
				, L"Pulkovo 1942 / Gauss-Kruger CM 177W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(2494
				, L"Pulkovo 1942 / Gauss-Kruger CM 21E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2495
				, L"Pulkovo 1942 / Gauss-Kruger CM 27E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(2496
				, L"Pulkovo 1942 / Gauss-Kruger CM 33E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(2497
				, L"Pulkovo 1942 / Gauss-Kruger CM 39E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(2498
				, L"Pulkovo 1942 / Gauss-Kruger CM 45E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2499
				, L"Pulkovo 1942 / Gauss-Kruger CM 51E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2500
				, L"Pulkovo 1942 / Gauss-Kruger CM 57E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(2501
				, L"Pulkovo 1942 / Gauss-Kruger CM 63E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(2502
				, L"Pulkovo 1942 / Gauss-Kruger CM 69E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(2503
				, L"Pulkovo 1942 / Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2504
				, L"Pulkovo 1942 / Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2505
				, L"Pulkovo 1942 / Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2506
				, L"Pulkovo 1942 / Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2507
				, L"Pulkovo 1942 / Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(2492
				, L"Pulkovo 1942 / Gauss-Kruger CM 9E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(28410
				, L"Pulkovo 1942 / Gauss-Kruger zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(10500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(28411
				, L"Pulkovo 1942 / Gauss-Kruger zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(11500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(28412
				, L"Pulkovo 1942 / Gauss-Kruger zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(12500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(28413
				, L"Pulkovo 1942 / Gauss-Kruger zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(13500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(28414
				, L"Pulkovo 1942 / Gauss-Kruger zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(14500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(28415
				, L"Pulkovo 1942 / Gauss-Kruger zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(15500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(28416
				, L"Pulkovo 1942 / Gauss-Kruger zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(16500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(28417
				, L"Pulkovo 1942 / Gauss-Kruger zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(17500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(28418
				, L"Pulkovo 1942 / Gauss-Kruger zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(18500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(28419
				, L"Pulkovo 1942 / Gauss-Kruger zone 19"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(19500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(28402
				, L"Pulkovo 1942 / Gauss-Kruger zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(28420
				, L"Pulkovo 1942 / Gauss-Kruger zone 20"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(20500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(28421
				, L"Pulkovo 1942 / Gauss-Kruger zone 21"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(21500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(28422
				, L"Pulkovo 1942 / Gauss-Kruger zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(22500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(28423
				, L"Pulkovo 1942 / Gauss-Kruger zone 23"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(23500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(28424
				, L"Pulkovo 1942 / Gauss-Kruger zone 24"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(24500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(28425
				, L"Pulkovo 1942 / Gauss-Kruger zone 25"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(25500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(28426
				, L"Pulkovo 1942 / Gauss-Kruger zone 26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(26500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(28427
				, L"Pulkovo 1942 / Gauss-Kruger zone 27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(27500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(28428
				, L"Pulkovo 1942 / Gauss-Kruger zone 28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(28500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(28429
				, L"Pulkovo 1942 / Gauss-Kruger zone 29"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(29500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(28403
				, L"Pulkovo 1942 / Gauss-Kruger zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(28430
				, L"Pulkovo 1942 / Gauss-Kruger zone 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(30500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(28431
				, L"Pulkovo 1942 / Gauss-Kruger zone 31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(31500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(28432
				, L"Pulkovo 1942 / Gauss-Kruger zone 32"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(32500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(28404
				, L"Pulkovo 1942 / Gauss-Kruger zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(28405
				, L"Pulkovo 1942 / Gauss-Kruger zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(28406
				, L"Pulkovo 1942 / Gauss-Kruger zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(28407
				, L"Pulkovo 1942 / Gauss-Kruger zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(7500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(28408
				, L"Pulkovo 1942 / Gauss-Kruger zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(8500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(28409
				, L"Pulkovo 1942 / Gauss-Kruger zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4284
				, Scale(1.0)
				, FalseEasting(9500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(3840
				, L"Pulkovo 1942(58) / 3-degree Gauss-Kruger zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(10500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(3837
				, L"Pulkovo 1942(58) / 3-degree Gauss-Kruger zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(5670
				, L"Pulkovo 1942(58) / 3-degree Gauss-Kruger zone 3 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3838
				, L"Pulkovo 1942(58) / 3-degree Gauss-Kruger zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(5671
				, L"Pulkovo 1942(58) / 3-degree Gauss-Kruger zone 4 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(3329
				, L"Pulkovo 1942(58) / 3-degree Gauss-Kruger zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(5672
				, L"Pulkovo 1942(58) / 3-degree Gauss-Kruger zone 5 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3330
				, L"Pulkovo 1942(58) / 3-degree Gauss-Kruger zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(3331
				, L"Pulkovo 1942(58) / 3-degree Gauss-Kruger zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(7500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(3332
				, L"Pulkovo 1942(58) / 3-degree Gauss-Kruger zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(8500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(3839
				, L"Pulkovo 1942(58) / 3-degree Gauss-Kruger zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(9500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(3833
				, L"Pulkovo 1942(58) / Gauss-Kruger zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(5631
				, L"Pulkovo 1942(58) / Gauss-Kruger zone 2 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3333
				, L"Pulkovo 1942(58) / Gauss-Kruger zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(5663
				, L"Pulkovo 1942(58) / Gauss-Kruger zone 3 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3334
				, L"Pulkovo 1942(58) / Gauss-Kruger zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(3335
				, L"Pulkovo 1942(58) / Gauss-Kruger zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(3328
				, L"Pulkovo 1942(58) / GUGiK-80"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4179
				, Scale(0.999714)
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(52.1666666666666998, 19.1666666666666998)),
			buildGrid(3120
				, L"Pulkovo 1942(58) / Poland zone I"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4179
				, Scale(0.9998)
				, FalseNorthing(5467000.0)
				, FalseEasting(4637000.0)
				, LatLonOrigin(50.625, 21.0833333333333002)),
			buildGrid(2172
				, L"Pulkovo 1942(58) / Poland zone II"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4179
				, Scale(0.9998)
				, FalseNorthing(5806000.0)
				, FalseEasting(4603000.0)
				, LatLonOrigin(53.0019444444443977, 21.5027777777778013)),
			buildGrid(2173
				, L"Pulkovo 1942(58) / Poland zone III"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4179
				, Scale(0.9998)
				, FalseNorthing(5999000.0)
				, FalseEasting(3501000.0)
				, LatLonOrigin(53.5833333333333002, 17.0083333333333009)),
			buildGrid(2174
				, L"Pulkovo 1942(58) / Poland zone IV"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4179
				, Scale(0.9998)
				, FalseNorthing(5627000.0)
				, FalseEasting(3703000.0)
				, LatLonOrigin(51.6708333333332988, 16.6722222222221994)),
			buildGrid(2175
				, L"Pulkovo 1942(58) / Poland zone V"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4179
				, Scale(0.999983)
				, FalseNorthing(-4700000.0)
				, FalseEasting(237000.0)
				, LatLonOrigin(0.0, 18.9583333333333002)),
			buildGrid(3844
				, L"Pulkovo 1942(58) / Stereo70"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4179
				, Scale(0.99975)
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(46.0, 25.0)),
			buildGrid(2397
				, L"Pulkovo 1942(83) / 3-degree Gauss-Kruger zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(5673
				, L"Pulkovo 1942(83) / 3-degree Gauss-Kruger zone 3 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(2398
				, L"Pulkovo 1942(83) / 3-degree Gauss-Kruger zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(5674
				, L"Pulkovo 1942(83) / 3-degree Gauss-Kruger zone 4 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(2399
				, L"Pulkovo 1942(83) / 3-degree Gauss-Kruger zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(5675
				, L"Pulkovo 1942(83) / 3-degree Gauss-Kruger zone 5 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3841
				, L"Pulkovo 1942(83) / 3-degree Gauss-Kruger zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(3842
				, L"Pulkovo 1942(83) / 3-degree Gauss-Kruger zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(3843
				, L"Pulkovo 1942(83) / 3-degree Gauss-Kruger zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(3834
				, L"Pulkovo 1942(83) / Gauss-Kruger zone 2"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(5664
				, L"Pulkovo 1942(83) / Gauss-Kruger zone 2 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(2500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(3835
				, L"Pulkovo 1942(83) / Gauss-Kruger zone 3"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(5665
				, L"Pulkovo 1942(83) / Gauss-Kruger zone 3 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(3500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3836
				, L"Pulkovo 1942(83) / Gauss-Kruger zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4178
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2726
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 102E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(2727
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2728
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 108E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(2729
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2730
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 114E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(2731
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2732
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 120E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(2733
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2734
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 126E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(2735
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2738
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 132E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(2739
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(2740
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 138E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 138.0)),
			buildGrid(2741
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 141E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(2742
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 144E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 144.0)),
			buildGrid(2743
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 147E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(2744
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 150E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 150.0)),
			buildGrid(2745
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 153E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(2746
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 156E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 156.0)),
			buildGrid(2747
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 159E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(2748
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 162E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 162.0)),
			buildGrid(2749
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 165E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(2750
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 168E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 168.0)),
			buildGrid(2758
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 168W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -168.0)),
			buildGrid(2751
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 171E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(2757
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 171W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(2752
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 174E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 174.0)),
			buildGrid(2756
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 174W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -174.0)),
			buildGrid(2753
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 177E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(2755
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 177W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(2754
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 180E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 180.0)),
			buildGrid(3151
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 18E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(2699
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 21E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2700
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 24E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(2701
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 27E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(2702
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 30E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(2703
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 33E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(2704
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 36E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 36.0)),
			buildGrid(2705
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 39E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(2706
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 42E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 42.0)),
			buildGrid(2707
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 45E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2708
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 48E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 48.0)),
			buildGrid(2709
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 51E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2710
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 54E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 54.0)),
			buildGrid(2711
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 57E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(2712
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 60E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 60.0)),
			buildGrid(2713
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 63E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(2714
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 66E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 66.0)),
			buildGrid(2715
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 69E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(2716
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 72E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 72.0)),
			buildGrid(2717
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2718
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 78E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(2719
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2720
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 84E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(2721
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2722
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 90E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(2723
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2724
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 96E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(2725
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(2644
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(10500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(2645
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(11500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(2646
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(12500000.0)
				, LatLonOrigin(0.0, 36.0)),
			buildGrid(2647
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(13500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(2648
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(14500000.0)
				, LatLonOrigin(0.0, 42.0)),
			buildGrid(2649
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(15500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2650
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(16500000.0)
				, LatLonOrigin(0.0, 48.0)),
			buildGrid(2651
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(17500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2652
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(18500000.0)
				, LatLonOrigin(0.0, 54.0)),
			buildGrid(2653
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 19"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(19500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(2654
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 20"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(20500000.0)
				, LatLonOrigin(0.0, 60.0)),
			buildGrid(2655
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 21"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(21500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(2656
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(22500000.0)
				, LatLonOrigin(0.0, 66.0)),
			buildGrid(2657
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 23"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(23500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(2658
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 24"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(24500000.0)
				, LatLonOrigin(0.0, 72.0)),
			buildGrid(2659
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 25"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(25500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2660
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(26500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(2661
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(27500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2662
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(28500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(2663
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 29"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(29500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2664
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(30500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(2665
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(31500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2666
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 32"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(32500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(2667
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 33"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(33500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(2668
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 34"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(34500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(2669
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 35"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(35500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2670
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 36"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(36500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(2671
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 37"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(37500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2672
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 38"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(38500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(2673
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 39"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(39500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2674
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 40"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(40500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(2675
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 41"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(41500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2676
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 42"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(42500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(2677
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 43"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(43500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2678
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 44"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(44500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(2679
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 45"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(45500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(2680
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 46"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(46500000.0)
				, LatLonOrigin(0.0, 138.0)),
			buildGrid(2681
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 47"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(47500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(2682
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 48"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(48500000.0)
				, LatLonOrigin(0.0, 144.0)),
			buildGrid(2683
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 49"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(49500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(2684
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 50"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(50500000.0)
				, LatLonOrigin(0.0, 150.0)),
			buildGrid(2685
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 51"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(51500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(2686
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 52"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(52500000.0)
				, LatLonOrigin(0.0, 156.0)),
			buildGrid(2687
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 53"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(53500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(2688
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 54"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(54500000.0)
				, LatLonOrigin(0.0, 162.0)),
			buildGrid(2689
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 55"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(55500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(2690
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 56"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(56500000.0)
				, LatLonOrigin(0.0, 168.0)),
			buildGrid(2691
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 57"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(57500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(2692
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 58"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(58500000.0)
				, LatLonOrigin(0.0, 174.0)),
			buildGrid(2693
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 59"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(59500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(3150
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(3390
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 60"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(60500000.0)
				, LatLonOrigin(0.0, 180.0)),
			buildGrid(2695
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 61"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(61500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(2696
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 62"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(62500000.0)
				, LatLonOrigin(0.0, -174.0)),
			buildGrid(2697
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 63"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(63500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(2698
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 64"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(64500000.0)
				, LatLonOrigin(0.0, -168.0)),
			buildGrid(2641
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(7500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2642
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(8500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(2643
				, L"Pulkovo 1995 / 3-degree Gauss-Kruger zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(9500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(20070
				, L"Pulkovo 1995 / Gauss-Kruger 10N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(20071
				, L"Pulkovo 1995 / Gauss-Kruger 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(20072
				, L"Pulkovo 1995 / Gauss-Kruger 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(20073
				, L"Pulkovo 1995 / Gauss-Kruger 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(20074
				, L"Pulkovo 1995 / Gauss-Kruger 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(20075
				, L"Pulkovo 1995 / Gauss-Kruger 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(20076
				, L"Pulkovo 1995 / Gauss-Kruger 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(20077
				, L"Pulkovo 1995 / Gauss-Kruger 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(20078
				, L"Pulkovo 1995 / Gauss-Kruger 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(20079
				, L"Pulkovo 1995 / Gauss-Kruger 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(20080
				, L"Pulkovo 1995 / Gauss-Kruger 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(20081
				, L"Pulkovo 1995 / Gauss-Kruger 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(20082
				, L"Pulkovo 1995 / Gauss-Kruger 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(20083
				, L"Pulkovo 1995 / Gauss-Kruger 23N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(20084
				, L"Pulkovo 1995 / Gauss-Kruger 24N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(20085
				, L"Pulkovo 1995 / Gauss-Kruger 25N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(20086
				, L"Pulkovo 1995 / Gauss-Kruger 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(20087
				, L"Pulkovo 1995 / Gauss-Kruger 27N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(20088
				, L"Pulkovo 1995 / Gauss-Kruger 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(20089
				, L"Pulkovo 1995 / Gauss-Kruger 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(20090
				, L"Pulkovo 1995 / Gauss-Kruger 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(20091
				, L"Pulkovo 1995 / Gauss-Kruger 31N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(20092
				, L"Pulkovo 1995 / Gauss-Kruger 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(20064
				, L"Pulkovo 1995 / Gauss-Kruger 4N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(20065
				, L"Pulkovo 1995 / Gauss-Kruger 5N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(20066
				, L"Pulkovo 1995 / Gauss-Kruger 6N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(20067
				, L"Pulkovo 1995 / Gauss-Kruger 7N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(20068
				, L"Pulkovo 1995 / Gauss-Kruger 8N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(20069
				, L"Pulkovo 1995 / Gauss-Kruger 9N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2477
				, L"Pulkovo 1995 / Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2478
				, L"Pulkovo 1995 / Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2479
				, L"Pulkovo 1995 / Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2480
				, L"Pulkovo 1995 / Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2481
				, L"Pulkovo 1995 / Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2482
				, L"Pulkovo 1995 / Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(2483
				, L"Pulkovo 1995 / Gauss-Kruger CM 141E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(2484
				, L"Pulkovo 1995 / Gauss-Kruger CM 147E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(2485
				, L"Pulkovo 1995 / Gauss-Kruger CM 153E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(2486
				, L"Pulkovo 1995 / Gauss-Kruger CM 159E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(2487
				, L"Pulkovo 1995 / Gauss-Kruger CM 165E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(2488
				, L"Pulkovo 1995 / Gauss-Kruger CM 171E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(2491
				, L"Pulkovo 1995 / Gauss-Kruger CM 171W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(2489
				, L"Pulkovo 1995 / Gauss-Kruger CM 177E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(2490
				, L"Pulkovo 1995 / Gauss-Kruger CM 177W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(2463
				, L"Pulkovo 1995 / Gauss-Kruger CM 21E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(2464
				, L"Pulkovo 1995 / Gauss-Kruger CM 27E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(2465
				, L"Pulkovo 1995 / Gauss-Kruger CM 33E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(2466
				, L"Pulkovo 1995 / Gauss-Kruger CM 39E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(2467
				, L"Pulkovo 1995 / Gauss-Kruger CM 45E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2468
				, L"Pulkovo 1995 / Gauss-Kruger CM 51E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2469
				, L"Pulkovo 1995 / Gauss-Kruger CM 57E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(2470
				, L"Pulkovo 1995 / Gauss-Kruger CM 63E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(2471
				, L"Pulkovo 1995 / Gauss-Kruger CM 69E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(2472
				, L"Pulkovo 1995 / Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2473
				, L"Pulkovo 1995 / Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2474
				, L"Pulkovo 1995 / Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2475
				, L"Pulkovo 1995 / Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2476
				, L"Pulkovo 1995 / Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(20010
				, L"Pulkovo 1995 / Gauss-Kruger zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(10500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(20011
				, L"Pulkovo 1995 / Gauss-Kruger zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(11500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(20012
				, L"Pulkovo 1995 / Gauss-Kruger zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(12500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(20013
				, L"Pulkovo 1995 / Gauss-Kruger zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(13500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(20014
				, L"Pulkovo 1995 / Gauss-Kruger zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(14500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(20015
				, L"Pulkovo 1995 / Gauss-Kruger zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(15500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(20016
				, L"Pulkovo 1995 / Gauss-Kruger zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(16500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(20017
				, L"Pulkovo 1995 / Gauss-Kruger zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(17500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(20018
				, L"Pulkovo 1995 / Gauss-Kruger zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(18500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(20019
				, L"Pulkovo 1995 / Gauss-Kruger zone 19"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(19500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(20020
				, L"Pulkovo 1995 / Gauss-Kruger zone 20"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(20500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(20021
				, L"Pulkovo 1995 / Gauss-Kruger zone 21"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(21500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(20022
				, L"Pulkovo 1995 / Gauss-Kruger zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(22500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(20023
				, L"Pulkovo 1995 / Gauss-Kruger zone 23"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(23500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(20024
				, L"Pulkovo 1995 / Gauss-Kruger zone 24"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(24500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(20025
				, L"Pulkovo 1995 / Gauss-Kruger zone 25"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(25500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(20026
				, L"Pulkovo 1995 / Gauss-Kruger zone 26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(26500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(20027
				, L"Pulkovo 1995 / Gauss-Kruger zone 27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(27500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(20028
				, L"Pulkovo 1995 / Gauss-Kruger zone 28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(28500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(20029
				, L"Pulkovo 1995 / Gauss-Kruger zone 29"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(29500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(20030
				, L"Pulkovo 1995 / Gauss-Kruger zone 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(30500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(20031
				, L"Pulkovo 1995 / Gauss-Kruger zone 31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(31500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(20032
				, L"Pulkovo 1995 / Gauss-Kruger zone 32"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(32500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(20004
				, L"Pulkovo 1995 / Gauss-Kruger zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(20005
				, L"Pulkovo 1995 / Gauss-Kruger zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(20006
				, L"Pulkovo 1995 / Gauss-Kruger zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(6500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(20007
				, L"Pulkovo 1995 / Gauss-Kruger zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(7500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(20008
				, L"Pulkovo 1995 / Gauss-Kruger zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(8500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(20009
				, L"Pulkovo 1995 / Gauss-Kruger zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4200
				, Scale(1.0)
				, FalseEasting(9500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2099
				, L"Qatar 1948 / Qatar Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4286
				, FalseNorthing(100000.0)
				, FalseEasting(100000.0)
				, LatLonOrigin(25.3823611111110985, 50.7613888888889022)),
			buildGrid(28600
				, L"Qatar 1974 / Qatar National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4285
				, Scale(0.99999)
				, FalseNorthing(300000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(24.4499999999999993, 51.216666666666697)),
			buildGrid(2932
				, L"QND95 / Qatar National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4614
				, Scale(0.99999)
				, FalseNorthing(300000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(24.4499999999999993, 51.216666666666697)),
			buildGrid(2297
				, L"Qornoq 1927 / Greenland zone 1 east"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4194
				, Scale(1.0)
				, LatLonOrigin(82.5, -40.0)),
			buildGrid(2298
				, L"Qornoq 1927 / Greenland zone 2 east"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4194
				, Scale(1.0)
				, LatLonOrigin(79.5, -24.0)),
			buildGrid(2299
				, L"Qornoq 1927 / Greenland zone 2 west"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4194
				, Scale(1.0)
				, LatLonOrigin(79.5, -64.0)),
			buildGrid(2300
				, L"Qornoq 1927 / Greenland zone 3 east"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4194
				, Scale(1.0)
				, LatLonOrigin(76.5, -20.0)),
			buildGrid(2301
				, L"Qornoq 1927 / Greenland zone 3 west"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4194
				, Scale(1.0)
				, LatLonOrigin(76.5, -64.0)),
			buildGrid(2302
				, L"Qornoq 1927 / Greenland zone 4 east"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4194
				, Scale(1.0)
				, LatLonOrigin(73.5, -24.0)),
			buildGrid(2303
				, L"Qornoq 1927 / Greenland zone 4 west"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4194
				, Scale(1.0)
				, LatLonOrigin(73.5, -52.0)),
			buildGrid(2304
				, L"Qornoq 1927 / Greenland zone 5 west"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4194
				, Scale(1.0)
				, LatLonOrigin(70.5, -52.0)),
			buildGrid(2305
				, L"Qornoq 1927 / Greenland zone 6 west"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4194
				, Scale(1.0)
				, LatLonOrigin(67.5, -52.0)),
			buildGrid(2306
				, L"Qornoq 1927 / Greenland zone 7 west"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4194
				, Scale(1.0)
				, LatLonOrigin(64.5, -52.0)),
			buildGrid(2307
				, L"Qornoq 1927 / Greenland zone 8 east"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4194
				, Scale(1.0)
				, LatLonOrigin(61.5, -48.0)),
			buildGrid(2216
				, L"Qornoq 1927 / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4194
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(2217
				, L"Qornoq 1927 / UTM zone 23N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4194
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(2057
				, L"Rassadiran / Nakhl e Taqi"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4153
				, Scale(0.999896)
				, FalseNorthing(3044969.1940000001341105)
				, FalseEasting(658377.4370000000344589)
				, LatLonOrigin(27.5188288099999987, 52.6035391699999977)
				, Azimuth(0.57166119)
				, RectifiedGrid(0.57166119)),
			buildGrid(3398
				, L"RD/83 / 3-degree Gauss-Kruger zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4745
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(5668
				, L"RD/83 / 3-degree Gauss-Kruger zone 4 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4745
				, Scale(1.0)
				, FalseEasting(4500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(3399
				, L"RD/83 / 3-degree Gauss-Kruger zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4745
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(5669
				, L"RD/83 / 3-degree Gauss-Kruger zone 5 (E-N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4745
				, Scale(1.0)
				, FalseEasting(5500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(5635
				, L"REGCAN95 / LAEA Europe"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 4081
				, FalseNorthing(3210000.0)
				, FalseEasting(4321000.0)
				, LatLonOrigin(52.0, 10.0)),
			buildGrid(5634
				, L"REGCAN95 / LCC Europe"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4081
				, FalseNorthing(2800000.0)
				, FalseEasting(4000000.0)
				, LatLonOrigin(52.0, 10.0)
				, ParallelNorth(35.0)
				, ParallelSouth(65.0)),
			buildGrid(4082
				, L"REGCAN95 / UTM zone 27N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4081
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -21.0)),
			buildGrid(4083
				, L"REGCAN95 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4081
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(2201
				, L"REGVEN / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4189
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(2202
				, L"REGVEN / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4189
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(2203
				, L"REGVEN / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4189
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(3727
				, L"Reunion 1947 / TM Reunion"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4626
				, Scale(1.0)
				, FalseNorthing(50000.0)
				, FalseEasting(160000.0)
				, LatLonOrigin(-21.1166666700000007, 55.5333333299999978)),
			buildGrid(3052
				, L"Reykjavik 1900 / Lambert 1900"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4657
				, Scale(1.0)
				, LatLonOrigin(65.0, -19.0221249999999991)),
			buildGrid(5490
				, L"RGAF09 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5489
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(3942
				, L"RGF93 / CC42"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4171
				, FalseNorthing(1200000.0)
				, FalseEasting(1700000.0)
				, LatLonOrigin(42.0, 3.0)
				, ParallelNorth(41.25)
				, ParallelSouth(42.75)),
			buildGrid(3943
				, L"RGF93 / CC43"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4171
				, FalseNorthing(2200000.0)
				, FalseEasting(1700000.0)
				, LatLonOrigin(43.0, 3.0)
				, ParallelNorth(42.25)
				, ParallelSouth(43.75)),
			buildGrid(3944
				, L"RGF93 / CC44"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4171
				, FalseNorthing(3200000.0)
				, FalseEasting(1700000.0)
				, LatLonOrigin(44.0, 3.0)
				, ParallelNorth(43.25)
				, ParallelSouth(44.75)),
			buildGrid(3945
				, L"RGF93 / CC45"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4171
				, FalseNorthing(4200000.0)
				, FalseEasting(1700000.0)
				, LatLonOrigin(45.0, 3.0)
				, ParallelNorth(44.25)
				, ParallelSouth(45.75)),
			buildGrid(3946
				, L"RGF93 / CC46"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4171
				, FalseNorthing(5200000.0)
				, FalseEasting(1700000.0)
				, LatLonOrigin(46.0, 3.0)
				, ParallelNorth(45.25)
				, ParallelSouth(46.75)),
			buildGrid(3947
				, L"RGF93 / CC47"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4171
				, FalseNorthing(6200000.0)
				, FalseEasting(1700000.0)
				, LatLonOrigin(47.0, 3.0)
				, ParallelNorth(46.25)
				, ParallelSouth(47.75)),
			buildGrid(3948
				, L"RGF93 / CC48"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4171
				, FalseNorthing(7200000.0)
				, FalseEasting(1700000.0)
				, LatLonOrigin(48.0, 3.0)
				, ParallelNorth(47.25)
				, ParallelSouth(48.75)),
			buildGrid(3949
				, L"RGF93 / CC49"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4171
				, FalseNorthing(8200000.0)
				, FalseEasting(1700000.0)
				, LatLonOrigin(49.0, 3.0)
				, ParallelNorth(48.25)
				, ParallelSouth(49.75)),
			buildGrid(3950
				, L"RGF93 / CC50"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4171
				, FalseNorthing(9200000.0)
				, FalseEasting(1700000.0)
				, LatLonOrigin(50.0, 3.0)
				, ParallelNorth(49.25)
				, ParallelSouth(50.75)),
			buildGrid(2154
				, L"RGF93 / Lambert-93"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4171
				, FalseNorthing(6600000.0)
				, FalseEasting(700000.0)
				, LatLonOrigin(46.5, 3.0)
				, ParallelNorth(49.0)
				, ParallelSouth(44.0)),
			buildGrid(3313
				, L"RGFG95 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4624
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(2972
				, L"RGFG95 / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4624
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(4471
				, L"RGM04 / UTM zone 38S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4470
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2984
				, L"RGNC 1991 / Lambert New Caledonia"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4645
				, FalseNorthing(300000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-21.5, 166.0)
				, ParallelNorth(-20.6666666666666998)
				, ParallelSouth(-22.3333333333333002)),
			buildGrid(3163
				, L"RGNC91-93 / Lambert New Caledonia"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4749
				, FalseNorthing(300000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-21.5, 166.0)
				, ParallelNorth(-20.6666666666666998)
				, ParallelSouth(-22.3333333333333002)),
			buildGrid(3169
				, L"RGNC91-93 / UTM zone 57S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4749
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(3170
				, L"RGNC91-93 / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4749
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(3171
				, L"RGNC91-93 / UTM zone 59S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4749
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(3296
				, L"RGPF / UTM zone 5S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4687
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(3297
				, L"RGPF / UTM zone 6S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4687
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(3298
				, L"RGPF / UTM zone 7S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4687
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(3299
				, L"RGPF / UTM zone 8S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4687
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -135.0)),
			buildGrid(5644
				, L"RGR92 / UTM zone 39S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4267
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(2975
				, L"RGR92 / UTM zone 40S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4627
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(4048
				, L"RGRDC 2005 / Congo TM zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(4049
				, L"RGRDC 2005 / Congo TM zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 14.0)),
			buildGrid(4050
				, L"RGRDC 2005 / Congo TM zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 16.0)),
			buildGrid(4051
				, L"RGRDC 2005 / Congo TM zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(4056
				, L"RGRDC 2005 / Congo TM zone 20"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 20.0)),
			buildGrid(4057
				, L"RGRDC 2005 / Congo TM zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 22.0)),
			buildGrid(4058
				, L"RGRDC 2005 / Congo TM zone 24"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(4059
				, L"RGRDC 2005 / Congo TM zone 26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 26.0)),
			buildGrid(4060
				, L"RGRDC 2005 / Congo TM zone 28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 28.0)),
			buildGrid(5844
				, L"RGRDC 2005 / Congo TM zone 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9999)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(4061
				, L"RGRDC 2005 / UTM zone 33S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(4062
				, L"RGRDC 2005 / UTM zone 34S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(4063
				, L"RGRDC 2005 / UTM zone 35S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4046
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(4467
				, L"RGSPM06 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4463
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(2989
				, L"RRAF 1991 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4640
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(5480
				, L"RSRGD2000 / BCLC2000"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4764
				, FalseNorthing(3000000.0)
				, FalseEasting(5000000.0)
				, LatLonOrigin(-74.5, 165.0)
				, ParallelNorth(-73.6666665999999992)
				, ParallelSouth(-75.3333333300000021)),
			buildGrid(3852
				, L"RSRGD2000 / DGLC2000"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4764
				, FalseEasting(500000.0)
				, LatLonOrigin(-90.0, 157.0)
				, ParallelNorth(-76.6666666666660035)
				, ParallelSouth(-79.3333333300000021)),
			buildGrid(5479
				, L"RSRGD2000 / MSLC2000"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4764
				, FalseNorthing(5000000.0)
				, FalseEasting(7000000.0)
				, LatLonOrigin(-78.0, 163.0)
				, ParallelNorth(-76.6666666600000042)
				, ParallelSouth(-79.3333333300000021)),
			buildGrid(5481
				, L"RSRGD2000 / PCLC2000"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4764
				, FalseNorthing(1000000.0)
				, FalseEasting(3000000.0)
				, LatLonOrigin(-71.5, 166.0)
				, ParallelNorth(-70.6666666665999941)
				, ParallelSouth(-72.3333333329999988)),
			buildGrid(5482
				, L"RSRGD2000 / RSPS2000"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4764
				, Scale(0.994)
				, FalseNorthing(1000000.0)
				, FalseEasting(5000000.0)
				, LatLonOrigin(-90.0, 180.0)),
			buildGrid(3028
				, L"RT38 0 gon"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4308
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 18.0582777777777999)),
			buildGrid(3029
				, L"RT38 2.5 gon O"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4308
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 20.3082777777777999)),
			buildGrid(3027
				, L"RT38 2.5 gon V"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4308
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 15.8082777777777999)),
			buildGrid(30800
				, L"RT38 2.5 gon W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4308
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 15.8082777777777999)),
			buildGrid(3030
				, L"RT38 5 gon O"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4308
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 22.5582777777777999)),
			buildGrid(3026
				, L"RT38 5 gon V"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4308
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 13.5582777777777999)),
			buildGrid(3025
				, L"RT38 7.5 gon V"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4308
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 11.3082777777777999)),
			buildGrid(3022
				, L"RT90 0 gon"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4124
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 18.0582777777777999)),
			buildGrid(3023
				, L"RT90 2.5 gon O"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4124
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 20.3082777777777999)),
			buildGrid(3021
				, L"RT90 2.5 gon V"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4124
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 15.8082779999999996)),
			buildGrid(2400
				, L"RT90 2.5 gon W"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4124
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 15.8082777777777999)),
			buildGrid(3024
				, L"RT90 5 gon O"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4124
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 22.5582777777777999)),
			buildGrid(3020
				, L"RT90 5 gon V"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4124
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 13.5582777777777999)),
			buildGrid(3019
				, L"RT90 7.5 gon V"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4124
				, Scale(1.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 11.3082777777777999)),
			buildGrid(29101
				, L"SAD69 / Brazil Polyconic"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4618
				, FalseNorthing(10000000.0)
				, FalseEasting(5000000.0)
				, LatLonOrigin(0.0, -54.0)),
			buildGrid(5463
				, L"SAD69 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseNorthing(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(29187
				, L"SAD69 / UTM zone 17S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(29168
				, L"SAD69 / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(29188
				, L"SAD69 / UTM zone 18S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(29169
				, L"SAD69 / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(29189
				, L"SAD69 / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(29170
				, L"SAD69 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(29190
				, L"SAD69 / UTM zone 20S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(29171
				, L"SAD69 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(29191
				, L"SAD69 / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(29172
				, L"SAD69 / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(29192
				, L"SAD69 / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(29193
				, L"SAD69 / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(29194
				, L"SAD69 / UTM zone 24S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(29195
				, L"SAD69 / UTM zone 25S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4618
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(5530
				, L"SAD69(96) / Brazil Polyconic"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 5527
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(5000000.0)
				, LatLonOrigin(0.0, -54.0)),
			buildGrid(5531
				, L"SAD69(96) / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5527
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(5532
				, L"SAD69(96) / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5527
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(5858
				, L"SAD69(96) / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5527
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(5533
				, L"SAD69(96) / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5527
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(5534
				, L"SAD69(96) / UTM zone 24S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5527
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(5535
				, L"SAD69(96) / UTM zone 25S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5527
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(2987
				, L"Saint Pierre et Miquelon 1950 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4638
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(2550
				, L"Samboja / UTM zone 50S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4125
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(29220
				, L"Sapper Hill 1943 / UTM zone 20S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4292
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(29221
				, L"Sapper Hill 1943 / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4292
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(29371
				, L"Schwarzeck / Lo22/11"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::GLM
				, 4293
				, Scale(1.0)
				, LatLonOrigin(-22.0, 11.0)),
			buildGrid(29373
				, L"Schwarzeck / Lo22/13"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::GLM
				, 4293
				, Scale(1.0)
				, LatLonOrigin(-22.0, 13.0)),
			buildGrid(29375
				, L"Schwarzeck / Lo22/15"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::GLM
				, 4293
				, Scale(1.0)
				, LatLonOrigin(-22.0, 15.0)),
			buildGrid(29377
				, L"Schwarzeck / Lo22/17"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::GLM
				, 4293
				, Scale(1.0)
				, LatLonOrigin(-22.0, 17.0)),
			buildGrid(29379
				, L"Schwarzeck / Lo22/19"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::GLM
				, 4293
				, Scale(1.0)
				, LatLonOrigin(-22.0, 19.0)),
			buildGrid(29381
				, L"Schwarzeck / Lo22/21"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::GLM
				, 4293
				, Scale(1.0)
				, LatLonOrigin(-22.0, 21.0)),
			buildGrid(29383
				, L"Schwarzeck / Lo22/23"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::GLM
				, 4293
				, Scale(1.0)
				, LatLonOrigin(-22.0, 23.0)),
			buildGrid(29385
				, L"Schwarzeck / Lo22/25"
				, ProjectionType::TRANSVERSEMERCATORSOUTH
				, ProjectionUnit::GLM
				, 4293
				, Scale(1.0)
				, LatLonOrigin(-22.0, 25.0)),
			buildGrid(29333
				, L"Schwarzeck / UTM zone 33S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4293
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(2218
				, L"Scoresbysund 1952 / Greenland zone 5 east"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4195
				, Scale(1.0)
				, LatLonOrigin(70.5, -24.0)),
			buildGrid(2221
				, L"Scoresbysund 1952 / Greenland zone 6 east"
				, ProjectionType::LAMBERT1SPWEST
				, ProjectionUnit::M
				, 4195
				, Scale(1.0)
				, LatLonOrigin(67.5, -32.0)),
			buildGrid(5329
				, L"Segara (Jakarta) / NEIEZ"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4820
				, Scale(0.997)
				, FalseNorthing(900000.0)
				, FalseEasting(3900000.0)
				, LatLonOrigin(0.0, 3.1922809999999999)),
			buildGrid(2934
				, L"Segara (Jakarta) / NEIEZ"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4820
				, Scale(0.997)
				, FalseNorthing(900000.0)
				, FalseEasting(3900000.0)
				, LatLonOrigin(0.0, 110.0)),
			buildGrid(3000
				, L"Segara / NEIEZ"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4613
				, Scale(0.997)
				, FalseNorthing(900000.0)
				, FalseEasting(3900000.0)
				, LatLonOrigin(0.0, 110.0)),
			buildGrid(2933
				, L"Segara / UTM zone 50S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4613
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2943
				, L"Selvagem Grande / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4616
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(5466
				, L"Sibun Gorge 1922 / Colony Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTCLA
				, 5464
				, Scale(1.0)
				, FalseNorthing(445474.8300000000162981)
				, FalseEasting(217259.2600000000093132)
				, LatLonOrigin(17.061242, -88.6318569999999966)),
			buildGrid(5589
				, L"Sibun Gorge 1922 / Colony Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTCLA
				, 5464
				, Scale(1.0)
				, FalseNorthing(445474.8300000000162981)
				, FalseEasting(217259.2600000000093132)
				, LatLonOrigin(17.061242, -88.6318569999999966)),
			buildGrid(2159
				, L"Sierra Leone 1924 / New Colony Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTGC
				, 4174
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(6.6666666666666696, -12.0)),
			buildGrid(2160
				, L"Sierra Leone 1924 / New War Office Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTGC
				, 4174
				, Scale(1.0)
				, FalseNorthing(600000.0)
				, FalseEasting(800000.0)
				, LatLonOrigin(6.6666666666666696, -12.0)),
			buildGrid(2161
				, L"Sierra Leone 1968 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4175
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(2162
				, L"Sierra Leone 1968 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4175
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(31986
				, L"SIRGAS 1995 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(31992
				, L"SIRGAS 1995 / UTM zone 17S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(31987
				, L"SIRGAS 1995 / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(31993
				, L"SIRGAS 1995 / UTM zone 18S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(31988
				, L"SIRGAS 1995 / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(31994
				, L"SIRGAS 1995 / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(31989
				, L"SIRGAS 1995 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(31995
				, L"SIRGAS 1995 / UTM zone 20S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(31990
				, L"SIRGAS 1995 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(31996
				, L"SIRGAS 1995 / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(31991
				, L"SIRGAS 1995 / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(31997
				, L"SIRGAS 1995 / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(31998
				, L"SIRGAS 1995 / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(31999
				, L"SIRGAS 1995 / UTM zone 24S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(32000
				, L"SIRGAS 1995 / UTM zone 25S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4170
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(5641
				, L"SIRGAS 2000 / Brazil Mercator"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4674
				, FalseNorthing(10000000.0)
				, FalseEasting(5000000.0)
				, LatLonOrigin(-2.0, -43.0)),
			buildGrid(31965
				, L"SIRGAS 2000 / UTM zone 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(31966
				, L"SIRGAS 2000 / UTM zone 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(31967
				, L"SIRGAS 2000 / UTM zone 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(31968
				, L"SIRGAS 2000 / UTM zone 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(31969
				, L"SIRGAS 2000 / UTM zone 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(31970
				, L"SIRGAS 2000 / UTM zone 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(31971
				, L"SIRGAS 2000 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(31977
				, L"SIRGAS 2000 / UTM zone 17S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(31972
				, L"SIRGAS 2000 / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(31978
				, L"SIRGAS 2000 / UTM zone 18S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(31973
				, L"SIRGAS 2000 / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(31979
				, L"SIRGAS 2000 / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(31974
				, L"SIRGAS 2000 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(31980
				, L"SIRGAS 2000 / UTM zone 20S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(31975
				, L"SIRGAS 2000 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(31981
				, L"SIRGAS 2000 / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(31976
				, L"SIRGAS 2000 / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(31982
				, L"SIRGAS 2000 / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(31983
				, L"SIRGAS 2000 / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(31984
				, L"SIRGAS 2000 / UTM zone 24S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(31985
				, L"SIRGAS 2000 / UTM zone 25S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(5396
				, L"SIRGAS 2000 / UTM zone 26S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4674
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(5362
				, L"SIRGAS-Chile / UTM zone 18S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5360
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(5361
				, L"SIRGAS-Chile / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5360
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(5382
				, L"SIRGAS-ROU98 / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5381
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(5383
				, L"SIRGAS-ROU98 / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5381
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(2065
				, L"S-JTSK (Ferro) / Krovak"
				, ProjectionType::KROVAK
				, ProjectionUnit::M
				, 4818
				, Scale(-0.9999)
				, LatLonOrigin(49.5, 42.5)
				, ParallelNorth(78.5)
				, Azimuth(30.2881397222222013)),
			buildGrid(5221
				, L"S-JTSK (Ferro) / Krovak East North"
				, ProjectionType::KROVAK
				, ProjectionUnit::M
				, 4818
				, Scale(-0.9999)
				, LatLonOrigin(49.5, 42.5)
				, ParallelNorth(78.5)
				, Azimuth(30.2881399999999985)),
			buildGrid(5513
				, L"S-JTSK / Krovak"
				, ProjectionType::KROVAK
				, ProjectionUnit::M
				, 4156
				, Scale(-0.9999)
				, LatLonOrigin(49.5, 24.8333333299999985)
				, ParallelNorth(78.5)
				, Azimuth(30.2881399999999985)),
			buildGrid(5514
				, L"S-JTSK / Krovak East North"
				, ProjectionType::KROVAK
				, ProjectionUnit::M
				, 4156
				, Scale(-0.9999)
				, LatLonOrigin(49.5, 24.8333333329999988)
				, ParallelNorth(78.5)
				, Azimuth(30.2881399999999985)),
			buildGrid(5224
				, L"S-JTSK/05 (Ferro) / Modified Krovak"
				, ProjectionType::KROVAK
				, ProjectionUnit::M
				, 5229
				, Scale(-0.9999)
				, FalseNorthing(5000000.0)
				, FalseEasting(5000000.0)
				, LatLonOrigin(49.5, 42.5)
				, ParallelNorth(78.5)
				, Azimuth(30.2881399999999985)),
			buildGrid(5225
				, L"S-JTSK/05 (Ferro) / Modified Krovak East North"
				, ProjectionType::KROVAK
				, ProjectionUnit::M
				, 4737
				, Scale(-0.9999)
				, FalseNorthing(5000000.0)
				, FalseEasting(5000000.0)
				, LatLonOrigin(49.5, 42.5)
				, ParallelNorth(78.5)
				, Azimuth(30.2881399999999985)),
			buildGrid(5515
				, L"S-JTSK/05 / Modified Krovak"
				, ProjectionType::KROVAK
				, ProjectionUnit::M
				, 5228
				, Scale(-0.9999)
				, FalseNorthing(5000000.0)
				, FalseEasting(5000000.0)
				, LatLonOrigin(49.5, 24.8333333299999985)
				, ParallelNorth(78.5)
				, Azimuth(30.2881399999999985)),
			buildGrid(5516
				, L"S-JTSK/05 / Modified Krovak East North"
				, ProjectionType::KROVAK
				, ProjectionUnit::M
				, 5228
				, Scale(-0.9999)
				, FalseNorthing(5000000.0)
				, FalseEasting(5000000.0)
				, LatLonOrigin(49.5, 24.8333333329999988)
				, ParallelNorth(78.5)
				, Azimuth(30.2881399999999985)),
			buildGrid(5235
				, L"SLD99 / Sri Lanka Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5233
				, Scale(0.9999238418)
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(7.0001697500000004, 80.4618167099999937)),
			buildGrid(3794
				, L"Slovenia 1996 / Slovene National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4765
				, Scale(0.9999)
				, FalseNorthing(-5000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(2395
				, L"South Yemen / Gauss-Kruger zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4164
				, Scale(1.0)
				, FalseEasting(8500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2396
				, L"South Yemen / Gauss-Kruger zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4164
				, Scale(1.0)
				, FalseEasting(9500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(103474
				, L"Sphere Azimuthal Equidistant"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035
				, Scale(1.0)),
			buildGrid(53024
				, L"Sphere Bonne"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035
				, ParallelNorth(60.0)),
			buildGrid(53028
				, L"Sphere Cassini"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4035),
			buildGrid(53015
				, L"Sphere Eckert I"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53014
				, L"Sphere Eckert II"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53013
				, L"Sphere Eckert III"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53012
				, L"Sphere Eckert IV"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53011
				, L"Sphere Eckert V"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53010
				, L"Sphere Eckert VI"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53016
				, L"Sphere Gall Stereographic"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(103473
				, L"Sphere Hammer"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035
				, Scale(1.0)),
			buildGrid(53023
				, L"Sphere Loximuthal"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53004
				, L"Sphere Mercator"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4035),
			buildGrid(53003
				, L"Sphere Miller Cylindrical"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53009
				, L"Sphere Mollweide"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53001
				, L"Sphere Plate Carree"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53021
				, L"Sphere Polyconic"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53030
				, L"Sphere Robinson"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53008
				, L"Sphere Sinusoidal"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(53026
				, L"Sphere Stereographic"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4035),
			buildGrid(53018
				, L"Sphere Winkel I"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4035),
			buildGrid(2005
				, L"St. Kitts 1955 / British West Indies Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4605
				, Scale(0.9995000000000001)
				, FalseEasting(400000.0)
				, LatLonOrigin(0.0, -62.0)),
			buildGrid(2006
				, L"St. Lucia 1955 / British West Indies Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4606
				, Scale(0.9995000000000001)
				, FalseEasting(400000.0)
				, LatLonOrigin(0.0, -62.0)),
			buildGrid(2007
				, L"St. Vincent 45 / British West Indies Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4607
				, Scale(0.9995000000000001)
				, FalseEasting(400000.0)
				, LatLonOrigin(0.0, -62.0)),
			buildGrid(2997
				, L"ST71 Belep / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4643
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(3152
				, L"ST74"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(0.99999425)
				, FalseNorthing(-6500614.7835999997332692)
				, FalseEasting(100178.1808000000019092)
				, LatLonOrigin(0.0, 18.0577900000000007)),
			buildGrid(2996
				, L"ST84 Ile des Pins / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4642
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(3164
				, L"ST87 Ouvea / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4750
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(2983
				, L"ST87 Ouvea / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4635
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(29635
				, L"Sudan / UTM zone 35N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4296
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(29636
				, L"Sudan / UTM zone 36N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4296
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(3414
				, L"SVY21 / Singapore TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4757
				, Scale(1.0)
				, FalseNorthing(38744.5720000000001164)
				, FalseEasting(28001.6419999999998254)
				, LatLonOrigin(1.36666666666667, 103.8333333333330017)),
			buildGrid(3848
				, L"SWEREF99 / RT90 0 gon emulation"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0000054)
				, FalseNorthing(-668.8440000000000509)
				, FalseEasting(1500083.5209999999497086)
				, LatLonOrigin(0.0, 18.0563000000000002)),
			buildGrid(3849
				, L"SWEREF99 / RT90 2.5 gon O emulation"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0000051999999999)
				, FalseNorthing(-670.7060000000000173)
				, FalseEasting(1500102.7649999998975545)
				, LatLonOrigin(0.0, 20.3063166666666994)),
			buildGrid(3847
				, L"SWEREF99 / RT90 2.5 gon V emulation"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0000056102399999)
				, FalseNorthing(-667.7110000000000127)
				, FalseEasting(1500064.2739999999757856)
				, LatLonOrigin(0.0, 15.8062845294443992)),
			buildGrid(3850
				, L"SWEREF99 / RT90 5 gon O emulation"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0000049)
				, FalseNorthing(-672.5570000000000164)
				, FalseEasting(1500121.8459999999031425)
				, LatLonOrigin(0.0, 22.5563333333332992)),
			buildGrid(3846
				, L"SWEREF99 / RT90 5 gon V emulation"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0000058000000001)
				, FalseNorthing(-667.1299999999999955)
				, FalseEasting(1500044.6950000000651926)
				, LatLonOrigin(0.0, 13.5562666666666995)),
			buildGrid(3845
				, L"SWEREF99 / RT90 7.5 gon V emulation"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.000006)
				, FalseNorthing(-667.2820000000000391)
				, FalseEasting(1500025.1410000000614673)
				, LatLonOrigin(0.0, 11.3062500000000004)),
			buildGrid(3007
				, L"SWEREF99 12 00"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(3008
				, L"SWEREF99 13 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 13.5)),
			buildGrid(3012
				, L"SWEREF99 14 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 14.25)),
			buildGrid(3009
				, L"SWEREF99 15 00"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(3013
				, L"SWEREF99 15 45"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 15.75)),
			buildGrid(3010
				, L"SWEREF99 16 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 16.5)),
			buildGrid(3014
				, L"SWEREF99 17 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 17.25)),
			buildGrid(3011
				, L"SWEREF99 18 00"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 18.0)),
			buildGrid(3015
				, L"SWEREF99 18 45"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 18.75)),
			buildGrid(3016
				, L"SWEREF99 20 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 20.25)),
			buildGrid(3017
				, L"SWEREF99 21 45"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 21.75)),
			buildGrid(3018
				, L"SWEREF99 23 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(1.0)
				, FalseEasting(150000.0)
				, LatLonOrigin(0.0, 23.25)),
			buildGrid(3006
				, L"SWEREF99 TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4619
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(2977
				, L"Tahaa 54 / UTM zone 5S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4629
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(2976
				, L"Tahiti 52 / UTM zone 6S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4628
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(3304
				, L"Tahiti 79 / UTM zone 6S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4690
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(29701
				, L"Tananarive (Paris) / Laborde Grid"
				, ProjectionType::HOTINEOBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4810
				, Scale(0.9995000000000001)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-18.8999999999999986, 44.1000000000000014)
				, Azimuth(18.8999999999999986)),
			buildGrid(29700
				, L"Tananarive (Paris) / Laborde Grid"
				, ProjectionType::HOTINEOBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4810
				, Scale(0.9995000000000001)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-18.8999999999999986, 44.1000000000000014)
				, Azimuth(18.8999999999999986)
				, RectifiedGrid(18.8999999999999986)),
			buildGrid(29702
				, L"Tananarive (Paris) / Laborde Grid approximation"
				, ProjectionType::HOTINEOBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4810
				, Scale(0.9995000000000001)
				, FalseNorthing(800000.0)
				, FalseEasting(400000.0)
				, LatLonOrigin(-18.8999999999999986, 44.1000000000000014)
				, Azimuth(18.8999999999999986)
				, RectifiedGrid(18.8999999999999986)),
			buildGrid(29738
				, L"Tananarive / UTM zone 38S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4297
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(29739
				, L"Tananarive / UTM zone 39S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4297
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(30339
				, L"TC(1948) / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4303
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(30340
				, L"TC(1948) / UTM zone 40N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4303
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(2736
				, L"Tete / UTM zone 36S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4127
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(2737
				, L"Tete / UTM zone 37S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4127
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(29871
				, L"Timbalai 1948 / RSO Borneo (ch)"
				, ProjectionType::HOTINEOBLIQUEMERCATOR
				, ProjectionUnit::CHSE
				, 4298
				, Scale(0.99984)
				, FalseNorthing(22014.3571999999985565)
				, FalseEasting(29352.4762999999984459)
				, LatLonOrigin(4.0, 115.0)
				, Azimuth(53.3158204722221996)
				, RectifiedGrid(53.1301023611110992)),
			buildGrid(29872
				, L"Timbalai 1948 / RSO Borneo (ft)"
				, ProjectionType::HOTINEOBLIQUEMERCATOR
				, ProjectionUnit::FTSE
				, 4298
				, Scale(0.99984)
				, FalseNorthing(1452947.5800000000745058)
				, FalseEasting(1937263.4399999999441206)
				, LatLonOrigin(4.0, 115.0)
				, Azimuth(53.3158204722221996)
				, RectifiedGrid(53.1301023611110992)),
			buildGrid(29873
				, L"Timbalai 1948 / RSO Borneo (m)"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4298
				, Scale(0.99984)
				, FalseNorthing(442857.6500000000232831)
				, FalseEasting(590476.8699999999953434)
				, LatLonOrigin(4.0, 115.0)
				, Azimuth(53.3158204722221996)
				, RectifiedGrid(53.1301023611110992)),
			buildGrid(29849
				, L"Timbalai 1948 / UTM zone 49N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4298
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(29850
				, L"Timbalai 1948 / UTM zone 50N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4298
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(29902
				, L"TM65 / Irish Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4299
				, Scale(1.000035)
				, FalseNorthing(250000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(53.5, -8.0)),
			buildGrid(29900
				, L"TM65 / Irish National Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4299
				, Scale(1.000035)
				, FalseNorthing(250000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(53.5, -8.0)),
			buildGrid(29903
				, L"TM75 / Irish Grid"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4300
				, Scale(1.000035)
				, FalseNorthing(250000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(53.5, -8.0)),
			buildGrid(30161
				, L"Tokyo / Japan Plane Rectangular CS I"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(33.0, 129.5)),
			buildGrid(30162
				, L"Tokyo / Japan Plane Rectangular CS II"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(33.0, 131.0)),
			buildGrid(30163
				, L"Tokyo / Japan Plane Rectangular CS III"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(36.0, 132.1666666666669983)),
			buildGrid(30164
				, L"Tokyo / Japan Plane Rectangular CS IV"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(33.0, 133.5)),
			buildGrid(30169
				, L"Tokyo / Japan Plane Rectangular CS IX"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(36.0, 139.8333333333330017)),
			buildGrid(30165
				, L"Tokyo / Japan Plane Rectangular CS V"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(36.0, 134.3333333333330017)),
			buildGrid(30166
				, L"Tokyo / Japan Plane Rectangular CS VI"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(36.0, 136.0)),
			buildGrid(30167
				, L"Tokyo / Japan Plane Rectangular CS VII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(36.0, 137.1666666666669983)),
			buildGrid(30168
				, L"Tokyo / Japan Plane Rectangular CS VIII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(36.0, 138.5)),
			buildGrid(30170
				, L"Tokyo / Japan Plane Rectangular CS X"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(40.0, 140.8333333333330017)),
			buildGrid(30171
				, L"Tokyo / Japan Plane Rectangular CS XI"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(44.0, 140.25)),
			buildGrid(30172
				, L"Tokyo / Japan Plane Rectangular CS XII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(44.0, 142.25)),
			buildGrid(30173
				, L"Tokyo / Japan Plane Rectangular CS XIII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(44.0, 144.25)),
			buildGrid(30174
				, L"Tokyo / Japan Plane Rectangular CS XIV"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(26.0, 142.0)),
			buildGrid(30179
				, L"Tokyo / Japan Plane Rectangular CS XIX"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(26.0, 154.0)),
			buildGrid(30175
				, L"Tokyo / Japan Plane Rectangular CS XV"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(26.0, 127.5)),
			buildGrid(30176
				, L"Tokyo / Japan Plane Rectangular CS XVI"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(26.0, 124.0)),
			buildGrid(30177
				, L"Tokyo / Japan Plane Rectangular CS XVII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(26.0, 131.0)),
			buildGrid(30178
				, L"Tokyo / Japan Plane Rectangular CS XVIII"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9999)
				, LatLonOrigin(20.0, 136.0)),
			buildGrid(3092
				, L"Tokyo / UTM zone 51N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(3093
				, L"Tokyo / UTM zone 52N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(3094
				, L"Tokyo / UTM zone 53N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(3095
				, L"Tokyo / UTM zone 54N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(3096
				, L"Tokyo / UTM zone 55N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4301
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(5170
				, L"Tokyo 1892 / Korea Central Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5132
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 127.0)),
			buildGrid(5171
				, L"Tokyo 1892 / Korea East Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5132
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 129.0)),
			buildGrid(5172
				, L"Tokyo 1892 / Korea East Sea Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5132
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 131.0)),
			buildGrid(5169
				, L"Tokyo 1892 / Korea West Belt"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5132
				, Scale(1.0)
				, FalseNorthing(500000.0)
				, FalseEasting(200000.0)
				, LatLonOrigin(38.0, 125.0)),
			buildGrid(30200
				, L"Trinidad 1903 / Trinidad Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::LKCLA
				, 4302
				, FalseNorthing(325000.0)
				, FalseEasting(430000.0)
				, LatLonOrigin(10.4416666666667002, -61.3333333333333002)),
			buildGrid(2314
				, L"Trinidad 1903 / Trinidad Grid (ftCla)"
				, ProjectionType::CASSINI
				, ProjectionUnit::FTCLA
				, 4302
				, FalseNorthing(214500.0)
				, FalseEasting(283800.0)
				, LatLonOrigin(10.4416666666667002, -61.3333333333333002)),
			buildGrid(5270
				, L"TUREF / 3-degree Gauss-Kruger zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(10500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(5271
				, L"TUREF / 3-degree Gauss-Kruger zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(11500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(5272
				, L"TUREF / 3-degree Gauss-Kruger zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(12500000.0)
				, LatLonOrigin(0.0, 36.0)),
			buildGrid(5273
				, L"TUREF / 3-degree Gauss-Kruger zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(13500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(5274
				, L"TUREF / 3-degree Gauss-Kruger zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(14500000.0)
				, LatLonOrigin(0.0, 42.0)),
			buildGrid(5275
				, L"TUREF / 3-degree Gauss-Kruger zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(15500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(5269
				, L"TUREF / 3-degree Gauss-Kruger zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(9500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(5636
				, L"TUREF / LAEA Europe"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 5252
				, FalseNorthing(3210000.0)
				, FalseEasting(4321000.0)
				, LatLonOrigin(52.0, 10.0)),
			buildGrid(5637
				, L"TUREF / LCC Europe"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 5252
				, FalseNorthing(2800000.0)
				, FalseEasting(4000000.0)
				, LatLonOrigin(52.0, 10.0)
				, ParallelNorth(35.0)
				, ParallelSouth(65.0)),
			buildGrid(5253
				, L"TUREF / TM27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(5254
				, L"TUREF / TM30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(5255
				, L"TUREF / TM33"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(5256
				, L"TUREF / TM36"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 36.0)),
			buildGrid(5257
				, L"TUREF / TM39"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(5258
				, L"TUREF / TM42"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 42.0)),
			buildGrid(5259
				, L"TUREF / TM45"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5252
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(3827
				, L"TWD67 / TM2 zone 119"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3821
				, Scale(0.9999)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 119.0)),
			buildGrid(3828
				, L"TWD67 / TM2 zone 121"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3821
				, Scale(0.9999)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 121.0)),
			buildGrid(3825
				, L"TWD97 / TM2 zone 119"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3824
				, Scale(0.9999)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 119.0)),
			buildGrid(3826
				, L"TWD97 / TM2 zone 121"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 3824
				, Scale(0.9999)
				, FalseEasting(250000.0)
				, LatLonOrigin(0.0, 121.0)),
			buildGrid(5577
				, L"Ukraine 2000 / 3-degree Gauss-Kruger CM 21E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(5578
				, L"Ukraine 2000 / 3-degree Gauss-Kruger CM 24E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(5579
				, L"Ukraine 2000 / 3-degree Gauss-Kruger CM 27E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(5580
				, L"Ukraine 2000 / 3-degree Gauss-Kruger CM 30E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(5581
				, L"Ukraine 2000 / 3-degree Gauss-Kruger CM 33E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(5582
				, L"Ukraine 2000 / 3-degree Gauss-Kruger CM 36E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 36.0)),
			buildGrid(5583
				, L"Ukraine 2000 / 3-degree Gauss-Kruger CM 39E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(5573
				, L"Ukraine 2000 / 3-degree Gauss-Kruger zone 10"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(10500000.0)
				, LatLonOrigin(0.0, 30.0)),
			buildGrid(5574
				, L"Ukraine 2000 / 3-degree Gauss-Kruger zone 11"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(11500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(5575
				, L"Ukraine 2000 / 3-degree Gauss-Kruger zone 12"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(12500000.0)
				, LatLonOrigin(0.0, 36.0)),
			buildGrid(5576
				, L"Ukraine 2000 / 3-degree Gauss-Kruger zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(13500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(5570
				, L"Ukraine 2000 / 3-degree Gauss-Kruger zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591),
			buildGrid(5571
				, L"Ukraine 2000 / 3-degree Gauss-Kruger zone 8"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(8500000.0)
				, LatLonOrigin(0.0, 24.0)),
			buildGrid(5572
				, L"Ukraine 2000 / 3-degree Gauss-Kruger zone 9"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591
				, Scale(1.0)
				, FalseEasting(9500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(5566
				, L"Ukraine 2000 / Gauss-Kruger CM 21E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591),
			buildGrid(5567
				, L"Ukraine 2000 / Gauss-Kruger CM 27E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591),
			buildGrid(5568
				, L"Ukraine 2000 / Gauss-Kruger CM 33E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591),
			buildGrid(5569
				, L"Ukraine 2000 / Gauss-Kruger CM 39E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591),
			buildGrid(5562
				, L"Ukraine 2000 / Gauss-Kruger zone 4"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591),
			buildGrid(5563
				, L"Ukraine 2000 / Gauss-Kruger zone 5"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591),
			buildGrid(5564
				, L"Ukraine 2000 / Gauss-Kruger zone 6"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591),
			buildGrid(5565
				, L"Ukraine 2000 / Gauss-Kruger zone 7"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 5591),
			buildGrid(2163
				, L"US National Atlas Equal Area"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 4052
				, LatLonOrigin(45.0, -100.0)),
			buildGrid(3139
				, L"Vanua Levu 1915 / Vanua Levu Grid"
				, ProjectionType::NONE
				, ProjectionUnit::LK
				, 4748
				, FalseNorthing(1662888.5)
				, FalseEasting(1251331.8000000000465661)
				, LatLonOrigin(-16.25, 179.3333333333330017)),
			buildGrid(3140
				, L"Viti Levu 1912 / Viti Levu Grid"
				, ProjectionType::CASSINI
				, ProjectionUnit::LK
				, 4752
				, FalseNorthing(704000.0)
				, FalseEasting(544000.0)
				, LatLonOrigin(-18.0, 178.0)),
			buildGrid(3405
				, L"VN-2000 / UTM zone 48N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4756
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(3406
				, L"VN-2000 / UTM zone 49N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4756
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(30491
				, L"Voirol 1875 / Nord Algerie (ancienne)"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4304
				, Scale(0.999625544)
				, FalseNorthing(300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.0, 2.7000000000000002)),
			buildGrid(30492
				, L"Voirol 1875 / Sud Algerie (ancienne)"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4304
				, Scale(0.999625769)
				, FalseNorthing(300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(33.2999999999999972, 2.7000000000000002)),
			buildGrid(30493
				, L"Voirol 1879 / Nord Algerie (ancienne)"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4671
				, Scale(0.999626)
				, FalseNorthing(300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(36.0, 2.7000000000000002)),
			buildGrid(30494
				, L"Voirol 1879 / Sud Algerie (ancienne)"
				, ProjectionType::LAMBERT1SP
				, ProjectionUnit::M
				, 4671
				, Scale(0.999625769)
				, FalseNorthing(300000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(33.2999999999999972, 2.7000000000000002)),
			buildGrid(32210
				, L"WGS 72 / UTM zone 10N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -123.0)),
			buildGrid(32310
				, L"WGS 72 / UTM zone 10S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -123.0)),
			buildGrid(32211
				, L"WGS 72 / UTM zone 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(32311
				, L"WGS 72 / UTM zone 11S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(32212
				, L"WGS 72 / UTM zone 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(32312
				, L"WGS 72 / UTM zone 12S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(32213
				, L"WGS 72 / UTM zone 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(32313
				, L"WGS 72 / UTM zone 13S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(32214
				, L"WGS 72 / UTM zone 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(32314
				, L"WGS 72 / UTM zone 14S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(32215
				, L"WGS 72 / UTM zone 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(32315
				, L"WGS 72 / UTM zone 15S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(32216
				, L"WGS 72 / UTM zone 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(32316
				, L"WGS 72 / UTM zone 16S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(32217
				, L"WGS 72 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(32317
				, L"WGS 72 / UTM zone 17S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(32218
				, L"WGS 72 / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(32318
				, L"WGS 72 / UTM zone 18S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(32219
				, L"WGS 72 / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(32319
				, L"WGS 72 / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(32201
				, L"WGS 72 / UTM zone 1N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(32301
				, L"WGS 72 / UTM zone 1S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(32220
				, L"WGS 72 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(32320
				, L"WGS 72 / UTM zone 20S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(32221
				, L"WGS 72 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(32321
				, L"WGS 72 / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(32222
				, L"WGS 72 / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(32322
				, L"WGS 72 / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(32223
				, L"WGS 72 / UTM zone 23N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(32323
				, L"WGS 72 / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(32224
				, L"WGS 72 / UTM zone 24N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(32324
				, L"WGS 72 / UTM zone 24S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(32225
				, L"WGS 72 / UTM zone 25N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(32325
				, L"WGS 72 / UTM zone 25S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(32226
				, L"WGS 72 / UTM zone 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(32326
				, L"WGS 72 / UTM zone 26S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(32227
				, L"WGS 72 / UTM zone 27N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -21.0)),
			buildGrid(32327
				, L"WGS 72 / UTM zone 27S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -21.0)),
			buildGrid(32228
				, L"WGS 72 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(32328
				, L"WGS 72 / UTM zone 28S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(32229
				, L"WGS 72 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(32329
				, L"WGS 72 / UTM zone 29S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(32202
				, L"WGS 72 / UTM zone 2N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(32302
				, L"WGS 72 / UTM zone 2S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(32230
				, L"WGS 72 / UTM zone 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(32330
				, L"WGS 72 / UTM zone 30S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(32231
				, L"WGS 72 / UTM zone 31N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(32331
				, L"WGS 72 / UTM zone 31S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(32232
				, L"WGS 72 / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(32332
				, L"WGS 72 / UTM zone 32S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(32233
				, L"WGS 72 / UTM zone 33N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(32333
				, L"WGS 72 / UTM zone 33S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(32234
				, L"WGS 72 / UTM zone 34N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(32334
				, L"WGS 72 / UTM zone 34S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(32235
				, L"WGS 72 / UTM zone 35N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(32335
				, L"WGS 72 / UTM zone 35S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(32236
				, L"WGS 72 / UTM zone 36N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(32336
				, L"WGS 72 / UTM zone 36S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(32237
				, L"WGS 72 / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(32337
				, L"WGS 72 / UTM zone 37S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(32238
				, L"WGS 72 / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(32338
				, L"WGS 72 / UTM zone 38S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(32239
				, L"WGS 72 / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(32339
				, L"WGS 72 / UTM zone 39S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(32203
				, L"WGS 72 / UTM zone 3N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -165.0)),
			buildGrid(32303
				, L"WGS 72 / UTM zone 3S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -165.0)),
			buildGrid(32240
				, L"WGS 72 / UTM zone 40N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(32340
				, L"WGS 72 / UTM zone 40S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(32241
				, L"WGS 72 / UTM zone 41N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(32341
				, L"WGS 72 / UTM zone 41S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(32242
				, L"WGS 72 / UTM zone 42N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(32342
				, L"WGS 72 / UTM zone 42S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(32243
				, L"WGS 72 / UTM zone 43N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(32343
				, L"WGS 72 / UTM zone 43S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(32244
				, L"WGS 72 / UTM zone 44N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(32344
				, L"WGS 72 / UTM zone 44S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(32245
				, L"WGS 72 / UTM zone 45N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(32345
				, L"WGS 72 / UTM zone 45S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(32246
				, L"WGS 72 / UTM zone 46N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(32346
				, L"WGS 72 / UTM zone 46S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(32247
				, L"WGS 72 / UTM zone 47N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(32347
				, L"WGS 72 / UTM zone 47S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(32248
				, L"WGS 72 / UTM zone 48N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(32348
				, L"WGS 72 / UTM zone 48S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(32249
				, L"WGS 72 / UTM zone 49N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(32349
				, L"WGS 72 / UTM zone 49S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(32204
				, L"WGS 72 / UTM zone 4N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -159.0)),
			buildGrid(32304
				, L"WGS 72 / UTM zone 4S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -159.0)),
			buildGrid(32250
				, L"WGS 72 / UTM zone 50N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(32350
				, L"WGS 72 / UTM zone 50S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(32251
				, L"WGS 72 / UTM zone 51N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(32351
				, L"WGS 72 / UTM zone 51S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(32252
				, L"WGS 72 / UTM zone 52N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(32352
				, L"WGS 72 / UTM zone 52S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(32253
				, L"WGS 72 / UTM zone 53N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(32353
				, L"WGS 72 / UTM zone 53S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(32254
				, L"WGS 72 / UTM zone 54N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(32354
				, L"WGS 72 / UTM zone 54S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(32255
				, L"WGS 72 / UTM zone 55N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(32355
				, L"WGS 72 / UTM zone 55S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(32256
				, L"WGS 72 / UTM zone 56N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(32356
				, L"WGS 72 / UTM zone 56S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(32257
				, L"WGS 72 / UTM zone 57N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(32357
				, L"WGS 72 / UTM zone 57S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(32258
				, L"WGS 72 / UTM zone 58N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(32358
				, L"WGS 72 / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(32259
				, L"WGS 72 / UTM zone 59N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(32359
				, L"WGS 72 / UTM zone 59S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(32205
				, L"WGS 72 / UTM zone 5N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(32305
				, L"WGS 72 / UTM zone 5S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(32260
				, L"WGS 72 / UTM zone 60N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(32360
				, L"WGS 72 / UTM zone 60S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(32206
				, L"WGS 72 / UTM zone 6N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(32306
				, L"WGS 72 / UTM zone 6S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(32207
				, L"WGS 72 / UTM zone 7N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(32307
				, L"WGS 72 / UTM zone 7S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(32208
				, L"WGS 72 / UTM zone 8N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -135.0)),
			buildGrid(32308
				, L"WGS 72 / UTM zone 8S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -135.0)),
			buildGrid(32209
				, L"WGS 72 / UTM zone 9N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -129.0)),
			buildGrid(32309
				, L"WGS 72 / UTM zone 9S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4322
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -129.0)),
			buildGrid(3415
				, L"WGS 72BE / South China Sea Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4324
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(21.0, 114.0)
				, ParallelNorth(18.0)
				, ParallelSouth(24.0)),
			buildGrid(2094
				, L"WGS 72BE / TM 106 NE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 106.0)),
			buildGrid(32410
				, L"WGS 72BE / UTM zone 10N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -123.0)),
			buildGrid(32510
				, L"WGS 72BE / UTM zone 10S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -123.0)),
			buildGrid(32411
				, L"WGS 72BE / UTM zone 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(32511
				, L"WGS 72BE / UTM zone 11S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(32412
				, L"WGS 72BE / UTM zone 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(32512
				, L"WGS 72BE / UTM zone 12S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(32413
				, L"WGS 72BE / UTM zone 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(32513
				, L"WGS 72BE / UTM zone 13S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(32414
				, L"WGS 72BE / UTM zone 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(32514
				, L"WGS 72BE / UTM zone 14S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(32415
				, L"WGS 72BE / UTM zone 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(32515
				, L"WGS 72BE / UTM zone 15S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(32416
				, L"WGS 72BE / UTM zone 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(32516
				, L"WGS 72BE / UTM zone 16S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(32417
				, L"WGS 72BE / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(32517
				, L"WGS 72BE / UTM zone 17S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(32418
				, L"WGS 72BE / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(32518
				, L"WGS 72BE / UTM zone 18S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(32419
				, L"WGS 72BE / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(32519
				, L"WGS 72BE / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(32401
				, L"WGS 72BE / UTM zone 1N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(32501
				, L"WGS 72BE / UTM zone 1S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(32420
				, L"WGS 72BE / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(32520
				, L"WGS 72BE / UTM zone 20S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(32421
				, L"WGS 72BE / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(32521
				, L"WGS 72BE / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(32422
				, L"WGS 72BE / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(32522
				, L"WGS 72BE / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(32423
				, L"WGS 72BE / UTM zone 23N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(32523
				, L"WGS 72BE / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(32424
				, L"WGS 72BE / UTM zone 24N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(32524
				, L"WGS 72BE / UTM zone 24S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(32425
				, L"WGS 72BE / UTM zone 25N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(32525
				, L"WGS 72BE / UTM zone 25S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(32426
				, L"WGS 72BE / UTM zone 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(32526
				, L"WGS 72BE / UTM zone 26S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(32427
				, L"WGS 72BE / UTM zone 27N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -21.0)),
			buildGrid(32527
				, L"WGS 72BE / UTM zone 27S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -21.0)),
			buildGrid(32428
				, L"WGS 72BE / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(32528
				, L"WGS 72BE / UTM zone 28S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(32429
				, L"WGS 72BE / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(32529
				, L"WGS 72BE / UTM zone 29S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(32402
				, L"WGS 72BE / UTM zone 2N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(32502
				, L"WGS 72BE / UTM zone 2S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(32430
				, L"WGS 72BE / UTM zone 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(32530
				, L"WGS 72BE / UTM zone 30S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(32431
				, L"WGS 72BE / UTM zone 31N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(32531
				, L"WGS 72BE / UTM zone 31S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(32432
				, L"WGS 72BE / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(32532
				, L"WGS 72BE / UTM zone 32S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(32433
				, L"WGS 72BE / UTM zone 33N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(32533
				, L"WGS 72BE / UTM zone 33S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(32434
				, L"WGS 72BE / UTM zone 34N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(32534
				, L"WGS 72BE / UTM zone 34S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(32435
				, L"WGS 72BE / UTM zone 35N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(32535
				, L"WGS 72BE / UTM zone 35S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(32436
				, L"WGS 72BE / UTM zone 36N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(32536
				, L"WGS 72BE / UTM zone 36S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(32437
				, L"WGS 72BE / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(32537
				, L"WGS 72BE / UTM zone 37S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(32438
				, L"WGS 72BE / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(32538
				, L"WGS 72BE / UTM zone 38S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(32439
				, L"WGS 72BE / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(32539
				, L"WGS 72BE / UTM zone 39S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(32403
				, L"WGS 72BE / UTM zone 3N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -165.0)),
			buildGrid(32503
				, L"WGS 72BE / UTM zone 3S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -165.0)),
			buildGrid(32440
				, L"WGS 72BE / UTM zone 40N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(32540
				, L"WGS 72BE / UTM zone 40S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(32441
				, L"WGS 72BE / UTM zone 41N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(32541
				, L"WGS 72BE / UTM zone 41S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(32442
				, L"WGS 72BE / UTM zone 42N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(32542
				, L"WGS 72BE / UTM zone 42S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(32443
				, L"WGS 72BE / UTM zone 43N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(32543
				, L"WGS 72BE / UTM zone 43S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(32444
				, L"WGS 72BE / UTM zone 44N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(32544
				, L"WGS 72BE / UTM zone 44S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(32445
				, L"WGS 72BE / UTM zone 45N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(32545
				, L"WGS 72BE / UTM zone 45S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(32446
				, L"WGS 72BE / UTM zone 46N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(32546
				, L"WGS 72BE / UTM zone 46S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(32447
				, L"WGS 72BE / UTM zone 47N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(32547
				, L"WGS 72BE / UTM zone 47S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(32448
				, L"WGS 72BE / UTM zone 48N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(32548
				, L"WGS 72BE / UTM zone 48S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(32449
				, L"WGS 72BE / UTM zone 49N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(32549
				, L"WGS 72BE / UTM zone 49S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(32404
				, L"WGS 72BE / UTM zone 4N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -159.0)),
			buildGrid(32504
				, L"WGS 72BE / UTM zone 4S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -159.0)),
			buildGrid(32450
				, L"WGS 72BE / UTM zone 50N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(32550
				, L"WGS 72BE / UTM zone 50S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(32451
				, L"WGS 72BE / UTM zone 51N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(32551
				, L"WGS 72BE / UTM zone 51S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(32452
				, L"WGS 72BE / UTM zone 52N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(32552
				, L"WGS 72BE / UTM zone 52S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(32453
				, L"WGS 72BE / UTM zone 53N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(32553
				, L"WGS 72BE / UTM zone 53S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(32454
				, L"WGS 72BE / UTM zone 54N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(32554
				, L"WGS 72BE / UTM zone 54S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(32455
				, L"WGS 72BE / UTM zone 55N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(32555
				, L"WGS 72BE / UTM zone 55S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(32456
				, L"WGS 72BE / UTM zone 56N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(32556
				, L"WGS 72BE / UTM zone 56S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(32457
				, L"WGS 72BE / UTM zone 57N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(32557
				, L"WGS 72BE / UTM zone 57S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(32458
				, L"WGS 72BE / UTM zone 58N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(32558
				, L"WGS 72BE / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(32459
				, L"WGS 72BE / UTM zone 59N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(32559
				, L"WGS 72BE / UTM zone 59S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(32405
				, L"WGS 72BE / UTM zone 5N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(32505
				, L"WGS 72BE / UTM zone 5S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(32460
				, L"WGS 72BE / UTM zone 60N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(32560
				, L"WGS 72BE / UTM zone 60S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(32406
				, L"WGS 72BE / UTM zone 6N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(32506
				, L"WGS 72BE / UTM zone 6S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(32407
				, L"WGS 72BE / UTM zone 7N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(32507
				, L"WGS 72BE / UTM zone 7S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(32408
				, L"WGS 72BE / UTM zone 8N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -135.0)),
			buildGrid(32508
				, L"WGS 72BE / UTM zone 8S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -135.0)),
			buildGrid(32409
				, L"WGS 72BE / UTM zone 9N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -129.0)),
			buildGrid(32509
				, L"WGS 72BE / UTM zone 9S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4324
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -129.0)),
			buildGrid(3031
				, L"WGS 84 / Antarctic Polar Stereographic"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, Scale(1.0)
				, LatLonOrigin(-71.0, 0.0)),
			buildGrid(3995
				, L"WGS 84 / Arctic Polar Stereographic"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(71.0, 0.0)),
			buildGrid(3033
				, L"WGS 84 / Australian Antarctic Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, FalseNorthing(6000000.0)
				, FalseEasting(6000000.0)
				, LatLonOrigin(-50.0, 70.0)
				, ParallelNorth(-68.5)
				, ParallelSouth(-74.5)),
			buildGrid(3032
				, L"WGS 84 / Australian Antarctic Polar Stereographic"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, FalseNorthing(6000000.0)
				, FalseEasting(6000000.0)
				, LatLonOrigin(-71.0, 70.0)),
			buildGrid(4462
				, L"WGS 84 / Australian Centre for Remote Sensing Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-27.0, 132.0)
				, ParallelNorth(-18.0)
				, ParallelSouth(-36.0)),
			buildGrid(32664
				, L"WGS 84 / BLM 14N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4326
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(32665
				, L"WGS 84 / BLM 15N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4326
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(32666
				, L"WGS 84 / BLM 16N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4326
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(32667
				, L"WGS 84 / BLM 17N (ftUS)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::FTUS
				, 4326
				, Scale(0.9996)
				, FalseEasting(1640416.6699999999254942)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(4826
				, L"WGS 84 / Cape Verde National"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, FalseNorthing(128511.202000000004773)
				, FalseEasting(161587.8299999999871943)
				, LatLonOrigin(15.8333333333333002, -24.0)
				, ParallelNorth(15.0)
				, ParallelSouth(16.6666666666666998)),
			buildGrid(3997
				, L"WGS 84 / Dubai Local TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 55.3333333333333002)),
			buildGrid(5223
				, L"WGS 84 / Gabon TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(500000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(5523
				, L"WGS 84 / Gabon TM 2011"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(5500000.0)
				, FalseEasting(1500000.0)
				, LatLonOrigin(0.0, 11.5)),
			buildGrid(3996
				, L"WGS 84 / IBCAO Polar Stereographic"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(75.0, 0.0)),
			buildGrid(3994
				, L"WGS 84 / Mercator 41"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-41.0, 100.0)),
			buildGrid(3572
				, L"WGS 84 / North Pole LAEA Alaska"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(90.0, -150.0)),
			buildGrid(3574
				, L"WGS 84 / North Pole LAEA Atlantic"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(90.0, -40.0)),
			buildGrid(3571
				, L"WGS 84 / North Pole LAEA Bering Sea"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(90.0, 180.0)),
			buildGrid(3573
				, L"WGS 84 / North Pole LAEA Canada"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(90.0, -100.0)),
			buildGrid(3575
				, L"WGS 84 / North Pole LAEA Europe"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(90.0, 10.0)),
			buildGrid(3576
				, L"WGS 84 / North Pole LAEA Russia"
				, ProjectionType::LAMBERTAEA
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(90.0, 90.0)),
			buildGrid(3975
				, L"WGS 84 / NSIDC EASE-Grid Global"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326
				, ParallelNorth(30.0)),
			buildGrid(3413
				, L"WGS 84 / NSIDC Sea Ice Polar Stereographic North"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(70.0, -45.0)),
			buildGrid(3976
				, L"WGS 84 / NSIDC Sea Ice Polar Stereographic South"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-70.0, 0.0)),
			buildGrid(3832
				, L"WGS 84 / PDC Mercator"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4326
				, Scale(1.0)
				, LatLonOrigin(0.0, 150.0)),
			buildGrid(3204
				, L"WGS 84 / SCAR IMW SP19-20"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -66.0)
				, ParallelNorth(-60.6666666666666998)
				, ParallelSouth(-63.3333333333333002)),
			buildGrid(3205
				, L"WGS 84 / SCAR IMW SP21-22"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -54.0)
				, ParallelNorth(-60.6666666666666998)
				, ParallelSouth(-63.3333333333333002)),
			buildGrid(3206
				, L"WGS 84 / SCAR IMW SP23-24"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -42.0)
				, ParallelNorth(-60.6666666666666998)
				, ParallelSouth(-63.3333333333333002)),
			buildGrid(3207
				, L"WGS 84 / SCAR IMW SQ01-02"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -174.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3208
				, L"WGS 84 / SCAR IMW SQ19-20"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -66.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3209
				, L"WGS 84 / SCAR IMW SQ21-22"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -54.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3210
				, L"WGS 84 / SCAR IMW SQ37-38"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 42.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3211
				, L"WGS 84 / SCAR IMW SQ39-40"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 54.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3212
				, L"WGS 84 / SCAR IMW SQ41-42"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 66.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3213
				, L"WGS 84 / SCAR IMW SQ43-44"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 78.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3214
				, L"WGS 84 / SCAR IMW SQ45-46"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 90.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3215
				, L"WGS 84 / SCAR IMW SQ47-48"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 102.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3216
				, L"WGS 84 / SCAR IMW SQ49-50"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 114.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3217
				, L"WGS 84 / SCAR IMW SQ51-52"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 126.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3218
				, L"WGS 84 / SCAR IMW SQ53-54"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 138.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3219
				, L"WGS 84 / SCAR IMW SQ55-56"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 150.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3220
				, L"WGS 84 / SCAR IMW SQ57-58"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 162.0)
				, ParallelNorth(-64.6666666666666998)
				, ParallelSouth(-67.3333333333333002)),
			buildGrid(3221
				, L"WGS 84 / SCAR IMW SR13-14"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -102.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3222
				, L"WGS 84 / SCAR IMW SR15-16"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -90.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3223
				, L"WGS 84 / SCAR IMW SR17-18"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -78.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3224
				, L"WGS 84 / SCAR IMW SR19-20"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -66.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3225
				, L"WGS 84 / SCAR IMW SR27-28"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -18.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3226
				, L"WGS 84 / SCAR IMW SR29-30"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -6.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3227
				, L"WGS 84 / SCAR IMW SR31-32"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 6.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3228
				, L"WGS 84 / SCAR IMW SR33-34"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 18.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3229
				, L"WGS 84 / SCAR IMW SR35-36"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 30.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3230
				, L"WGS 84 / SCAR IMW SR37-38"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 42.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3231
				, L"WGS 84 / SCAR IMW SR39-40"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 54.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3232
				, L"WGS 84 / SCAR IMW SR41-42"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 66.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3233
				, L"WGS 84 / SCAR IMW SR43-44"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 78.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3234
				, L"WGS 84 / SCAR IMW SR45-46"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 90.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3235
				, L"WGS 84 / SCAR IMW SR47-48"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 102.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3236
				, L"WGS 84 / SCAR IMW SR49-50"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 114.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3237
				, L"WGS 84 / SCAR IMW SR51-52"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 126.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3238
				, L"WGS 84 / SCAR IMW SR53-54"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 138.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3239
				, L"WGS 84 / SCAR IMW SR55-56"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 150.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3240
				, L"WGS 84 / SCAR IMW SR57-58"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 162.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3241
				, L"WGS 84 / SCAR IMW SR59-60"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 174.0)
				, ParallelNorth(-68.6666666666666998)
				, ParallelSouth(-71.3333333333333002)),
			buildGrid(3242
				, L"WGS 84 / SCAR IMW SS04-06"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -153.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3243
				, L"WGS 84 / SCAR IMW SS07-09"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -135.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3244
				, L"WGS 84 / SCAR IMW SS10-12"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -117.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3245
				, L"WGS 84 / SCAR IMW SS13-15"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -99.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3246
				, L"WGS 84 / SCAR IMW SS16-18"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -81.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3247
				, L"WGS 84 / SCAR IMW SS19-21"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -63.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3248
				, L"WGS 84 / SCAR IMW SS25-27"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -27.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3249
				, L"WGS 84 / SCAR IMW SS28-30"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -9.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3250
				, L"WGS 84 / SCAR IMW SS31-33"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 9.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3251
				, L"WGS 84 / SCAR IMW SS34-36"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 27.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3252
				, L"WGS 84 / SCAR IMW SS37-39"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 45.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3253
				, L"WGS 84 / SCAR IMW SS40-42"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 63.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3254
				, L"WGS 84 / SCAR IMW SS43-45"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 81.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3255
				, L"WGS 84 / SCAR IMW SS46-48"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 99.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3256
				, L"WGS 84 / SCAR IMW SS49-51"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 117.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3257
				, L"WGS 84 / SCAR IMW SS52-54"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 135.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3258
				, L"WGS 84 / SCAR IMW SS55-57"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 153.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3259
				, L"WGS 84 / SCAR IMW SS58-60"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 171.0)
				, ParallelNorth(-72.6666666666666998)
				, ParallelSouth(-75.3333333333333002)),
			buildGrid(3260
				, L"WGS 84 / SCAR IMW ST01-04"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -168.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3261
				, L"WGS 84 / SCAR IMW ST05-08"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -144.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3262
				, L"WGS 84 / SCAR IMW ST09-12"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -120.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3263
				, L"WGS 84 / SCAR IMW ST13-16"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -96.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3264
				, L"WGS 84 / SCAR IMW ST17-20"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -72.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3265
				, L"WGS 84 / SCAR IMW ST21-24"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -48.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3266
				, L"WGS 84 / SCAR IMW ST25-28"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, -24.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3267
				, L"WGS 84 / SCAR IMW ST29-32"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 0.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3268
				, L"WGS 84 / SCAR IMW ST33-36"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 24.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3269
				, L"WGS 84 / SCAR IMW ST37-40"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 48.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3270
				, L"WGS 84 / SCAR IMW ST41-44"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 72.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3271
				, L"WGS 84 / SCAR IMW ST45-48"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 96.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3272
				, L"WGS 84 / SCAR IMW ST49-52"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 120.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3273
				, L"WGS 84 / SCAR IMW ST53-56"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 144.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3274
				, L"WGS 84 / SCAR IMW ST57-60"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-90.0, 168.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(3275
				, L"WGS 84 / SCAR IMW SU01-05"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, -165.0)),
			buildGrid(3276
				, L"WGS 84 / SCAR IMW SU06-10"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, -135.0)),
			buildGrid(3277
				, L"WGS 84 / SCAR IMW SU11-15"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, -105.0)),
			buildGrid(3278
				, L"WGS 84 / SCAR IMW SU16-20"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, -75.0)),
			buildGrid(3279
				, L"WGS 84 / SCAR IMW SU21-25"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, -45.0)),
			buildGrid(3280
				, L"WGS 84 / SCAR IMW SU26-30"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, -15.0)),
			buildGrid(3281
				, L"WGS 84 / SCAR IMW SU31-35"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, 15.0)),
			buildGrid(3282
				, L"WGS 84 / SCAR IMW SU36-40"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, 45.0)),
			buildGrid(3283
				, L"WGS 84 / SCAR IMW SU41-45"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, 75.0)),
			buildGrid(3284
				, L"WGS 84 / SCAR IMW SU46-50"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, 105.0)),
			buildGrid(3285
				, L"WGS 84 / SCAR IMW SU51-55"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, 135.0)),
			buildGrid(3286
				, L"WGS 84 / SCAR IMW SU56-60"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, 165.0)),
			buildGrid(3287
				, L"WGS 84 / SCAR IMW SV01-10"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, -150.0)),
			buildGrid(3288
				, L"WGS 84 / SCAR IMW SV11-20"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, -90.0)),
			buildGrid(3289
				, L"WGS 84 / SCAR IMW SV21-30"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, -30.0)),
			buildGrid(3290
				, L"WGS 84 / SCAR IMW SV31-40"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, 30.0)),
			buildGrid(3291
				, L"WGS 84 / SCAR IMW SV41-50"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, 90.0)),
			buildGrid(3292
				, L"WGS 84 / SCAR IMW SV51-60"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, 150.0)),
			buildGrid(3293
				, L"WGS 84 / SCAR IMW SW01-60"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-80.2386111111110978, 0.0)),
			buildGrid(3762
				, L"WGS 84 / South Georgia Lambert"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-55.0, -37.0)
				, ParallelNorth(-54.0)
				, ParallelSouth(-54.75)),
			buildGrid(2309
				, L"WGS 84 / TM 116 SE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 116.0)),
			buildGrid(5842
				, L"WGS 84 / TM 12 SE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 12.0)),
			buildGrid(2310
				, L"WGS 84 / TM 132 SE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(32766
				, L"WGS 84 / TM 36 SE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 36.0)),
			buildGrid(2311
				, L"WGS 84 / TM 6 NE"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 6.0)),
			buildGrid(4037
				, L"WGS 84 / TMzn35N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(4038
				, L"WGS 84 / TMzn36N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(32661
				, L"WGS 84 / UPS North"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, Scale(0.994)
				, FalseNorthing(2000000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(90.0, 0.0)),
			buildGrid(5041
				, L"WGS 84 / UPS North (E,N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.994)
				, FalseNorthing(2000000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(90.0, 0.0)),
			buildGrid(32761
				, L"WGS 84 / UPS South"
				, ProjectionType::POLARSTEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, Scale(0.994)
				, FalseNorthing(2000000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(-90.0, 0.0)),
			buildGrid(5042
				, L"WGS 84 / UPS South (E,N)"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.994)
				, FalseNorthing(2000000.0)
				, FalseEasting(2000000.0)
				, LatLonOrigin(-90.0, 0.0)),
			buildGrid(3294
				, L"WGS 84 / USGS Transantarctic Mountains"
				, ProjectionType::LAMBERT2SP
				, ProjectionUnit::M
				, 4326
				, LatLonOrigin(-78.0, 162.0)
				, ParallelNorth(-76.6666666666666998)
				, ParallelSouth(-79.3333333333333002)),
			buildGrid(32610
				, L"WGS 84 / UTM zone 10N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -123.0)),
			buildGrid(32710
				, L"WGS 84 / UTM zone 10S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -123.0)),
			buildGrid(32611
				, L"WGS 84 / UTM zone 11N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(32711
				, L"WGS 84 / UTM zone 11S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -117.0)),
			buildGrid(32612
				, L"WGS 84 / UTM zone 12N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(32712
				, L"WGS 84 / UTM zone 12S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -111.0)),
			buildGrid(32613
				, L"WGS 84 / UTM zone 13N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(32713
				, L"WGS 84 / UTM zone 13S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -105.0)),
			buildGrid(32614
				, L"WGS 84 / UTM zone 14N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(32714
				, L"WGS 84 / UTM zone 14S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -99.0)),
			buildGrid(32615
				, L"WGS 84 / UTM zone 15N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(32715
				, L"WGS 84 / UTM zone 15S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -93.0)),
			buildGrid(32616
				, L"WGS 84 / UTM zone 16N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(32716
				, L"WGS 84 / UTM zone 16S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -87.0)),
			buildGrid(32617
				, L"WGS 84 / UTM zone 17N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(32717
				, L"WGS 84 / UTM zone 17S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -81.0)),
			buildGrid(32618
				, L"WGS 84 / UTM zone 18N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(32718
				, L"WGS 84 / UTM zone 18S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -75.0)),
			buildGrid(32619
				, L"WGS 84 / UTM zone 19N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(32719
				, L"WGS 84 / UTM zone 19S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -69.0)),
			buildGrid(32601
				, L"WGS 84 / UTM zone 1N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(32701
				, L"WGS 84 / UTM zone 1S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -177.0)),
			buildGrid(32620
				, L"WGS 84 / UTM zone 20N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(32720
				, L"WGS 84 / UTM zone 20S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -63.0)),
			buildGrid(32621
				, L"WGS 84 / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(32721
				, L"WGS 84 / UTM zone 21S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0)),
			buildGrid(32622
				, L"WGS 84 / UTM zone 22N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(32722
				, L"WGS 84 / UTM zone 22S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -51.0)),
			buildGrid(32623
				, L"WGS 84 / UTM zone 23N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(32723
				, L"WGS 84 / UTM zone 23S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -45.0)),
			buildGrid(32624
				, L"WGS 84 / UTM zone 24N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(32724
				, L"WGS 84 / UTM zone 24S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -39.0)),
			buildGrid(32625
				, L"WGS 84 / UTM zone 25N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(32725
				, L"WGS 84 / UTM zone 25S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -33.0)),
			buildGrid(32626
				, L"WGS 84 / UTM zone 26N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(32726
				, L"WGS 84 / UTM zone 26S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -27.0)),
			buildGrid(32627
				, L"WGS 84 / UTM zone 27N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -21.0)),
			buildGrid(32727
				, L"WGS 84 / UTM zone 27S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -21.0)),
			buildGrid(32628
				, L"WGS 84 / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(32728
				, L"WGS 84 / UTM zone 28S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(32629
				, L"WGS 84 / UTM zone 29N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(32729
				, L"WGS 84 / UTM zone 29S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -9.0)),
			buildGrid(32602
				, L"WGS 84 / UTM zone 2N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(32702
				, L"WGS 84 / UTM zone 2S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -171.0)),
			buildGrid(32630
				, L"WGS 84 / UTM zone 30N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(32730
				, L"WGS 84 / UTM zone 30S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -3.0)),
			buildGrid(32631
				, L"WGS 84 / UTM zone 31N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(32731
				, L"WGS 84 / UTM zone 31S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 3.0)),
			buildGrid(32632
				, L"WGS 84 / UTM zone 32N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(32732
				, L"WGS 84 / UTM zone 32S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 9.0)),
			buildGrid(32633
				, L"WGS 84 / UTM zone 33N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(32733
				, L"WGS 84 / UTM zone 33S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 15.0)),
			buildGrid(32634
				, L"WGS 84 / UTM zone 34N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(32734
				, L"WGS 84 / UTM zone 34S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 21.0)),
			buildGrid(32635
				, L"WGS 84 / UTM zone 35N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(32735
				, L"WGS 84 / UTM zone 35S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 27.0)),
			buildGrid(32636
				, L"WGS 84 / UTM zone 36N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(32736
				, L"WGS 84 / UTM zone 36S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 33.0)),
			buildGrid(32637
				, L"WGS 84 / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(32737
				, L"WGS 84 / UTM zone 37S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(32638
				, L"WGS 84 / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(32738
				, L"WGS 84 / UTM zone 38S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(32639
				, L"WGS 84 / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(32739
				, L"WGS 84 / UTM zone 39S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(32603
				, L"WGS 84 / UTM zone 3N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -165.0)),
			buildGrid(32703
				, L"WGS 84 / UTM zone 3S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -165.0)),
			buildGrid(32640
				, L"WGS 84 / UTM zone 40N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(32740
				, L"WGS 84 / UTM zone 40S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(32641
				, L"WGS 84 / UTM zone 41N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(32741
				, L"WGS 84 / UTM zone 41S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 63.0)),
			buildGrid(32642
				, L"WGS 84 / UTM zone 42N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(32742
				, L"WGS 84 / UTM zone 42S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 69.0)),
			buildGrid(32643
				, L"WGS 84 / UTM zone 43N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(32743
				, L"WGS 84 / UTM zone 43S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(32644
				, L"WGS 84 / UTM zone 44N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(32744
				, L"WGS 84 / UTM zone 44S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(32645
				, L"WGS 84 / UTM zone 45N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(32745
				, L"WGS 84 / UTM zone 45S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(32646
				, L"WGS 84 / UTM zone 46N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(32746
				, L"WGS 84 / UTM zone 46S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(32647
				, L"WGS 84 / UTM zone 47N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(32747
				, L"WGS 84 / UTM zone 47S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(32648
				, L"WGS 84 / UTM zone 48N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(32748
				, L"WGS 84 / UTM zone 48S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(32649
				, L"WGS 84 / UTM zone 49N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(32749
				, L"WGS 84 / UTM zone 49S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(32604
				, L"WGS 84 / UTM zone 4N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -159.0)),
			buildGrid(32704
				, L"WGS 84 / UTM zone 4S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -159.0)),
			buildGrid(32650
				, L"WGS 84 / UTM zone 50N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(32750
				, L"WGS 84 / UTM zone 50S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(32651
				, L"WGS 84 / UTM zone 51N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(32751
				, L"WGS 84 / UTM zone 51S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(32652
				, L"WGS 84 / UTM zone 52N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(32752
				, L"WGS 84 / UTM zone 52S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(32653
				, L"WGS 84 / UTM zone 53N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(32753
				, L"WGS 84 / UTM zone 53S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(32654
				, L"WGS 84 / UTM zone 54N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(32754
				, L"WGS 84 / UTM zone 54S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 141.0)),
			buildGrid(32655
				, L"WGS 84 / UTM zone 55N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(32755
				, L"WGS 84 / UTM zone 55S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 147.0)),
			buildGrid(32656
				, L"WGS 84 / UTM zone 56N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(32756
				, L"WGS 84 / UTM zone 56S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 153.0)),
			buildGrid(32657
				, L"WGS 84 / UTM zone 57N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(32757
				, L"WGS 84 / UTM zone 57S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 159.0)),
			buildGrid(32658
				, L"WGS 84 / UTM zone 58N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(32758
				, L"WGS 84 / UTM zone 58S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 165.0)),
			buildGrid(32659
				, L"WGS 84 / UTM zone 59N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(32759
				, L"WGS 84 / UTM zone 59S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 171.0)),
			buildGrid(32605
				, L"WGS 84 / UTM zone 5N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(32705
				, L"WGS 84 / UTM zone 5S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -153.0)),
			buildGrid(32660
				, L"WGS 84 / UTM zone 60N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(32760
				, L"WGS 84 / UTM zone 60S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 177.0)),
			buildGrid(32606
				, L"WGS 84 / UTM zone 6N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(32706
				, L"WGS 84 / UTM zone 6S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -147.0)),
			buildGrid(32607
				, L"WGS 84 / UTM zone 7N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(32707
				, L"WGS 84 / UTM zone 7S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -141.0)),
			buildGrid(32608
				, L"WGS 84 / UTM zone 8N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -135.0)),
			buildGrid(32708
				, L"WGS 84 / UTM zone 8S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -135.0)),
			buildGrid(32609
				, L"WGS 84 / UTM zone 9N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -129.0)),
			buildGrid(32709
				, L"WGS 84 / UTM zone 9S"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4326
				, Scale(0.9996)
				, FalseNorthing(10000000.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -129.0)),
			buildGrid(50012
				, L"WGS 84 / Web Mercator (Google, Bing, ESRI)"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4326
				, Scale(1.0)),
			buildGrid(3395
				, L"WGS 84 / World Mercator"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4326
				, Scale(1.0)),
			buildGrid(4087
				, L"WGS 84 World Equidistant Cylindrical"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(103475
				, L"World Azimuthal Equidistant"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326
				, Scale(1.0)),
			buildGrid(54024
				, L"World Bonne"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326
				, ParallelNorth(60.0)),
			buildGrid(54028
				, L"World Cassini"
				, ProjectionType::CASSINI
				, ProjectionUnit::M
				, 4326),
			buildGrid(54015
				, L"World Eckert I"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54014
				, L"World Eckert II"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54013
				, L"World Eckert III"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54012
				, L"World Eckert IV"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54011
				, L"World Eckert V"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54010
				, L"World Eckert VI"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54016
				, L"World Gall Stereographic"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54025
				, L"World Hotine"
				, ProjectionType::OBLIQUEMERCATOR
				, ProjectionUnit::M
				, 4326),
			buildGrid(54023
				, L"World Loximuthal"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54004
				, L"World Mercator"
				, ProjectionType::MERCATOR1SP
				, ProjectionUnit::M
				, 4326),
			buildGrid(54003
				, L"World Miller Cylindrical"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54009
				, L"World Mollweide"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54001
				, L"World Plate Carree"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54021
				, L"World Polyconic"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54030
				, L"World Robinson"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54008
				, L"World Sinusoidal"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(54026
				, L"World Stereographic"
				, ProjectionType::STEREOGRAPHIC
				, ProjectionUnit::M
				, 4326
				, Scale(1.0)),
			buildGrid(54018
				, L"World Winkel I"
				, ProjectionType::NONE
				, ProjectionUnit::M
				, 4326),
			buildGrid(2379
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 102E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(2380
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2381
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 108E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(2382
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2383
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 114E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(2384
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2385
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 120E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(2386
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2387
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 126E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(2388
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2389
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 132E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(2390
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(2370
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2371
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 78E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(2372
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2373
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 84E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(2374
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2375
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 90E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(2376
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2377
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 96E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(2378
				, L"Xian 1980 / 3-degree Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(2349
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 25"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(25500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2350
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 26"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(26500000.0)
				, LatLonOrigin(0.0, 78.0)),
			buildGrid(2351
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 27"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(27500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2352
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 28"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(28500000.0)
				, LatLonOrigin(0.0, 84.0)),
			buildGrid(2353
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 29"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(29500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2354
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 30"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(30500000.0)
				, LatLonOrigin(0.0, 90.0)),
			buildGrid(2355
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 31"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(31500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2356
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 32"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(32500000.0)
				, LatLonOrigin(0.0, 96.0)),
			buildGrid(2357
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 33"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(33500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(2358
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 34"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(34500000.0)
				, LatLonOrigin(0.0, 102.0)),
			buildGrid(2359
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 35"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(35500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2360
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 36"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(36500000.0)
				, LatLonOrigin(0.0, 108.0)),
			buildGrid(2361
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 37"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(37500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2362
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 38"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(38500000.0)
				, LatLonOrigin(0.0, 114.0)),
			buildGrid(2363
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 39"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(39500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2364
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 40"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(40500000.0)
				, LatLonOrigin(0.0, 120.0)),
			buildGrid(2365
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 41"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(41500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2366
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 42"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(42500000.0)
				, LatLonOrigin(0.0, 126.0)),
			buildGrid(2367
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 43"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(43500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2368
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 44"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(44500000.0)
				, LatLonOrigin(0.0, 132.0)),
			buildGrid(2369
				, L"Xian 1980 / 3-degree Gauss-Kruger zone 45"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(45500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(2343
				, L"Xian 1980 / Gauss-Kruger CM 105E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2344
				, L"Xian 1980 / Gauss-Kruger CM 111E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2345
				, L"Xian 1980 / Gauss-Kruger CM 117E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2346
				, L"Xian 1980 / Gauss-Kruger CM 123E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2347
				, L"Xian 1980 / Gauss-Kruger CM 129E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2348
				, L"Xian 1980 / Gauss-Kruger CM 135E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(2338
				, L"Xian 1980 / Gauss-Kruger CM 75E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2339
				, L"Xian 1980 / Gauss-Kruger CM 81E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2340
				, L"Xian 1980 / Gauss-Kruger CM 87E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2341
				, L"Xian 1980 / Gauss-Kruger CM 93E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2342
				, L"Xian 1980 / Gauss-Kruger CM 99E"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(2327
				, L"Xian 1980 / Gauss-Kruger zone 13"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(13500000.0)
				, LatLonOrigin(0.0, 75.0)),
			buildGrid(2328
				, L"Xian 1980 / Gauss-Kruger zone 14"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(14500000.0)
				, LatLonOrigin(0.0, 81.0)),
			buildGrid(2329
				, L"Xian 1980 / Gauss-Kruger zone 15"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(15500000.0)
				, LatLonOrigin(0.0, 87.0)),
			buildGrid(2330
				, L"Xian 1980 / Gauss-Kruger zone 16"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(16500000.0)
				, LatLonOrigin(0.0, 93.0)),
			buildGrid(2331
				, L"Xian 1980 / Gauss-Kruger zone 17"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(17500000.0)
				, LatLonOrigin(0.0, 99.0)),
			buildGrid(2332
				, L"Xian 1980 / Gauss-Kruger zone 18"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(18500000.0)
				, LatLonOrigin(0.0, 105.0)),
			buildGrid(2333
				, L"Xian 1980 / Gauss-Kruger zone 19"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(19500000.0)
				, LatLonOrigin(0.0, 111.0)),
			buildGrid(2334
				, L"Xian 1980 / Gauss-Kruger zone 20"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(20500000.0)
				, LatLonOrigin(0.0, 117.0)),
			buildGrid(2335
				, L"Xian 1980 / Gauss-Kruger zone 21"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(21500000.0)
				, LatLonOrigin(0.0, 123.0)),
			buildGrid(2336
				, L"Xian 1980 / Gauss-Kruger zone 22"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(22500000.0)
				, LatLonOrigin(0.0, 129.0)),
			buildGrid(2337
				, L"Xian 1980 / Gauss-Kruger zone 23"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4610
				, Scale(1.0)
				, FalseEasting(23500000.0)
				, LatLonOrigin(0.0, 135.0)),
			buildGrid(5836
				, L"Yemen NGN96 / UTM zone 37N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4163
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 39.0)),
			buildGrid(2089
				, L"Yemen NGN96 / UTM zone 38N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4163
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 45.0)),
			buildGrid(2090
				, L"Yemen NGN96 / UTM zone 39N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4163
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 51.0)),
			buildGrid(5837
				, L"Yemen NGN96 / UTM zone 40N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4163
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, 57.0)),
			buildGrid(31028
				, L"Yoff / UTM zone 28N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4310
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -15.0)),
			buildGrid(31170
				, L"Zanderij / Suriname Old TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4311
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -55.6833333333333016)),
			buildGrid(31171
				, L"Zanderij / Suriname TM"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4311
				, Scale(0.9999)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -55.6833333333333016)),
			buildGrid(31154
				, L"Zanderij / TM 54 NW"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4311
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -54.0)),
			buildGrid(31121
				, L"Zanderij / UTM zone 21N"
				, ProjectionType::TRANSVERSEMERCATOR
				, ProjectionUnit::M
				, 4311
				, Scale(0.9996)
				, FalseEasting(500000.0)
				, LatLonOrigin(0.0, -57.0))
		};


		Grids& Grids::getInstance()
		{
			static Grids instance;
			return instance;
		}

		void Grids::load(GridId id, CGpsGridParametersX* params)
		{
			params->Clear();

			auto it = m_grids.find(id);

			if (it == m_grids.end())
			{
				try
				{
					Datums::getInstance().load(id, &(params->m_cGpsDatumParameters));
				}
				catch (const std::exception& e)
				{
					throw std::runtime_error("Could not find grid id '" + std::to_string(id) + "'");
				}
				
			}
			else
			{
				RecordGrid& grid = it->second;

				params->m_fFalseEasting = grid.dblFalseEasting;
				params->m_fFalseNorthing = grid.dblFalseNorthing;
				params->m_fOriginLatitude = grid.dblOriginLatitude;
				params->m_fOriginLongitude = grid.dblOriginLongitude;
				params->m_fParallelNorth = grid.dblParallelNorth;
				params->m_fParallelSouth = grid.dblParallelSouth;
				params->m_fScaleFactor = grid.dblScaleFactor;
				params->m_fAzimuthAngle = grid.dblAzimuth;
				params->m_fRectifiedGridAngle = grid.dblRectifiedGrid;

				params->m_lId = grid.numId;
				params->m_lProjection = static_cast<LONG>(grid.numProjection);
				params->m_lUnits = static_cast<LONG>(grid.numUnits);

				Datums::getInstance().load(grid.numDatum, &(params->m_cGpsDatumParameters));

				params->m_strName = grid.strName;
			}
		}
	}
}
