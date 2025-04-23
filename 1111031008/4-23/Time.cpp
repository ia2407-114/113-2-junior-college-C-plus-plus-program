#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;

Date::Date(int y, int m, int d)
{
    setDate(y, m, d);
}

Date::~Date()
{
    cout << "西元日期:";
    printUniversal();
    cout << endl;

    cout << "民國日期:";
    printTaiwan();
    cout << endl;

    cout << "Bye Bye!" << endl;
}

void Date::setDate(int y, int m, int d)
{
    setyear(y);
    setmonth(m);
    setdate(d);
}

void Date::setyear(int y)
{
    if (y >= 0)
        year = y;
    else
        throw invalid_argument("year must be >= 0");
}

void Date::setmonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("month must be 1-12");
}

void Date::setdate(int d)
{
    if (d >= 1 && d <= 31)
        date = d;
    else
        throw invalid_argument("day must be 1-31");
}

unsigned int Date::getyear() const { return year; }
unsigned int Date::getmonth() const { return month; }
unsigned int Date::getdate() const { return date; }

void Date::printUniversal() const
{
    cout << year << "/" << setfill('0') << setw(2) << month << "/" << setw(2) << date;
}

void Date::printTaiwan() const
{
    int taiwanYear = year - 1911;
    cout << "民國" << taiwanYear << "年"
        << setfill('0') << setw(2) << month << "月"
        << setw(2) << date << "日";
}
