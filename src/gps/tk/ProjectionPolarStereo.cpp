#include "StdAfx.h"

/

#include "Projection.h"

/

#include "ProjectionUtils.h"

/

#include "ProjectionPolarStereo.h"

/

#define _USE_MATH_DEFINES
#include <math.h>

/

CProjectionPolarStereo::CProjectionPolarStereo ()
{
}

/

CProjectionPolarStereo::~CProjectionPolarStereo ()
{
}

/

void CProjectionPolarStereo::Initialize(CCfgMapProjection & proj)
{
	a				= proj.m_fAxis;
	f               = 1.0 / proj.m_fFlattening;

    e2              = 2.0 * f - pow ( f, 2.0 );
    e               = sqrt ( e2 );
        
	// When using Polar Stereographic, the Latitude0 is always set to +90 or -90.
	// The lat0 is equal to the latitude of true scale ( lat_ts) .
	lat0			= DEG2RAD ( proj.m_fOriginLatitude  );
    lon0            = DEG2RAD ( proj.m_fOriginLongitude );

	fe              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseEasting  );
    fn              = UnitsToMeters ( proj.m_lUnits, proj.m_fFalseNorthing );

    k0              = proj.m_fProjScale;

	if ( lat0 < 0.0 )
    {
        lat0       *= -1.0;
        lon0       *= -1.0;

        hem         = -1.0;
    }
    else
    {
        hem         =  1.0;
    }
    
    slat0           = sin ( lat0 );
    clat0           = cos ( lat0 );
}

/

void CProjectionPolarStereo::Forward()
{
	double lat      = m_fLatitude   * hem;
    double lon      = m_fLongitude  * hem;

    double rho      = 0.0;          

    double dlam     = lon - lon0;

    double E        = pow ( ( 1.0 - ( e * sin ( lat ) ) ) / ( 1.0 + ( e * sin ( lat ) ) ), e / 2.0 );

    double t        = tan ( M_PI_4 - lat / 2.0 ) / E;

    if ( abs ( abs ( lat0 ) - M_PI_2 ) > 1.0e-10 )
    {
        double e0   = pow ( ( 1.0 - ( e * slat0 ) ) / ( 1.0 + ( e * slat0 ) ), e / 2.0 );
        double t0   = tan ( M_PI_4 - lat0 / 2.0 ) / e0;
        double mc   = clat0 / sqrt ( 1.0 - pow ( e * slat0, 2.0 ) );
        
        rho         = a * mc * t / t0;
    }
    else
    {
        double E4   = sqrt ( pow ( 1.0 + e, 1.0 + e ) * pow ( 1.0 - e, 1.0 - e ) );
        rho         = 2 * a * k0 * t / E4;
    }

    m_fEasting      =  hem * rho * sin ( dlam ) + fe;
    m_fNorthing		= -hem * rho * cos ( dlam ) + fn;
}

/

void CProjectionPolarStereo::Inverse()
{
	double dx       = ( m_fEasting  - fe ) * hem;
    double dy       = ( m_fNorthing - fn ) * hem;

    double t        = 0.0;
    double phi_     = 0.0;

    double rho      = sqrt ( dx * dx + dy * dy );

    if ( abs ( abs ( lat0 ) - M_PI_2) > 1.0e-10 )
    {
        double e0   = pow ( ( 1.0 - ( e * slat0 ) ) / ( 1.0 + ( e * slat0 ) ), e / 2.0 );
        double t0   = tan ( M_PI_4 - lat0 / 2.0 ) / e0;
        double mc   = clat0 / sqrt ( 1.0 - pow ( e * slat0, 2.0 ) );
        
        t           = ( rho * t0 ) / ( a * mc );
    }
    else
    {
        double E4   = sqrt ( pow ( 1.0 + e, 1.0 + e ) * pow ( 1.0 - e, 1.0 - e ) );
        t           = ( rho * E4 ) / ( 2.0 * a * k0  );
    }

    double phi      = M_PI_2 - 2.0 * atan ( t );

    while   ( abs ( phi - phi_ ) > 1.0e-10 )
    {
        phi_ = phi;

        double  e1  = pow ( ( 1.0 - ( e * sin ( phi ) ) ) / ( 1.0 + ( e * sin ( phi ) ) ), e / 2.0 );
        
        phi = M_PI_2 - 2.0 * atan ( t * e1 );
    }

    double lat      = hem * phi;
    double lon      = hem * ( lon0 + atan2 ( dx, -dy ) );

    m_fLatitude     = lat;
    m_fLongitude    = lon;   
}

/
