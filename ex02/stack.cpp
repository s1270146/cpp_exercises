#include "stack.h"
#include <string>
#include <iostream>

/*Stack::Stack(int max_size)
{
}

Stack::~Stack(){}*/

bool Stack::empty()
{
    if (_top == -1)
        return true;
    else
        return false;
}
bool Stack::full()
{
    if (_top == _max_size - 1)
        return true;
    else
        return false;
}

int Stack::size()
{
    return _top + 1;
}

void Stack::push(std::string str)
{
    _top++;
    if (_top >= _max_size)
    {
        std::cerr << "You can't push" << std::endl;
        _top--;
    }
    else
        _data[_top] = str;
}

void Stack::pop()
{
    _top--;
    if (_top < -1)
    {
        std::cerr << "You can't pop" << std::endl;
        _top++;
    }
}

std::string Stack::top()
{
    if (_top > -1)
    {
        return _data[_top];
    }
    else return "No data";
}