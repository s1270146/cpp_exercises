#include <iostream>
#include "ArrayStack.h"

using namespace std;

int main()
{
    ArrayStack stack1;
    stack1.push(1.0);
    //cout << stack1.top() << endl;
    stack1.push(2.0);
    //cout << stack1.top() << endl;
    stack1.push(3.0);
    //cout << stack1.top() << endl;
    stack1.push(4.0);
    //cout << stack1.top() << endl;
    stack1.push(5.0);
    //cout << stack1.top() << endl;

    ArrayStack stack2(5);
    stack2.push(1.0);
    //cout << stack2.top() << endl;
    stack2.push(2.0);
    //cout << stack2.top() << endl;
    stack2.push(3.0);
    //cout << stack2.top() << endl;
    stack2.push(4.0);
    //cout << stack2.top() << endl;
    stack2.push(5.0);
    //cout << stack2.top() << endl;
    stack2.push(6.0);
    //cout << stack2.top() << endl;
    stack2.push(7.0);
    //cout << stack2.top() << endl;
    stack2.push(8.0);
    //cout << stack2.top() << endl;
    stack2.push(9.0);
    //cout << stack2.top() << endl;
    stack2.push(10.0);
    //cout << stack2.top() << endl;


    return 0;
}