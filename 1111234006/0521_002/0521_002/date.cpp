#include "date.h"
#include <cctype>

// �ۭq��J�B��l >>�G�q��J���L�o�Ʀr
istream& operator>>(istream& in, Date& date) {
    string input;
    getline(in, input); 

    string digits;
    for (char c : input) {
        if (isdigit(c)) {
            digits += c;  // �ϥ� string �� += �B��l
        }
    }

    if (digits.length() == 7) {
        date.year = digits.substr(0, 3); // �ϥ� string �� substr() �禡
        date.month = digits.substr(3, 2);
        date.day = digits.substr(5, 2);
    }
    else {
        cerr << "��J�榡���~�A�п�J���O�y����114�~05��21��z�o�˪��榡�C" << endl;
        date.year = date.month = date.day = "??";
    }

    return in;
}

// �ۭq��X�B��l <<
ostream& operator<<(ostream& out, const Date& date) {
    out << date.year << "/" << date.month << "/" << date.day;
    return out;
}
