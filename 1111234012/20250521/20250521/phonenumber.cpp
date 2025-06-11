// Fig. 10.4: PhoneNumber.cpp
// Overloaded stream insertion and stream extraction operators
// for class PhoneNumber.
#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

// overloaded stream insertion operator; cannot be 
// a member function if we would like to invoke it with
// cout << somePhoneNumber;
ostream& operator<<(ostream& output, const PhoneNumber& number)
{
    output << "(" << number.areaCode << ") "
        << number.exchange << "-" << number.line;
    return output; // enables cout << a << b << c;
} // end function operator<< 

// overloaded stream extraction operator; cannot be 
// a member function if we would like to invoke it with
// cin >> somePhoneNumber;
istream& operator>>(istream& input, PhoneNumber& number)
{
    input.ignore(); // skip (
    input >> setw(3) >> number.areaCode; // input area code
    input.ignore(2); // skip ) and space
    input >> setw(3) >> number.exchange; // input exchange
    input.ignore(); // skip dash (-)
    input >> setw(4) >> number.line; // input line
    return input; // enables cin >> a >> b >> c;
} // end function operator>>



/*istream& operator>>(istream& input, DateParser& date) {
    string inputStr;
    getline(input, inputStr); // Ū���

    // �L�o�X�¼Ʀr
    string numbersOnly = "";
    for (char ch : inputStr) {
        if (isdigit(ch)) {
            numbersOnly += ch;
        }
    }

    // ���ѼƦr
    if (numbersOnly.length() == 7) {
        date.year = numbersOnly.substr(0, 3);   // ����~3�X
        date.month = numbersOnly.substr(3, 2);  // ��2�X
        date.day = numbersOnly.substr(5, 2);    // ��2�X
        date.rawNumbers = numbersOnly;
    }
    else {
        // ���~�B�z
        date.year = date.month = date.day = "00";
        date.rawNumbers = "0000000";
    }

    return input;
}

// �ۭq��X�B��l <<
ostream& operator<<(ostream& output, const DateParser& date) {
    output << date.year << "/" << date.month << "/" << date.day;
    return output;
}*/