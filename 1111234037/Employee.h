#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class Pet
{
public:
    Pet(const std::string&, const std::string&, const Date&, const Date&);
    void print() const;
    ~Pet();
private:
    std::string type;
    std::string name;
    const Date birthDate;
    const Date adoptDate;
    bool checkAge() const;
};

#endif
