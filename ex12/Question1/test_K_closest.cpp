#include <iostream>
#include <cmath>
#include "K_closest.h"
#include <vector>
#include <queue>
#include <functional>
#include <list>

int main()
{
    Point p1(5.0, 4.0, 3.0);
    std::cout << "p1: (" << p1.x << ", " << p1.y << ", " << p1.z << ")" << std::endl;
    Point p2(6.0, 4.0, 5.0);
    std::cout << "p2: (" << p2.x << ", " << p2.y << ", " << p2.z << ")" << std::endl;
    Point p3(1.5, 3.0, 2.0);
    std::cout << "p3: (" << p3.x << ", " << p3.y << ", " << p3.z << ")" << std::endl;
    Point p4(5.0, 4.0, 2.0);
    std::cout << "p4: (" << p4.x << ", " << p4.y << ", " << p4.z << ")" << std::endl;
    Point p5(2.0, 1.0, 3.0);
    std::cout << "p5: (" << p5.x << ", " << p5.y << ", " << p5.z << ")" << std::endl;

    std::list<Point> ls;
    ls.push_back(p1);
    ls.push_back(p2);
    ls.push_back(p3);
    ls.push_back(p4);
    ls.push_back(p5);
    int k = 3;
    ls = find_k_closest(k, ls);
    std::cout << std::endl;
    std::cout << "k = " << k << std::endl;
    for (int i = 0; i < k; i++)
    {
        std::cout << "(" << ls.front().x << ", " << ls.front().y << ", " << ls.front().z << ") : distance = " ;
        std::cout << std::sqrt((ls.front().x * ls.front().x) + (ls.front().y * ls.front().y) + (ls.front().z * ls.front().z)) << std::endl;
        ls.pop_front();
    }

    return 0;
}