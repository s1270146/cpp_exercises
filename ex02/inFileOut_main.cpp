#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "stack.h"

using namespace std;

int main(int argc, char *argv[])
{
    Stack *st;
    int i = 0;
    int num;
    int max = 0;

    string file_name = argv[1];

    ifstream fin(file_name);
    while (!fin.eof())
    {
        string line;
        if (i == 0)
        {
            getline(fin, line);
            istringstream ss(line);
            num = atoi(line.c_str());
            ss >> num;
            st = new Stack(num);
        }
        else
        {
            getline(fin, line);
            st->push(line);
            if (max < line.length())
                max = line.length();
        }
        i++;
    }
    for (int i = 0; i < max + 1; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < num; i++)
    {
        cout << st->top() << endl;
        st->pop();
    }
    for (int i = 0; i < max + 1; i++)
    {
        cout << "-";
    }
    cout << endl;

    return 0;
}