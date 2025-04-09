// Date.cpp
#include <iostream>
#include <stdexcept>
#include "Date.h"

using namespace std;

Date::Date(int y, int m, int d) {
    setDate(y, m, d);  
}

void Date::setDate(int y, int m, int d) {
    if (y < 1911 || y > 2050)
        throw invalid_argument("Year must be between 1911 and 2050.");
    if (m < 1 || m > 12)
        throw invalid_argument("Month must be between 1 and 12.");
    if (d < 1 || d > 31)
        throw invalid_argument("Day must be between 1 and 31.");

    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        throw invalid_argument("Invalid day for this month.");
    if (m == 2 && d > 29)
        throw invalid_argument("Invalid day for February.");
    if (m == 2 && d == 29 && !((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)))
        throw invalid_argument("Invalid day for February in a non-leap year.");

    year = y;
    month = m;
    day = d;
}

void Date::printGregorian() const {
    cout << "Gregorian Date: " << year << "/" << month << "/" << day << endl;
}

void Date::printROC() const {
    cout << "ROC Date: " << (year - 1911) << "/" << month << "/" << day << endl;
}
