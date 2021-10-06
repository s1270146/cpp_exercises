#include <iostream>
#include "intStr.h"

using namespace std;

int main()
{
    char* cstr;
    int num;

    cout << "Input number of converting an Integer to a c-string <- ";
    cin >> num;
    char* test_str = intToStr(num);
    cout << "intToStr(" << num << ") -> " << test_str << endl;

    cout << "Input string of converting to a c-string an Integer <- ";
    cin >> cstr;
    //cout << cstr;
    int test_num = strToInt(cstr);
    cout << "strToInt(" << cstr << ") -> " << test_num << endl;

    return 0;
}