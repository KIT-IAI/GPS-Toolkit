#include "StdAfx.h"

/

#include "Projection.h"

/

#include "ProjectionUtils.h"

/

#include "ProjectionBonne.h"

/

#define _USE_MATH_DEFINES
#include <math.h>

/

#define EPS10	1e-10

/

CProjectionBonne::CProjectionBonne ()
{
	m_bSphere	= FALSE;
}

/

CProjectionBonne::~CProjectionBonne ()
{
}

/

void CProjectionBonne::Initialize(CCfgMapProjection & proj)
{
	a				= proj.m_fAxis;

	if ( proj.m_fFlattening == 0.0 )
	{
		m_bSphere		= TRUE;
	}
	else
	{
		m_bSphere		= FALSE;

		f               = 1.0 / proj.m_fFlattening;

		e2              = 2.0 * f - pow ( f, 2.0 );
		e4				= e2 * e2;
		e6				= e2 * e4;
		e               = sqrt ( e2 );
	}
        
	sp1				= DEG2RAD ( proj.m_fParallelNorth   );

	lon0            = DEG2RAD ( proj.m_fOriginLongitude );

	ssp1			= sin ( sp1 );
	csp1			= 1.0 / tan ( sp1 );

	fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	M1				= a * MLFN ( sp1 );
	E1				= ( ssp1 == 0.0 ) ? 0.0 : a *  MSFN ( sp1 ) / ssp1;
	
	return void ();
}

/

void CProjectionBonne::Forward ()
{
	if ( m_bSphere )
		ForwardS ();
	else
		ForwardE ();

	return void ();
}

/

void CProjectionBonne::ForwardE ()
{
	double lat			= m_fLatitude;
    double lon			= m_fLongitude;

    double dlam			= lon - lon0;

	double MM			= a * MLFN ( lat  );

	double rho			= E1 + M1 - MM;
	
	double EE			= ( rho == 0.0 ) ? 0.0 : a * MSFN ( lat ) * dlam / rho;
	
	m_fEasting			=        rho * sin ( EE )   + fe;
	m_fNorthing			= ( E1 - rho * cos ( EE ) ) + fn;

	return void ();
}

/

void CProjectionBonne::ForwardS ()
{
	double lat			= m_fLatitude;
    double lon			= m_fLongitude;

    double dlam			= lon - lon0;
	
	double rho			= csp1 + sp1 - lat;
	
	double E			= lon * cos ( lat ) / rho;

	m_fEasting			= 0.0;
	m_fNorthing			= 0.0;

	if ( fabs ( rho ) > EPS10 ) 
	{
		m_fEasting  = ( a * rho * sin ( E ) ) + fe;
		m_fNorthing = ( a * ( csp1 - rho * cos ( E ) ) ) + fn;
	} 

	return void ();
}

/

void CProjectionBonne::Inverse()
{
	if ( m_bSphere )
		InverseS ();
	else
		InverseE ();

	return void ();
}

/

void CProjectionBonne::InverseE ()
{
	double dx		= m_fEasting -  fe;
    double dy		= m_fNorthing - fn;
	
	double EY		= E1 - dy;
        
	double rho		= sqrt ( dx * dx + EY * EY );
    
	if ( lat0 < 0.0 ) 
		rho = -rho;
       
	double MM		= E1 + M1 - rho;
        
	double lat		= INVMLFN ( MM );	
	double lon		= 0.0;

    if ( fabs ( lat ) >= M_PI_2 ) // Near 90 degrees
    {
		lon = lon0;
	}
    else
    {
		if ( lat0 < 0.0 )
		{
			dx = -dx;
			EY = -EY;
		}

		lon = lon0 + rho * ( atan2 ( dx, EY ) ) / ( a * MSFN ( lat ) );
	}

    m_fLatitude         = lat;
    m_fLongitude        = lon;

	return void ();
}

/

void CProjectionBonne::InverseS ()
{
	double dy		= ( m_fNorthing - fn ) / a;
	double dx		= ( m_fEasting  - fe ) / a;

	dy				= csp1 - dy;

	double rho		= sqrt ( dx * dx + dy * dy );
		
	double lat		= csp1 + sp1 - rho;
	double lon		= 0.0;
	
	if (fabs(fabs(lat) - M_PI_2 ) > EPS10)
	{
		lon = rho * atan2 ( dx, dy ) / cos ( lat );
	}

	m_fLatitude         = lat;
    m_fLongitude        = lon;

	return void ();
}

/
