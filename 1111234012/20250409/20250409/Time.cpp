// Fig. 9.5: Time.cpp
// Member-function definitions for class Time.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h" 
using namespace std;
 
Date::Date(int year, int month, int day)
{
    setDate(year, month, day); 
} 

void Date::setDate(int y, int m, int d)
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
        throw invalid_argument("無效的年份，必須在1911到2050之間");
} 

void Date::setmonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("無效的月份，必須在1到12之間");
} 

void Date::setday(int d)
{
    const int daysInMonth[] = { 31, (d % 4 == 0 && (d % 100 != 0 || d % 400 == 0)) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (d >= 1 && d <= daysInMonth[d - 1])
        day = d;
    else
        throw invalid_argument("無效的日期");
} 

void Date::printGregorian() const {
    cout << "西元日期: " << year << "/" << month << "/" << day << endl;
}

void Date::printRepublicOfChina() const {
    cout << "民國日期: " << (year - 1911) << "/" << month << "/" << day << endl;
}

unsigned int Date::getyear() const
{
    return year;
} 

unsigned int Date::getmonth() const
{
    return month;
} 

unsigned int Date::getday() const
{
    return day;
} 

