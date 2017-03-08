#include "stdafx.h"

#include "DatumGridUtils.h"

#include <math.h>

double gps_round (double x)
{
    double r = 0.0;
    double d = 0.0;

    d = modf (x, &r);

    if (d >= 0.999999)
        x = ceil (x);

    return x;
}

/////
