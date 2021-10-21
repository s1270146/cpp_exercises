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
    std::cout << "month : " << month << ", day : " << day << ", year : " << year << std::endl;
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

void Date::inc_day()
{
    month++;
}

void Date::inc_month()
{
    day++;
}

void Date::inc_year()
{
    year++;
}
