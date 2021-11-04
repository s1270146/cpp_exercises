#pragma once
#include "Shape2D.h"
#include <string>

class Rectangle : public Shape2D
{
private:
    float _width, _height;
    Point2D *p;
public:
    Rectangle(Point2D left_corner, float width, float height)
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