#include <memory>

#include "tk/GpsDatumParametersX.h"
#include "tk/GpsGridParametersX.h"
#include "tk/GpsConstantsX.h"
#include "Errors.hpp"

#include "DatumParametersImpl.hpp"
#include "GridParametersImpl.hpp"

#include "ProjectionImpl.hpp"

namespace gps
{
    ProjectionImpl::ProjectionImpl()
        : m_projection(new CProjections())
    {
        clear();
    }

    void ProjectionImpl::toUTM(DatumParameters& toDatum)
    {
// Here were out of memory checks for pGridSrc ...

// Check UTM zone

        try
        {
            checkZone(true);
        }
        catch (const std::exception& e)
        {
// if (lResult)
// {
// TraceFunction(_T("<< CGpsProjection::ToUTM (Invalid UTM zone provided)\n"));
// goto _EndToUTM;
// }
// TODO: Throw Invalid UTM Zone
        }

        std::unique_ptr<CGpsGridParametersX> pGridDst(new CGpsGridParametersX());

// Detect UTM zone parameters based on latitude / longitude
        if (m_zone)
        {
            m_zone = getUTMParameters(pGridDst.get());
        }
        else
        {
            m_zone = getUTMParameters(m_latitude, m_longitude, pGridDst.get());
        }

// Set Destination datum
// lResult = pDatum->FromOleObject(toDatum);
        DatumParametersImpl& impl = static_cast<DatumParametersImpl&>(toDatum);
        CGpsDatumParametersX* datumParameters = impl.getImpl();

        std::unique_ptr<CGpsGridParametersX> pGridSrc(new CGpsGridParametersX()); // = WGS84 by default

        pGridDst->m_cGpsDatumParameters = *datumParameters;

// Perform the transformation
        doTransform(*pGridSrc, *pGridDst);
    }

    void ProjectionImpl::putLongitude(double longitude)
    {
        m_longitude = longitude;
    }

    void ProjectionImpl::putLatitude(double latitude)
    {
        m_latitude = latitude;
    }

    std::string ProjectionImpl::getVersion()
    {
        throw std::runtime_error("The method or operation is not implemented.");
    }

    void ProjectionImpl::clear()
    {
        m_latitude = 0.0;
        m_longitude = 0.0;

        m_altitudeI = 0.0;
        m_altitudeO = 0.0;

        m_northing = 0.0;
        m_easting = 0.0;

        m_zone = 0L;
    }

    void ProjectionImpl::checkZone(bool enableAutoZone)
    {
        if (!enableAutoZone && m_zone == 0L)
        {
            throw std::runtime_error(errGPS_INVALIDZONE);
        }

        if (std::abs(m_zone) > 60L)
        {
            throw std::runtime_error(errGPS_INVALIDZONE);
        }
    }

    long ProjectionImpl::getUTMParameters(double latitude, double longitude, CGpsGridParametersX* pParams)
    {
// was: lZone = long((lLongitude + 180) / 6) + 1L;
        long zone = long((longitude + 180.0) / 6.0) + 1L;

// Clear
        pParams->Clear();

// Set Projection
        pParams->m_lProjection = GPS_PROJECTION_TRANSVERSEMERCATOR;

// Scale Factor
        pParams->m_fScaleFactor = 0.9996;

// Longitude Of Origin
        pParams->m_fOriginLongitude = ((zone - 1L) * 6.0) - 180.0 + 3.0;

        if (latitude >= 0.0)
        {
            pParams->m_fFalseEasting = 500000.0;
            pParams->m_fFalseNorthing = 0.0;

            zone *= 1L;
        }
        else
        {
            pParams->m_fFalseEasting = 500000.0;
            pParams->m_fFalseNorthing = 10000000.0;

            zone *= -1L;
        }

        return zone;
    }

    long ProjectionImpl::getUTMParameters(CGpsGridParametersX* pParams)
    {
// Clear
        pParams->Clear();

// Set Projection
        pParams->m_lProjection = GPS_PROJECTION_TRANSVERSEMERCATOR;

// Scale Factor
        pParams->m_fScaleFactor = 0.9996;

// Longitude Of Origin
        pParams->m_fOriginLongitude = ((std::abs(m_zone) - 1L) * 6.0) - 180.0 + 3.0;

        if (m_zone > 0L)
        {
            pParams->m_fFalseEasting = 500000.0;
            pParams->m_fFalseNorthing = 0.0;
        }
        else
        {
            pParams->m_fFalseEasting = 500000.0;
            pParams->m_fFalseNorthing = 10000000.0;
        }

        return m_zone;
    }

    void ProjectionImpl::doTransform(CGpsGridParametersX& gridSrc, CGpsGridParametersX& gridDst)
    {
        CGpsDatumParametersX& datumSrc = gridSrc.m_cGpsDatumParameters;
// Check Source Datume
        checkSourceDatum(datumSrc);

        CGpsDatumParametersX& datumDst = gridDst.m_cGpsDatumParameters;
// Check Destination Datum
        checkDestinationDatum(datumDst);

// Is Source Grid Easting / Northing, then apply unit conversion
        if (gridSrc.m_lProjection)
        {
            m_projection->m_fEasting = m_easting;
            m_projection->m_fNorthing = m_northing;
            m_projection->m_fAltitude = m_altitudeI;
        }
        else
        {
            m_projection->m_fLatitude = m_latitude;
            m_projection->m_fLongitude = m_longitude;
            m_projection->m_fAltitude = m_altitudeI;
        }

// Convert from CGpsGridParametersX to CCfgMapProjection
        CCfgMapProjection projSrc;
        CCfgMapProjection projDst;
        gridSrc.ToProjectionStruct(projSrc);
        gridDst.ToProjectionStruct(projDst);

// Set Grids
        m_projection->SetGridSrc(projSrc);
        m_projection->SetGridDst(projDst);

// Go
        m_projection->Forward();

// Is Destination Grid Easting / Northing, then apply unit conversion
        if (gridDst.m_lProjection)
        {
            m_easting = m_projection->m_fEasting;
            m_northing = m_projection->m_fNorthing;
            m_altitudeO = m_projection->m_fAltitude;
        }
        else
        {
            m_latitude = m_projection->m_fLatitude;
            m_longitude = m_projection->m_fLongitude;
            m_altitudeO = m_projection->m_fAltitude;
        }
    }

    void ProjectionImpl::checkSourceDatum(const CGpsDatumParametersX& datumSrc)
    {
        if (datumSrc.m_fAxis <= 0.0)
        {
            throw std::runtime_error(errGPS_INVALIDSRCAXIS);
        }

		// When using ellipsoid, check flattening
        if (datumSrc.m_fFlattening != 0.0)
        {
            if ((datumSrc.m_fFlattening < 250.0) || (datumSrc.m_fFlattening > 350.0))
            {
                throw std::runtime_error(errGPS_INVALIDSRCFLATTENING);
            }
        }

		// When using gridfile, check existence
		// No gridfiles anymore
        if (datumSrc.m_lGridType)
        {
            if (datumSrc.m_strGrid.empty())
            {
                throw std::runtime_error(errGPS_INVALIDSRCDATUMGRIDFILE);
            }
        }
    }

    void ProjectionImpl::checkDestinationDatum(const CGpsDatumParametersX& datumDst)
    {
// SH: The two checks (dest, src) are almost identical, except for the error codes

        if (datumDst.m_fAxis <= 0.0)
        {
            throw std::runtime_error(errGPS_INVALIDDSTAXIS);
        }

// When using ellipsoid, check flattening
        if (datumDst.m_fFlattening != 0.0)
        {
            if ((datumDst.m_fFlattening < 250.0) || (datumDst.m_fFlattening > 350.0))
            {
                throw std::runtime_error(errGPS_INVALIDDSTFLATTENING);
            }
        }

// When using gridfile, check existence
        if (datumDst.m_lGridType)
        {
            if (datumDst.m_strGrid.empty())
            {
                throw std::runtime_error(errGPS_INVALIDDSTDATUMGRIDFILE);
            }
        }
    }

    void ProjectionImpl::putIAltitude(double ialtitude)
    {
        m_altitudeI = ialtitude;
    }

    double ProjectionImpl::getEasting()
    {
        return m_easting;
    }

    double ProjectionImpl::getNorthing()
    {
        return m_northing;
    }

    long ProjectionImpl::getZone()
    {
        return m_zone;
    }

    double ProjectionImpl::getLongitude()
    {
        return m_longitude;
    }

    double ProjectionImpl::getLatitude()
    {
        return m_latitude;
    }

    void ProjectionImpl::putEasting(double easting)
    {
        m_easting = easting;
    }

    void ProjectionImpl::putNorthing(double northing)
    {
        m_northing = northing;
    }

    void ProjectionImpl::transformGrid(GridParameters& src, GridParameters& dst)
    {
        GridParametersImpl& srcImpl = static_cast<GridParametersImpl&>(src);
        GridParametersImpl& dstImpl = static_cast<GridParametersImpl&>(dst);

        doTransform(srcImpl.getImpl(), dstImpl.getImpl());
    }

}

