#include "StdAfx.h"

/

#include "Projection.h"

/

#define _USE_MATH_DEFINES
#include <math.h>

/

CProjection::CProjection ()
{
	m_fLatitude		= 0.0;
	m_fLongitude	= 0.0;

	m_fNorthing		= 0.0;
	m_fEasting		= 0.0;

	m_fAltitude		= 0.0;

	m_bSphere		= FALSE;
}

/

CProjection::~CProjection ()
{
}

/

double CProjection::DEG2RAD (double x)
{
	return x * ( M_PI / 180.0 );
}

/

double CProjection::RAD2DEG (double x)
{
	return x / ( M_PI / 180.0 );
}

/

double CProjection::SPHSN (double lat)
{
	return ( a / sqrt ( 1.0 - e2 * pow ( sin ( lat ), 2.0 ) ) );
}

/
	
double CProjection::SPHSR (double lat)
{
	return a * ( 1.0 - e2 ) / pow ( sqrt ( 1.0 - e2 * pow ( sin ( lat ), 2.0 ) ), 3.0 );
}

/

double CProjection::TSFN (double lat)
{
	return tan ( M_PI_4 - ( lat / 2.0 ) ) / pow ( ( ( 1.0 - e * sin ( lat ) ) / ( 1.0 + e * sin ( lat ) ) ), ( e / 2.0 ) );
}

/

double CProjection::TSFN2 (double lat)
{
	return tan ( M_PI_4 + ( lat / 2.0 ) ) * pow ( ( ( 1.0 - e * sin ( lat ) ) / ( 1.0 + e * sin ( lat ) ) ), ( e / 2.0 ) );
}

/

double CProjection::MSFN (double lat)
{
	return cos ( lat ) / sqrt ( ( 1.0 - e2 * sin ( lat ) * sin ( lat ) ) );
}

/

double CProjection::QSFN2 (double lat)
{
	double con  = e * sin ( lat );

	return ( ( 1.0 - e2 ) * ( sin ( lat ) / ( 1.0 - con * con ) - ( 0.5 / e ) * log ( ( 1.0 - con) / ( 1.0 + con ) ) ) );
}

/

double CProjection::QSFN (double lat)
{
	double con  = e * sin ( lat );

	return ( ( 1.0 - e ) * ( sin ( lat ) / ( 1.0 - con * con ) - ( 0.5 / e ) * log ( ( 1.0 - con) / ( 1.0 + con ) ) ) );
}

/

double CProjection::AUTHLAT (double lat)
{
  	double c0		= e2 / 3.0 + 31.0 * e4 / 180.0 + 517.0 * e6 / 5040.0; 
    double c1		= 23.0 * e4 / 360.0 + 251.0 * e6 / 3780.0;
    double c2		= 761.0 * e6 / 45360.0;

	double sin2b	= c0 * sin ( 2.0 * lat );
	double sin4b	= c1 * sin ( 4.0 * lat );
    double sin6b	= c2 * sin ( 6.0 * lat );

	return lat + sin2b + sin4b + sin6b;
}

/

double CProjection::MLFN (double lat)
{
	double e4			= e2 * e2;
    double e6			= e2 * e4;

	double c0		= 1.0  - e2 / 4.0 - 3.0    * e4 / 64.0 -  5.0 * e6 /  256.0; 
    double c1		= 3.0  * e2 / 8.0 + 3.0    * e4 / 32.0 + 45.0 * e6 / 1024.0;
    double c2		= 15.0 * e4 / 256.0 + 45.0 * e6 / 1024.0;
    double c3		= 35.0 * e6 / 3072.0;

	double s2lat	= c1 * ( sin ( 2.0 * lat ) );
    double s4lat	= c2 * ( sin ( 4.0 * lat ) );
    double s6lat	= c3 * ( sin ( 6.0 * lat ) );

	return ( c0 * lat - s2lat + s4lat - s6lat );
}

/

double CProjection::INVMLFN (double y)
{
	double c0		= 1.0  - e2 / 4.0 - 3.0    * e4 / 64.0 -  5.0 * e6 /  256.0; 
   
	double mu		= y / ( a * c0);

	double x1		= ( 1.0 - ( sqrt ( 1.0 - e2 ) ) ) / (1.0 + ( sqrt ( 1.0 - e2 ) ) );
    double x2		= x1 * x1;
    double x3		= x2 * x1;
    double x4		= x3 * x1;

	double a0		=    3.0 * x1 /   2.0 - 27.0 * x3 / 32.0;
    double a1		=   21.0 * x2 /  16.0 - 55.0 * x4 / 32.0;
    double a2		=  151.0 * x3 /  96.0;
    double a3		= 1097.0 * x4 / 512.0;

	double  s2mu    = a0 * ( sin ( 2.0 * mu ) );	
    double  s4mu    = a1 * ( sin ( 4.0 * mu ) );
    double  s6mu    = a2 * ( sin ( 6.0 * mu ) );
    double  s8mu    = a3 * ( sin ( 8.0 * mu ) );
   
	return mu + s2mu + s4mu + s6mu + s8mu;
}

/

double CProjection::SIGN (double x)
{
	double ret = 0.0;

    if ( x < 0.0 )
		ret = -1.0;
    else if ( x > 0.0 )
		ret =  1.0;
    else
		ret =  0.0;

    return ret;
}

/

double CProjection::ASQRT (double x) 
{ 
	return ( ( x <= 0) ? 0.0 : sqrt ( x ) );
}

/

double CProjection::ASINZ (double x)
{
	if ( x > 1.0)
		x = 1.0;
	
	if ( x < -1.0 )
		x = -1.0;

	return asin ( x );
}

/

double CProjection::AASIN (double x)
{
	double av = 0.0;

	if ( ( av = fabs ( x ) ) >= 1.0 ) 
	{
		return ( x < 0.0 ? -M_PI_2 : M_PI_2 );
	}

	return asin ( x );
}

/

void CProjection::Forward ()
{

}

/

void CProjection::Inverse ()
{
}

/

void CProjection::Initialize(CCfgMapProjection &proj)
{
}

