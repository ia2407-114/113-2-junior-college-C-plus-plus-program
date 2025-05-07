// Date.h
#ifndef DATE_H
#define DATE_H

#include <string>

class Date
{
public:
    static const unsigned int monthsPerYear = 12; // months in a year
    Date(); // default constructor
    Date(int mn, int dy, int yr); // constructor for initialization
    void setDateFromInput(); // set date from user input
    void print() const; // print date in month/day/year format
    ~Date(); // provided to confirm destruction order
private:
    unsigned int month; // 1-12 (January-December)
    unsigned int day; // 1-31 based on month
    unsigned int year; // any year

    // utility function to check if day is proper for month and year
    unsigned int checkDay(int) const;
}; // end class Date

#endif
