#ifndef _GPSDEFS_H
#define _GPSDEFS_H

///////////////////////////////////////////////////////////////////////////////////////////

#ifndef SZ_VERSION
#ifdef WIN64
#define		SZ_VERSION							_T("4.0.14.325 (x64)")
#else
#define		SZ_VERSION							_T("4.0.14.325 (x86)")
#endif // WIN64
#endif // SZ_VERSION

///////////////////////////////////////////////////////////////////////////////////////////

#define		REG_ROOT							_T("SOFTWARE\\Eye4Software\\GpsToolkit")

///////////////////////////////////////////////////////////////////////////////////////////

#define		REG_SERIAL							_T("RegistrationKey")

///////////////////////////////////////////////////////////////////////////////////////////

#define		RESERVED_CHECK						24253938

///////////////////////////////////////////////////////////////////////////////////////////

#define		CFG_FIELD_HEADER					0
#define		CFG_FIELD_AXIS						1
#define		CFG_FIELD_FLATTENING				2
#define		CFG_FIELD_TRANSLATIONX				3
#define		CFG_FIELD_TRANSLATIONY				4
#define		CFG_FIELD_TRANSLATIONZ				5
#define		CFG_FIELD_ROTATIONX					6
#define		CFG_FIELD_ROTATIONY					7
#define		CFG_FIELD_ROTATIONZ					8
#define		CFG_FIELD_SCALEFACTORDATUM			9
#define		CFG_FIELD_PRIMEMERIDIAN				10
#define		CFG_FIELD_GRIDTYPE					11
#define		CFG_FIELD_GRIDFILE					12
#define		CFG_FIELD_PROJECTION				13
#define		CFG_FIELD_UNITS						14
#define		CFG_FIELD_FALSENORTHING				15
#define		CFG_FIELD_FALSEEASTING				16
#define		CFG_FIELD_ORIGINLATITUDE			17
#define		CFG_FIELD_ORIGINLONGITUDE			18
#define		CFG_FIELD_PARALLELNORTH				19
#define		CFG_FIELD_PARALLELSOUTH				20
#define		CFG_FIELD_AZIMUTHANGLE				21
#define		CFG_FIELD_RECTIFIEDGRIDANGLE		22
#define		CFG_FIELD_SCALEFACTORGRID			23
///////////////////////////////////////////////////////////////////////////////////////////

#endif // _GPSDEFS_H