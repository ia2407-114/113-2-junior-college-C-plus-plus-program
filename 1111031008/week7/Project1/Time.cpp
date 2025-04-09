
#include "Time.h"

#include <iostream>
#include <iomanip>  /


Time::Time(int year, int month, int day) {
    if (isValidDate(year, month, day)) {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    else {
        std::cout << "Invalid date, setting to default: 1990/01/01" << std::endl;
        this->year = 1990;
        this->month = 1;
        this->day = 1;
    }
}


void Time::setDate(int year, int month, int day) {
    if (isValidDate(year, month, day)) {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    else {
        std::cout << "Invalid date, unable to set." << std::endl;
    }
}


bool Time::isValidDate(int year, int month, int day) {
    if (month < 1 || month > 12) {
        return false; 
    }

    if (day < 1 || day > 31) {
        return false;  
    }

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;  
    }

    if (month == 2) {
        if (isLeapYear(year)) {
            if (day > 29) return false; 
        }
        else {
            if (day > 28) return false; 
        }
    }

    return true;
}


bool Time::isLeapYear(int year) const {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

void Time::printDate() const {

    std::cout << "Gregorian Date: " << year << "/" << std::setfill('0') << std::setw(2) << month << "/" << std::setw(2) << day << std::endl;


    int rocYear = year - 1911;
    std::cout << "ROC Date: " << rocYear << "/" << std::setfill('0') << std::setw(2) << month << "/" << std::setw(2) << day << std::endl;
}
