#pragma once
#include "Shape2D.h"
#include <string>

class Circle : public Shape2D
{
private:
    Point2D *p = new Point2D(0, 0);
    float _radius;

public:
    Circle(Point2D center, float radius);
    ~Circle();
    std::string get_name() const;
    float compute_area() const;
    Shape2D* create() const;
    Shape2D* clone() const;
};