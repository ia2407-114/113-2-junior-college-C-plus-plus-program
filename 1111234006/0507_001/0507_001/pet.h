#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class pet {
public:
    pet(); // �w�]�غc�l
    pet(const std::string& t, const std::string& n, const Date& b, const Date& a);

    // �C�� setter �禡���^�� pet&�A���A�i�H�걵�I�s
    pet& setType(const std::string& t);
    pet& setName(const std::string& n);
    pet& setBirth(const Date& b);
    pet& setAdopt(const Date& a);

    void print() const;

private:
    std::string type;
    std::string name;
    Date birthDate;
    Date adoptDate;
};

#endif