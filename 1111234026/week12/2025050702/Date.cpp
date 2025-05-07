// Date.cpp
#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int mn, int dy, int yr) {
    if (mn > 0 && mn <= monthsPerYear)
        month = mn;
    else {
        month = 1;
        cerr << "Invalid month (" << mn << ") set to 1.\n";
    }

    year = yr;
    day = checkDay(dy);
}

unsigned int Date::checkDay(int testDay) const {
    static const int daysPerMonth[monthsPerYear + 1] =
    { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };

    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    if (month == 2 && testDay == 29 &&
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    cerr << "Invalid day (" << testDay << ") set to 1.\n";
    return 1;
}

void Date::print() const {
    cout << month << '/' << day << '/' << year;
}

Date::~Date() {}

istream& operator>>(istream& in, Date& d) {
    int m, day, y;
    char slash;
    in >> m >> slash >> day >> slash >> y;
    d = Date(m, day, y);
    return in;
}
