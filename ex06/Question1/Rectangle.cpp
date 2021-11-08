#include "Rectangle.h"

Rectangle::Rectangle(Point2D left_corner, float width, float height) : Shape2D()
{
    //std::cout << "Rectangle Constructor" << std::endl;
    *p = left_corner;
    _width = width;
    _height = height;
}
Rectangle::Rectangle(const Rectangle& another_r) : Shape2D()
{
    p = new Point2D(0, 0);
    p = another_r.p;
    _width = another_r._width;
    _height = another_r._height;
}
Rectangle::~Rectangle()
{
    //std::cout << "Rectangle Destructor" << std::endl;
}
float Rectangle::getW()
{
    return _width;
}
int Rectangle::getPx()
{
    return p->getX();
}
std::string Rectangle::get_name() const
{
    return "rectangle";
}
float Rectangle::compute_area() const
{
    return _width * _height;
}

Shape2D *Rectangle::create() const
{
    Point2D *p = new Point2D(0, 0);
    Rectangle *r = new Rectangle(*p, 0, 0);
    return r;
}

Shape2D *Rectangle::clone() const
{
    Point2D *p = new Point2D(0, 0);
    Rectangle *r = new Rectangle(*p, 0, 0);
    *r = *this;
    
    return r;
}