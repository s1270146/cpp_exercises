#include "intStr.h"
#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

char *intToStr(int num)
{
    int n_num = num;
    int cnt = 0;
    if (num == 0)
        cnt = 1;
    else
        while (num != 0)
        {
            cnt++;
            num = num/10;
        }
    char *str = (char *)malloc(cnt * 4);

    for(int i=1;i<=cnt;i++)
    {
        str[i-1] = n_num / (int)pow(10,cnt-i) + 48;
        n_num = n_num % (int)pow(10,cnt-i);
    }

    return str;
}

int strToInt(char* str)
{
    //cout << str << endl;
    int num = 0;
    int i=0;
    while(str[i]>=48 && str[i]<=57)
    {
        if(i==0)
        {
            num = str[i] - 48;
        }
        else 
        {
            num *= 10;
            num += str[i] -48;
        }
        i++;
    }
    //cout << num << endl;
    return num;
}