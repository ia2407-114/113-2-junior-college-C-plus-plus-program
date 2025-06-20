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
    output << number.areaCode
        << number.exchange << number.line << "\n";
    
    output  << number.areaCode << "/"
        << number.exchange << "/" << number.line;
    return output; // enables cout << a << b << c;
    
} // end function operator<< 


// overloaded stream extraction operator; cannot be 
// a member function if we would like to invoke it with
// cin >> somePhoneNumber;
istream& operator>>(istream& input, PhoneNumber& number)
{
    input.ignore(4); // skip (
    input >> setw(3) >> number.areaCode; // input area code
    input.ignore(2); // skip ) and space
    input >> setw(2) >> number.exchange; // input exchange
    input.ignore(2); // skip dash (-)
    input >> setw(3) >> number.line; // input line
    return input; // enables cin >> a >> b >> c;
} // end function operator>>