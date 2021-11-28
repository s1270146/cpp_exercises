#include <iostream>
#include "palindrome.h"
#include <string>

int main()
{
    std::string str_1 = "Tokyo";
    std::string str_2 = "moom";
    std::string str_3 = "Level";
    std::string str_4 = "I am ai";
    std::string str_5 = "I'm ami";
    std::string str_6 = "Don't nod";

    if(isPalindrome(str_1))
    {
        std::cout << str_1 << " is a palindrome." << std::endl;
    }
    else 
    {
        std::cout << str_1 << " is not a palindrome." << std::endl;
    }

    if(isPalindrome(str_2))
    {
        std::cout << str_2 << " is a palindrome." << std::endl;
    }
    else 
    {
        std::cout << str_2 << " is not a palindrome." << std::endl;
    }

    if(isPalindrome(str_3))
    {
        std::cout << str_3 << " is a palindrome." << std::endl;
    }
    else 
    {
        std::cout << str_3 << " is not a palindrome." << std::endl;
    }

    if(isPalindrome(str_4))
    {
        std::cout << str_4 << " is a palindrome." << std::endl;
    }
    else 
    {
        std::cout << str_4 << " is not a palindrome." << std::endl;
    }

    if(isPalindrome(str_5))
    {
        std::cout << str_5 << " is a palindrome." << std::endl;
    }
    else 
    {
        std::cout << str_5 << " is not a palindrome." << std::endl;
    }

    if(isPalindrome(str_6))
    {
        std::cout << str_6 << " is a palindrome." << std::endl;
    }
    else 
    {
        std::cout << str_6 << " is not a palindrome." << std::endl;
    }


    return 0;
}