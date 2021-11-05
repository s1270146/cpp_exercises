#pragma once
#include "Shape2D.h"

class Polygon : public Shape2D
{
private:
    /* data */
    Point2D* p;
    int _n;
public:
    Polygon(int n);
    ~Polygon();
    std::string get_name() const;
    float compute_area() const;
    Shape2D* create() const;
    Shape2D* clone() const;
    void setP(int, int,int);
};