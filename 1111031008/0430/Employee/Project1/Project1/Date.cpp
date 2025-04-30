// Fig. 9.18: Date.cpp
// Date class member-function definitions.
#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h" // include Date class definition
using namespace std;

// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date::Date(int m, int d, int y) {
    if (m <= 0 || m > monthsPerYear)
        throw invalid_argument("Invalid month");

    month = m;
    year = y;
    day = checkDay(d);
    print();
    cout << endl;
}

unsigned int Date::checkDay(int testDay) const {
    static const array<int, monthsPerYear + 1> daysPerMonth =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (testDay > 0 && testDay <= daysPerMonth[month]) {
        return testDay;
    }

    // Leap year check
    if (month == 2 && testDay == 29 &&
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    throw invalid_argument("Invalid day for current month and year");
}

void Date::print() const {
    cout << month << '/' << day << '/' << year;
}

Date::~Date() {
    print();
    cout << endl;
}

int Date::getYear() const { return year; }
int Date::getMonth() const { return month; }
int Date::getDay() const { return day; }

bool Date::isValidDate(int d, int m, int y) {
    try {
        Date temp(m, d, y);
        return true;
    }
    catch (...) {
        return false;
    }
}
