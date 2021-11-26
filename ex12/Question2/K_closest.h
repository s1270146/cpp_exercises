#pragma once
#include <vector>
#include <list>
#include <queue>
#include <iostream>
#include <cmath>
#include <functional>

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
  for (int i = 0; i < k; i++)
  {
    q.push(ls.front());
    ls.pop_front();
  }
  std::list<Point> _ls;
  int i = 1;
  _ls.push_back(q.top());
  q.pop();
  while (i < k)
  {
    if (std::sqrt((_ls.front().x * _ls.front().x) + (_ls.front().y * _ls.front().y) + (_ls.front().z * _ls.front().z)) != std::sqrt((q.top().x * q.top().x) + (q.top().y * q.top().y) + (q.top().z * q.top().z)))
    {
      _ls.pop_back();
      _ls.push_back(q.top()); 
    }
    else _ls.push_front(q.top());
    i++;
    q.pop();
  }
  
  return _ls;
}

std::list<Point> find_k_closest_2(int k, std::list<Point> ls)
{
  std::list<Point> _ls;
  std::priority_queue<Point, std::vector<Point>, std::function<bool(Point, Point)> > q(
      [](Point p1, Point p2)
      {
        double p1_l = (p1.x * p1.x) + (p1.y * p1.y) + (p1.z * p1.z);
        double p2_l = (p2.x * p2.x) + (p2.y * p2.y) + (p2.z * p2.z);
        p1_l = std::sqrt(p1_l);
        p2_l = std::sqrt(p2_l);
        return p1_l < p2_l;
      });
  for (int i = 0; i < k; i++)
  {
    q.push(ls.front());
    ls.pop_front();
  }
  int i = 1;
  _ls.push_back(q.top());
  q.pop();
  while (i < k)
  {
    if (std::sqrt((_ls.front().x * _ls.front().x) + (_ls.front().y * _ls.front().y) + (_ls.front().z * _ls.front().z)) != std::sqrt((q.top().x * q.top().x) + (q.top().y * q.top().y) + (q.top().z * q.top().z)))
    {
      _ls.pop_back();
      _ls.push_back(q.top()); 
    }
    else _ls.push_front(q.top());
    i++;
    q.pop();
  }

  return _ls;
}