#include "intStr.h"
#include <iostream>

using namespace std;

char *intToStr(int num)
{
    int n_num = num;
    int cnt = 0;

    //桁数を求める
    if (num == 0)
        cnt = 1;
    else
        while (num != 0)
        {
            cnt++;
            num = num/10;
        }

    //動的確保
    char *str = (char *)malloc(cnt * 4);

    int p = 1;
    for(int i=1;i<cnt;i++)
    {
        p *= 10;
    }
    //数字から文字へ
    for(int i=1;i<=cnt;i++)
    {
        str[i-1] = n_num / p + 48;//48で丁度良い
        n_num = n_num % p;
        p /= 10;
    }

    return str;
}

int strToInt(char* str)
{
    //cout << str << endl;
    int num;
    int i=0;

    //文字から数字へ
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