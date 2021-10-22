#include <iostream>
#include "Date.h"

void Date::set(const int m, const int d, const int y)
{
    month = m;
    day = d;
    year = y;
}

void Date::print() const
{
    std::cout << "month : " << get_month() << ", day : " << get_day() << ", year : " << get_year() << std::endl;
}

int Date::get_month() const
{
    return month;
}

int Date::get_year() const
{
    return year;
}

int Date::get_day() const
{
    return day;
}

void Date::inc_month()
{
    int flag;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        else
        {
            flag = 1;
        }
    }
    else
    {
        flag = 0;
    }
    if (month == 3 || month == 5 || month == 8 || month == 10)
    {
        if (day == 31)
            day = 30;
    }
    else if (month == 1)
    {
        if(flag == 0)
        {
            if (day >= 29 && day <= 31)
            day = 28;
        }
        else if(flag == 1)
        {
            if(day >= 30 && day <= 31)
            day = 29;
        }
    }
    
    if (month == 12)
    {
        month = 0;
        inc_year();
    }
    month++;
}

void Date::inc_day()
{
    int flag;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        else
        {
            flag = 1;
        }
    }
    else
    {
        flag = 0;
    }
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day == 31)
            day = 0;
    }
    else if (month == 2)
    {
        if(flag == 0)
        {
            if (day == 28)
            day = 0;
        }
        else if(flag == 1)
        {
            if(day == 29)
            day = 0;
        }
    }
    else
    {
        if (day == 30)
            day = 0;
    }
    if (day == 0)
        inc_month();
    day++;
}

void Date::inc_year()
{
    int flag;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        else
        {
            flag = 1;
        }
    }
    else
    {
        flag = 0;
    }
    if(flag == 1)
    {
        if(day==29)day = 28;
    }

    year++;
}
