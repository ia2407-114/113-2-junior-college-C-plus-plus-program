
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h"
using namespace std;

Date::Date(int year, int month, int day)
{
    setDate(year, month, day);
}

void Date::setDate(int year, int month, int day)
{
    setYear(year);
    setMonth(month);
    setDay(day);
}

void Date::setYear(int y)
{
    if (y >= 1911 && y <= 2050)
        year = y;
    else
        throw invalid_argument("西元年份必須輸入1911-2050");
}

void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("月份必須輸入1-12");
}

void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        throw invalid_argument("日期必須輸入1-31");
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
    cout << setfill('0') << "西元" << getYear() << "年"
        << setw(2) << getMonth() << "月" << setw(2) << getDay() << "日";
}

void Date::printStandard() const
{
    cout << setfill('0') << "中華民國" << getYear() - 1911 << "年"
        << setw(2) << getMonth() << "月" << setw(2) << getDay() << "日";
}

Date::~Date()
{
    cout << "\n";
    printUniversal();
    cout << "\n";
    printStandard();
    cout << "\nBye Bye";
}
