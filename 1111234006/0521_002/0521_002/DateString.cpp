#include <iomanip>
#include "DateString.h"
using namespace std;

// �ۭq��J�B��l >>
istream& operator>>(istream& input, DateString& d) {
    input.ignore(4);  // �����u����v
    input >> setw(3) >> d.year;
    input.ignore(2);  // �����u�~�v
    input >> setw(2) >> d.month;
    input.ignore(2);  // �����u��v
    input >> setw(2) >> d.day;
    input.ignore();   // �����u���v
    return input;
}

// �ۭq��X�B��l <<
ostream& operator<<(ostream& output, const DateString& d) {
    output << d.year << d.month << d.day << endl;
    output << d.year << "/" << d.month << "/" << d.day;
    return output;
}

