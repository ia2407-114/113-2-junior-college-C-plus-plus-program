#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class Pet {
public:
    Pet(const std::string&, const std::string&, const Date&, const Date&);
    void print() const;
    ~Pet(); // prints all pet data

private:
    std::string type;
    std::string name;
    Date birthDate;
    Date adoptDate;

    bool isValidAge() const; // check 0 <= age <= 20
};

#endif
