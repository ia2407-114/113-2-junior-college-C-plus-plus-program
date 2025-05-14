#include <iostream>
#include <iomanip>
#include <stdexcept>
#include"date.h"
using namespace std;

date::~date()
{
    printUniversal();
    printStandard();
    cout << "BYE BYE" << endl;
}

date::date(int year, int month, int day)
{
    setdate(year, month, day); // 把所有東西放到建構子(自動執行)裡面
}

void date::setdate(int y, int m, int d)
{
    setyear(y);
    setmonth(m);
    setday(d);
}

void date::setyear(int y)
{
    if (y >= 1911 && y < 2051)
        year = y;
    else
        throw invalid_argument("year must be 1911-2050");
}

void date::setmonth(int m)
{
    if (m >= 1 && m < 13)
        month = m;
    else
        throw invalid_argument("month must be 1-12");
}

void date::setday(int d)
{
    if (d >= 1 && d < 32)
        day = d;
    else
        throw invalid_argument("day must be 1-31");
}

unsigned int date::getyear() const
{
    return year;
}

unsigned int date::getmonth() const
{
    return month;
}

unsigned int date::getday() const
{
    return day;
}

void date::printUniversal() const
{
    cout << setfill('0') << setw(2) << getyear() << "/"
        << setw(2) << getmonth() << "/" << setw(2) << getday() << "\n";
}

void date::printStandard() const
{
    cout << (getyear() - 1911)
        << "/" << setfill('0') << setw(2) << getmonth()
        << "/" << setw(2) << getday() << "\n";
}