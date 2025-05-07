#include <iostream>
#include <stdexcept>
#include <array>
#include "Date.h"
using namespace std;

Date::Date(int mn, int dy, int yr) {
    if (mn >= 1 && mn <= monthsPerYear) month = mn;
    else throw invalid_argument("����ݤ��� 1-12");

    year = yr;
    day = checkDay(dy);
    cout << "�إߤ���G";
    print();
    cout << endl;
}

unsigned int Date::checkDay(int testDay) const {
    static const array<int, monthsPerYear + 1> daysPerMonth =
        { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };

    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    if (month == 2 && testDay == 29 && (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    throw invalid_argument("���X�k�����");
}

void Date::print() const {
    cout << month << "/" << day << "/" << year;
}

Date::~Date() {
    cout << "�P������G";
    print();
    cout << endl;
}