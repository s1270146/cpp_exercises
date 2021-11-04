#include "Rectangle.h"
#include "Shape2D.h"
#include <iostream>
#include <string>

std::string Rectangle::get_name() const
{
    return "rectangle";
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

