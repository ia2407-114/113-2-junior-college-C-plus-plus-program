#ifndef TIME_H
#define TIME_H

class Time {
public:
    virtual void setTime(int, int, int) = 0; 
    virtual void printGregorian() const = 0; 
    virtual void printRepublican() const = 0; 
protected:
    int year;
    int month;
    int day;
};

#endif 
#pragma once
