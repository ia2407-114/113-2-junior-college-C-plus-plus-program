// Fig. 9.5: Time.cpp
// Member-function definitions for class Time.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time.h"
using namespace std;

// Time constructor initializes each data member 
Date::Date(int year, int month, int day)
{
    setDate(year, month, day); // validate and set time
} // end Time constructor

// set new Time value using universal time
void Date::setDate(int year, int month, int day)
{
    setYear(year); // set private field hour
    setMonth(month); // set private field minute
    setDay(day); // set private field second
} // end function setTime

// set hour value
void Date::setYear(int y)
{
    if (y >= 1911 && y <= 2050)
        year = y;
    else
        throw invalid_argument("1911-2050");
}

void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("1-12");
}

void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        throw invalid_argument("1-31");
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
    cout << setfill('0') << "西元 " << getYear() << " 年 "
        << setw(2) << getMonth() << " 月 " << setw(2) << getDay() << " 日";
}

void Date::printStandard() const
{
    cout << setfill('0') << "民國 " << getYear() - 1911 << " 年 "
        << setw(2) << getMonth() << " 月 " << setw(2) << getDay() << " 日";
}

