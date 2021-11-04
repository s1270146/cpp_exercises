#pragma once
#include "Shape2D.h"
#include <string>

class Circle : public Shape2D
{
private:
    float _width, _height;
    Point2D *p;
public:
    Circle(Point2D left_corner, float r, float height)
    {
        p->setX(left_corner.getX());
        p->setY(left_corner.getX());
        _width = width;
        _height = height;
    }
    float compute_area() const;
    Shape2D *create() const;
    Shape2D *clone() const;
    std::string get_name() const;
};