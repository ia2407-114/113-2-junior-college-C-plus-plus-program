#include "PhoneNumber.h"
#include <cctype>
using namespace std;

istream& operator>>(istream& input, PhoneNumber& d) {
    string raw;
    getline(input, raw);
    string digits = "";

    for (char c : raw) {
        if (isdigit(c)) {
            digits += c;
        }
    }

    if (digits.length() == 7) {
        d.year = digits.substr(0, 3);
        d.month = digits.substr(3, 2);
        d.day = digits.substr(5, 2);
    }
    else {
        d.year = d.month = d.day = "??";
    }

    return input;
}

ostream& operator<<(ostream& output, const PhoneNumber& d) {
    if (d.year != "??") {
        output << d.year << "/" << d.month << "/" << d.day;
    }
    else {
        output << "�榡���~�A�п�J���T��7��Ʀr����C";
    }

    return output;
}
