#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

Date::Date(int y, int m, int d)
{
    if (m > 0 && m <= monthsPerYear)
        month = m;
    else
        throw invalid_argument("warning：月份必須為1～12!!!!!");

    year = y;
    day = checkDay(d);

    cout << "Date建構子";
    print();
    cout << endl;
}

void Date::print() const
{
    cout << year << '/' << month << '/' << day;
}

Date::~Date()
{
    cout << "Date解構子";
    print();
    cout << endl;
}

unsigned int Date::checkDay(int testDay) const
{
    static const array< int, monthsPerYear + 1 > daysPerMonth =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    // February 29 檢查閏月
    if (month == 2 && testDay == 29 && (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    throw invalid_argument("warning：當前月份和年份的日期無效!!!!!");
}
