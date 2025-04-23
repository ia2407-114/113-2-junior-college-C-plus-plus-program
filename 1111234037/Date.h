#pragma once
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <ctime>
#include <stdexcept>
using namespace std;
class Date
{
public:
    explicit Date(int = 2000, int = 1, int = 1); 
    ~Date(); 
    void setDate(int, int, int);
    void setYear(int);
    void setMonth(int);
    void setDay(int);
    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;
    void printStandard() const; 
private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
};
#endif
