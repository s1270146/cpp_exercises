#include "intStr.h"
#include <iostream>

using namespace std;

char *intToStr(int num)
{
    int n_num;
    int flag;
    if (num >= 0)
    {
        n_num = num;
        flag = 1;
    }
    else
    {
        n_num = -1 * num;
        flag = 0;
    }

    int cnt = 0;

    //桁数を求める
    if (num == 0)
        cnt = 1;
    else
        while (num != 0)
        {
            cnt++;
            num = num / 10;
        }

    //動的確保
    char *str = (char *)malloc((cnt + 1) * 4);

    int p = 1;
    for (int i = 1; i < cnt; i++)
    {
        p *= 10;
    }
    //数字から文字へ
    if (flag == 1)
    {
        for (int i = 1; i <= cnt; i++)
        {
            str[i - 1] = n_num / p + '0'; //48で丁度良い
            n_num = n_num % p;
            p /= 10;
        }
    }
    else if (flag == 0)
    {
        str[0] = '-';
        for (int i = 1; i <= cnt; i++)
        {
            str[i] = n_num / p + '0'; //48で丁度良い
            n_num = n_num % p;
            p /= 10;
        }
    }

    return str;
}

int strToInt(char *str)
{
    //cout << str << endl;
    int num, i, flag;
    if (str[0] == '-')
    {
        i = 1;
        flag = 0;
    }
    else
    {
        i = 0;
        flag = 1;
    }

    //文字から数字へ
    while (str[i] >= 48 && str[i] <= 57)
    {
        if (flag == 1)
        {
            if (i == 0)
            {
                num = str[i] - '0';
            }
            else
            {
                num *= 10;
                num += str[i] - '0';
            }
        }
        else if (flag == 0)
        {
            if (i == 1)
            {
                num = str[i] - '0';
            }
            else
            {
                num *= 10;
                num += str[i] - '0';
            }
        }

        i++;
    }
    if (flag == 0)
        num *= -1;
    //cout << num << endl;
    return num;
}