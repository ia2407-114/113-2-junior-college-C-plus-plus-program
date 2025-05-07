// Fig. 9.19: Employee.h
// Employee class definition showing composition.
// Member functions defined in Employee.cpp.
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // include Date class definition

class Pet
{
public:
    Pet(const std::string&, const std::string&,
        const Date&, const Date&, int& year, int& yearA, int& month, int& monthA, int& date, int& dateA);
    void print() const;
    ~Pet(); // provided to confirm destruction order
private:
    std::string Name; // composition: member object
    std::string Kind;
    Date birthDate; // composition: member object
    Date AdoptDate; // composition: member object
}; // end class Employee

#endif#pragma once
