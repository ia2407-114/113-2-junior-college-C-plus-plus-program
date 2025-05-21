#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

ostream& operator<<(ostream& output, const PhoneNumber& number)
{
    output << number.areaCode
        << number.exchange << number.line;
    return output;
}


istream& operator>>(istream& input, PhoneNumber& number)
{
    input.ignore(5);
    input >> setw(3) >> number.areaCode;
    input.ignore(2);
    input >> setw(2) >> number.exchange;
    input.ignore(2);
    input >> setw(2) >> number.line;
    input.ignore(2);
    return input;
}