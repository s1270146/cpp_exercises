#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack *s;
    int max;

    cout << "Input capacity of the fixed-size stack -> ";
    cin >> max;
    s = new Stack(max);

    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << " The command Number " << endl;
    cout << " 1 : Check whether the stack is empty" << endl;
    cout << " 2 : Check whether the stack is full" << endl;
    cout << " 3 : Return the number of elementsy" << endl;
    cout << " 4 : Insert element on top (push)" << endl;
    cout << " 5 : Remove element on top (pop)" << endl;
    cout << " 6 : Acces the topmost element" << endl;
    cout << " 7 : Finish" << endl;
    cout << " 8 : Help" << endl;
    cout << "---------------------------------------" << endl;

    while (1)
    {
        int num;
        cout << endl
             << "Input the command number -> ";
        cin >> num;

        if (num == 1)
        {
            if (s->empty() == 1)
                cout << "Empty" << endl;
            else
                cout << "Not empty" << endl;
        }

        if (num == 2)
        {
            if (s->full() == 1)
                cout << "Full" << endl;
            else
                cout << "Not Full" << endl;
        }

        if (num == 3)
        {
            cout << "The number of elements : " << s->size() << endl;
        }

        if (num == 4)
        {
            string str;
            cout << "Input string -> ";
            cin >> str;
            s->push(str);
        }

        if (num == 5)
        {
            s->pop();
            cout << "Remove the top string of the stack" << endl;
        }

        if (num == 6)
        {
            cout << "The topmost element : " << s->top() << endl;
        }

        if (num == 7)
            break;

        if (num == 8)
        {
            cout << "---------------------------------------" << endl;
            cout << " The command Number " << endl;
            cout << " 1 : Check whether the stack is empty" << endl;
            cout << " 2 : Check whether the stack is full" << endl;
            cout << " 3 : Return the number of elementsy" << endl;
            cout << " 4 : Insert element on top (push)" << endl;
            cout << " 5 : Remove element on top (pop)" << endl;
            cout << " 6 : Acces the topmost element" << endl;
            cout << " 7 : Finish" << endl;
            cout << " 8 : Help" << endl;
            cout << "---------------------------------------" << endl;
        }
    }

    return 0;
}