#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>
#include <cctype>

class PhoneNumber
{
    friend std::ostream& operator<<(std::ostream&, const PhoneNumber&);
    friend std::istream& operator>>(std::istream&, PhoneNumber&);
private:
    std::string rawNumber;  // ¦sÀx¯Â¼Æ¦r "1140521"
public:
    std::string getRawNumber() const { return rawNumber; }
};
std::istream& operator>>(std::istream& in, PhoneNumber& phone)
{
    std::string input;
    in >> input;
    phone.rawNumber.clear();
    for (char c : input) {
        if (std::isdigit(c)) {
            phone.rawNumber += c;
        }
    }
    return in;
}
std::ostream& operator<<(std::ostream& out, const PhoneNumber& phone)
{
    out << phone.rawNumber.substr(0, 3) << "/"
        << phone.rawNumber.substr(3, 2) << "/"
        << phone.rawNumber.substr(5, 2);
    return out;
}
#endif
