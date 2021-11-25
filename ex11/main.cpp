#include <iostream>
#include <array>
#include <vector>

namespace PL4
{
    template <class FwdIt>
    void
    sort(FwdIt begin, FwdIt end)
    {
        FwdIt cnt;
        while (begin < end)
        {
            auto _b = begin;
            while ((_b + 1) < end)
            {
                if (*_b > *(_b + 1))
                {
                    std::swap(*_b, *(_b + 1));
                }
                _b++;
            }
            end--;
        }
    }
}

int main()
{
    //array
    std::array<int, 4> a1 = {3, 4, 1, 2};
    std::cout << "Before array: ";
    for (const auto &x : a1)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;

    PL4::sort(a1.begin(), a1.end());

    std::cout << "After array : ";
    for (const auto &x : a1)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
    std::cout << std::endl;

    //vector
    std::vector<int> a2 = {12, 75, 32, 1, 124, 74};
    std::cout << "Before array: ";
    for (const auto &x : a2)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;

    PL4::sort(a2.begin(), a2.end());

    std::cout << "After array : ";
    for (const auto &x : a2)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
    return 0;
}