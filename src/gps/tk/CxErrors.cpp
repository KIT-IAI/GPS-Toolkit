
#include <windows.h>
#include <tchar.h>
#include "CxErrors.h"

CCxString & GetErrorText (LONG lError, CCxString & strError)
{
	switch ( lError )
	{
		case errSUCCESS                    	:	strError = _T ( "Success" ); break;
		case errGPS_ENDOFSATINFO           	:	strError = _T ( "No more SatelliteInfo objects available" ); break;
		case errGPS_LOADDATUMFAILED        	:	strError = _T ( "Failed to load datum definition file, the file could not be found" ); break;
		case errGPS_LOADDATUMCORRUPT       	:	strError = _T ( "Failed to load datum definition file, the file is not a valid datum definition file" ); break;
		case errGPS_SAVEDATUMFAILED        	:	strError = _T ( "Failed to save datum definition file, either the filename is incorrect, or the disk is write protected" ); break;
		case errGPS_LOADGRIDFAILED         	:	strError = _T ( "Failed to load grid definition file, the file could not be found" ); break;
		case errGPS_LOADGRIDCORRUPT        	:	strError = _T ( "Failed to load grid definition file, the file is not a valid grid definition file" ); break;
		case errGPS_SAVEGRIDFAILED         	:	strError = _T ( "Failed to save datum definition, either the filename is incorrect, or the disk is write protected" ); break;
		case errGPS_INVALIDSRCAXIS         	:	strError = _T ( "Source datum semi-major axis is invalid, value should be greater then zero" ); break;
		case errGPS_INVALIDDSTAXIS         	:	strError = _T ( "Destination datum semi-major axis is invalid, value should be greater then zero" ); break;
		case errGPS_INVALIDSRCFLATTENING   	:	strError = _T ( "Source inverse flattening is invalid, value should be beween 250-350" ); break;
		case errGPS_INVALIDDSTFLATTENING   	:	strError = _T ( "Destination inverse flattening is invalid, value should be between 250-250" ); break;
		case errGPS_INVALIDSRCDATUMGRIDFILE	:	strError = _T ( "Source datum grid file is invalid. Filename is missing." ); break;
		case errGPS_INVALIDDSTDATUMGRIDFILE	:	strError = _T ( "Destination datum grid file is invalid. Filename is missing." ); break;
		case errGPS_FAILEDLOADSRCDATUMGRIDFILE	:	strError = _T ( "Source datum grid file is invalid. Failed to open file." ); break;
		case errGPS_FAILEDLOADDSTDATUMGRIDFILE	:	strError = _T ( "Destination datum grid file is invalid. Failed to open file." ); break;
		case errGPS_FAILEDTOLOADSETUPAPI   	:	strError = _T ( "Garmin USB: Failed to load setupapi.dll" ); break;
		case errGPS_FAILEDTOIMPORTFUNCTION 	:	strError = _T ( "Garmin USB: Failed to import one or more functions from setupapi.dll" ); break;
		case errGPS_NOGRIDSLOADED          	:	strError = _T ( "Failed to load grid definitions from thedatabase" ); break;
		case errGPS_NOMOREGRIDS            	:	strError = _T ( "No more grids in database, last record reached" ); break;
		case errGPS_NODATUMSLOADED         	:	strError = _T ( "Failed to load datum definitions from the database" ); break;
		case errGPS_NOMOREDATUMS           	:	strError = _T ( "No more datums in database, last record reached" ); break;
		case errGPS_INVALIDZONE            	:	strError = _T ( "Invalid UTM zone specified, or UTM zone autodetection not possible" ); break;
		case errGPS_GARMIN_NODRIVERLOADED  	:	strError = _T ( "Garmin USB: Driver not loaded or installed" ); break;
		case errGPS_GARMIN_FAILEDTOINIT    	:	strError = _T ( "Garmin USB: Failed to initialize driver" ); break;
		case errGPS_GARMIN_NOTCONNECTED    	:	strError = _T ( "Garmin USB: Device not connected or driver not installed" ); break;
		case errGPS_GARMIN_DEVICEINUSE     	:	strError = _T ( "Garmin USB: Failed to open device, already opened by other process" ); break;
		case errGPS_GARMIN_DEVICENOTFOUND  	:	strError = _T ( "Garmin USB: Failed to open device, the specified device does not exist" ); break;
		case errGPS_GARMIN_UNKNOWN         	:	strError = _T ( "Garmin USB: Failed to open device, unknown error" ); break;
		case errGPS_GARMIN_SESSIONWRITE    	:	strError = _T ( "Garmin USB: Failed to start session, unable to write to device" ); break;
		case errGPS_GARMIN_SESSIONREAD     	:	strError = _T ( "Garmin USB: Failed to start session, no reply from device" ); break;
		case errGPS_GARMIN_SESSIONINVALID  	:	strError = _T ( "Garmin USB: Failed to start session, invalid reply from device" ); break;
		case errGPS_GARMIN_PVTWRITE        	:	strError = _T ( "Garmin USB: Failed to start realtime navigation data stream, unable to write to device" ); break;
		case errGPS_GARMIN_PVTREAD         	:	strError = _T ( "Garmin USB: Failed to start realtime navigation data stream, no reply from device" ); break;
		case errGPS_GARMIN_PVTINVALID      	:	strError = _T ( "Garmin USB: Failed to start realtime navigation data stream, invalid reply from device" ); break;
		case errGPS_GARMIN_WRITE           	:	strError = _T ( "Garmin USB: Generic error, unable to write to device" ); break;
		case errGPS_GARMIN_READ            	:	strError = _T ( "Garmin USB: Generic error, no reply from device" ); break;
		case errCOMM_NOSUCHDEVICE          	:	strError = _T ( "Serial device does not exist" ); break;
		case errCOMM_DEVICEINUSE           	:	strError = _T ( "Serial device is in use by another application or locked" ); break;
		case errCOMM_OPENDEVICEFAILED      	:	strError = _T ( "Failed to open serial device" ); break;
		case errCOMM_SETDEVICEFAILED       	:	strError = _T ( "Failed to set serial device settings" ); break;
		case errCOMM_NOTOPEN               	:	strError = _T ( "Serial device not opened, open serial port first" ); break;
		case errCOMM_SETTIMEOUTSFAILED     	:	strError = _T ( "Failed to setup serial device timeouts" ); break;
		case errCOMM_READTIMEOUT           	:	strError = _T ( "Timeout occurred while reading from serial device" ); break;
		case errCOMM_WRITETIMEOUT          	:	strError = _T ( "Timeout occurred while writing to serial device" ); break;
		case errMISC_CREATETHREADFAILED    	:	strError = _T ( "Failed to created new thread" ); break;
		case errMISC_CREATEINSTANCEFAILED  	:	strError = _T ( "Failed to create instance of object" ); break;
		case errMISC_OUTOFMEMORY           	:	strError = _T ( "Failed to allocate memory" ); break;
		case errMISC_FAILEDWAITTHREAD      	:	strError = _T ( "Failed to wait for thread to become running" ); break;
		case errMISC_EXCEPTIONERROR        	:	strError = _T ( "Unknown exception error occurred" ); break;
		case errMISC_CREATEEVENTFAILED     	:	strError = _T ( "Failed to create event" ); break;
		case errMISC_INVALIDPARAMETER      	:	strError = _T ( "Invalid parameter passed to function" ); break;
		case errMISC_INVALIDLICENSECODE    	:	strError = _T ( "License code is invalid" ); break;
		case errMISC_EVALUATIONEXPIRED     	:	strError = _T ( "Trial period has expired" ); break;
		case errMISC_IMPROPLICENSE         	:	strError = _T ( "License is impropriate to use this function. You need to upgrade to another license" ); break;
		case errOSGB_FAILEDLOADDATA        	:	strError = _T ( "OSTN02: Failed to load OSTN02 transformation data" ); break;
		case errOSGB_OUTOFBOUNDS           	:	strError = _T ( "OSTN02: Input coordinate(s) out of bounds" ); break;
		default: strError = _T ( "Unknown Error" ); break;
	}

	return strError;
}

