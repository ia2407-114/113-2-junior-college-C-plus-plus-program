#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // include Date class definition

class Pet
{
public:
    Pet(const std::string&, const std::string&,const Date&, const Date&);

    void print() const;

    ~Pet(); // provided to confirm destruction order
private:
    std::string type; // composition: member object
    std::string Name; // composition: member object
    const Date birthDate; // composition: member object
    const Date goDate; // composition: member object
}; // end class Employee

#endif