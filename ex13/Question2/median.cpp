#include <iostream>
#include <vector>
#include "median.h"
#include <algorithm>

int main()
{
    std::vector<double> vec{7.0,14.0,10.0,12.0,2.0,11.0,29.0,3.0,4.0};
    std::cout << "vec : " ;
    std::for_each(vec.begin(),vec.end(),[](double x){std::cout << x << " ";});
    std::cout << std::endl;
    vec = compute_k_closest(3, vec);
    std::cout << "compute_k_closest(3, vec): ";
    std::for_each(vec.begin(),vec.end(),[](double x){std::cout << x << " ";});
    std::cout << std::endl;

    std::vector<double> vec1{29.0,14.0,10.0,12.0,2.0,11.0,7.0,3.0};
    std::cout << "vec1 : " ;
    std::for_each(vec1.begin(),vec1.end(),[](double x){std::cout << x << " ";});
    std::cout << std::endl;
    vec1 = compute_k_closest(4, vec1);
    std::cout << "compute_k_closest(4, vec1): ";
    std::for_each(vec1.begin(),vec1.end(),[](double x){std::cout << x << " ";});
    std::cout << std::endl;
    return 0;
}