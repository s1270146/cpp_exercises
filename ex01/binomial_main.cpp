#include <iostream>
#include "new_binomial.h"
#include <iomanip>

using namespace std;

int main()
{
    /*cout << factorial(n) << endl;
    cout << binomialC(n,k) << endl;*/

    cout << "binomialPMF(5, 0.25, 1):"<< binomialPMF(5,0.25,1) << endl;
    cout << "binomialPMF(5, 0.25, 2):"<< binomialPMF(5,0.25,2) << endl;
    cout << "binomialPMF(25, 0.25, 2):"<< binomialPMF(25,0.25,2) << endl;
    cout << "binomialPMF(25, 0.25, 10):"<< binomialPMF(25,0.25,10) << endl;
    cout << "binomialPMF(25, 0.25, 15):"<< binomialPMF(25,0.25,15) << endl;

    return 0;
}