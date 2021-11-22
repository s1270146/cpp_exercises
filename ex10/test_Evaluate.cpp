#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include "Evaluate.h"

int main()
{
    std::string str = "( 1 + ( ( 2 + 3 ) * ( 4 * 5 ) ) )";
    std::cout << "Input: " << str << std::endl; 
    std::cout << "Output: " << evaluateFP(str) << std::endl;

    str = "( ( ( 2.0 * ( 3.0 - 1.0 ) ) - 5.0 ) * 3.0 )";
    std::cout << "Input: " << str << std::endl; 
    std::cout << "Output: " << evaluateFP(str) << std::endl;

    str = "( ( 3.0 + 1.0 ) * ( ( 5.0 * ( 7.0 - 1.0 ) ) - 5.0 ) * 3.0 )";
    std::cout << "Input: " << str << std::endl; 
    std::cout << "Output: " << evaluateFP(str) << std::endl;

    return 0;

}