#include "Circle.h"
#include "Shape2D.h"
#include <iostream>
#include <string>

std::string ::get_name() const
{
    return "circle";
}

float Rectangle::compute_area() const
{
    return _width * _height;
}

Shape2D* Rectangle::create() const
{
    Shape2D *s;
    return s;
}

Shape2D* Rectangle::clone() const
{
    Shape2D *s;
    return s;
}

