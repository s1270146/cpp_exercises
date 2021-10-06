#include "binomial.h"
#include <cmath>
#include <iostream>

double binomialPMF(int n, double p, int k)
{
    double q = 1 - p;
    double l = (1 - p) * binomialC(n - 1, k) * pow(p, k) * pow(q, n - 1 - k);
    double r = p * binomialC(n - 1, k - 1) * pow(p, k - 1) * pow(q, n - k);
    
    //std::cout << n << " " << k << std::endl;
    return l + r;
}

long factorial(int n,int k)
{
    //std::cout << std::endl;
    long x = 1;
    for (int i = k; i < n; i++)
    {
        //std::cout << x << " " ;
        x *= (long)(i + 1);
    }
    //std:: cout << std::endl;
    return x;
}

double binomialC(int n, int k)
{
    //std::cout << (double)factorial(n) / (double)(factorial(k) * factorial(n - k)) << std::endl;
    if(k>(n-k))return (double)factorial(n,k) / factorial(n - k,0);
    else return (double)factorial(n,n-k) / factorial(k,0);
}
