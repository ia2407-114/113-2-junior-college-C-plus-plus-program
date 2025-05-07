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

    //�s�W�r����start
    Pet& setPetName(const string&, const string&);
    //�s�W�r����end
    
    void print() const;
    ~Pet();
private:
    string name;
    string species;
    const Date birthDate;
    const Date adoptDate;
};
#endif