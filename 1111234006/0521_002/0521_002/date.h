#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    string year;
    string month;
    string day;

public:
    friend istream& operator>>(istream&, Date&);
    friend ostream& operator<<(ostream&, const Date&);

    string getRaw() const {
        return year + month + day;
    }
};
#endif

