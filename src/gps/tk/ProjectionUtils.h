#include <windows.h>



#include "ProjTypes.h"



void xyz2plh		(double x, double y, double z, double & p, double & l, double & h, CCfgMapProjection * pParams);
void plh2xyz		(double p, double l, double h, double & x, double & y, double & z, CCfgMapProjection * pParams);



void towgs84		(double x, double y, double z, double & xx, double & yy, double & zz, CCfgMapProjection * pParams);
void fromwgs84		(double x, double y, double z, double & xx, double & yy, double & zz, CCfgMapProjection * pParams);



double MetersToUnits (long lUnits, double x);
double UnitsToMeters (long lUnits, double x);


