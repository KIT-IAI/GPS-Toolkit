#include "StdAfx.h"

#include <vector>
#include <fstream>
//#include <boost/filesystem/fstream.hpp>
//#include <boost/locale.hpp>
#include <locale>
#include <codecvt>

//#include "../Settings.hpp"
#include "DatumsDat.hpp"
#include "GridsDat.hpp"

#include "SpatialBase.h"

#include "GpsGridParametersX.h"
#include "GpsDatumParametersX.h"

#include "CxErrors.h"
#include "../Exception.hpp"

/*
void readGpsDatabase(const boost::filesystem::path& path, std::vector<BYTE>& buf)
{
	boost::filesystem::ifstream fin(path, std::ios::binary);
	fin.seekg(0, std::ios::end);
	auto fileSize = fin.tellg();
	fin.seekg(0, std::ios::beg);

	buf.resize(fileSize);
	fin.read(reinterpret_cast<char*>(&buf[0]), fileSize);
}
*/

CRecordDatum::CRecordDatum()
{
	Clear();
}

CRecordDatum::~CRecordDatum()
{
}

void CRecordDatum::Clear()
{
	numId = 0L;

	dblAxis = 0.0;
	dblInverseFlattening = 0.0;
	dblScaleFactor = 0.0;
	dblPrimeMeridian = 0.0;
	dblTranslationX = 0.0;
	dblTranslationY = 0.0;
	dblTranslationZ = 0.0;
	dblRotationX = 0.0;
	dblRotationY = 0.0;
	dblRotationZ = 0.0;

	strName = _T("");

	return VOID();
}
CRecordGrid::CRecordGrid()
{
	Clear();
}

CRecordGrid::~CRecordGrid()
{
}

VOID CRecordGrid::Clear()
{
	numId = 0L;
	numUnits = 0L;
	numProjection = 0L;
	numDatum = 0L;
	numStatePlane = 0L;

	dblScaleFactor = 0.0;
	dblFalseNorthing = 0.0;
	dblFalseEasting = 0.0;
	dblOriginLatitude = 0.0;
	dblOriginLongitude = 0.0;
	dblParallelNorth = 0.0;
	dblParallelSouth = 0.0;
	dblAzimuth = 0.0;
	dblRectifiedGrid = 0.0;

	strName = _T("");

	return VOID();
}
CSpatialBase::CSpatialBase()
{
	m_lGrids = 0L;
	m_lDatums = 0L;

	LoadDatums();
	LoadGrids();
}

CSpatialBase::~CSpatialBase()
{
	if (m_pDatums)
	{
		delete[]m_pDatums;
		m_pDatums = NULL;
	}

	if (m_pGrids)
	{
		delete[]m_pGrids;
		m_pGrids = NULL;
	}
}

long CSpatialBase::SetStatePlane(LONG lCode, CGpsGridParametersX * pParams)
{
	LONG	lResult = -1L;
	LONG	lDatum = 0L;
	LONG	l = 0L;

	BOOL	bGrid = FALSE;

	if (m_pDatums == NULL)
		goto _EndSetStatePlane;

	if (m_pGrids == NULL)
		goto _EndSetStatePlane;

	if (pParams == NULL)
		goto _EndSetStatePlane;

	pParams->Clear();

	// Search for code in grid list
	for (l = 0L; l < m_lGrids; l++)
	{
		if (m_pGrids[l].numStatePlane == lCode)
		{
			pParams->m_fFalseEasting = m_pGrids[l].dblFalseEasting;
			pParams->m_fFalseNorthing = m_pGrids[l].dblFalseNorthing;
			pParams->m_fOriginLatitude = m_pGrids[l].dblOriginLatitude;
			pParams->m_fOriginLongitude = m_pGrids[l].dblOriginLongitude;
			pParams->m_fParallelNorth = m_pGrids[l].dblParallelNorth;
			pParams->m_fParallelSouth = m_pGrids[l].dblParallelSouth;
			pParams->m_fScaleFactor = m_pGrids[l].dblScaleFactor;
			pParams->m_fAzimuthAngle = m_pGrids[l].dblAzimuth;
			pParams->m_fRectifiedGridAngle = m_pGrids[l].dblRectifiedGrid;

			pParams->m_lId = m_pGrids[l].numId;
			pParams->m_lProjection = m_pGrids[l].numProjection;
			pParams->m_lUnits = m_pGrids[l].numUnits;

			lDatum = m_pGrids[l].numDatum;

			pParams->m_strName = m_pGrids[l].strName;

			bGrid = TRUE;

			break;
		}
	}

	// Search for code in datum list
	for (l = 0L; l < m_lDatums; l++)
	{
		if ((m_pDatums[l].numId == lDatum) && (bGrid == TRUE))
		{
			pParams->m_cGpsDatumParameters.m_fAxis = m_pDatums[l].dblAxis;
			pParams->m_cGpsDatumParameters.m_fFlattening = m_pDatums[l].dblInverseFlattening;
			pParams->m_cGpsDatumParameters.m_fScaleFactor = m_pDatums[l].dblScaleFactor;
			pParams->m_cGpsDatumParameters.m_fPrimeMeridian = m_pDatums[l].dblPrimeMeridian;
			pParams->m_cGpsDatumParameters.m_fTranslationX = m_pDatums[l].dblTranslationX;
			pParams->m_cGpsDatumParameters.m_fTranslationY = m_pDatums[l].dblTranslationY;
			pParams->m_cGpsDatumParameters.m_fTranslationZ = m_pDatums[l].dblTranslationZ;
			pParams->m_cGpsDatumParameters.m_fRotationX = m_pDatums[l].dblRotationX;
			pParams->m_cGpsDatumParameters.m_fRotationY = m_pDatums[l].dblRotationY;
			pParams->m_cGpsDatumParameters.m_fRotationZ = m_pDatums[l].dblRotationZ;

			lResult = 0L;

			break;
		}
	}

_EndSetStatePlane:

	return lResult;
}

long CSpatialBase::SetGrid(LONG lCode, CGpsGridParametersX* pParams)
{
	LONG	lResult = -1L;
	LONG	lDatum = 0L;
	LONG	l = 0L;

	BOOL	bGrid = FALSE;

	if (m_pDatums == NULL)
		goto _EndSetGrid;

	if (m_pGrids == NULL)
		goto _EndSetGrid;

	if (pParams == NULL)
		goto _EndSetGrid;

	pParams->Clear();

	// Search for code in grid list
	for (l = 0L; l < m_lGrids; l++)
	{
		if (m_pGrids[l].numId == lCode)
		{
			pParams->m_fFalseEasting = m_pGrids[l].dblFalseEasting;
			pParams->m_fFalseNorthing = m_pGrids[l].dblFalseNorthing;
			pParams->m_fOriginLatitude = m_pGrids[l].dblOriginLatitude;
			pParams->m_fOriginLongitude = m_pGrids[l].dblOriginLongitude;
			pParams->m_fParallelNorth = m_pGrids[l].dblParallelNorth;
			pParams->m_fParallelSouth = m_pGrids[l].dblParallelSouth;
			pParams->m_fScaleFactor = m_pGrids[l].dblScaleFactor;
			pParams->m_fAzimuthAngle = m_pGrids[l].dblAzimuth;
			pParams->m_fRectifiedGridAngle = m_pGrids[l].dblRectifiedGrid;

			pParams->m_lId = m_pGrids[l].numId;
			pParams->m_lProjection = m_pGrids[l].numProjection;
			pParams->m_lUnits = m_pGrids[l].numUnits;

			lDatum = m_pGrids[l].numDatum;

			pParams->m_strName = m_pGrids[l].strName;

			bGrid = TRUE;

			break;
		}
	}

	// Search for code in datum list
	for (l = 0L; l < m_lDatums; l++)
	{
		if (((m_pDatums[l].numId == lDatum) && (bGrid == TRUE)) ||
			((m_pDatums[l].numId == lCode) && (bGrid == FALSE)))
		{
			pParams->m_cGpsDatumParameters.m_fAxis = m_pDatums[l].dblAxis;
			pParams->m_cGpsDatumParameters.m_fFlattening = m_pDatums[l].dblInverseFlattening;
			pParams->m_cGpsDatumParameters.m_fScaleFactor = m_pDatums[l].dblScaleFactor;
			pParams->m_cGpsDatumParameters.m_fPrimeMeridian = m_pDatums[l].dblPrimeMeridian;
			pParams->m_cGpsDatumParameters.m_fTranslationX = m_pDatums[l].dblTranslationX;
			pParams->m_cGpsDatumParameters.m_fTranslationY = m_pDatums[l].dblTranslationY;
			pParams->m_cGpsDatumParameters.m_fTranslationZ = m_pDatums[l].dblTranslationZ;
			pParams->m_cGpsDatumParameters.m_fRotationX = m_pDatums[l].dblRotationX;
			pParams->m_cGpsDatumParameters.m_fRotationY = m_pDatums[l].dblRotationY;
			pParams->m_cGpsDatumParameters.m_fRotationZ = m_pDatums[l].dblRotationZ;

			lResult = 0L;

			break;
		}
	}

_EndSetGrid:

	return lResult;
}

long CSpatialBase::SetDatum(LONG lCode, CGpsDatumParametersX * pParams)
{
	LONG	lResult = -1L;
	LONG	l = 0L;

	if (m_pDatums == NULL)
		goto _EndSetDatum;

	if (pParams == NULL)
		goto _EndSetDatum;

	pParams->Clear();

	// Search for code in datum list
	for (l = 0L; l < m_lDatums; l++)
	{
		if (m_pDatums[l].numId == lCode)
		{
			pParams->m_fAxis = m_pDatums[l].dblAxis;
			pParams->m_fFlattening = m_pDatums[l].dblInverseFlattening;
			pParams->m_fScaleFactor = m_pDatums[l].dblScaleFactor;
			pParams->m_fPrimeMeridian = m_pDatums[l].dblPrimeMeridian;
			pParams->m_fTranslationX = m_pDatums[l].dblTranslationX;
			pParams->m_fTranslationY = m_pDatums[l].dblTranslationY;
			pParams->m_fTranslationZ = m_pDatums[l].dblTranslationZ;
			pParams->m_fRotationX = m_pDatums[l].dblRotationX;
			pParams->m_fRotationY = m_pDatums[l].dblRotationY;
			pParams->m_fRotationZ = m_pDatums[l].dblRotationZ;
			pParams->m_lId = m_pDatums[l].numId;
			pParams->m_strName = m_pDatums[l].strName;

			lResult = 0L;

			break;
		}
	}

_EndSetDatum:

	return lResult;
}

long CSpatialBase::GetFirstDatum(CGpsDatumParametersX * pParams)
{
	LONG	lResult = 0L;

	m_lCurrentDatum = 0L;

	if (m_lDatums == 0L)
	{
		lResult = errGPS_NODATUMSLOADED;
		goto _EndGetFirstDatum;
	}

	lResult = SetDatum(m_pDatums[m_lCurrentDatum].numId, pParams);

_EndGetFirstDatum:

	return lResult;
}

long CSpatialBase::GetNextDatum(CGpsDatumParametersX * pParams)
{
	LONG	lResult = 0L;

	m_lCurrentDatum++;

	if (m_lDatums <= m_lCurrentDatum)
	{
		lResult = errGPS_NOMOREDATUMS;
		goto _EndGetNextDatum;
	}

	lResult = SetDatum(m_pDatums[m_lCurrentDatum].numId, pParams);

_EndGetNextDatum:

	return lResult;
}

long CSpatialBase::GetFirstGrid(CGpsGridParametersX * pParams)
{
	LONG	lResult = 0L;

	m_lCurrentGrid = 0L;

	if (m_lGrids == 0L)
	{
		lResult = errGPS_NOGRIDSLOADED;
		goto _EndGetFirstGrid;
	}

	lResult = SetGrid(m_pGrids[m_lCurrentGrid].numId, pParams);

_EndGetFirstGrid:

	return lResult;
}

long CSpatialBase::GetNextGrid(CGpsGridParametersX * pParams)
{
	LONG	lResult = 0L;

	m_lCurrentGrid++;

	if (m_lGrids <= m_lCurrentGrid)
	{
		lResult = errGPS_NOMOREGRIDS;
		goto _EndGetNextGrid;
	}

	lResult = SetGrid(m_pGrids[m_lCurrentGrid].numId, pParams);

_EndGetNextGrid:

	return lResult;
}

void CSpatialBase::LoadGrids()
{
	LONG		lRecords = 0L;
	LONG		l = 0L;

	HRSRC		hResInfo = NULL;
	HGLOBAL		hGlobal = NULL;

	// TODO: SH
	// HINSTANCE	hInstance	= _AtlBaseModule.GetResourceInstance ();

	// 	HINSTANCE hInstance;
	// 
	// 	GetModuleHandleEx(
	// 		GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS,
	// 		NULL,
	// 		&hInstance);
	// 
	// 	if ( hInstance == NULL )
	// 		goto _EndLoadGrids;
	// 	
	// 	hResInfo = FindResource ( hInstance, MAKEINTRESOURCE ( IDR_TABLE_GRIDS ), RT_RCDATA );
	// 
	// 	if ( hResInfo == NULL )
	// 		goto _EndLoadGrids;
	// 
	// 	hGlobal = LoadResource ( hInstance, hResInfo );
	// 
	// 	if ( hGlobal == NULL )
	// 		goto _EndLoadGrids;
	// 
	// 	m_lOffset	= 0L;
	// 
	// 	m_lSize = SizeofResource ( hInstance, hResInfo );
	// 
	// 	if ( m_lSize <= 0L )
	// 		goto _EndLoadGrids;
	// 
	// 	m_pszData = (  BYTE * ) LockResource ( hGlobal );
	// 
	// 	if ( m_pszData == NULL )
	// 		goto _EndLoadGrids;

  //const std::vector<BYTE>& gridsBuf = GRIDS_DAT;

  try
  {
	  //readGpsDatabase(gps::Settings::getInstance().getGridsPath(), gridsBuf);
  }
  catch (const gps::Exception& e)
  {
  	return;
  }

	m_lOffset = 0;
	m_pszData = GRIDS_DAT.data();
	m_lSize = static_cast<LONG>(GRIDS_DAT.size());

	lRecords = GetNumber();

	// Allocate records
	m_pGrids = new CRecordGrid[lRecords + 1L];

	if (m_pGrids == NULL)
		goto _EndLoadGrids;

	for (l = 0L; l < lRecords; l++)
	{
		while (TRUE)
		{
			CHAR	cField = GetField();

			// End Of Record ?
			if (cField == 0x1A)
				break;

			// No More Data
			if (cField == 0x00)
				break;

			switch (cField)
			{
			case 'A':		m_pGrids[l].numId = GetNumber();
				break;

			case 'B':		m_pGrids[l].numProjection = GetNumber();
				break;

			case 'C':		m_pGrids[l].numDatum = GetNumber();
				break;

			case 'D':		m_pGrids[l].numUnits = GetNumber();
				break;

			case 'E':		m_pGrids[l].dblScaleFactor = GetDouble();
				break;

			case 'F':		m_pGrids[l].dblFalseNorthing = GetDouble();
				break;

			case 'G':		m_pGrids[l].dblFalseEasting = GetDouble();
				break;

			case 'H':		m_pGrids[l].dblOriginLatitude = GetDouble();
				break;

			case 'I':		m_pGrids[l].dblOriginLongitude = GetDouble();
				break;

			case 'J':		m_pGrids[l].dblParallelNorth = GetDouble();
				break;

			case 'K':		m_pGrids[l].dblParallelSouth = GetDouble();
				break;

			case 'L':		m_pGrids[l].dblAzimuth = GetDouble();
				break;

			case 'M':		m_pGrids[l].dblRectifiedGrid = GetDouble();
				break;

			case 'N':		GetString(m_pGrids[l].strName);
				break;

			case 'O':		m_pGrids[l].numStatePlane = GetNumber();
				break;
			}
		}

		m_lGrids++;
	}

_EndLoadGrids:

	if (m_pszData)
	{
		FreeResource(hGlobal);
		hGlobal = NULL;
	}

	return void();
}

void CSpatialBase::LoadDatums()
{
	LONG		lRecords = 0L;
	LONG		l = 0L;

	HRSRC		hResInfo = NULL;
	HGLOBAL		hGlobal = NULL;

	//const std::vector<BYTE>& datumBuf = DATUMS_DAT;
	//readGpsDatabase(gps::Settings::getInstance().getDatumsPath(), datumBuf);

	m_lOffset = 0;
	m_pszData = DATUMS_DAT.data();
	m_lSize = static_cast<LONG>(DATUMS_DAT.size());

	lRecords = GetNumber();

	// Allocate records
	m_pDatums = new CRecordDatum[lRecords + 1L];

	if (m_pDatums == NULL)
		goto _EndLoadDatums;
	for (l = 0L; l < lRecords; l++)
	{
		while (TRUE)
		{
			CHAR	cField = GetField();

			// End Of Record ?
			if (cField == 0x1A)
				break;

			// No More Data
			if (cField == 0x00)
				break;

			switch (cField)
			{
			case 'A':		m_pDatums[l].numId = GetNumber();
				break;

			case 'B':		m_pDatums[l].dblAxis = GetDouble();
				break;

			case 'C':		m_pDatums[l].dblInverseFlattening = GetDouble();
				break;

			case 'D':		m_pDatums[l].dblScaleFactor = GetDouble();
				break;

			case 'E':		m_pDatums[l].dblTranslationX = GetDouble();
				break;

			case 'F':		m_pDatums[l].dblTranslationY = GetDouble();
				break;

			case 'G':		m_pDatums[l].dblTranslationZ = GetDouble();
				break;

			case 'H':		m_pDatums[l].dblRotationX = GetDouble();
				break;

			case 'I':		m_pDatums[l].dblRotationY = GetDouble();
				break;

			case 'J':		m_pDatums[l].dblRotationZ = GetDouble();
				break;

			case 'K':		m_pDatums[l].dblPrimeMeridian = GetDouble();
				break;

			case 'L':		GetString(m_pDatums[l].strName);
				break;
			}
		}

		m_lDatums++;
	}
_EndLoadDatums:

	if (m_pszData)
	{
		FreeResource(hGlobal);
		hGlobal = NULL;
	}

	return void();
}

LONG CSpatialBase::GetNumber()
{
	LONG	lValue = 0L;

	if ((m_lOffset + sizeof(int32_t)) < m_lSize)
	{
		memcpy(&lValue, m_pszData + m_lOffset, sizeof(int32_t));
		m_lOffset += sizeof(int32_t);
	}

	return lValue;
}

DOUBLE CSpatialBase::GetDouble()
{
	DOUBLE	dblValue = 0.0;

	if ((m_lOffset + sizeof(DOUBLE)) < m_lSize)
	{
		memcpy(&dblValue, m_pszData + m_lOffset, sizeof(DOUBLE));
		m_lOffset += sizeof(DOUBLE);
	}

	return dblValue;
}

CHAR CSpatialBase::GetField()
{
	CHAR	cValue = 0;

	if ((m_lOffset + sizeof(CHAR)) <= m_lSize)
	{
		memcpy(&cValue, m_pszData + m_lOffset, sizeof(CHAR));
		m_lOffset += sizeof(CHAR);
	}

	return cValue;
}
CCxString & CSpatialBase::GetString(CCxString & strString)
{
	UCHAR	cValue = GetField();
	CHAR  *	pszData = NULL;

	if (cValue == 0)
	{
		goto _EndGetString;
	}

	if ((m_lOffset + cValue) <= m_lSize)
	{
		pszData = new CHAR[cValue + 1];

		if (pszData == NULL)
			goto _EndGetString;

		memcpy(pszData, m_pszData + m_lOffset, cValue);
		pszData[cValue] = '\0';

		int reqLen = MultiByteToWideChar(CP_ACP, 0, pszData, cValue + 1, nullptr, 0);

		std::vector<TCHAR> buf(reqLen);
		reqLen = MultiByteToWideChar(CP_ACP, 0, pszData, cValue + 1, reinterpret_cast<LPWSTR>(&buf[0]), reqLen + 1);


		strString = CCxString(std::basic_string<TCHAR>(buf.begin(), buf.end() - 1));
		//strString = CCxString(x);
		m_lOffset += cValue;
	}

_EndGetString:

	if (pszData)
	{
		delete[]pszData;
		pszData = NULL;
	}

	return strString;
}
