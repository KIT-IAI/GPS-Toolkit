
#include "CxString.h"
#define errSUCCESS                                        	0	//Success
#define errGPS_ENDOFSATINFO                               	19025	//No more SatelliteInfo objects available
#define errGPS_LOADDATUMFAILED                            	19030	//Failed to load datum definition file, the file could not be found
#define errGPS_LOADDATUMCORRUPT                           	19031	//Failed to load datum definition file, the file is not a valid datum definition file
#define errGPS_SAVEDATUMFAILED                            	19032	//Failed to save datum definition file, either the filename is incorrect, or the disk is write protected
#define errGPS_LOADGRIDFAILED                             	19035	//Failed to load grid definition file, the file could not be found
#define errGPS_LOADGRIDCORRUPT                            	19036	//Failed to load grid definition file, the file is not a valid grid definition file
#define errGPS_SAVEGRIDFAILED                             	19037	//Failed to save datum definition, either the filename is incorrect, or the disk is write protected
#define errGPS_INVALIDSRCAXIS                             	19040	//Source datum semi-major axis is invalid, value should be greater then zero
#define errGPS_INVALIDDSTAXIS                             	19041	//Destination datum semi-major axis is invalid, value should be greater then zero
#define errGPS_INVALIDSRCFLATTENING                       	19042	//Source inverse flattening is invalid, value should be beween 250-350
#define errGPS_INVALIDDSTFLATTENING                       	19043	//Destination inverse flattening is invalid, value should be between 250-250
#define errGPS_INVALIDSRCDATUMGRIDFILE                    	19044	//Source datum grid file is invalid. Filename is missing.
#define errGPS_INVALIDDSTDATUMGRIDFILE                    	19045	//Destination datum grid file is invalid. Filename is missing.
#define errGPS_FAILEDLOADSRCDATUMGRIDFILE                 	19046	//Source datum grid file is invalid. Failed to open file.
#define errGPS_FAILEDLOADDSTDATUMGRIDFILE                 	19047	//Destination datum grid file is invalid. Failed to open file.
#define errGPS_FAILEDTOLOADSETUPAPI                       	19050	//Garmin USB: Failed to load setupapi.dll
#define errGPS_FAILEDTOIMPORTFUNCTION                     	19051	//Garmin USB: Failed to import one or more functions from setupapi.dll
#define errGPS_NOGRIDSLOADED                              	19060	//Failed to load grid definitions from thedatabase
#define errGPS_NOMOREGRIDS                                	19061	//No more grids in database, last record reached
#define errGPS_NODATUMSLOADED                             	19062	//Failed to load datum definitions from the database
#define errGPS_NOMOREDATUMS                               	19063	//No more datums in database, last record reached
#define errGPS_INVALIDZONE                                	19065	//Invalid UTM zone specified, or UTM zone autodetection not possible
#define errGPS_GARMIN_NODRIVERLOADED                      	19101	//Garmin USB: Driver not loaded or installed
#define errGPS_GARMIN_FAILEDTOINIT                        	19102	//Garmin USB: Failed to initialize driver
#define errGPS_GARMIN_NOTCONNECTED                        	19103	//Garmin USB: Device not connected or driver not installed
#define errGPS_GARMIN_DEVICEINUSE                         	19110	//Garmin USB: Failed to open device, already opened by other process
#define errGPS_GARMIN_DEVICENOTFOUND                      	19111	//Garmin USB: Failed to open device, the specified device does not exist
#define errGPS_GARMIN_UNKNOWN                             	19112	//Garmin USB: Failed to open device, unknown error
#define errGPS_GARMIN_SESSIONWRITE                        	19120	//Garmin USB: Failed to start session, unable to write to device
#define errGPS_GARMIN_SESSIONREAD                         	19121	//Garmin USB: Failed to start session, no reply from device
#define errGPS_GARMIN_SESSIONINVALID                      	19122	//Garmin USB: Failed to start session, invalid reply from device
#define errGPS_GARMIN_PVTWRITE                            	19130	//Garmin USB: Failed to start realtime navigation data stream, unable to write to device
#define errGPS_GARMIN_PVTREAD                             	19131	//Garmin USB: Failed to start realtime navigation data stream, no reply from device
#define errGPS_GARMIN_PVTINVALID                          	19132	//Garmin USB: Failed to start realtime navigation data stream, invalid reply from device
#define errGPS_GARMIN_WRITE                               	19140	//Garmin USB: Generic error, unable to write to device
#define errGPS_GARMIN_READ                                	19141	//Garmin USB: Generic error, no reply from device
#define errCOMM_NOSUCHDEVICE                              	20001	//Serial device does not exist
#define errCOMM_DEVICEINUSE                               	20002	//Serial device is in use by another application or locked
#define errCOMM_OPENDEVICEFAILED                          	20003	//Failed to open serial device
#define errCOMM_SETDEVICEFAILED                           	20004	//Failed to set serial device settings
#define errCOMM_NOTOPEN                                   	20005	//Serial device not opened, open serial port first
#define errCOMM_SETTIMEOUTSFAILED                         	20006	//Failed to setup serial device timeouts
#define errCOMM_READTIMEOUT                               	20010	//Timeout occurred while reading from serial device
#define errCOMM_WRITETIMEOUT                              	20020	//Timeout occurred while writing to serial device
#define errMISC_CREATETHREADFAILED                        	21001	//Failed to created new thread
#define errMISC_CREATEINSTANCEFAILED                      	21002	//Failed to create instance of object
#define errMISC_OUTOFMEMORY                               	21003	//Failed to allocate memory
#define errMISC_FAILEDWAITTHREAD                          	21004	//Failed to wait for thread to become running
#define errMISC_EXCEPTIONERROR                            	21005	//Unknown exception error occurred
#define errMISC_CREATEEVENTFAILED                         	21006	//Failed to create event
#define errMISC_INVALIDPARAMETER                          	21007	//Invalid parameter passed to function
#define errMISC_INVALIDLICENSECODE                        	21010	//License code is invalid
#define errMISC_EVALUATIONEXPIRED                         	21011	//Trial period has expired
#define errMISC_IMPROPLICENSE                             	21012	//License is impropriate to use this function. You need to upgrade to another license
#define errOSGB_FAILEDLOADDATA                            	22001	//OSTN02: Failed to load OSTN02 transformation data
#define errOSGB_OUTOFBOUNDS                               	22002	//OSTN02: Input coordinate(s) out of bounds

CCxString & GetErrorText (LONG lError, CCxString & strError);

//////////////////////////////////////////////////////////////////////
