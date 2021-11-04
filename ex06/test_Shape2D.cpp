#include <iostream>
//#include "Shape2D.h"
#include "Rectangle.h"
#include "Shape2D.h"

using namespace std;

int main()
{
    float x = 2.0;
    float y = 3.0;
    float w = 2.0;
    float h = 3.0;
    Point2D *p = new Point2D();
    p->setX(x);
    p->setY(y);
    Rectangle *r = new Rectangle(*p, w, h);
    cout << r->compute_area() << endl;

    return 0;
}