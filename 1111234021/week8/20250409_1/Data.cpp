// Fig. 9.5: Data.cpp
// Member-function definitions for class Data.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Data.h" // Include definition of class Data from Data.h
using namespace std;

// Constructor initializes each data member with defaults
Data::Data(int year, int month, int day) {
    setData(year, month, day); // Validate and set date
}

// Set new date value
void Data::setData(int y, int m, int d) {
    setYear(y);   // Set private field year
    setMonth(m);  // Set private field month
    setDay(d);    // Set private field day
}

// Set year value
void Data::setYear(int y) {
    if (y >= 1911 && y <= 2050)
        year = y;
    else
        throw invalid_argument("年份必須介於1911至2050之間");
}

// Set month value
void Data::setMonth(int m) {
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("月份必須介於1至12之間");
}

// Set day value with validation based on month (no leap year)
void Data::setDay(int d) {
    // Days per month (February fixed at 28 days)
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (d >= 1 && d <= daysInMonth[month])
        day = d;
    else
        throw invalid_argument("日期無效，超出該月天數範圍");
}

// Return year value
unsigned int Data::getYear() const {
    return year;
}

// Return month value
unsigned int Data::getMonth() const {
    return month;
}

// Return day value
unsigned int Data::getDay() const {
    return day;
}

// Print date in Western format (YYYY/MM/DD)
void Data::printWestern() const {
    cout << setfill('0') << setw(4) << getYear() << "/"
        << setw(2) << getMonth() << "/"
        << setw(2) << getDay();
}

// Print date in ROC format (YYY/MM/DD, year - 1911)
void Data::printROC() const {
    cout << setfill('0') << setw(3) << (getYear() - 1911) << "/"
        << setw(2) << getMonth() << "/"
        << setw(2) << getDay();
}