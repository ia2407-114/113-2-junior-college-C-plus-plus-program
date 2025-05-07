#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee
{
public:
    Employee(); // �w�]�غc�禡

    // �]�w�禡�]�䴩�r������ƩI�s�^
    Employee& setFirstName(const std::string&);
    Employee& setLastName(const std::string&);
    Employee& setBirthDate(int, int, int);
    Employee& setHireDate(int, int, int);

    void print() const;

private:
    std::string firstName;
    std::string lastName;
    Date birthDate;
    Date hireDate;
};

#endif
