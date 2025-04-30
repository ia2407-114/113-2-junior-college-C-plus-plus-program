#ifndef PET_H
#define Employee_H

#include <string>
#include "Date.h"

class Pet {
public:
    Pet(const std::string& type, const std::string& name,
        const Date& birth, const Date& adopted);
    ~Pet(); 

    static bool validatePetAge(const Date& birth, const Date& adopted);
private:
    std::string petType;
    std::string petName;
    const Date birthDate;
    const Date adoptionDate;
};

#endif
