#pragma once
#include <string>
#include <cctype>
#include <algorithm>
#include <iostream>

bool isPalindrome(std::string str)
{
    std::transform(str.begin(), str.end(), str.begin(),
                   [](unsigned char c)
                   { return std::tolower(c); });
    str.erase(std::remove_if(str.begin(), str.end(), ispunct), str.end());
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    std::string _str = str;
    //std::cout << _str << std::endl;
    std::reverse(str.begin(), str.end());
    //std::cout << str << std::endl;
    return _str == str;
}