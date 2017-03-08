#include "StdAfx.h"



#include "ProjectionUtils.h"



#include "GpsConstantsX.h"

#define _USE_MATH_DEFINES
#include <math.h>



#define DEG2RAD(x)	x * ( M_PI    / 180.00  );
#define RAD2DEG(x)  x * ( 180.00  / M_PI    );

#define SEC2RAD(x)  x * ( M_PI / 648000.00 );
#define RAD2SEC(x)  x * ( 648000.00 / M_PI );


/*
VOID xyz2plh (double x, double y, double z, double & p, double & l, double & h, CCfgMapProjection * pParams)
{
	double	e	= 0.0;
	double	f	= 0.0;

	double	N	= pParams->m_fAxis;

	long	i	=	5;

	if ( pParams->m_fFlattening != 0.0 )
	{
		f	= 1.0 / pParams->m_fFlattening;
		e	= sqrt ( 2.0 * f - f * f );
	}
	
    l	= atan2 ( y, x );

	while ( i-- )
	{
		double sinlat = z / ( N * ( 1 - e * e ) + h );

		p = atan ( ( z + e * e * N * sinlat ) / sqrt ( x * x + y * y ) );

		N = pParams->m_fAxis / sqrt ( 1 - e *e * sin ( p ) * sin ( p ) );

		h = sqrt ( x * x + y * y ) / cos ( p ) - N;
	}

	return VOID ();
}


*/

VOID xyz2plh (double x, double y, double z, double & p, double & l, double & h, CCfgMapProjection * pParams)
{
	double	e2	= 0.0;
	double	f	= 0.0;

	double	N	= pParams->m_fAxis;

	long	i	=	5;

	if ( pParams->m_fFlattening != 0.0 )
	{
		f	= 1.0 / pParams->m_fFlattening;
		e2	= 2.0 * f - pow ( f, 2.0 );
	}
	
    l	= atan2 ( y, x );

	

	while ( i-- )
	{
		double sinlat = z / (N * (1 - e2) + h);

		p = atan ( ( z + e2 * N * sinlat ) / sqrt ( x * x + y * y ) );

		N = pParams->m_fAxis / sqrt ( 1 - e2 * sin ( p ) * sin ( p ) );

		h = sqrt ( x * x + y * y ) / cos ( p ) - N;
	}

	return VOID ();
}



VOID plh2xyz (double p, double l, double h, double & x, double & y, double & z, CCfgMapProjection * pParams)
{
	double	f	= 0.0;
	double	e2	= 0.0;

	double	N	= pParams->m_fAxis;

	// Sphere or Ellipsoid
	if ( pParams->m_fFlattening != 0.0 )
	{
		f	= 1.0 / pParams->m_fFlattening;

		e2	= 2.0 * f - pow ( f, 2.0 );

		N	= pParams->m_fAxis / sqrt ( 1.0 - e2 * pow ( sin ( p ), 2.0 ) );	
	}

	x	= ( N + h ) * cos ( p ) * cos ( l );
	y	= ( N + h ) * cos ( p ) * sin ( l );
	z	= ( N * ( 1.0 - e2 ) + h ) * sin ( p );

	return VOID ();	
}



VOID towgs84 (double x, double y, double z, double & xx, double & yy, double & zz, CCfgMapProjection * pParams)
{
	// Convert from Arc Seconds to radials:
	double	fRotationX		= SEC2RAD ( pParams->m_fRotationX );
	double	fRotationY		= SEC2RAD ( pParams->m_fRotationY );
	double	fRotationZ		= SEC2RAD ( pParams->m_fRotationZ );

	double	fTranslationX	= pParams->m_fTranslationX;
	double	fTranslationY	= pParams->m_fTranslationY;
	double	fTranslationZ	= pParams->m_fTranslationZ;

	// Convert scale factor to ppm
	double	fScaleFactor	= pParams->m_fScaleFactor / 1000000.0;
	
	// Perform transformation
	xx = x + fTranslationX + fScaleFactor * x
		   - fRotationZ * y
		   + fRotationY * z;

	yy = y + fTranslationY + fRotationZ * x
		   + fScaleFactor * y 
		   - fRotationX * z ;
	
	zz = z + fTranslationZ - fRotationY * x
		   + fRotationX * y 
		   + fScaleFactor * z;

	return VOID ();
}



VOID fromwgs84 (double x, double y, double z, double & xx, double & yy, double & zz, CCfgMapProjection * pParams)
{
	// Convert from Arc Seconds to radials:
	double	fRotationX		= SEC2RAD ( pParams->m_fRotationX );
	double	fRotationY		= SEC2RAD ( pParams->m_fRotationY );
	double	fRotationZ		= SEC2RAD ( pParams->m_fRotationZ );

	double	fTranslationX	= pParams->m_fTranslationX;
	double	fTranslationY	= pParams->m_fTranslationY;
	double	fTranslationZ	= pParams->m_fTranslationZ;

	// Convert scale factor to ppm
	double	fScaleFactor	= pParams->m_fScaleFactor / 1000000.0;
	
	// Perform transformation
	xx = x - fTranslationX - fScaleFactor * x
		   + fRotationZ * y
		   - fRotationY * z;

	yy = y - fTranslationY - fRotationZ * x
		   - fScaleFactor * y 
		   + fRotationX * z ;
	
	zz = z - fTranslationZ + fRotationY * x
		   - fRotationX * y 
		   - fScaleFactor * z;

	return VOID ();
}



double MetersToUnits (long lUnits, double dblMeters)
{
	double	dblReturn	= dblMeters;
		
	switch	( lUnits )
	{
		case GPS_PROJECTION_UNITS_M:		dblReturn /= 1.0;
			break;

		case GPS_PROJECTION_UNITS_KM:		dblReturn /= 1000.0;
			break;

		case GPS_PROJECTION_UNITS_FT:		dblReturn /= 0.3048;
			break;

		case GPS_PROJECTION_UNITS_FTBR:		dblReturn /= 0.3048007491;
			break;

		case GPS_PROJECTION_UNITS_FTCLA:	dblReturn /= 0.3047972654;
			break;

		case GPS_PROJECTION_UNITS_FTGC:		dblReturn /= 0.304799710181509;
			break;

		case GPS_PROJECTION_UNITS_FTIND:	dblReturn /= 0.304799510248147;
			break;

		case GPS_PROJECTION_UNITS_FTSE:		dblReturn /= 0.304799471538676;
			break;

		case GPS_PROJECTION_UNITS_FTUS:		dblReturn /= 0.304800609601219;
			break;

		case GPS_PROJECTION_UNITS_LK:		dblReturn /= 0.201168;
			break;

		case GPS_PROJECTION_UNITS_LKCLA:	dblReturn /= 0.201166195164;
			break;

		case GPS_PROJECTION_UNITS_LKSE:		dblReturn /= 0.201167651215526;
			break;

		case GPS_PROJECTION_UNITS_LKUS:		dblReturn /= 0.201168402336805;
			break;

		case GPS_PROJECTION_UNITS_MI:		dblReturn /= 1609.344;
			break;

		case GPS_PROJECTION_UNITS_MIUS:		dblReturn /= 1609.34721869444;
			break;

		case GPS_PROJECTION_UNITS_CH:		dblReturn /= 20.1168;
			break;

		case GPS_PROJECTION_UNITS_CHCLA:	dblReturn /= 20.1166195164;
			break;

		case GPS_PROJECTION_UNITS_CHBR:		dblReturn /= 20.11678249437587;
			break;

		case GPS_PROJECTION_UNITS_CHSE:		dblReturn /= 20.1167651215526;
			break;

		case GPS_PROJECTION_UNITS_CHUS:		dblReturn /= 20.1168402336805;
			break;

		case GPS_PROJECTION_UNITS_YDIND:	dblReturn /= 0.9143985307444408;
			break;

		case GPS_PROJECTION_UNITS_YDCLA:	dblReturn /= 0.914391795;
			break;

		case GPS_PROJECTION_UNITS_GLM:		dblReturn /= 1.0000135965;
			break;

		case GPS_PROJECTION_UNITS_YDSE:		dblReturn /= 0.9143984146160287;
			break;
	}

	return dblReturn;
}



double UnitsToMeters (long lUnits, double dblUnits)
{
	double	dblReturn	= dblUnits;

	switch	( lUnits )
	{
		case GPS_PROJECTION_UNITS_M:		dblReturn *= 1.0;
			break;

		case GPS_PROJECTION_UNITS_KM:		dblReturn *= 1000.0;
			 break;

		case GPS_PROJECTION_UNITS_FT:		dblReturn *= 0.3048;
			break;

		case GPS_PROJECTION_UNITS_FTBR:		dblReturn *= 0.3048007491;
			break;

		case GPS_PROJECTION_UNITS_FTCLA:	dblReturn *= 0.3047972654;
			break;

		case GPS_PROJECTION_UNITS_FTGC:		dblReturn *= 0.304799710181509;
			break;

		case GPS_PROJECTION_UNITS_FTIND:	dblReturn *= 0.304799510248147;
			break;

		case GPS_PROJECTION_UNITS_FTSE:		dblReturn *= 0.304799471538676;
			break;

		case GPS_PROJECTION_UNITS_FTUS:		dblReturn *= 0.3048006096012192;
			break;

		case GPS_PROJECTION_UNITS_LK:		dblReturn *= 0.201168;
			break;

		case GPS_PROJECTION_UNITS_LKCLA:	dblReturn *= 0.201166195164;
			break;

		case GPS_PROJECTION_UNITS_LKSE:		dblReturn *= 0.201167651215526;
			break;

		case GPS_PROJECTION_UNITS_LKUS:		dblReturn *= 0.201168402336805;
			break;

		case GPS_PROJECTION_UNITS_MI:		dblReturn *= 1609.344;
			break;

		case GPS_PROJECTION_UNITS_MIUS:		dblReturn *= 1609.34721869444;
			break;

		case GPS_PROJECTION_UNITS_CH:		dblReturn *= 20.1168;
			break;

		case GPS_PROJECTION_UNITS_CHCLA:	dblReturn *= 20.1166195164;
			break;

		case GPS_PROJECTION_UNITS_CHBR:		dblReturn *= 20.11678249437587;
			break;

		case GPS_PROJECTION_UNITS_CHSE:		dblReturn *= 20.1167651215526;
			break;

		case GPS_PROJECTION_UNITS_CHUS:		dblReturn *= 20.1168402336805;
			break;

		case GPS_PROJECTION_UNITS_YDIND:	dblReturn *= 0.9143985307444408;
			break;

		case GPS_PROJECTION_UNITS_YDCLA:	dblReturn *= 0.914391795;
			break;

		case GPS_PROJECTION_UNITS_YDSE:		dblReturn *= 0.9143984146160287;
			break;

		case GPS_PROJECTION_UNITS_GLM:		dblReturn *= 1.0000135965;
			break;
	}							

	return dblReturn;
}



