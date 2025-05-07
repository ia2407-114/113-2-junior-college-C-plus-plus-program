#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee
{
public:
    Employee(const std::string&,
        const Date&, const Date&);
    Employee& setname(const std::string&);
    Employee& print();
    ~Employee(); // provided to confirm destruction order
private:
    std::string name;
    const Date birthDate;
    const Date hireDate;
};

#endif