#pragma once
#include <vector>
#include <list>
#include <queue>
#include <iostream>
#include <cmath>

struct Point
{
  Point() : x(0.0), y(0.0), z(0.0) {}
  Point(double x, double y, double z) : x(x), y(y), z(z) {}
  double x, y, z;
};

struct Compare
{
  bool operator()(Point p1, Point p2)
  {
    double p1_l = (p1.x * p1.x) + (p1.y * p1.y) + (p1.z * p1.z);
    double p2_l = (p2.x * p2.x) + (p2.y * p2.y) + (p2.z * p2.z);
    p1_l = std::sqrt(p1_l);
    p2_l = std::sqrt(p2_l);
    return p1_l < p2_l;
  }
};

std::list<Point> find_k_closest(int k, std::list<Point> ls)
{
  std::priority_queue<Point, std::vector<Point>, Compare > q;
  int s = ls.size();
  for (int i = 0; i < s; i++)
  {
    q.push(ls.front());
    ls.pop_front();
  }
  std::list<Point> _ls;
  for(int i=0;i < s-k ;i++)
  {
    q.pop();
  }
  for(int i=0;i<k;i++)
  {
    _ls.push_front(q.top());
    q.pop();
  }

  return _ls;
}