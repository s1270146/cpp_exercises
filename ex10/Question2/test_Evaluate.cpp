#include <iostream>
#include <string>
#include "Evaluate.h"

int main()
{
    std::string str = "3 + 5 * 6 - 7 * ( 8 + 5 )";
    std::cout << "Input: " << str << std::endl; 
    std::cout << "Output: " << evaluate(str) << std::endl;

    str = "25.0 * 12.0 / 5.0 - 8.0";
    std::cout << "Input: " << str << std::endl; 
    std::cout << "Output: " << evaluate(str) << std::endl;

    str = "( 3 + 5 * 6 - 7 ) * ( 8 + 5 )";
    std::cout << "Input: " << str << std::endl; 
    std::cout << "Output: " << evaluate(str) << std::endl;

    return 0;
}