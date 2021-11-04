#pragma once
#include <string>

class Shape2D
{
private:

public:
    Shape2D(/* args */){};
    ~Shape2D(){};

    virtual std::string get_name() const = 0;
    virtual float compute_area() const = 0;
    virtual Shape2D *create() const = 0;
    virtual Shape2D *clone() const = 0;
};

class Point2D
{
private:
    float x, y;
public:
    void setX(float _x)
    {
        x = _x;
    }
    void setY(float _y)
    {
        x = _y;
    }
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
};
