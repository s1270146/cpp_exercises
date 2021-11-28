#pragma once
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <functional>
#include <cmath>

double compute_median(std::vector<double> vec)
{
    size_t n = vec.size() / 2;
    std::nth_element(vec.begin(), vec.begin() + n, vec.end());
    double vecn = vec[n];
    if (vec.size() % 2 == 1)
    {
        return vecn;
    }
    else
    {
        std::nth_element(vec.begin(), vec.begin() + n - 1, vec.end());
        return (vecn + vec[n-1]) * 0.5;
    }
}

std::vector<double> compute_k_closest(int k, std::vector<double> vec)
{
    std::vector<double> _vec;
    double med = compute_median(vec);
    std::cout << "median : " << med << std::endl;
    size_t n = vec.size() / 2;
    std::nth_element(vec.begin(), vec.begin() + n, vec.end());
    int i=0;
    while(i<k)
    {
        int min = 0;
        for(int j=1;j<vec.size();j++)
        {
            if(std::abs(vec[min]-med) > std::abs(vec[j]-med))
            {
                min = j;
            }
        }
        _vec.push_back(vec[min]);
        vec.erase(vec.begin() + min);
        i++;
    }

    return _vec;
}