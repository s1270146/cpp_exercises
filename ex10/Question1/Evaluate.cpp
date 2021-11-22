#include "Evaluate.h"
#include <iostream>
#include <sstream>
#include <stack>

double evaluateFP(std::string str)
{
    std::stringstream ss;
    std::string output;
    std::string s,e;
    double d,d1,d2;
    int cnt;
    std::stack<std::string> strStack;
    std::stack<double> dStack;
    ss << str;
    while (getline(ss, s, ' '))
    {
        if (s == "+" || s == "-" || s == "/" || s == "*" )
        {
            strStack.push(s);
        }
        else if(s == "(" )
        {
        }
        else if(s == ")")
        {
            d1 = dStack.top();
            dStack.pop();
            d2 = dStack.top();
            dStack.pop();
            e = strStack.top();
            strStack.pop();
            if(e=="+")dStack.push(d2+d1);
            else if(e=="-") dStack.push(d2-d1);
            else if(e=="/") dStack.push(d2/d1);
            else if(e=="*") dStack.push(d2*d1);
        }
        else
        {
            d = std::stod(s);
            dStack.push(d);
            //std::cout << dStack.top() << " ";
            //dStack.pop();
        }
    }
    return dStack.top();
}