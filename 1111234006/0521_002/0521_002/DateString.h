#ifndef DATESTRING_H
#define DATESTRING_H

#include <iostream>
#include <string>
using namespace std;

class DateString {
    friend ostream& operator<<(ostream&, const DateString&); 
    friend istream& operator>>(istream&, DateString&); 
private:
    string year;
    string month;
    string day;
public:
    string operator()() const { return year + month + day; }
};

#endif
