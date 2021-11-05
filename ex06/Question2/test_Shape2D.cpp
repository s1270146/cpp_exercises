#include <iostream>
#include "Polygon.h"

int main()
{
    Polygon *pol = new Polygon(4);
    pol->setP(0,0,0);
    pol->setP(1,0,3);
    pol->setP(2,4,0);
    pol->setP(3,0,0);
    std::cout << pol->compute_area() << std::endl;
    return 0;
}