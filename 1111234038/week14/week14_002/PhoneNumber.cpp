#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

ostream& operator<<(ostream& output, const Year& y)
{
    //output << y.year;
    output << y.year << y.month << y.day << endl;
    output << y.year << "/" << y.month << "/" << y.day;
    return output;
}

istream& operator>>(istream& input, Year& y)
{
    input.ignore(4); // skip "民國"
    input >> setw(3) >> y.year; // input area code
    input.ignore(2); // skip "年"
    input >> setw(2) >> y.month; // input exchange
    input.ignore(2); // skip "月"
    input >> setw(2) >> y.day; // input line
    return input; // enables cin >> a >> b >> c;
}