#include "inc.h"
#include <iostream>

void inc(double& n)
{
    n++;
}

void inc(double* n)
{
    *n = *n + 1;
}