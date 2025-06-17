// Fig. 9.19: Employee.h
// Employee class definition showing composition.
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"
using namespace std;

class Pet
{
public:
    Pet(const string&, const string&,
        const Date&, const Date&);
    void print() const;
    Pet& setPet(const string& n, const string& s);
    ~Pet();
private:
    string name;
    string species;
    const Date birthDate;
    const Date adoptDate;
};
#endif