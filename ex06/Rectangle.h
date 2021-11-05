#pragma once
#include "Shape2D.h"
#include <iostream>
#include <string>

class Rectangle : public Shape2D
{
private:
    Point2D *p = new Point2D(0,0);
    float _width;
    float _height;
public:
    Rectangle(Point2D left_corner, float width, float height);
    Rectangle(const Rectangle& another_r);
    ~Rectangle();
    std::string get_name() const;
    float compute_area() const;
    Shape2D* create() const;
    Shape2D* clone() const;
    int getPx();
    float getW();
};