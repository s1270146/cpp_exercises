#include <iostream>
#include <cmath>
#include "K_closest.h"
#include <vector>
#include <queue>
#include <functional>
#include <list>

int main()
{
    std::cout << "-----------------------------" << std::endl;
    std::cout << "find_k_closest():" << std::endl;
    Point p1(5.0, 4.0, 3.0);
    std::cout << "p1: (" << p1.x << ", " << p1.y << ", " << p1.z << ")" << std::endl;
    Point p2(6.0, 4.0, 5.0);
    std::cout << "p2: (" << p2.x << ", " << p2.y << ", " << p2.z << ")" << std::endl;
    Point p3(1.0, 3.0, 2.0);
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
    int k = ls.size();
    ls = find_k_closest(k, ls);
    k = ls.size();
    std::cout << "原点に最も近い点の個数: " << k << std::endl;
    std::cout << "原点からの距離: " << std::sqrt((ls.front().x * ls.front().x) + (ls.front().y * ls.front().y) + (ls.front().z * ls.front().z)) << std::endl;
    for(int i=0;i<k;i++)
    {
        std::cout << "(" << ls.front().x << ", " << ls.front().y << ", " << ls.front().z << ")" << std::endl;
        ls.pop_front();
    }

    std::cout << "-----------------------------" << std::endl;

    std::cout << "find_k_closest_2():" << std::endl;
    Point p6(12.0, 3.0, 9.0);
    std::cout << "p6: (" << p6.x << ", " << p6.y << ", " << p6.z << ")" << std::endl;
    Point p7(9.0, 12.0, 3.0);
    std::cout << "p7: (" << p7.x << ", " << p7.y << ", " << p7.z << ")" << std::endl;
    Point p8(23.0, 21.2, 15.4);
    std::cout << "p8: (" << p8.x << ", " << p8.y << ", " << p8.z << ")" << std::endl;
    Point p9(29.0, 34.0, 78.0);
    std::cout << "p9: (" << p9.x << ", " << p9.y << ", " << p9.z << ")" << std::endl;
    Point p10(9.0, 3.0, 12.0);
    std::cout << "p10: (" << p10.x << ", " << p10.y << ", " << p10.z << ")" << std::endl;

    std::list<Point> ls_2;
    ls_2.push_back(p6);
    ls_2.push_back(p7);
    ls_2.push_back(p8);
    ls_2.push_back(p9);
    ls_2.push_back(p10);
    int k_2 = ls_2.size();
    ls_2 = find_k_closest_2(k_2, ls_2);
    std::cout << std::endl;
    k_2 = ls_2.size();
    std::cout << "原点に最も近い点の個数: " << ls_2.size() << std::endl;
    std::cout << "原点からの距離: " << std::sqrt((ls_2.front().x * ls_2.front().x) + (ls_2.front().y * ls_2.front().y) + (ls_2.front().z * ls_2.front().z)) << std::endl;
    for(int i=0;i<k_2;i++)
    {
        std::cout << "(" << ls_2.front().x << ", " << ls_2.front().y << ", " << ls_2.front().z << ")" << std::endl;
        ls_2.pop_front();
    }
    std::cout << "-----------------------------" << std::endl;

    return 0;
}