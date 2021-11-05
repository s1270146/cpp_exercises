#include "Polygon.h"
#include <iostream>

Polygon::Polygon(int n) : Shape2D()
{
    p = new Point2D[n];
    _n = n;
}

Polygon::~Polygon(){}

std::string Polygon::get_name() const
{
    return "Polygon";
}

float Polygon::compute_area() const
{
    int sum = 0;
    for(int i=0;i<_n;i++)
    {
        sum += ( p[i].getX() * p[i+1].getY() ) - ( p[i].getY() * p[i+1].getX() );
    }
    if(sum < 0)sum*=-1;
    return (float)sum/(float)2;
}

Shape2D* Polygon::create() const
{
    Polygon *po = new Polygon(3);
    return po;
}

Shape2D* Polygon::clone() const
{
    Polygon *po = new Polygon(_n);
    po->p = p;

    return po;
}

void Polygon::setP(int n,int x,int y)
{
    p[n].setX(x);
    p[n].setY(y);
    std::cout << p[n].getX() << " " << p[n].getY() << std::endl;
}