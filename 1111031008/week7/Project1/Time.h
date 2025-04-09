#pragma once

#ifndef TIME_H
#define TIME_H

#include <iostream>


class Date {
public:
    virtual void setDate(int, int, int) = 0; 
    virtual bool isValidDate(int, int, int) = 0; 
    virtual void printDate() const = 0; 
};

class Time : public Date {
public:
    explicit Time(int year = 1990, int month = 1, int day = 1);

    void setDate(int year, int month, int day) override;
    bool isValidDate(int year, int month, int day) override; 
    void printDate() const override; 

private:
    int year;  
    int month;
    int day;   

    bool isLeapYear(int year) const; 
    bool isMonthValid(int month) const; 
    bool isDayValid(int day) const; 
};

#endif
