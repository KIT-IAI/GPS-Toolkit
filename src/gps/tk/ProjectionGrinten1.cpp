#include "StdAfx.h"

/

#include "Projection.h"

/

#include "ProjectionUtils.h"

/

#include "ProjectionGrinten1.h"

/

#define _USE_MATH_DEFINES
#include <math.h>

/

#define TOL			1.e-10
#define THIRD		.33333333333333333333
#define TWO_THRD	.66666666666666666666
#define C2_27		.07407407407407407407
#define PI4_3		4.18879020478639098458
#define PISQ		9.86960440108935861869
#define TPISQ		19.73920880217871723738
#define HPISQ		4.93480220054467930934

/

CProjectionGrinten1::CProjectionGrinten1 ()
{
}

/

CProjectionGrinten1::~CProjectionGrinten1 ()
{
}

/

void CProjectionGrinten1::Initialize (CCfgMapProjection & proj)
{
	a               = proj.m_fAxis;

    lon0            = DEG2RAD ( proj.m_fOriginLongitude  );
	
    fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

	return void ();
}

/

void CProjectionGrinten1::Forward ()
{
	double lat		= m_fLatitude;
    double lon		= m_fLongitude;
  
    double dlam		= lon - lon0;
	
	double	a1		= 0.0;
	double	a2		= 0.0;

	double	g1		= 0.0;
	double	g2		= 0.0;
	double	g3		= 0.0;

	double	p2		= MIN ( 1.0, fabs ( lat / M_PI_2 ) );

	if ( fabs ( lat ) <= TOL )
	{
		m_fEasting	= lon;
		m_fNorthing	= 0.0;
	}
	else if ( fabs ( dlam ) <= TOL || fabs ( p2 - 1.0 ) < TOL )
	{
		m_fEasting	= 0.0;
		m_fNorthing	= M_PI * tan ( asin ( p2 ) / 2.0 );

		if ( lat < 0.0 ) m_fNorthing = -m_fNorthing;
	}
	else
	{
		a1	= fabs ( M_PI / dlam - dlam / M_PI ) / 2.0;
		a2	= a1 * a1;

		g1	= sqrt ( 1.0 - p2 * p2 );
		g1	= g1 / ( p2 + g1 - 1.0 );
		g2	= g1 * g1;

		p2 = g1 * ( 2.0 / p2 - 1.0 );
		p2 = p2 * p2;
		
		g3	= g1 - p2;
		g1 = p2 + a2;

		m_fEasting = M_PI * ( a1 * g3 + sqrt ( a2 * g3 * g3 - g1 * ( g2 - p2 ) ) ) / g1;

		if ( lon < 0.) m_fEasting = -m_fEasting;
		
		m_fNorthing = fabs ( m_fEasting / M_PI );
		m_fNorthing = 1.0 - m_fNorthing * ( m_fNorthing + 2.0 * a1 );
		m_fNorthing = sqrt ( m_fNorthing ) * ( lat < 0.0 ? -M_PI : M_PI );
	}

	m_fNorthing	= ( a * m_fNorthing ) + fn;
	m_fEasting	= ( a * m_fEasting  ) + fe;
	
    return void ();
}

/

void CProjectionGrinten1::Inverse ()
{
	double a1	= 0.0;
	double d	= 0.0;
	double m	= 0.0;
	double t	= 0.0;

	double dx	= ( m_fEasting  - fe ) / a;
	double dy	= ( m_fNorthing - fn ) / a;

	double x2	= dx * dx;
	double y2	= dy * dy;
	
	double ax	= fabs ( dx );
	double ay	= fabs ( dy );

	double r1	= 0.0;
	double r2	= 0.0;

	double c0	= 0.0;
	double c1	= 0.0;
	double c2	= 0.0;
	double c3	= 0.0;

	double lat	= 0.0;
	double lon	= 0.0;

	if ( ay < TOL) 
	{
		t = x2 * x2 + TPISQ * (x2 + HPISQ);
		lon  = ax <= TOL ? 0.0 : 0.5 * ( x2 - PISQ + sqrt ( t ) ) / dx;
		
	}
	else
	{
		r1	= x2 + y2;
		r2	= r1 * r1;

		c1	= -M_PI * ay * ( r1 + PISQ );
		c3	= r2 + ( 2 * M_PI ) * ( ay * r1 + M_PI * ( y2 + M_PI * ( ay + M_PI_2 ) ) );
		c2 = c1 + PISQ * ( r1 - 3.0 * y2 );
		c0 = M_PI * ay;
		c2 = c2 / c3;

		a1 = c1 / c3 - THIRD * c2 * c2;
		m = 2.0 * sqrt ( -THIRD * a1 );
	
		d = C2_27 * c2 * c2 * c2 + ( c0 * c0 - THIRD * c2 * c1 ) / c3;
	
		if ( ( ( t = fabs ( d = 3.0 * d / ( a1 * m ) ) ) - TOL) <= 1.0 ) 
		{
			d = t > 1. ? (d > 0.0 ? 0.0 : M_PI ) : acos ( d );

			lat = M_PI * ( m * cos ( d * THIRD + PI4_3 ) - THIRD * c2 );
			if ( dy < 0.0 ) lat = -lat;
			
			t = r2 + TPISQ * ( x2 - y2 + HPISQ );
			
			lon = ax <= TOL ? 0.0 : 0.5 * ( r1 - PISQ + ( t <= 0.0 ? 0.0 : sqrt ( t ) ) ) / dx;
		}
	}

	m_fLatitude		= lat;
    m_fLongitude	= lon + lon0;

	return void ();
}

/

