#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

int main()
{
    Point2D *left = new Point2D(1, 1);
    Rectangle *r = new Rectangle(*left, 2, 3);

    //std::cout << r->getPx() << " " << r->getW() << std::endl;
    std::cout << "Original Rectangle" << std::endl;
    std::cout << "get_name() -> " << r->get_name() << std::endl;
    std::cout << "conpute_area() -> " << r->compute_area() << std::endl;

    Shape2D *s1 = r->create();
    std::cout << std::endl;
    std::cout << "Create new Rectangle" << std::endl;
    std::cout << "get_name() -> " << s1->get_name() << std::endl;
    std::cout << "conpute_area() -> " << s1->compute_area() << std::endl;

    Shape2D *s2 = r->clone();
    std::cout << std::endl;
    std::cout << "Clone Rectangle" << std::endl;
    std::cout << "get_name() -> " << s2->get_name() << std::endl;
    std::cout << "conpute_area() -> " << s2->compute_area() << std::endl;

    delete r;

    Point2D *center = new Point2D(1,2);
    Circle *c = new Circle(*center, 4);

    std::cout << std::endl;
    std::cout << "Original Circle" << std::endl;
    std::cout << "get_name() -> " << c->get_name() << std::endl;
    std::cout << "conpute_area() -> " << c->compute_area() << std::endl;

    Shape2D *s3 = c->create();

    std::cout << std::endl;
    std::cout << "Original Circle" << std::endl;
    std::cout << "get_name() -> " << s3->get_name() << std::endl;
    std::cout << "conpute_area() -> " << s3->compute_area() << std::endl;

    Shape2D *s4 = c->clone();
    
    std::cout << std::endl;
    std::cout << "Original Circle" << std::endl;
    std::cout << "get_name() -> " << s4->get_name() << std::endl;
    std::cout << "conpute_area() -> " << s4->compute_area() << std::endl;

    return 0;
}