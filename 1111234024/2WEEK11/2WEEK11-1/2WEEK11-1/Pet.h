#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" 

class Pet
{
public:
    Pet(const std::string&, const std::string&,
        const Date&, const Date&, int& year, int& yearA, int& month, int& monthA, int& date, int& dateA);
    void print() const;
    ~Pet(); 
private:
    std::string Name;
    std::string Kind;
    Date birthDate; 
    Date AdoptDate;
}; 
#endif