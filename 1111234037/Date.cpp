#include "Date.h"
Date::Date(int y, int m, int d)
{
    setDate(y, m, d);
}
void Date::setDate(int y, int m, int d)
{
    setYear(y);
    setMonth(m);
    setDay(d);
}
void Date::setYear(int y)
{
    if (y > 0)
        year = y;
    else
        throw invalid_argument("year must be positive");
}
void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("month must be 1-12");
}
void Date::setDay(int d)
{
    if (d >= 1 && d <= 31) 
        day = d;
    else
        throw invalid_argument("day must be 1-31");
}
unsigned int Date::getYear() const { return year; }
unsigned int Date::getMonth() const { return month; }
unsigned int Date::getDay() const { return day; }
void Date::printStandard() const
{
    cout << "西元 " << getYear() << " 年 " << getMonth() << " 月 " << getDay() << " 日";
}
Date::~Date()
{
    time_t now = time(0);
    tm localTime; 
    localtime_s(&localTime, &now); 

    int year = 1900 + localTime.tm_year;
    int taiwanYear = year - 1911;

    cout << "\n西元日期: " << year << "-"
        << localTime.tm_mon + 1 << "-" << localTime.tm_mday << endl;
    cout << "民國日期: " << taiwanYear << "-"
        << localTime.tm_mon + 1 << "-" << localTime.tm_mday << endl;
    cout << "Bye Bye!" << endl;
}
