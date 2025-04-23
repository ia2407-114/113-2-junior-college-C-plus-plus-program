#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h"
using namespace std;

Date::Date(int y, int m, int d)
{
    setdate(y, m, d);
}

void Date::setdate(int y, int m, int d)
{
    setyear(y);
    setmonth(m);
    setday(d);
}

void Date::setyear(int y)
{
    if (y >= 1911 && y <= 2050)
        year = y;
    else
        throw invalid_argument("年份必須為1911-2050");
}

void Date::setmonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("月份必須為1-12");
}

void Date::setday(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        throw invalid_argument("日期必須為1-31");
}

unsigned int Date::getYear() const
{
    return year;
}

unsigned int Date::getMonth() const
{
    return month;
}

unsigned int Date::getDay() const
{
    return day;
}

void Date::printUniversal() const
{
    cout << "西元" << getYear() << "年"
        << getMonth() << "月" << getDay() << "日";
}

void Date::printStandard() const
{
    cout << "民國" << getYear()-1911 << "年"
        << getMonth() << "月" << getDay() << "日";
}

Date::~Date()
{
    cout << "\n";
    printUniversal();
    cout << "\n";
    printStandard();
    cout << "\nBye Bye";
}