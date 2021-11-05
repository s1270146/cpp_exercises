#pragma once
#include <iostream>

class Shape2D
{
private:
    /* data */

public:
    Shape2D(/* args */)
    {
        //std::cout << "Shape2D Constructor" << std::endl;
    }
    Shape2D(const Shape2D& another_s)
    {
        
    }
    ~Shape2D()
    {
        //std::cout << "Shape2D Destructor" << std::endl;
    }
    virtual std::string get_name() const = 0;
    virtual float compute_area() const = 0;
    virtual Shape2D* create() const = 0;
    virtual Shape2D* clone() const = 0;
};

class Point2D
{
private:
    int x;
    int y;

public:
    Point2D(int _x , int _y )
    {
        x = _x;
        y = _y;
    }
    ~Point2D() {}

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
