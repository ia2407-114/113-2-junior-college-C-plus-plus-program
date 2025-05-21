#pragma once
// Fig. 10.3: PhoneNumber.h
// PhoneNumber class definition
#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>

class PhoneNumber
{
	friend std::ostream& operator<<(std::ostream&, const PhoneNumber&);
	friend std::istream& operator>>(std::istream&, PhoneNumber&);
private:
    std::string year;  // 3 digits
    std::string month; // 2 digits
    std::string day;   // 2 digits
}; // end class PhoneNumber

#endif