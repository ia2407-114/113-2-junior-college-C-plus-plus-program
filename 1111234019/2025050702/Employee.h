// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee {
public:
    Employee();
    Employee(const std::string&, const std::string&, const Date&, const Date&);

    Employee& setAll(const std::string&, const std::string&, const Date&, const Date&); 

    void print() const;
    ~Employee();
private:
    std::string firstName;
    std::string lastName;
    Date birthDate; 
    Date hireDate;
};

#endif
