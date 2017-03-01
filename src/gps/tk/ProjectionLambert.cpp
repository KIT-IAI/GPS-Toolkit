#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////

#include "Projection.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionUtils.h"

//////////////////////////////////////////////////////////////////////////////

#include "ProjectionLambert.h"

//////////////////////////////////////////////////////////////////////////////

#include "GpsConstantsX.h"

//////////////////////////////////////////////////////////////////////////////

#define _USE_MATH_DEFINES
#include <math.h>

//////////////////////////////////////////////////////////////////////////////

CProjectionLambert::CProjectionLambert ()
{
}

//////////////////////////////////////////////////////////////////////////////

CProjectionLambert::~CProjectionLambert ()
{
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionLambert::Initialize (CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;
	f               = 1.0 / proj.m_fFlattening;

    e2              = 2.0 * f - pow ( f, 2.0 );
    e               = sqrt ( e2 );
           
	lat0			= DEG2RAD ( proj.m_fOriginLatitude );
    lon0            = DEG2RAD ( proj.m_fOriginLongitude  );

    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );
	
    sp1             = DEG2RAD ( proj.m_fParallelNorth );
    sp2             = DEG2RAD ( proj.m_fParallelSouth );

    k0              = proj.m_fProjScale;

	prj				= proj.m_lProjection;

	ta				= 0.0;
	
	if ( lat0 > M_PI_2 )
		lat0 -= M_PI;

	// When parallels are both 0, sp1 has to be the same as lat0, this forces LCC SP1 
	if ( ( sp1 == 0.0 ) && ( sp2 == 0.0 ) )
    {
		sp1 = lat0;
	}

	// If scalefactor not set, set to 1.0
	if (k0 == 0.0)
    {
		k0 = 1.0;
	}
	//k0 = 0.99878641;

	double m1	= MSFN ( sp1 );
	double m2	= MSFN ( sp2 );

    double t1	= TSFN ( sp1 );
    double t2	= TSFN ( sp2 );
    double t3	= TSFN ( lat0 );
        
	if ( prj == GPS_PROJECTION_LAMBERT2SP )
	{
		n		= ( log ( m1 ) - log ( m2 ) ) / ( log ( t1 ) - log ( t2 ) );
	}
	else
	{
		n		= sin ( lat0 );
	}

	// Belgium 1972 Correction
	if ( prj == GPS_PROJECTION_LAMBERT2SPBELGIUM )
	{
		ta		= DEG2RAD ( 29.2985 / 36000.0 );
	}

	f1		    = m1 / ( n * pow ( t1, n ) );
	rf		    = k0 * a * f1 * pow ( t3, n );

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionLambert::Forward ()
{
	double lat  = m_fLatitude;
    double lon  = m_fLongitude;

    double t4	= TSFN ( lat );
            
	double r	= k0 * a * f1 * pow ( t4, n );
	
   	double t	= n * ( lon - lon0 );
	 
	m_fEasting	= fe + r * sin ( t - ta);
    m_fNorthing	= fn + rf - r * cos ( t - ta);

	// West Oriented ? (Greenland, Iceland, Faroe)
	if ( prj == GPS_PROJECTION_LAMBERT1SPWEST )
	{
		m_fEasting	= fe - r * sin ( t - ta );
	}

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

void CProjectionLambert::Inverse ()
{
    double dx   = m_fEasting  - fe;
    double dy   = m_fNorthing - fn;

	// West Oriented ? (Greenland, Iceland, Faroe), no need for scalefactore here ( = 1SP )
	if ( prj == GPS_PROJECTION_LAMBERT1SPWEST )
	{
		dx = fe - m_fEasting;
	}

	double rd	= rf - dy;
    double r	= sqrt ( pow ( dx, 2.0 ) + pow ( rd, 2.0 ) );

	// LS05052010: Aangepast, NaN bij n < 0.0 anders, r sign moet omdraaien in dit geval, dan klopt het wel !
	if ( n < 0.0 )
	{
		r	*= -1.0;
		dx	*= -1.0;
		dy	*= -1.0;
		rd	*= -1.0;
	}

	double t	= pow ( r / ( a * k0 * f1 ), ( 1.0 / n ) );
	    
    double th	= atan2 ( dx, rd );
	
	double lab0	= ( th + ta ) / n + lon0;
	
	double phi0	= M_PI_2 - 2 * atan ( t );
	double phi1	= 0.0;
	
	while ( fabs ( phi0 - phi1 ) > 4.85e-10 )
	{
		phi1	= phi0;
		phi0	= M_PI_2 - 2 * atan ( t * pow ( ( ( 1 - e * sin ( phi0 ) ) / ( 1.0 + e * sin ( phi0 ) ) ), e / 2.0 ) );
	}

	m_fLatitude    = phi0;
    m_fLongitude   = lab0;

	return void ();
}

//////////////////////////////////////////////////////////////////////////////

