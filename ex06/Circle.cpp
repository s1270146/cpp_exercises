#include "Circle.h"

Circle::Circle(Point2D center, float radius) : Shape2D()
{
    *p = center;
    _radius = radius;
}

Circle::~Circle()
{

}

std::string Circle::get_name() const
{
    return "circle";
}

float Circle::compute_area() const
{
    return _radius * _radius * 3.14;
}

Shape2D *Circle::create() const
{
    Point2D *p = new Point2D(0,0);
    Circle *c = new Circle(*p,0);
    return c;
}

Shape2D *Circle::clone() const
{
    Point2D *p = new Point2D(0,0);
    Circle *c = new Circle(*p , 0);
    c->p = this->p;
    c->_radius = this->_radius;

    return c;
}