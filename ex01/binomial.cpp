#include "new_binomial.h"
#include <cmath>
#include <iostream>

double binomialPMF(int n, double p, int k)
{
    double q = 1 - p;
    if (n == k)
    {
        return pow(p, k);
    }
    if (k == 0)
    {
        return pow(q, n);
    }

    return q * binomialPMF(n - 1, p, k) + p * binomialPMF(n - 1, p, k - 1);
}