#include <array>
#include <stdexcept>

#include "GridBuilder.hpp"
#include "GpsDatumParametersX.h"

#include "Datums.hpp"

namespace gps
{
    namespace tk
    {
        const std::array<RecordDatum, 634> DATUMS
        {
            buildDatum(4143
            , L"Abidjan 1987"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-124.7600000000000051, 53.0, 466.7900000000000205)),
            buildDatum(4168
            , L"Accra"
            , AxisA(6378300.0)
            , InverseFlattening(296.0)
            , Delta(-199.0, 32.0, 322.0)),
            buildDatum(4201
            , L"Adindan"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-166.0, -15.0, 204.0)),
            buildDatum(4205
            , L"Afgooye"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-43.0, -163.0, 45.0)),
            buildDatum(4206
            , L"Agadez"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)),
            buildDatum(4202
            , L"AGD66"
            , AxisA(6378160.0)
            , InverseFlattening(298.25)
            , DatumScale(-0.29)
            , Delta(-117.8080000000000069, -51.5360000000000014, 137.7839999999999918)
            , Rotation(-0.303, -0.446, -0.234)),
            buildDatum(50136
            , L"AGD66 (NTv2)"
            , AxisA(6378160.0)
            , InverseFlattening(298.25)),
            buildDatum(4203
            , L"AGD84"
            , AxisA(6378160.0)
            , InverseFlattening(298.25)
            , DatumScale(-0.191)
            , Delta(-117.7630000000000052, -51.509999999999998, 139.061000000000007)
            , Rotation(-0.292, -0.443, -0.277)),
            buildDatum(50135
            , L"AGD84 (NTv2)"
            , AxisA(6378160.0)
            , InverseFlattening(298.25)),
            buildDatum(4204
            , L"Ain el Abd"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-150.0, -250.0, -1.0)),
            buildDatum(4191
            , L"Albanian 1987"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)),
            buildDatum(4169
            , L"American Samoa 1962"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-115.0, 118.0, 426.0)),
            buildDatum(4289
            , L"Amersfoort"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , DatumScale(4.0724999999999998)
            , Delta(565.41700000000003, 50.3320000000000007, 465.5539999999999736)
            , Rotation(-0.398957388243134, 0.343987817378283, -1.8774016399804501)),
            buildDatum(4196
            , L"Ammassalik 1958"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(-0.6)
            , Delta(-45.0, 417.0, -3.5)
            , Rotation(0.0, 0.0, 0.8139999999999999)),
            buildDatum(4600
            , L"Anguilla 1957"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(4601
            , L"Antigua 1943"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-255.0, -15.0, 71.0)),
            buildDatum(4208
            , L"Aratu"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-158.0, 315.0, -148.0)),
            buildDatum(4209
            , L"Arc 1950"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.4663077000000158)
            , Delta(-143.0, -90.0, -294.0)),
            buildDatum(4210
            , L"Arc 1960"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-160.0, -6.0, -302.0)),
            buildDatum(4712
            , L"Ascension Island 1958"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-205.0, 107.0, 53.0)),
            buildDatum(4901
            , L"ATF (Paris)"
            , AxisA(6376523.0)
            , InverseFlattening(308.6399999999999864)
            , Longitude(2.3372083333333298)),
            buildDatum(4122
            , L"ATS77"
            , AxisA(6378135.0)
            , InverseFlattening(298.257000000000005)),
            buildDatum(4176
            , L"Australian Antarctic"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4713
            , L"Ayabelle Lighthouse"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-79.0, -129.0, 145.0)),
            buildDatum(4183
            , L"Azores Central 1948"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-104.0, 167.0, -38.0)),
            buildDatum(4665
            , L"Azores Central 1995"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-106.3010000000000019, 166.2700000000000102, -37.9159999999999968)),
            buildDatum(4182
            , L"Azores Occidental 1939"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-425.0, -169.0, 81.0)),
            buildDatum(4184
            , L"Azores Oriental 1940"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-203.0, 141.0, 53.0)),
            buildDatum(4664
            , L"Azores Oriental 1995"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-204.6330000000000098, 140.2160000000000082, 55.1989999999999981)),
            buildDatum(4212
            , L"Barbados 1938"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(31.9499999999999993, 300.9900000000000091, 419.1899999999999977)),
            buildDatum(4211
            , L"Batavia"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(-377.0, 681.0, -50.0)),
            buildDatum(4813
            , L"Batavia (Jakarta)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Longitude(106.8077194444440039)),
            buildDatum(4762
            , L"BDA2000"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4213
            , L"Beduaram"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-106.0, -87.0, 188.0)),
            buildDatum(4214
            , L"Beijing 1954"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-31.3999999999999986, 144.3000000000000114, 81.2000000000000028)),
            buildDatum(4215
            , L"Belge 1950"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4809
            , L"Belge 1950 (Brussels)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Longitude(4.3679750000000004)),
            buildDatum(4313
            , L"Belge 1972"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(-1.0)
            , Delta(-99.0589999999999975, 53.3220000000000027, -112.4860000000000042)
            , Rotation(0.419, -0.83, 1.885)),
            buildDatum(4714
            , L"Bellevue"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-127.0, -769.0, 472.0)),
            buildDatum(4216
            , L"Bermuda 1957"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-73.0, 213.0, 296.0)),
            buildDatum(4801
            , L"Bern 1898 (Bern)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Longitude(7.4395833333333297)),
            buildDatum(4306
            , L"Bern 1938"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4165
            , L"Bissau"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-173.0, 253.0, 27.0)),
            buildDatum(4218
            , L"Bogota 1975"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(307.0, 304.0, -318.0)),
            buildDatum(4802
            , L"Bogota 1975 (Bogota)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(307.0, 304.0, -318.0)
            , Longitude(-74.0698055555555044)),
            buildDatum(4219
            , L"Bukit Rimpah"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(-384.0, 664.0, -48.0)),
            buildDatum(4475
            , L"Cadastre 1997"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-381.7880000000000109, -57.5009999999999977, -256.6730000000000018)),
            buildDatum(4220
            , L"Camacupa"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-42.009999999999998, -332.2099999999999795, -229.75)),
            buildDatum(4715
            , L"Camp Area Astro"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-104.0, -129.0, 239.0)),
            buildDatum(4221
            , L"Campo Inchauspe"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-148.0, 136.0, 90.0)),
            buildDatum(4222
            , L"Cape"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.4663077000000158)
            , Delta(-136.0, -108.0, -292.0)),
            buildDatum(4717
            , L"Cape Canaveral"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-2.0, 151.0, 181.0)),
            buildDatum(4223
            , L"Carthage"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-263.0, 6.0, 431.0)),
            buildDatum(4816
            , L"Carthage (Paris)"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-263.0, 6.0, 431.0)
            , Longitude(2.3372291700000001)),
            buildDatum(50001
            , L"CGRS93"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(104.0, -15.0, 140.0)),
            buildDatum(4149
            , L"CH1903"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(674.3999999999999773, 15.0999999999999996, 405.3000000000000114)),
            buildDatum(4150
            , L"CH1903+"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(674.3740000000000236, 15.0559999999999992, 405.3460000000000036)),
            buildDatum(4672
            , L"Chatham Islands 1971"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(175.0, -38.0, 113.0)),
            buildDatum(4673
            , L"Chatham Islands 1979"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(0.2263)
            , Delta(174.0500000000000114, -25.4899999999999984, 112.5699999999999932)
            , Rotation(0.0, 0.0, -0.554)),
            buildDatum(50140
            , L"Chilean 1963"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(16.0, 196.0, 93.0)),
            buildDatum(4490
            , L"China Geodetic Coordinate System 2000"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4160
            , L"Chos Malal 1914"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4151
            , L"CHTRF95"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4224
            , L"Chua"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-134.0, 229.0, -29.0)),
            buildDatum(4708
            , L"Cocos Islands 1965"
            , AxisA(6378160.0)
            , InverseFlattening(298.25)
            , Delta(-491.0, -22.0, 435.0)),
            buildDatum(4632
            , L"Combani 1950"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-382.0, -59.0, -262.0)),
            buildDatum(4315
            , L"Conakry 1905"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-23.0, 259.0, -9.0)),
            buildDatum(5524
            , L"Corrego Alegre 1961"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4225
            , L"Corrego Alegre 1970-72"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-206.0, 172.0, -6.0)),
            buildDatum(5365
            , L"Costa Rica 2005"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4226
            , L"Cote d'Ivoire"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)),
            buildDatum(50003
            , L"Crozet 1963"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4623
            , L"CSG67"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-186.0, 230.0, 110.0)),
            buildDatum(4155
            , L"Dabola 1981"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-83.0, 37.0, 124.0)),
            buildDatum(4274
            , L"Datum 73"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-223.2369999999999948, 110.1929999999999978, 36.6490000000000009)),
            buildDatum(5681
            , L"DB_REF"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , DatumScale(7.9922000000000004)
            , Delta(584.9636000000000422, 107.7175000000000011, 413.806699999999978)
            , Rotation(-1.155, -0.2824, 3.1383999999999999)),
            buildDatum(4316
            , L"Dealul Piscului 1930"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(103.25, -100.4000000000000057, -307.1899999999999977)),
            buildDatum(4317
            , L"Dealul Piscului 1970"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)),
            buildDatum(4736
            , L"Deception Island"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(260.0, 12.0, -147.0)),
            buildDatum(4227
            , L"Deir ez Zor"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-187.5, 14.0999999999999996, 237.5999999999999943)),
            buildDatum(4755
            , L"DGN95"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4314
            , L"DHDN"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , DatumScale(6.7000000000000002)
            , Delta(598.1000000000000227, 73.7000000000000028, 418.1999999999999886)
            , Rotation(0.202, 0.045, -2.4550000000000001)),
            buildDatum(50132
            , L"DHDN (NTv2)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4724
            , L"Diego Garcia 1969"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(208.0, -435.0, -229.0)),
            buildDatum(4602
            , L"Dominica 1945"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(725.0, 685.0, 536.0)),
            buildDatum(4228
            , L"Douala"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)),
            buildDatum(4192
            , L"Douala 1948"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-206.0999999999999943, -174.6999999999999886, -87.7000000000000028)),
            buildDatum(5264
            , L"DRUKREF 03"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4719
            , L"Easter Island 1967"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(211.0, 147.0, 111.0)),
            buildDatum(4230
            , L"ED50"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-87.0, -98.0, -121.0)),
            buildDatum(50113
            , L"ED50 Cyprus"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-104.0, -101.0, -140.0)),
            buildDatum(50114
            , L"ED50 Egypt"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-130.0, -117.0, -151.0)),
            buildDatum(50121
            , L"ED50 Finland"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-87.0, -95.0, -120.0)),
            buildDatum(50115
            , L"ED50 Greece"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-84.0, -95.0, -130.0)),
            buildDatum(50116
            , L"ED50 Iran"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-117.0, -132.0, -164.0)),
            buildDatum(50117
            , L"ED50 Ireland"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-86.0, -96.0, -120.0)),
            buildDatum(50118
            , L"ED50 Malta"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-107.0, -88.0, -149.0)),
            buildDatum(50119
            , L"ED50 Middle East"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-103.0, -106.0, -141.0)),
            buildDatum(50120
            , L"ED50 Norway"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-87.0, -95.0, -120.0)),
            buildDatum(50122
            , L"ED50 Portugal"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-84.0, -107.0, -120.0)),
            buildDatum(50124
            , L"ED50 Sardinia"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-97.0, -103.0, -120.0)),
            buildDatum(50125
            , L"ED50 Sicily"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-97.0, -88.0, -135.0)),
            buildDatum(50123
            , L"ED50 Spain"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-84.0, -107.0, -120.0)),
            buildDatum(50126
            , L"ED50 Tunisia"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-112.0, -77.0, -145.0)),
            buildDatum(50127
            , L"ED50 United Kingdom"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-86.0, -96.0, -120.0)),
            buildDatum(50128
            , L"ED50 Western Europe"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-87.0, -96.0, -120.0)),
            buildDatum(4154
            , L"ED50(ED77)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(0.063)
            , Delta(-110.3299999999999983, -97.730000000000004, -119.8499999999999943)
            , Rotation(0.3423, 1.1634, 0.2715)),
            buildDatum(4668
            , L"ED79"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-86.0, -98.0, -119.0)),
            buildDatum(4231
            , L"ED87"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(-0.3143)
            , Delta(-82.9809999999999945, -99.7189999999999941, -110.7090000000000032)
            , Rotation(-0.104719770773639, 0.0310074498567335, 0.0804171919770774)),
            buildDatum(50004
            , L"EFATE-IGN 1957"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-127.0, -769.0, 472.0)),
            buildDatum(4229
            , L"Egypt 1907"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-130.0, 110.0, -13.0)),
            buildDatum(4199
            , L"Egypt 1930"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4706
            , L"Egypt Gulf of Suez S-650 TL"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-146.210000000000008, 112.6299999999999955, 4.0499999999999998)),
            buildDatum(4159
            , L"ELD79"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-69.0600000000000023, -90.7099999999999937, -142.5600000000000023)),
            buildDatum(4133
            , L"EST92"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)
            , DatumScale(-0.014)
            , Delta(0.055, -0.541, -0.185)
            , Rotation(0.0183, -0.0003, -0.007)),
            buildDatum(4180
            , L"EST97"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4258
            , L"ETRS89"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4232
            , L"Fahud"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-346.0, -1.0, 224.0)),
            buildDatum(4688
            , L"Fatu Iva 72"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(186.0740000000000123)
            , Delta(347.1030000000000086, 1078.125, 2623.9220000000000255)
            , Rotation(-33.8879999999999981, 70.6770000000000067, -9.3940000000000001)),
            buildDatum(4741
            , L"FD54"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4132
            , L"FD58"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-241.539999999999992, -163.6399999999999864, 396.0600000000000023)),
            buildDatum(5593
            , L"FEH2010"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4721
            , L"Fiji 1956"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(265.0249999999999773, 384.9289999999999736, -194.0459999999999923)),
            buildDatum(4720
            , L"Fiji 1986"
            , AxisA(6378135.0)
            , InverseFlattening(298.2599999999999909)
            , DatumScale(0.2263)
            , Delta(0.0, 0.0, 4.5)
            , Rotation(0.0, 0.0, 0.554)),
            buildDatum(4753
            , L"fk89"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4621
            , L"Fort Marigot"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(137.0, 248.0, -430.0)),
            buildDatum(4684
            , L"Gan 1970"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-133.0, -321.0, 50.0)),
            buildDatum(4685
            , L"Gandajika"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4233
            , L"Gandajika 1970"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-133.0, -321.0, 50.0)),
            buildDatum(4197
            , L"Garoua"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(4234
            , L"Garoua"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)),
            buildDatum(4283
            , L"GDA94"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(7844
            , L"GDA2020"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(5246
            , L"GDBD2009"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4742
            , L"GDM2000"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4121
            , L"GGRS87"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)
            , Delta(-199.8700000000000045, 74.7900000000000063, 246.6200000000000045)),
            buildDatum(4747
            , L"GR96"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4723
            , L"Grand Cayman 1959"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(67.7999999999999972, 106.0999999999999943, 138.8000000000000114)),
            buildDatum(4646
            , L"Grand Comoros"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4120
            , L"Greek"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4815
            , L"Greek (Athens)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Longitude(23.7052263888888994)),
            buildDatum(4603
            , L"Grenada 1953"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(72.0, 213.6999999999999886, 93.0)),
            buildDatum(4622
            , L"Guadeloupe 1948"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-467.0, -16.0, -300.0)),
            buildDatum(50005
            , L"Guadeloupe Fort Marigot"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(136.5960000000000036, 248.1479999999999961, -429.7889999999999873)),
            buildDatum(50006
            , L"Guadeloupe Ste Anne"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(1.8984000000000001)
            , Delta(-472.2900000000000205, -5.6299999999999999, -304.1200000000000045)
            , Rotation(0.4362, -0.8374, 0.2563)),
            buildDatum(4675
            , L"Guam 1963"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-100.0, -248.0, 259.0)),
            buildDatum(4682
            , L"Gulshan 303"
            , AxisA(6377276.3449999997392297)
            , InverseFlattening(300.8016999999999825)
            , Delta(283.6999999999999886, 735.8999999999999773, 261.1000000000000227)),
            buildDatum(50137
            , L"GUX1 Astro"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(252.0, -209.0, -751.0)),
            buildDatum(50007
            , L"Guyane CSG67 UTM fuseau 21"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(1.5649)
            , Delta(-193.0660000000000025, 236.992999999999995, 105.4470000000000027)
            , Rotation(0.4814, -0.8074, 0.1276)),
            buildDatum(4235
            , L"Guyane Francaise"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4147
            , L"Hanoi 1972"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-17.5100000000000016, -108.3199999999999932, -62.3900000000000006)),
            buildDatum(4148
            , L"Hartebeesthoek94"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(3819
            , L"HD1909"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , DatumScale(-3.4079999999999999)
            , Delta(595.4800000000000182, 121.6899999999999977, 515.3500000000000227)
            , Rotation(-4.1150000000000002, 2.9382999999999999, -0.853)),
            buildDatum(4237
            , L"HD72"
            , AxisA(6378160.0)
            , InverseFlattening(298.2471674270000221)
            , DatumScale(1.0190999999999999)
            , Delta(52.6839999999999975, -71.1940000000000026, -13.9749999999999996)
            , Rotation(0.312, 0.1063, 0.3729)),
            buildDatum(4660
            , L"Helle 1954"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(16.8049999999999997)
            , Delta(982.6086999999999989, 552.7530000000000427, -540.8730000000000473)
            , Rotation(6.6828873352435503, -31.6174569627507012, -19.8519060171920003)),
            buildDatum(4255
            , L"Herat North"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-333.0, -222.0, 114.0)),
            buildDatum(4254
            , L"Hito XVIII 1963"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(-0.0013)
            , Delta(18.379999999999999, 192.4499999999999886, 96.8199999999999932)
            , Rotation(0.056, -0.142, -0.2)),
            buildDatum(4658
            , L"Hjorsey 1955"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-73.0, 46.0, -86.0)),
            buildDatum(104105
            , L"Hong Kong 1924 (HKNT24)"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(4738
            , L"Hong Kong 1963"
            , AxisA(6378293.6452087592333555)
            , InverseFlattening(294.2606763692609775)),
            buildDatum(4739
            , L"Hong Kong 1963(67)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-156.0, -271.0, -189.0)),
            buildDatum(4611
            , L"Hong Kong 1980"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(-1.0942460000000001)
            , Delta(-162.6189999999999998, -276.9590000000000032, -161.76400000000001)
            , Rotation(0.067753, -2.243649, -1.1588270000000001)),
            buildDatum(4761
            , L"HTRS96"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4236
            , L"Hu Tzu Shan 1950"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-637.0, -549.0, -203.0)),
            buildDatum(4238
            , L"ID74"
            , AxisA(6378160.0)
            , InverseFlattening(298.2470000000000141)
            , Delta(-24.0, -15.0, 5.0)),
            buildDatum(4697
            , L"IGC 1962 6th Parallel South"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(4701
            , L"IGCB 1955"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-79.9000000000000057, -158.0, -168.9000000000000057)),
            buildDatum(4670
            , L"IGM95"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4698
            , L"IGN 1962 Kerguelen"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(145.0, -187.0, 103.0)),
            buildDatum(50008
            , L"IGN 1963 (Hiva, Oa, Mohotani)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(17.3310999999999993)
            , Delta(410.7210000000000036, 55.0489999999999995, 80.7459999999999951)
            , Rotation(-2.5779000000000001, -2.3513999999999999, -0.6664)),
            buildDatum(50009
            , L"IGN 1972 (Eiao, Hiva Oa, Mohotani) Marquises"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(327.839999999999975, -14.9600000000000009, 59.3299999999999983)),
            buildDatum(50010
            , L"IGN 1972 Grande-Terre / Ile des Pins"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-11.6400000000000006, -348.6000000000000227, 291.6800000000000068)),
            buildDatum(50011
            , L"IGN 1972 Nuku Hiva"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(7.4203999999999999)
            , Delta(165.7319999999999993, 216.7199999999999989, 180.5049999999999955)
            , Rotation(-0.6434, -0.4512, -0.0791)),
            buildDatum(4700
            , L"IGN Astro 1960"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(50012
            , L"IGN53 (IGN Raiatea-Tahaa) Raiatea-Bora-Huahine"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(65.0300000000000011, 341.5500000000000114, 76.6700000000000017)),
            buildDatum(4641
            , L"IGN53 Mare"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(-121.0992999999999995)
            , Delta(-408.8090000000000259, 366.8559999999999945, -412.9870000000000232)
            , Rotation(1.8842000000000001, -0.5308, 2.1655000000000002)),
            buildDatum(4633
            , L"IGN56 Lifou"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(336.0, 223.0, -231.0)),
            buildDatum(4689
            , L"IGN63 Hiva Oa"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(17.3310999999999993)
            , Delta(410.7210000000000036, 55.0489999999999995, 80.7459999999999951)
            , Rotation(-2.5779000000000001, -2.3513999999999999, -0.6664)),
            buildDatum(4634
            , L"IGN72 Grand Terre"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4662
            , L"IGN72 Grande Terre"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-13.0, -348.0, 292.0)),
            buildDatum(4630
            , L"IGN72 Nuku Hiva"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(7.4203999999999999)
            , Delta(165.7319999999999993, 216.7199999999999989, 180.5049999999999955)
            , Rotation(-0.6434, -0.4512, -0.0791)),
            buildDatum(50013
            , L"IGN79 (Tahiti) Iles de la Societe"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(11.4741)
            , Delta(221.5250000000000057, 152.9480000000000075, 176.7680000000000007)
            , Rotation(2.3847, 1.3895999999999999, 0.877)),
            buildDatum(3889
            , L"IGRS"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4667
            , L"IKBD-92"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4239
            , L"Indian 1954"
            , AxisA(6377276.3449999997392297)
            , InverseFlattening(300.8016999999999825)
            , Delta(217.0, 823.0, 299.0)),
            buildDatum(4131
            , L"Indian 1960"
            , AxisA(6377276.3449999997392297)
            , InverseFlattening(300.8016999999999825)
            , Delta(198.0, 881.0, 317.0)),
            buildDatum(4240
            , L"Indian 1975"
            , AxisA(6377276.3449999997392297)
            , InverseFlattening(300.8016999999999825)
            , Delta(209.0, 818.0, 290.0)),
            buildDatum(4173
            , L"IRENET95"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(5324
            , L"ISN2004"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4659
            , L"ISN93"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4141
            , L"Israel"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)
            , Delta(-48.0, 55.0, 52.0)),
            buildDatum(4919
            , L"ITRF2000"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4910
            , L"ITRF88"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4911
            , L"ITRF89"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4912
            , L"ITRF90"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)
            , DatumScale(-0.011)
            , Delta(0.06, -0.517, -0.223)
            , Rotation(0.0183, -0.0003, 0.007)),
            buildDatum(4913
            , L"ITRF91"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4914
            , L"ITRF92"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4915
            , L"ITRF93"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4916
            , L"ITRF94"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4917
            , L"ITRF96"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4918
            , L"ITRF97"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4709
            , L"Iwo Jima 1945"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(145.0, 75.0, -272.0)),
            buildDatum(4758
            , L"JAD2001"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4242
            , L"JAD69"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(70.0, 207.0, 389.5)),
            buildDatum(4241
            , L"Jamaica 1875"
            , AxisA(6378249.1448080111294985)
            , InverseFlattening(293.4663076556299757)),
            buildDatum(4612
            , L"JGD2000"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(6668
            , L"JGD2011"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4725
            , L"Johnston Island 1961"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(189.0, -79.0, -202.0)),
            buildDatum(4679
            , L"Jouik 1961"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-80.0100000000000051, 253.2599999999999909, 291.1899999999999977)),
            buildDatum(4631
            , L"K0 1949"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(145.0, -187.0, 103.0)),
            buildDatum(4243
            , L"Kalianpur 1880"
            , AxisA(6377299.3655953798443079)
            , InverseFlattening(300.8017255433612149)),
            buildDatum(4144
            , L"Kalianpur 1937"
            , AxisA(6377276.3449999997392297)
            , InverseFlattening(300.8016999999999825)
            , Delta(282.0, 726.0, 254.0)),
            buildDatum(4145
            , L"Kalianpur 1962"
            , AxisA(6377301.2429999997839332)
            , InverseFlattening(300.801725499999975)
            , Delta(283.0, 682.0, 231.0)),
            buildDatum(4146
            , L"Kalianpur 1975"
            , AxisA(6377299.1509999996051192)
            , InverseFlattening(300.801725499999975)
            , Delta(295.0, 736.0, 257.0)),
            buildDatum(4244
            , L"Kandawala"
            , AxisA(6377276.3449999997392297)
            , InverseFlattening(300.8016999999999825)
            , Delta(-97.0, 787.0, 86.0)),
            buildDatum(4743
            , L"Karbala 1979"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(84.0999999999999943, -320.1000000000000227, 218.6999999999999886)),
            buildDatum(4696
            , L"Kasai 1953"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(4695
            , L"Katanga 1955"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-103.7459999999999951, -9.6140000000000008, -255.9499999999999886)),
            buildDatum(50014
            , L"Kerguelen - K0"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(145.0, -187.0, 103.0)),
            buildDatum(4751
            , L"Kertau (RSO)"
            , AxisA(6377295.6639999998733401)
            , InverseFlattening(300.8016999999999825)),
            buildDatum(4245
            , L"Kertau 1968"
            , AxisA(6377304.0630000000819564)
            , InverseFlattening(300.8016999999999825)
            , Delta(-11.0, 851.0, 5.0)),
            buildDatum(4123
            , L"KKJ"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(1.3700000000000001)
            , Delta(-90.7000000000000028, -106.0999999999999943, -119.2000000000000028)
            , Rotation(4.0899999999999999, 0.218, -1.05)),
            buildDatum(4246
            , L"KOC"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-294.6999999999999886, -200.0999999999999943, 525.5)),
            buildDatum(4737
            , L"Korea 2000"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4162
            , L"Korean 1985"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4166
            , L"Korean 1995"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4198
            , L"Kousseri"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(4319
            , L"KUDAMS"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)
            , Delta(-20.8000000000000007, 11.3000000000000007, 2.3999999999999999)),
            buildDatum(4735
            , L"Kusaie 1951"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(647.0, 1777.0, -1124.0)),
            buildDatum(4247
            , L"La Canoa"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-273.5, 110.5999999999999943, -357.8999999999999773)),
            buildDatum(4249
            , L"Lake"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4677
            , L"Lao 1993"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)),
            buildDatum(4678
            , L"Lao 1997"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(44.5850000000000009, -131.2119999999999891, -39.5439999999999969)),
            buildDatum(4699
            , L"Le Pouce 1934"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-770.1000000000000227, 158.4000000000000057, -498.1999999999999886)),
            buildDatum(4250
            , L"Leigon"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-130.0, 29.0, 364.0)),
            buildDatum(4754
            , L"LGD2006"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-208.4057999999999993, -109.8777000000000044, -2.5764)),
            buildDatum(4251
            , L"Liberia 1964"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-90.0, 40.0, 88.0)),
            buildDatum(50015
            , L"Lifou - Iles Loyaute (IGN56)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(336.0, 223.0, -231.0)),
            buildDatum(4207
            , L"Lisbon"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-304.0459999999999923, -60.5760000000000005, 103.6400000000000006)),
            buildDatum(4803
            , L"Lisbon (Lisbon)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-304.0459999999999923, -60.5760000000000005, 103.6400000000000006)
            , Longitude(-9.1319061111111122)),
            buildDatum(4666
            , L"Lisbon 1890"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(508.0880000000000223, -191.0420000000000016, 565.2229999999999563)),
            buildDatum(4904
            , L"Lisbon 1890 (Lisbon)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(508.0880000000000223, -191.0420000000000016, 565.2229999999999563)
            , Longitude(-9.1319061111111122)),
            buildDatum(4726
            , L"Little Cayman 1961"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(42.0, 124.0, 147.0)),
            buildDatum(4661
            , L"LKS92"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4669
            , L"LKS94"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4126
            , L"LKS94 (ETRS89)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4142
            , L"Locodjo 1965"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-125.0, 53.0, 467.0)),
            buildDatum(4288
            , L"Loma Quintana"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4252
            , L"Lome"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)),
            buildDatum(4181
            , L"Luxembourg 1930"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(0.43)
            , Delta(-193.0, 13.6999999999999993, -39.2999999999999972)
            , Rotation(-0.41, -2.9329999999999998, 2.6880000000000002)),
            buildDatum(50138
            , L"Luzon (Mindanao)"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-133.0, -79.0, -72.0)),
            buildDatum(4253
            , L"Luzon 1911"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-133.0, -77.0, -51.0)),
            buildDatum(4185
            , L"Madeira 1936"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4903
            , L"Madrid 1870 (Madrid)"
            , AxisA(6378298.2999999998137355)
            , InverseFlattening(294.7300000000000182)
            , Longitude(-3.68793888888889)),
            buildDatum(4128
            , L"Madzansua"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(4686
            , L"MAGNA-SIRGAS"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4256
            , L"Mahe 1971"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(41.0, -220.0, -134.0)),
            buildDatum(4257
            , L"Makassar"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(-587.7999999999999545, 519.75, 145.7599999999999909)),
            buildDatum(4804
            , L"Makassar (Jakarta)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(-587.7999999999999545, 519.75, 145.7599999999999909)
            , Longitude(106.8077194444440039)),
            buildDatum(4259
            , L"Malongo 1987"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-254.0999999999999943, -5.3600000000000003, -100.2900000000000063)),
            buildDatum(4260
            , L"Manoca"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-70.9000000000000057, -151.8000000000000114, -41.3999999999999986)),
            buildDatum(4193
            , L"Manoca 1962"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-70.9000000000000057, -151.8000000000000114, -41.3999999999999986)),
            buildDatum(4711
            , L"Marcus Island 1952"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(124.0, -234.0, -25.0)),
            buildDatum(50024
            , L"Mare - Iles Loyaute (IGN53)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(287.0, 178.0, -136.0)),
            buildDatum(5354
            , L"MARGEN"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4732
            , L"Marshall Islands 1960"
            , AxisA(6378270.0)
            , InverseFlattening(297.0)
            , Delta(102.0, 52.0, -38.0)),
            buildDatum(4625
            , L"Martinique 1938"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(186.0, 482.0, 151.0)),
            buildDatum(50025
            , L"Martinique Fort-Desaix"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(13.8226499999999994)
            , Delta(126.9260000000000019, 547.9389999999999645, 130.4089999999999918)
            , Rotation(-2.7867000000000002, 5.1612, -0.8584000000000001)),
            buildDatum(4262
            , L"Massawa"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(639.0, 405.0, 60.0)),
            buildDatum(4692
            , L"Maupiti 83"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(217.0370000000000061, 86.9590000000000032, 23.9559999999999995)),
            buildDatum(4702
            , L"Mauritania 1999"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4681
            , L"Mauritania 1999"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(50026
            , L"Mayotte Combani"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(49.2813999999999979)
            , Delta(-599.9279999999999973, -275.5520000000000209, -195.664999999999992)
            , Rotation(-0.0835, -0.4715, 0.0602)),
            buildDatum(4261
            , L"Merchich"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(31.0, 146.0, 47.0)),
            buildDatum(4483
            , L"Mexican Datum of 1993"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4312
            , L"MGI"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , DatumScale(2.4232)
            , Delta(577.3260000000000218, 90.1290000000000049, 463.9189999999999827)
            , Rotation(5.1369999999999996, 1.474, 5.2969999999999997)),
            buildDatum(4805
            , L"MGI (Ferro)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Longitude(-17.6666666666666998)),
            buildDatum(3906
            , L"MGI 1901"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(682.0, -203.0, 480.0)),
            buildDatum(4264
            , L"Mhast"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-252.9499999999999886, -4.1100000000000003, -96.3799999999999955)),
            buildDatum(4705
            , L"Mhast (offshore)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-252.9499999999999886, -4.1100000000000003, -96.3799999999999955)),
            buildDatum(4704
            , L"Mhast (onshore)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-252.9499999999999886, -4.1100000000000003, -96.3799999999999955)),
            buildDatum(4703
            , L"Mhast 1951"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(50016
            , L"MHEFO 1955 (Fatu Huku)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(186.0740000000000123)
            , Delta(347.1030000000000086, 1078.125, 2623.9220000000000255)
            , Rotation(33.8875000000000028, -70.6773000000000025, 9.3942999999999994)),
            buildDatum(50017
            , L"MHPF 1969 (Tubuai) Iles Australes"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(237.1699999999999875, 171.6100000000000136, -77.8400000000000034)),
            buildDatum(50018
            , L"MHPF67 (Mangereva, Agakauitai, Aukena, Mekiro) Gambiers (Iles)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(338.0799999999999841, 212.5800000000000125, -296.1700000000000159)),
            buildDatum(50019
            , L"MHPF70 (Kauehi) Tuamotu"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(126.7399999999999949, 300.1000000000000227, -75.4899999999999949)),
            buildDatum(4727
            , L"Midway 1961"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(912.0, -58.0, 1227.0)),
            buildDatum(4263
            , L"Minna"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-81.0, -84.0, 115.0)),
            buildDatum(4023
            , L"MOLDREF99"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4265
            , L"Monte Mario"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-225.0, -65.0, 9.0)),
            buildDatum(4806
            , L"Monte Mario (Rome)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-225.0, -65.0, 9.0)
            , Longitude(12.4523333333332999)),
            buildDatum(50139
            , L"Montjong Lowe"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4604
            , L"Montserrat 1958"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(174.0, 359.0, 365.0)),
            buildDatum(50027
            , L"Moorea 1987"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(10.4772999999999996)
            , Delta(215.9819999999999993, 149.5929999999999893, 176.2290000000000134)
            , Rotation(3.2624, 1.6919999999999999, 1.1571)),
            buildDatum(4691
            , L"Moorea 87"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(10.4772999999999996)
            , Delta(215.5250000000000057, 149.5929999999999893, 176.2290000000000134)
            , Rotation(3.2624, 1.6919999999999999, 1.1571)),
            buildDatum(4639
            , L"MOP78"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(253.0, -132.0, -127.0)),
            buildDatum(50020
            , L"MOP84 (Fangataufa 1984)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(150.5699999999999932, 158.3300000000000125, 118.3199999999999932)),
            buildDatum(50021
            , L"MOP86 (Apataki, Rapa, Hao) Tuamotu"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(216.8400000000000034, 118.8100000000000023, 19.6099999999999994)),
            buildDatum(50022
            , L"MOP90 (Tetiaroa) Iles de la Societe"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(217.0370000000000061, 86.9590000000000032, 23.9559999999999995)),
            buildDatum(50023
            , L"MOP92 (Anaa) Tuamotu"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(1.5, 3.8399999999999999, 4.8099999999999996)),
            buildDatum(4157
            , L"Mount Dillon"
            , AxisA(6378293.6452087592333555)
            , InverseFlattening(294.2606763692609775)),
            buildDatum(4130
            , L"Moznet"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4266
            , L"M'poraloko"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-74.0, -130.0, 42.0)),
            buildDatum(4267
            , L"NAD27"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-8.0, 160.0, 176.0)),
            buildDatum(50030
            , L"NAD27 (NADCON)"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(50031
            , L"NAD27 Aleutian Islands"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-2.0, 0.0, 4.0)),
            buildDatum(50032
            , L"NAD27 Aleutian Islands - East"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-2.0, 152.0, 149.0)),
            buildDatum(50033
            , L"NAD27 Aleutian Islands - West"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(2.0, 204.0, 105.0)),
            buildDatum(50034
            , L"NAD27 Bahamas"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-4.0, 154.0, 178.0)),
            buildDatum(50038
            , L"NAD27 Canada"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-10.0, 158.0, 187.0)),
            buildDatum(50035
            , L"NAD27 Canada - Alberta and British Columbia"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-7.0, 162.0, 188.0)),
            buildDatum(50036
            , L"NAD27 Canada - East"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-22.0, 160.0, 190.0)),
            buildDatum(50037
            , L"NAD27 Canada - Manitoba / Ontario"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-9.0, 157.0, 184.0)),
            buildDatum(50039
            , L"NAD27 Canada - NW Territories and Saskatchewan"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(4.0, 159.0, 188.0)),
            buildDatum(50040
            , L"NAD27 Canada - Yukon"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-7.0, 139.0, 181.0)),
            buildDatum(50129
            , L"NAD27 Canada (NTv2)"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(50041
            , L"NAD27 Canal Zone"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(0.0, 125.0, 201.0)),
            buildDatum(50042
            , L"NAD27 Carribbean"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-3.0, 143.0, 183.0)),
            buildDatum(50044
            , L"NAD27 Central America - East"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-3.0, 142.0, 183.0)),
            buildDatum(50059
            , L"NAD27 Central America - West"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(0.0, 125.0, 194.0)),
            buildDatum(104104
            , L"NAD27 Conus"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-3.0, 142.0, 183.0)),
            buildDatum(50043
            , L"NAD27 Cuba"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-9.0, 152.0, 178.0)),
            buildDatum(50046
            , L"NAD27 Greenland"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(11.0, 114.0, 195.0)),
            buildDatum(50047
            , L"NAD27 Hawaii"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(1.0, 1.0, -1.0)),
            buildDatum(50048
            , L"NAD27 Hawaii (NADCON)"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(50049
            , L"NAD27 Mexico"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-12.0, 130.0, 190.0)),
            buildDatum(4268
            , L"NAD27 Michigan"
            , AxisA(6378450.047548895701766)
            , InverseFlattening(294.9786971646739744)),
            buildDatum(50054
            , L"NAD27 Old Hawaiian"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(61.0, -285.0, -181.0)),
            buildDatum(50050
            , L"NAD27 Old Hawaiian - Hawaii"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(89.0, -279.0, -183.0)),
            buildDatum(50051
            , L"NAD27 Old Hawaiian - Kauai"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(45.0, -290.0, -172.0)),
            buildDatum(50052
            , L"NAD27 Old Hawaiian - Maui"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(65.0, -290.0, -190.0)),
            buildDatum(50053
            , L"NAD27 Old Hawaiian - Oahu"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(58.0, -283.0, -182.0)),
            buildDatum(50055
            , L"NAD27 Puerto Rico and Virgin Islands (NADCON)"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(50056
            , L"NAD27 San Salvador"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(0.0, 125.0, 194.0)),
            buildDatum(50110
            , L"NAD27 St. George (NADCON)"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(50057
            , L"NAD27 St. Lawrence (NADCON)"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(50058
            , L"NAD27 St. Paul (NADCON)"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(50045
            , L"NAD27 United States - Eastern"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-9.0, 161.0, 179.0)),
            buildDatum(50060
            , L"NAD27 United States - Western"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-8.0, 159.0, 175.0)),
            buildDatum(4608
            , L"NAD27(76)"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(4609
            , L"NAD27(CGQ77)"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(4269
            , L"NAD83"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50061
            , L"NAD83 Alabama (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50062
            , L"NAD83 Arizona (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50063
            , L"NAD83 Arkansas (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50064
            , L"NAD83 California - North (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50065
            , L"NAD83 California - South (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50066
            , L"NAD83 Colorado (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50109
            , L"NAD83 Connecticut (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50067
            , L"NAD83 Florida (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50068
            , L"NAD83 Georgia (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50069
            , L"NAD83 Hawaii (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50070
            , L"NAD83 Idaho and Montana - East (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50071
            , L"NAD83 Idaho and Montana - West (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50072
            , L"NAD83 Illinois (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50073
            , L"NAD83 Indiana (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50074
            , L"NAD83 Iowa (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50075
            , L"NAD83 Kansas (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50076
            , L"NAD83 Kentucky (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50077
            , L"NAD83 Louisiana (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50078
            , L"NAD83 Maine (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50079
            , L"NAD83 Maryland and Delaware (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50107
            , L"NAD83 Massachusetts (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50080
            , L"NAD83 Michigan (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50081
            , L"NAD83 Minnesota (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50082
            , L"NAD83 Mississippi (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50083
            , L"NAD83 Montana (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50084
            , L"NAD83 Nebreska (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50085
            , L"NAD83 Nevada (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50086
            , L"NAD83 New England (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50105
            , L"NAD83 New Hampshire (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50087
            , L"NAD83 New Jersey (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50088
            , L"NAD83 New Mexico (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50089
            , L"NAD83 New York (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50111
            , L"NAD83 North Carolina (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50090
            , L"NAD83 North Dakota (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50091
            , L"NAD83 Ohio (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50092
            , L"NAD83 Oklahoma (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50093
            , L"NAD83 Pennsylvania (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50094
            , L"NAD83 Puerto Rico and Virgin Islands (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50108
            , L"NAD83 Rhode Island (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50112
            , L"NAD83 South Carolina (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50095
            , L"NAD83 South Dakota (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50096
            , L"NAD83 Tennessee (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50097
            , L"NAD83 Texas - East (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50098
            , L"NAD83 Texas - West (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50099
            , L"NAD83 Utah (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50106
            , L"NAD83 Vermont (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50100
            , L"NAD83 Virginia (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50101
            , L"NAD83 Washington and Oregon (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50102
            , L"NAD83 West Virginia (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50103
            , L"NAD83 Wisconsin (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50104
            , L"NAD83 Wyoming (HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4617
            , L"NAD83(CSRS)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4140
            , L"NAD83(CSRS98)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4152
            , L"NAD83(HARN)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4759
            , L"NAD83(NSRS2007)"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(50155
            , L"Nahrwan (Oman)"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-247.0, -148.0, 369.0)),
            buildDatum(50156
            , L"Nahrwan (Saudi Arabia)"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-243.0, -192.0, 477.0)),
            buildDatum(50154
            , L"Nahrwan (United Arab Emirates)"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-249.0, -156.0, 381.0)),
            buildDatum(4744
            , L"Nahrwan 1934"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(4270
            , L"Nahrwan 1967"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-247.0, -148.0, 369.0)),
            buildDatum(4693
            , L"Nakhl-e Ghanem"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)
            , Delta(0.0, -0.15, 0.68)),
            buildDatum(4158
            , L"Naparima 1955"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-0.465, 372.0950000000000273, 171.73599999999999)),
            buildDatum(4271
            , L"Naparima 1972"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-10.0, 375.0, 165.0)),
            buildDatum(4902
            , L"NDG (Paris)"
            , AxisA(6376523.0)
            , InverseFlattening(308.6399999999999864)
            , Longitude(2.3372291700000001)),
            buildDatum(4644
            , L"NEA74 Noumea"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-10.1799999999999997, -350.4300000000000068, 291.3700000000000045)),
            buildDatum(4555
            , L"New Beijing"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)),
            buildDatum(4318
            , L"NGN"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)
            , Delta(-3.2000000000000002, -5.7000000000000002, 2.7999999999999998)),
            buildDatum(4273
            , L"NGO 1948"
            , AxisA(6377492.0180000001564622)
            , InverseFlattening(299.1528127999999924)
            , DatumScale(6.21)
            , Delta(278.3000000000000114, 93.0, 474.5)
            , Rotation(7.8890000000000002, 0.05, -6.6100000000000003)),
            buildDatum(4817
            , L"NGO 1948 (Oslo)"
            , AxisA(6377492.0180000001564622)
            , InverseFlattening(299.1528127999999924)
            , DatumScale(6.21)
            , Delta(278.3000000000000114, 93.0, 474.5)
            , Rotation(7.8890000000000002, 0.05, -6.6100000000000003)
            , Longitude(10.7229166666667002)),
            buildDatum(4307
            , L"Nord Sahara 1959"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-186.0, -93.0, 310.0)),
            buildDatum(4819
            , L"Nord Sahara 1959 (Paris)"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-186.0, -93.0, 310.0)
            , Longitude(2.3372291700000001)),
            buildDatum(4680
            , L"Nouakchott 1965"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(124.5, -63.5, -281.0)),
            buildDatum(4276
            , L"NSWC 9Z-2"
            , AxisA(6378145.0)
            , InverseFlattening(298.25)),
            buildDatum(4275
            , L"NTF"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-168.0, -60.0, 320.0)),
            buildDatum(50130
            , L"NTF (NTv2)"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)),
            buildDatum(4807
            , L"NTF (Paris)"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-168.0, -60.0, 320.0)
            , Longitude(2.3372291700000001)),
            buildDatum(50131
            , L"NTF (Paris) (NTv2)"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Longitude(2.3372291700000001)),
            buildDatum(4167
            , L"NZGD2000"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4272
            , L"NZGD49"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(-4.5993000000000004)
            , Delta(59.4699999999999989, -5.04, 187.4399999999999977)
            , Rotation(0.47, -0.1, 1.024)),
            buildDatum(50134
            , L"NZGD49 (NTv2)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4129
            , L"Observatario"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(-425.0, -169.0, 81.0)),
            buildDatum(5451
            , L"Ocotepeque 1935"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(213.1100000000000136, 9.3699999999999992, -74.9500000000000028)),
            buildDatum(4135
            , L"Old Hawaiian"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(61.0, -285.0, -181.0)),
            buildDatum(4279
            , L"OS(SN)80"
            , AxisA(6377563.3959999997168779)
            , InverseFlattening(299.3249645999999871)),
            buildDatum(4277
            , L"OSGB 1936"
            , AxisA(6377563.3959999997168779)
            , InverseFlattening(299.3249645999999871)
            , DatumScale(-20.4893999999999998)
            , Delta(446.4479999999999791, -125.1569999999999965, 542.0599999999999454)
            , Rotation(0.1502, 0.247, 0.8421)),
            buildDatum(104106
            , L"OSGB 1936 - NTv2"
            , AxisA(6377563.3959999997168779)
            , InverseFlattening(299.3249645999999871)),
            buildDatum(4278
            , L"OSGB70"
            , AxisA(6377563.3959999997168779)
            , InverseFlattening(299.3249645999999871)),
            buildDatum(4188
            , L"OSNI 1952"
            , AxisA(6377563.3959999997168779)
            , InverseFlattening(299.3249645999999871)
            , DatumScale(8.1500000000000004)
            , Delta(482.5, -130.5999999999999943, 564.6000000000000227)
            , Rotation(-1.042, -0.214, -0.631)),
            buildDatum(50028
            , L"Ouvea - Iles Loyaute (MHNC 1972 - OUVEA)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-13.0, -348.0, 292.0)),
            buildDatum(4280
            , L"Padang"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4808
            , L"Padang (Jakarta)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Longitude(106.8077194444440039)),
            buildDatum(4281
            , L"Palestine 1923"
            , AxisA(6378300.7889999998733401)
            , InverseFlattening(293.4663155389810072)
            , DatumScale(1.0)
            , Delta(-275.7223999999999933, 94.7823999999999955, 340.8944000000000187)
            , Rotation(-8.0009999999999994, -4.4199999999999999, -11.8209999999999997)),
            buildDatum(4161
            , L"Pampa del Castillo"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(27.4879999999999995, 14.0030000000000001, 186.4110000000000014)),
            buildDatum(5467
            , L"Panama-Colon 1911"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(4746
            , L"PD/83"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4637
            , L"Perroud 1950"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(325.0, 154.0, 172.0)),
            buildDatum(5373
            , L"Peru96"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4636
            , L"Petrels 1972"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(365.0, 194.0, 166.0)),
            buildDatum(4716
            , L"Phoenix Islands 1966"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(298.0, -304.0, -375.0)),
            buildDatum(4728
            , L"Pico de las Nieves 1984"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-307.0, -92.0, 127.0)),
            buildDatum(4729
            , L"Pitcairn 1967"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(185.0, 165.0, 42.0)),
            buildDatum(4763
            , L"Pitcairn 2006"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(5546
            , L"PNG94"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4620
            , L"Point 58"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-106.0, -129.0, 165.0)),
            buildDatum(50029
            , L"Pointe Geologie - Perroud 1950"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(324.8000000000000114, 153.5999999999999943, 172.0999999999999943)),
            buildDatum(4282
            , L"Pointe Noire"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-148.0, 51.0, -291.0)),
            buildDatum(4055
            , L"Popular Visualisation CRS"
            , AxisA(6378137.0)),
            buildDatum(4615
            , L"Porto Santo 1936"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-499.0, -249.0, 314.0)),
            buildDatum(4663
            , L"Porto Santo 1995"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-502.8620000000000232, -247.4379999999999882, 312.7239999999999895)),
            buildDatum(4172
            , L"POSGAR"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(5340
            , L"POSGAR 2007"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4694
            , L"POSGAR 94"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4190
            , L"POSGAR 98"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4824
            , L"Principe"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4683
            , L"PRS92"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , DatumScale(-1.0600000000000001)
            , Delta(-127.6200000000000045, -67.2399999999999949, -47.0399999999999991)
            , Rotation(3.0680000000000001, -4.9029999999999996, -1.5780000000000001)),
            buildDatum(4248
            , L"PSAD56"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-288.0, 175.0, -376.0)),
            buildDatum(4134
            , L"PSD93"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , DatumScale(16.7100599999999986)
            , Delta(-180.6239999999999952, -225.5159999999999911, 173.9190000000000111)
            , Rotation(-0.8100000000000001, -1.8979999999999999, 8.3360000000000003)),
            buildDatum(5013
            , L"PTRA08"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4139
            , L"Puerto Rico"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(11.0, 72.0, -101.0)),
            buildDatum(4284
            , L"Pulkovo 1942"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(28.0, -130.0, -95.0)),
            buildDatum(4179
            , L"Pulkovo 1942(58)"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)
            , DatumScale(-0.84)
            , Delta(33.3999999999999986, -146.5999999999999943, -76.2999999999999972)
            , Rotation(-0.359, -0.053, 0.844)),
            buildDatum(4178
            , L"Pulkovo 1942(83)"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)
            , DatumScale(1.1000000000000001)
            , Delta(24.0, -123.0, -94.0)
            , Rotation(-0.02, 0.25, 0.13)),
            buildDatum(4200
            , L"Pulkovo 1995"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)
            , DatumScale(-0.12)
            , Delta(24.8200000000000003, -131.210000000000008, -82.6599999999999966)
            , Rotation(0.0, 0.0, -0.16)),
            buildDatum(4740
            , L"PZ-90"
            , AxisA(6378136.0)
            , InverseFlattening(298.2578393030000257)
            , Delta(0.0, 0.0, 1.5)
            , Rotation(0.0, 0.0, -0.076)),
            buildDatum(4286
            , L"Qatar 1948"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)),
            buildDatum(4285
            , L"Qatar 1974"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-128.0, -283.0, 22.0)),
            buildDatum(4614
            , L"QND95"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(3.6570649999999998)
            , Delta(-119.4248000000000047, -303.6587200000000166, -11.00061)
            , Rotation(1.1642980000000001, 0.174458, 1.0962590000000001)),
            buildDatum(4287
            , L"Qornoq"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(164.0, 138.0, -189.0)),
            buildDatum(4194
            , L"Qornoq 1927"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(164.0, 138.0, -189.0)),
            buildDatum(4153
            , L"Rassadiran"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-133.6299999999999955, -157.5, -158.6200000000000045)),
            buildDatum(4745
            , L"RD/83"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4081
            , L"REGCAN95"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4189
            , L"REGVEN"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4626
            , L"Reunion 1947"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(94.0, -948.0, -1262.0)),
            buildDatum(4657
            , L"Reykjavik 1900"
            , AxisA(6377019.2566600004211068)
            , InverseFlattening(300.0)
            , Delta(-28.0, 199.0, 5.0)),
            buildDatum(5489
            , L"RGAF09"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4171
            , L"RGF93"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4624
            , L"RGFG95"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)
            , Delta(2.0, 2.0, -2.0)),
            buildDatum(4470
            , L"RGM04"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4645
            , L"RGNC 1991"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4749
            , L"RGNC91-93"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4687
            , L"RGPF"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)
            , DatumScale(-0.0093)
            , Delta(0.072, -0.507, -0.245)
            , Rotation(0.0183, -0.0003, 0.007)),
            buildDatum(4627
            , L"RGR92"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4046
            , L"RGRDC 2005"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4463
            , L"RGSPM06"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4640
            , L"RRAF 1991"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4558
            , L"RRAF 1991"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4764
            , L"RSRGD2000"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4308
            , L"RT38"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4814
            , L"RT38 (Stockholm)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Longitude(18.0582777777777999)),
            buildDatum(4124
            , L"RT90"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(414.09785671489999, 41.3381489658000021, 603.062717751599962)
            , Rotation(-0.8550434314000001, 2.1413465184999998, -7.0227209516000002)),
            buildDatum(4618
            , L"SAD69"
            , AxisA(6378160.0)
            , InverseFlattening(298.25)
            , Delta(-57.0, 1.0, -41.0)),
            buildDatum(50148
            , L"SAD69 (Baltra, Galapagos)"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-47.0, 27.0, -42.0)),
            buildDatum(50143
            , L"SAD69 (Bolivia)"
            , AxisA(6378160.0)
            , InverseFlattening(298.25)
            , Delta(-61.0, 2.0, -48.0)),
            buildDatum(50144
            , L"SAD69 (Brazil)"
            , AxisA(6378160.0)
            , InverseFlattening(298.25)
            , Delta(-60.0, -2.0, -41.0)),
            buildDatum(50145
            , L"SAD69 (Chile)"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-75.0, -1.0, -44.0)),
            buildDatum(50146
            , L"SAD69 (Colombia)"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-44.0, 6.0, -36.0)),
            buildDatum(50147
            , L"SAD69 (Ecuador)"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-48.0, 3.0, -44.0)),
            buildDatum(50149
            , L"SAD69 (Guyana)"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-53.0, 3.0, -47.0)),
            buildDatum(50150
            , L"SAD69 (Paraguay)"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-61.0, 2.0, -33.0)),
            buildDatum(50151
            , L"SAD69 (Peru)"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-58.0, 0.0, -44.0)),
            buildDatum(50152
            , L"SAD69 (Trinidad and Tobago)"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-45.0, 12.0, -33.0)),
            buildDatum(50153
            , L"SAD69 (Venezuela)"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-45.0, 8.0, -33.0)),
            buildDatum(5527
            , L"SAD69(96)"
            , AxisA(6378160.0)
            , InverseFlattening(298.25)),
            buildDatum(4638
            , L"Saint Pierre et Miquelon 1950"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , Delta(30.0, 430.0, 368.0)),
            buildDatum(4125
            , L"Samboja"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4730
            , L"Santo 1965"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(170.0, 42.0, 84.0)),
            buildDatum(4823
            , L"Sao Tome"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4292
            , L"Sapper Hill 1943"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-355.0, 21.0, 72.0)),
            buildDatum(4293
            , L"Schwarzeck"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(616.0, 97.0, -251.0)),
            buildDatum(4195
            , L"Scoresbysund 1952"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(-0.6)
            , Delta(105.0, 326.0, -102.5)
            , Rotation(0.0, 0.0, 0.8139999999999999)),
            buildDatum(4613
            , L"Segara"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(-403.0, 684.0, 41.0)),
            buildDatum(4820
            , L"Segara (Jakarta)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Longitude(106.8077194444440039)),
            buildDatum(4294
            , L"Segora"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4616
            , L"Selvagem Grande"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-289.0, -124.0, 60.0)),
            buildDatum(4295
            , L"Serindung"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(5464
            , L"Sibun Gorge 1922"
            , AxisA(6378293.6452087592333555)
            , InverseFlattening(294.2606763692609775)),
            buildDatum(104103
            , L"Sierra Leone (1960)"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(4174
            , L"Sierra Leone 1924"
            , AxisA(6378300.0)
            , InverseFlattening(296.0)),
            buildDatum(4175
            , L"Sierra Leone 1968"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-88.0, 4.0, 101.0)),
            buildDatum(4170
            , L"SIRGAS 1995"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4674
            , L"SIRGAS 2000"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(5360
            , L"SIRGAS-Chile"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(5381
            , L"SIRGAS-ROU98"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4156
            , L"S-JTSK"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , DatumScale(3.5600000000000001)
            , Delta(570.7999999999999545, 85.7000000000000028, 462.8000000000000114)
            , Rotation(4.9980000000000002, 1.587, 5.2610000000000001)),
            buildDatum(4818
            , L"S-JTSK (Ferro)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , DatumScale(3.5600000000000001)
            , Delta(570.7999999999999545, 85.7000000000000028, 462.8000000000000114)
            , Rotation(4.9980000000000002, 1.587, 5.2610000000000001)
            , Longitude(-17.6666666666666998)),
            buildDatum(5228
            , L"S-JTSK/05"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , DatumScale(3.5377999999999998)
            , Delta(572.2129999999999654, 85.3340000000000032, 461.9399999999999977)
            , Rotation(-4.9732000000000003, -1.5289999999999999, -5.2484000000000002)),
            buildDatum(5229
            , L"S-JTSK/05 (Ferro)"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , DatumScale(3.5377999999999998)
            , Delta(572.2129999999999654, 85.3340000000000032, 461.9399999999999977)
            , Rotation(-4.9732000000000003, -1.5289999999999999, -5.2484000000000002)
            , Longitude(-17.6666666666666998)),
            buildDatum(5233
            , L"SLD99 (Sri Lanka Datum 1999)"
            , AxisA(6377276.3449999997392297)
            , InverseFlattening(300.8016999999999825)
            , DatumScale(-0.039338)
            , Delta(-0.293, 766.9500000000000455, 87.7189999999999941)
            , Rotation(-0.195704, -1.695068, -3.4730159999999999)),
            buildDatum(4765
            , L"Slovenia 1996"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4718
            , L"Solomon 1968 (DOS 1968)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(230.0, -199.0, -752.0)),
            buildDatum(37207
            , L"South Asia"
            , AxisA(6378166.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(7.0, -10.0, -26.0)),
            buildDatum(50141
            , L"South East Asia"
            , AxisA(6377299.3655953798443079)
            , InverseFlattening(300.8017255433612149)
            , Delta(173.0, 750.0, 264.0)),
            buildDatum(4722
            , L"South Georgia 1968"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-794.0, 119.0, -298.0)),
            buildDatum(4164
            , L"South Yemen"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(-76.0, -138.0, 67.0)),
            buildDatum(4075
            , L"SREF98"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4138
            , L"St. George Island"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(4710
            , L"St. Helena 1971"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-320.0, 550.0, -494.0)),
            buildDatum(4605
            , L"St. Kitts 1955"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(9.0, 183.0, 236.0)),
            buildDatum(4136
            , L"St. Lawrence Island"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(4606
            , L"St. Lucia 1955"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(-149.0, 128.0, 296.0)),
            buildDatum(4137
            , L"St. Paul Island"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(4607
            , L"St. Vincent 1945"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)
            , Delta(195.6709999999999923, 332.5169999999999959, 274.6070000000000277)),
            buildDatum(4643
            , L"ST71 Belep"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , DatumScale(-111.7001999999999953)
            , Delta(-480.2599999999999909, -438.3199999999999932, -643.4289999999999736)
            , Rotation(16.3119000000000014, 20.1721000000000004, -4.0349000000000004)),
            buildDatum(4642
            , L"ST84 Ile des Pins"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-13.0, -348.0, 292.0)),
            buildDatum(4635
            , L"ST87 Ouvea"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4750
            , L"ST87 Ouvea"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)
            , Delta(-56.2629999999999981, 16.1359999999999992, -22.8560000000000016)),
            buildDatum(4296
            , L"Sudan"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)),
            buildDatum(4757
            , L"SVY21"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4619
            , L"SWEREF99"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4629
            , L"Tahaa 54"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(65.0, 342.0, 77.0)),
            buildDatum(4628
            , L"Tahiti 52"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(162.0, 117.0, 154.0)),
            buildDatum(4690
            , L"Tahiti 79"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4297
            , L"Tananarive"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-189.0, -242.0, -91.0)),
            buildDatum(4810
            , L"Tananarive (Paris)"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Longitude(2.3372291700000001)),
            buildDatum(4303
            , L"TC(1948)"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)),
            buildDatum(4707
            , L"Tern Island 1961"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(114.0, -116.0, -333.0)),
            buildDatum(4127
            , L"Tete"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)
            , DatumScale(9.3659999999999997)
            , Delta(-115.063999999999993, -87.3900000000000006, -101.715999999999994)
            , Rotation(0.058, -4.0010000000000003, 2.0619999999999998)),
            buildDatum(4298
            , L"Timbalai 1948"
            , AxisA(6377298.5559999998658895)
            , InverseFlattening(300.8016999999999825)
            , Delta(-679.0, 669.0, -48.0)),
            buildDatum(4299
            , L"TM65"
            , AxisA(6377340.1890000002458692)
            , InverseFlattening(299.3249645999999871)
            , DatumScale(8.1500000000000004)
            , Delta(482.5, -130.5999999999999943, 564.6000000000000227)
            , Rotation(-1.042, -0.214, -0.631)),
            buildDatum(4300
            , L"TM75"
            , AxisA(6377340.1890000002458692)
            , InverseFlattening(299.3249645999999871)),
            buildDatum(5132
            , L"Tokyo 1892"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(50002
            , L"Tokyo 1898"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4301
            , L"Tokyo 1918"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)
            , Delta(-148.0, 507.0, 685.0)),
            buildDatum(4302
            , L"Trinidad 1903"
            , AxisA(6378293.6452087592333555)
            , InverseFlattening(294.2606763692609775)
            , Delta(-61.7019999999999982, 284.4879999999999995, 472.0520000000000209)),
            buildDatum(4734
            , L"Tristan 1968"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-632.0, 438.0, -609.0)),
            buildDatum(5252
            , L"TUREF"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(3821
            , L"TWD67"
            , AxisA(6378160.0)
            , InverseFlattening(298.25)),
            buildDatum(3824
            , L"TWD97"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(5591
            , L"Ukraine 2000"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)
            , Delta(24.0, -121.0, -76.0)),
            buildDatum(4001
            , L"Unknown datum based upon the Airy 1830 ellipsoid"
            , AxisA(6377563.3959999997168779)
            , InverseFlattening(299.3249645999999871)),
            buildDatum(4002
            , L"Unknown datum based upon the Airy Modified 1849 ellipsoid"
            , AxisA(6377340.1890000002458692)
            , InverseFlattening(299.3249645999999871)),
            buildDatum(4003
            , L"Unknown datum based upon the Australian National Spheroid"
            , AxisA(6378160.0)
            , InverseFlattening(298.25)),
            buildDatum(4035
            , L"Unknown datum based upon the Authalic Sphere"
            , AxisA(6371000.0)),
            buildDatum(4041
            , L"Unknown datum based upon the Average Terrestrial System 1977 ellipsoid"
            , AxisA(6378135.0)
            , InverseFlattening(298.257000000000005)),
            buildDatum(4004
            , L"Unknown datum based upon the Bessel 1841 ellipsoid"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4005
            , L"Unknown datum based upon the Bessel Modified ellipsoid"
            , AxisA(6377492.0180000001564622)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4006
            , L"Unknown datum based upon the Bessel Namibia ellipsoid"
            , AxisA(6377397.1550000002607703)
            , InverseFlattening(299.1528127999999924)),
            buildDatum(4007
            , L"Unknown datum based upon the Clarke 1858 ellipsoid"
            , AxisA(6378293.6452087592333555)
            , InverseFlattening(294.2606763692609775)),
            buildDatum(4008
            , L"Unknown datum based upon the Clarke 1866 ellipsoid"
            , AxisA(6378206.400000000372529)
            , InverseFlattening(294.9786982138979852)),
            buildDatum(4009
            , L"Unknown datum based upon the Clarke 1866 Michigan ellipsoid"
            , AxisA(6378450.047548895701766)
            , InverseFlattening(294.9786971646739744)),
            buildDatum(4013
            , L"Unknown datum based upon the Clarke 1880 (Arc) ellipsoid"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.4663077000000158)),
            buildDatum(4010
            , L"Unknown datum based upon the Clarke 1880 (Benoit) ellipsoid"
            , AxisA(6378300.7889999998733401)
            , InverseFlattening(293.4663155389810072)),
            buildDatum(4011
            , L"Unknown datum based upon the Clarke 1880 (IGN) ellipsoid"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)),
            buildDatum(4012
            , L"Unknown datum based upon the Clarke 1880 (RGS) ellipsoid"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(4014
            , L"Unknown datum based upon the Clarke 1880 (SGA 1922) ellipsoid"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4659800000000018)),
            buildDatum(4034
            , L"Unknown datum based upon the Clarke 1880 ellipsoid"
            , AxisA(6378249.1448080111294985)
            , InverseFlattening(293.4663076556299757)),
            buildDatum(4042
            , L"Unknown datum based upon the Everest (1830 Definition) ellipsoid"
            , AxisA(6377299.3655953798443079)
            , InverseFlattening(300.8017255433612149)),
            buildDatum(4015
            , L"Unknown datum based upon the Everest 1830 (1937 Adjustment) ellipsoid"
            , AxisA(6377276.3449999997392297)
            , InverseFlattening(300.8016999999999825)),
            buildDatum(4044
            , L"Unknown datum based upon the Everest 1830 (1962 Definition) ellipsoid"
            , AxisA(6377301.2429999997839332)
            , InverseFlattening(300.801725499999975)),
            buildDatum(4016
            , L"Unknown datum based upon the Everest 1830 (1967 Definition) ellipsoid"
            , AxisA(6377298.5559999998658895)
            , InverseFlattening(300.8016999999999825)),
            buildDatum(4045
            , L"Unknown datum based upon the Everest 1830 (1975 Definition) ellipsoid"
            , AxisA(6377299.1509999996051192)
            , InverseFlattening(300.801725499999975)),
            buildDatum(4018
            , L"Unknown datum based upon the Everest 1830 Modified ellipsoid"
            , AxisA(6377304.0630000000819564)
            , InverseFlattening(300.8016999999999825)),
            buildDatum(4031
            , L"Unknown datum based upon the GEM 10C ellipsoid"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4036
            , L"Unknown datum based upon the GRS 1967 ellipsoid"
            , AxisA(6378160.0)
            , InverseFlattening(298.2471674270000221)),
            buildDatum(4019
            , L"Unknown datum based upon the GRS 1980 ellipsoid"
            , AxisA(6378137.0)
            , InverseFlattening(298.2572221010000248)),
            buildDatum(4020
            , L"Unknown datum based upon the Helmert 1906 ellipsoid"
            , AxisA(6378200.0)
            , InverseFlattening(298.3000000000000114)),
            buildDatum(4021
            , L"Unknown datum based upon the Indonesian National Spheroid"
            , AxisA(6378160.0)
            , InverseFlattening(298.2470000000000141)),
            buildDatum(4022
            , L"Unknown datum based upon the International 1924 ellipsoid"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)),
            buildDatum(4024
            , L"Unknown datum based upon the Krassowsky 1940 ellipsoid"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)),
            buildDatum(4025
            , L"Unknown datum based upon the NWL 9D ellipsoid"
            , AxisA(6378145.0)
            , InverseFlattening(298.25)),
            buildDatum(4032
            , L"Unknown datum based upon the OSU86F ellipsoid"
            , AxisA(6378136.2000000001862645)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4033
            , L"Unknown datum based upon the OSU91A ellipsoid"
            , AxisA(6378136.2999999998137355)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4027
            , L"Unknown datum based upon the Plessis 1817 ellipsoid"
            , AxisA(6376523.0)
            , InverseFlattening(308.6399999999999864)),
            buildDatum(4028
            , L"Unknown datum based upon the Struve 1860 ellipsoid"
            , AxisA(6378298.2999999998137355)
            , InverseFlattening(294.7300000000000182)),
            buildDatum(4029
            , L"Unknown datum based upon the War Office ellipsoid"
            , AxisA(6378300.0)
            , InverseFlattening(296.0)),
            buildDatum(4043
            , L"Unknown datum based upon the WGS 72 ellipsoid"
            , AxisA(6378135.0)
            , InverseFlattening(298.2599999999999909)),
            buildDatum(4030
            , L"Unknown datum based upon the WGS 84 ellipsoid"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4052
            , L"Unspecified datum based upon the Clarke 1866 Authalic Sphere"
            , AxisA(6370997.0)),
            buildDatum(4054
            , L"Unspecified datum based upon the Hughes 1980 ellipsoid"
            , AxisA(6378273.0)
            , InverseFlattening(298.2794111230639942)),
            buildDatum(4053
            , L"Unspecified datum based upon the International 1924 Authalic Sphere"
            , AxisA(6371228.0)),
            buildDatum(4748
            , L"Vanua Levu 1915"
            , AxisA(6378306.3695999998599291)
            , InverseFlattening(293.4663076556299757)
            , Delta(51.0, 391.0, -36.0)),
            buildDatum(4676
            , L"Vientiane 1982"
            , AxisA(6378245.0)
            , InverseFlattening(298.3000000000000114)),
            buildDatum(4752
            , L"Viti Levu 1912"
            , AxisA(6378306.3695999998599291)
            , InverseFlattening(293.4663076556299757)
            , Delta(51.0, 391.0, -36.0)),
            buildDatum(4731
            , L"Viti Levu 1916"
            , AxisA(6378249.1449999995529652)
            , InverseFlattening(293.464999999999975)),
            buildDatum(4756
            , L"VN-2000"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4304
            , L"Voirol 1875"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-73.0, -247.0, 227.0)),
            buildDatum(4811
            , L"Voirol 1875 (Paris)"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Longitude(2.3372291700000001)),
            buildDatum(4671
            , L"Voirol 1879"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Delta(-73.0, -247.0, 227.0)),
            buildDatum(4821
            , L"Voirol 1879 (Paris)"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)
            , Longitude(2.3372291700000001)),
            buildDatum(4733
            , L"Wake Island 1952"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(276.0, -57.0, 149.0)),
            buildDatum(4760
            , L"WGS 66"
            , AxisA(6378145.0)
            , InverseFlattening(298.25)),
            buildDatum(4322
            , L"WGS 72"
            , AxisA(6378135.0)
            , InverseFlattening(298.2599999999999909)
            , DatumScale(0.2263)
            , Delta(0.0, 0.0, 4.5)
            , Rotation(0.0, 0.0, 0.554)),
            buildDatum(4324
            , L"WGS 72BE"
            , AxisA(6378135.0)
            , InverseFlattening(298.2599999999999909)
            , DatumScale(-0.38)
            , Delta(0.0, 0.0, 1.8999999999999999)
            , Rotation(0.0, 0.0, 0.8139999999999999)),
            buildDatum(4326
            , L"WGS 84"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4610
            , L"Xian 1980"
            , AxisA(6378140.0)
            , InverseFlattening(298.257000000000005)),
            buildDatum(4309
            , L"Yacare"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-155.0, 171.0, 37.0)),
            buildDatum(4163
            , L"Yemen NGN96"
            , AxisA(6378137.0)
            , InverseFlattening(298.257223563000025)),
            buildDatum(4310
            , L"Yoff"
            , AxisA(6378249.2000000001862645)
            , InverseFlattening(293.4660212936270227)),
            buildDatum(4311
            , L"Zanderij"
            , AxisA(6378388.0)
            , InverseFlattening(297.0)
            , Delta(-265.0, 120.0, -358.0)),
            buildDatum(3856
            , L"Popular Visualisation Pseudo-Mercator"
            , AxisA(6378137.0)
            , InverseFlattening(1.0)),
            buildDatum(1128
            , L"Japanese Geodetic Datum 2011"
            , AxisA(6378137.0)
            , InverseFlattening(298.257222101))
        };

        Datums::Datums()
        {
          for (const auto& datum : DATUMS)
          {
            m_datums[datum.numId] = &datum;
          }
        }

        Datums& Datums::getInstance()
        {
          static Datums instance;

          return instance;
        }

        void Datums::load(DatumId id, CGpsDatumParametersX* params)
        {
          params->Clear();

          auto it = m_datums.find(id);

          if (it != m_datums.end())
          {
            const auto& datum = *it->second;

            params->m_fAxis = datum.dblAxis;
            params->m_fFlattening = datum.dblInverseFlattening;
            params->m_fScaleFactor = datum.dblScaleFactor;
            params->m_fPrimeMeridian = datum.dblPrimeMeridian;
            params->m_fTranslationX = datum.dblTranslationX;
            params->m_fTranslationY = datum.dblTranslationY;
            params->m_fTranslationZ = datum.dblTranslationZ;
            params->m_fRotationX = datum.dblRotationX;
            params->m_fRotationY = datum.dblRotationY;
            params->m_fRotationZ = datum.dblRotationZ;
            params->m_lId = datum.numId;
            params->m_strName = datum.strName;
          }
          else
          {
            throw std::runtime_error("Datum not supported");
          }
        }
    }
}
