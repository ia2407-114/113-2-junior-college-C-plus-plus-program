#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class Pet {
public:
    Pet(const Date&, const Date&);
    ~Pet();

    Pet& setFirstName(const std::string&);
    Pet& setLastName(const std::string&);
    void print() const;

private:
    std::string firstName;
    std::string lastName;
    Date birthDate;
    Date adoptDate;
};

#endif