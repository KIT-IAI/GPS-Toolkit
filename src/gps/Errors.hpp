#pragma once

#include <string>

namespace gps
{
	const std::string errSUCCESS{ "Success" };
	const std::string errGPS_ENDOFSATINFO{ "No more SatelliteInfo objects available" };
	const std::string errGPS_LOADDATUMFAILED{ "Failed to load datum definition file, the file could not be found" };
	const std::string errGPS_LOADDATUMCORRUPT{ "Failed to load datum definition file, the file is not a valid datum definition file" };
	const std::string errGPS_SAVEDATUMFAILED{ "Failed to save datum definition file, either the filename is incorrect, or the disk is write protected" };
	const std::string errGPS_LOADGRIDFAILED{ "Failed to load grid definition file, the file could not be found" };
	const std::string errGPS_LOADGRIDCORRUPT{ "Failed to load grid definition file, the file is not a valid grid definition file" };
	const std::string errGPS_SAVEGRIDFAILED{ "Failed to save datum definition, either the filename is incorrect, or the disk is write protected" };
	const std::string errGPS_INVALIDSRCAXIS{ "Source datum semi-major axis is invalid, value should be greater then zero" };
	const std::string errGPS_INVALIDDSTAXIS{ "Destination datum semi-major axis is invalid, value should be greater then zero" };
	const std::string errGPS_INVALIDSRCFLATTENING{ "Source inverse flattening is invalid, value should be beween 250-350" };
	const std::string errGPS_INVALIDDSTFLATTENING{ "Destination inverse flattening is invalid, value should be between 250-250" };
	const std::string errGPS_INVALIDSRCDATUMGRIDFILE{ "Source datum grid file is invalid. Filename is missing." };
	const std::string errGPS_INVALIDDSTDATUMGRIDFILE{ "Destination datum grid file is invalid. Filename is missing." };
	const std::string errGPS_FAILEDLOADSRCDATUMGRIDFILE{ "Source datum grid file is invalid. Failed to open file." };
	const std::string errGPS_FAILEDLOADDSTDATUMGRIDFILE{ "Destination datum grid file is invalid. Failed to open file." };
	const std::string errGPS_FAILEDTOLOADSETUPAPI{ "Garmin USB: Failed to load setupapi.dll" };
	const std::string errGPS_FAILEDTOIMPORTFUNCTION{ "Garmin USB: Failed to import one or more functions from setupapi.dll" };
	const std::string errGPS_NOGRIDSLOADED{ "Failed to load grid definitions from thedatabase" };
	const std::string errGPS_NOMOREGRIDS{ "No more grids in database, last record reached" };
	const std::string errGPS_NODATUMSLOADED{ "Failed to load datum definitions from the database" };
	const std::string errGPS_NOMOREDATUMS{ "No more datums in database, last record reached" };
	const std::string errGPS_INVALIDZONE{ "Invalid UTM zone specified, or UTM zone autodetection not possible" };
	const std::string errGPS_GARMIN_NODRIVERLOADED{ "Garmin USB: Driver not loaded or installed" };
	const std::string errGPS_GARMIN_FAILEDTOINIT{ "Garmin USB: Failed to initialize driver" };
	const std::string errGPS_GARMIN_NOTCONNECTED{ "Garmin USB: Device not connected or driver not installed" };
	const std::string errGPS_GARMIN_DEVICEINUSE{ "Garmin USB: Failed to open device, already opened by other process" };
	const std::string errGPS_GARMIN_DEVICENOTFOUND{ "Garmin USB: Failed to open device, the specified device does not exist" };
	const std::string errGPS_GARMIN_UNKNOWN{ "Garmin USB: Failed to open device, unknown error" };
	const std::string errGPS_GARMIN_SESSIONWRITE{ "Garmin USB: Failed to start session, unable to write to device" };
	const std::string errGPS_GARMIN_SESSIONREAD{ "Garmin USB: Failed to start session, no reply from device" };
	const std::string errGPS_GARMIN_SESSIONINVALID{ "Garmin USB: Failed to start session, invalid reply from device" };
	const std::string errGPS_GARMIN_PVTWRITE{ "Garmin USB: Failed to start realtime navigation data stream, unable to write to device" };
	const std::string errGPS_GARMIN_PVTREAD{ "Garmin USB: Failed to start realtime navigation data stream, no reply from device" };
	const std::string errGPS_GARMIN_PVTINVALID{ "Garmin USB: Failed to start realtime navigation data stream, invalid reply from device" };
	const std::string errGPS_GARMIN_WRITE{ "Garmin USB: Generic error, unable to write to device" };
	const std::string errGPS_GARMIN_READ{ "Garmin USB: Generic error, no reply from device" };
	const std::string errCOMM_NOSUCHDEVICE{ "Serial device does not exist" };
	const std::string errCOMM_DEVICEINUSE{ "Serial device is in use by another application or locked" };
	const std::string errCOMM_OPENDEVICEFAILED{ "Failed to open serial device" };
	const std::string errCOMM_SETDEVICEFAILED{ "Failed to set serial device settings" };
	const std::string errCOMM_NOTOPEN{ "Serial device not opened, open serial port first" };
	const std::string errCOMM_SETTIMEOUTSFAILED{ "Failed to setup serial device timeouts" };
	const std::string errCOMM_READTIMEOUT{ "Timeout occurred while reading from serial device" };
	const std::string errCOMM_WRITETIMEOUT{ "Timeout occurred while writing to serial device" };
	const std::string errMISC_CREATETHREADFAILED{ "Failed to created new thread" };
	const std::string errMISC_CREATEINSTANCEFAILED{ "Failed to create instance of object" };
	const std::string errMISC_OUTOFMEMORY{ "Failed to allocate memory" };
	const std::string errMISC_FAILEDWAITTHREAD{ "Failed to wait for thread to become running" };
	const std::string errMISC_EXCEPTIONERROR{ "Unknown exception error occurred" };
	const std::string errMISC_CREATEEVENTFAILED{ "Failed to create event" };
	const std::string errMISC_INVALIDPARAMETER{ "Invalid parameter passed to function" };
	const std::string errMISC_INVALIDLICENSECODE{ "License code is invalid" };
	const std::string errMISC_EVALUATIONEXPIRED{ "Trial period has expired" };
	const std::string errMISC_IMPROPLICENSE{ "License is impropriate to use this function. You need to upgrade to another license" };
	const std::string errOSGB_FAILEDLOADDATA{ "OSTN02: Failed to load OSTN02 transformation data" };
	const std::string errOSGB_OUTOFBOUNDS{ "OSTN02: Input coordinate(s) out of bounds" };
}

