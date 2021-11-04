#include <iostream>
#include "ArrayStack.h"
#include <utility>

int main(void) {
    
    ArrayStack stack1;
    stack1.push(1.0);
    stack1.push(2.0);
    stack1.push(3.0);
    stack1.push(4.0);
    stack1.push(5.0);

    ArrayStack stack2(5);
    stack2.push(1.0);
    stack2.push(2.0);
    stack2.push(3.0);
    stack2.push(4.0);
    stack2.push(5.0);
    stack2.push(6.0);
    stack2.push(7.0);
    stack2.push(8.0);
    stack2.push(9.0);
    stack2.push(10.0);

    // Copy
    ArrayStack stack3(stack1);
    ArrayStack stack4 = stack2;

    // Assignment
    ArrayStack stack5;
    stack5 = stack1;
    ArrayStack stack6(10);
    stack6 = stack6;
    //std::cout << stack6.top() << std::endl;

    // COMPLETE 
    // Show the content of the stacks 'stack1', 'stack3' and 'stack4' by calls to pop() and () 
    // (use a loop and the method ArrayStack::empty() for the termination condition)

    while(!stack1.empty())
    {
        std::cout << "stack1.top() >> " << stack1.top() << std::endl;
        std::cout << "stack1.pop()" << std::endl;
        stack1.pop();
    }

    std::cout << std::endl;
    while(!stack3.empty())
    {
        std::cout << "stack3.top() >> " << stack3.top() << std::endl;
        std::cout << "stack3.pop()" << std::endl;
        stack3.pop();
    }
    std::cout << std::endl;

    while(!stack4.empty())
    {
        std::cout << "stack4.top() >> " << stack4.top() << std::endl;
        std::cout << "stack4.pop()" << std::endl;
        stack4.pop();
    }

    // Move
    ArrayStack stack7 = std::move(stack5);
    stack6 = std::move(stack2);
    //stack6 = std::move(stack2);
    std::cout << std::endl;
    while(!stack5.empty())
    {
        std::cout << "stack5.top() >> " << stack5.top() << std::endl;
        std::cout << "stack5.pop()" << std::endl;
        stack5.pop();
    }

    std::cout << std::endl;
    while(!stack7.empty())
    {
        std::cout << "stack7.top() >> " << stack7.top() << std::endl;
        std::cout << "stack7.pop()" << std::endl;
        stack7.pop();
    }

    std::cout << std::endl;
    while(!stack6.empty())
    {
        std::cout << "stack6.top() >> " << stack6.top() << std::endl;
        std::cout << "stack6.pop()" << std::endl;
        stack6.pop();
    }

    std::cout << std::endl;
    while(!stack2.empty())
    {
        std::cout << "stack2.top() >> " << stack2.top() << std::endl;
        std::cout << "stack2.pop()" << std::endl;
        stack2.pop();
    }

    return 0;
}