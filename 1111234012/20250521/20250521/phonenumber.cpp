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
    getline(input, inputStr); // 讀整行

    // 過濾出純數字
    string numbersOnly = "";
    for (char ch : inputStr) {
        if (isdigit(ch)) {
            numbersOnly += ch;
        }
    }

    // 分解數字
    if (numbersOnly.length() == 7) {
        date.year = numbersOnly.substr(0, 3);   // 民國年3碼
        date.month = numbersOnly.substr(3, 2);  // 月2碼
        date.day = numbersOnly.substr(5, 2);    // 日2碼
        date.rawNumbers = numbersOnly;
    }
    else {
        // 錯誤處理
        date.year = date.month = date.day = "00";
        date.rawNumbers = "0000000";
    }

    return input;
}

// 自訂輸出運算子 <<
ostream& operator<<(ostream& output, const DateParser& date) {
    output << date.year << "/" << date.month << "/" << date.day;
    return output;
}*/