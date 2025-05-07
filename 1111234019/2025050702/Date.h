// Date.h
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
public:
    static const unsigned int monthsPerYear = 12;
    explicit Date(int = 1, int = 1, int = 1900);
    void print() const;
    ~Date();
    friend istream& operator>>(istream&, Date&);
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    unsigned int checkDay(int) const;
};

#endif
