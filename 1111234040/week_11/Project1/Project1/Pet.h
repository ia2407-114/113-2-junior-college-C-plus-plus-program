#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class Pet {
public:
    Pet(const std::string&, const std::string&, const Date&, const Date&);
    ~Pet();
    void print() const;
    bool isValid() const;
private:
    std::string types;
    std::string name;
    const Date birthDate;
    const Date adoptDate;
    int calculateAge() const;
};

#endif



