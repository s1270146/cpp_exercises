#include "Evaluate.h"
#include <iostream>
#include <sstream>
#include <stack>
#include <map>

double evaluate(std::string str)
{
    std::stringstream ss;
    std::string s, e;
    double d, d1, d2;
    int cnt;
    std::stack<std::string> strStack;
    std::stack<double> dStack;
    ss << str;
    std::map<std::string, int> operations;
    operations.insert(std::make_pair("*", 2));
    operations.insert(std::make_pair("/", 2));
    operations.insert(std::make_pair("(", 0));
    operations.insert(std::make_pair(")", 0));
    operations.insert(std::make_pair("+", 1));
    operations.insert(std::make_pair("-", 1));
    while (getline(ss, s, ' '))
    {
        //std::cout << s << std::endl;
        if (s == "(")
        {
            strStack.push(s);
        }
        else if (s == ")")
        {
            if (!strStack.empty() && operations[strStack.top()] == 2)
            {
                d1 = dStack.top();
                dStack.pop();
                d2 = dStack.top();
                dStack.pop();
                e = strStack.top();
                strStack.pop();
                if (e == "/")
                    dStack.push(d2 / d1);
                else if (e == "*")
                    dStack.push(d2 * d1);
            }
            while (!strStack.empty() && (strStack.top() != "("))
            {
                d1 = dStack.top();
                dStack.pop();
                d2 = dStack.top();
                dStack.pop();
                e = strStack.top();
                strStack.pop();
                if (e == "+")
                    dStack.push(d2 + d1);
                else if (e == "-")
                    dStack.push(d2 - d1);
                else if (e == "/")
                    dStack.push(d2 / d1);
                else if (e == "*")
                    dStack.push(d2 * d1);
            }
            //std::cout << "\""<< operations[s] << "\"" << std::endl;
            if (!strStack.empty())
                strStack.pop();

            if (!strStack.empty() && operations[strStack.top()] == 2)
            {
                d1 = dStack.top();
                dStack.pop();
                d2 = dStack.top();
                dStack.pop();
                e = strStack.top();
                strStack.pop();
                if (e == "/")
                    dStack.push(d2 / d1);
                else if (e == "*")
                    dStack.push(d2 * d1);
            }
        }
        else if (operations[s] == 2)
        {
            if (!strStack.empty() && operations[strStack.top()] == 2)
            {
                d1 = dStack.top();
                dStack.pop();
                d2 = dStack.top();
                dStack.pop();
                e = strStack.top();
                strStack.pop();
                if (e == "+")
                    dStack.push(d2 + d1);
                else if (e == "-")
                    dStack.push(d2 - d1);
                else if (e == "/")
                    dStack.push(d2 / d1);
                else if (e == "*")
                    dStack.push(d2 * d1);
            }
            strStack.push(s);
            //std::cout << operations.at(strStack.top()) << std::endl;
        }
        else if (operations[s] == 1)
        {
            if (!strStack.empty() && (operations[strStack.top()] == 2 || operations[strStack.top()] == 1))
            {
                d1 = dStack.top();
                dStack.pop();
                d2 = dStack.top();
                dStack.pop();
                e = strStack.top();
                strStack.pop();
                if (e == "/")
                    dStack.push(d2 / d1);
                else if (e == "*")
                    dStack.push(d2 * d1);
            }
            strStack.push(s);
            //std::cout << operations.at(strStack.top()) << std::endl;
        }
        else
        {

            d = std::stod(s);
            dStack.push(d);
            //std::cout << dStack.top() << " ";
            //dStack.pop();
        }
    }
    while (!strStack.empty())
    {
        d1 = dStack.top();
        dStack.pop();
        d2 = dStack.top();
        dStack.pop();
        e = strStack.top();
        strStack.pop();
        if (e == "+")
            dStack.push(d2 + d1);
        else if (e == "-")
            dStack.push(d2 - d1);
    }

    return dStack.top();
}