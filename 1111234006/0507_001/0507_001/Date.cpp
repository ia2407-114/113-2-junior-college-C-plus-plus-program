#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

Date::Date(int m, int d, int y)
    : month(m), year(y), day(checkDay(d)) {
    if (month < 1 || month > monthsPerYear) {
        throw invalid_argument("月份必須介於 1 到 12");
    }
}

Date::~Date() {}

int Date::getYear() const {
    return year;
}

bool Date::isEarlierThanOrEqual(const Date& other) const {
    if (year < other.year) return true;
    if (year == other.year && month < other.month) return true;
    if (year == other.year && month == other.month && day <= other.day) return true;
    return false;
}

void Date::print() const {
    cout << month << '/' << day << '/' << year << endl;
}

//  瀑布式（每個都 return *this）
Date& Date::setMonth(int m) {
    if (m >= 1 && m <= monthsPerYear)
        this->month = m;
    return *this;
}

Date& Date::setDay(int d) {
    this->day = checkDay(d);
    return *this;
}

Date& Date::setYear(int y) {
    this->year = y;
    return *this;
}

//  檢查該月的合法天數
unsigned int Date::checkDay(int testDay) const {
    static const int daysPerMonth[monthsPerYear + 1] =
    { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    if (month == 2 && testDay == 29 &&
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    throw invalid_argument("天數無效");
}
