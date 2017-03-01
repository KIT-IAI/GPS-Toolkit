/////////////////////////////////////////////////////////////////////////////

#define GPS_DEVICE_FORMAT_DEFAULT						0
#define GPS_DEVICE_FORMAT_8N1							1
#define GPS_DEVICE_FORMAT_7E1							2
#define GPS_DEVICE_FORMAT_8N2							3
#define GPS_DEVICE_FORMAT_7E2							4

/////////////////////////////////////////////////////////////////////////////

#define GPS_NMEA_FILTER_GGA								1
#define GPS_NMEA_FILTER_GLL								2
#define GPS_NMEA_FILTER_RMC								4
#define GPS_NMEA_FILTER_VTG								8
#define GPS_NMEA_FILTER_GSA								16
#define GPS_NMEA_FILTER_GSV								32
#define GPS_NMEA_FILTER_RME								4096
#define GPS_NMEA_FILTER_RMZ								8192

/////////////////////////////////////////////////////////////////////////////

#define GPS_SPEED_KNOTS									0
#define GPS_SPEED_MILESPERHOUR							1
#define GPS_SPEED_KILOMETERSPERHOUR						2
#define GPS_SPEED_METERSPERSECOND						3

/////////////////////////////////////////////////////////////////////////////

#define GPS_ALTITUDE_METERS								0
#define GPS_ALTITUDE_FEET								1

/////////////////////////////////////////////////////////////////////////////

#define GPS_LATLONFORMAT_D								0
#define GPS_LATLONFORMAT_DM								1
#define GPS_LATLONFORMAT_DMS							2

/////////////////////////////////////////////////////////////////////////////

#define GPS_GRIDTYPE_NONE								0
#define	GPS_GRIDTYPE_NADCON								3
#define GPS_GRIDTYPE_HARN								4
#define GPS_GRIDTYPE_NTV2								5

/////////////////////////////////////////////////////////////////////////////

#define GPS_PROJECTION_NONE								0
#define GPS_PROJECTION_LAMBERT1SP						100
#define GPS_PROJECTION_LAMBERT1SPWEST					101
#define GPS_PROJECTION_LAMBERT2SP						110
#define GPS_PROJECTION_LAMBERT2SPBELGIUM				111
#define GPS_PROJECTION_LAMBERTAEA						120
#define GPS_PROJECTION_ALBERSEQUALAREA                  130
#define GPS_PROJECTION_MERCATOR1SP                      140
#define GPS_PROJECTION_MERCATOR2SP						150
#define GPS_PROJECTION_TRANSVERSEMERCATOR				160
#define GPS_PROJECTION_TRANSVERSEMERCATORSOUTH			161
#define GPS_PROJECTION_OBLIQUEMERCATOR                  170
#define GPS_PROJECTION_HOTINEOBLIQUEMERCATOR			180
#define GPS_PROJECTION_SWISSOBLIQUEMERCATOR				190
#define GPS_PROJECTION_LABORDEOBLIQUEMERCATOR			200
#define GPS_PROJECTION_STEREOGRAPHIC					210
#define GPS_PROJECTION_POLARSTEREOGRAPHIC               220
#define GPS_PROJECTION_CASSINI                          230
#define GPS_PROJECTION_KROVAK							240
#define GPS_PROJECTION_POLYCONIC						250
#define GPS_PROJECTION_MOLLWEIDE                        260
#define GPS_PROJECTION_ECKERTI							271
#define GPS_PROJECTION_ECKERTII							272
#define GPS_PROJECTION_ECKERTIII						273
#define GPS_PROJECTION_ECKERTIV                         274
#define GPS_PROJECTION_ECKERTV                          275
#define GPS_PROJECTION_ECKERTVI                         276
#define GPS_PROJECTION_WINKELI							281
#define GPS_PROJECTION_CYLINDRICALEQUALAREA				290 
#define GPS_PROJECTION_SINUSOIDAL						300
#define GPS_PROJECTION_MILLER							310
#define GPS_PROJECTION_BONNE							320
#define GPS_PROJECTION_GALLSTEREOGRAPHIC				330
#define GPS_PROJECTION_ROBINSON							340
#define GPS_PROJECTION_EQUIRECTANGULAR					350	
#define GPS_PROJECTION_LOXIMUTHAL						360
#define GPS_PROJECTION_PLATECARREE						370
#define GPS_PROJECTION_GRINTENI							381
#define GPS_PROJECTION_ORTHOGRAPHIC						390
#define GPS_PROJECTION_GNOMONIC							400
#define GPS_PROJECTION_HAMMER							410
#define GPS_PROJECTION_QUARTICAUTHALIC					420
#define GPS_PROJECTION_AZIMUTHALEQUIDISTANT				430

/////////////////////////////////////////////////////////////////////////////

#define GPS_PROJECTION_UNITS_M							9001
#define GPS_PROJECTION_UNITS_KM							9036
#define GPS_PROJECTION_UNITS_CM							9001
#define GPS_PROJECTION_UNITS_GLM						9031

#define GPS_PROJECTION_UNITS_FT							9002
#define GPS_PROJECTION_UNITS_FTBR						9095
#define GPS_PROJECTION_UNITS_FTCLA						9005
#define GPS_PROJECTION_UNITS_FTGC						9094
#define GPS_PROJECTION_UNITS_FTIND						9080
#define GPS_PROJECTION_UNITS_FTSE						9041
#define GPS_PROJECTION_UNITS_FTUS						9003

#define GPS_PROJECTION_UNITS_LK							9098
#define GPS_PROJECTION_UNITS_LKCLA						9039
#define GPS_PROJECTION_UNITS_LKSE						9043
#define GPS_PROJECTION_UNITS_LKUS						9034

#define GPS_PROJECTION_UNITS_MI							9093
#define GPS_PROJECTION_UNITS_MIUS						9035	
#define GPS_PROJECTION_UNITS_NM							9030

#define GPS_PROJECTION_UNITS_CH							9097
#define GPS_PROJECTION_UNITS_CHBR						9062
#define GPS_PROJECTION_UNITS_CHCLA						9038
#define GPS_PROJECTION_UNITS_CHSE						9042
#define GPS_PROJECTION_UNITS_CHUS						9033

#define GPS_PROJECTION_UNITS_YDIND						9084
#define GPS_PROJECTION_UNITS_YDCLA						9037
#define GPS_PROJECTION_UNITS_YDSE						9040

/////////////////////////////////////////////////////////////////////////////

#define	GPS_QUALITY_NOFIX								0
#define	GPS_QUALITY_FIX									1
#define GPS_QUALITY_DIFFERENTIAL						2
#define GPS_QUALITY_PPS									3

/////////////////////////////////////////////////////////////////////////////

