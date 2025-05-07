// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h" // include Date class definition

class Employee
{
public:
    Employee(const std::string&, const std::string&, const Date&, const Date&);
    void setEmployeeFromInput(); // set employee data from user input
    void print() const; // print employee details in a formatted way
    ~Employee(); // provided to confirm destruction order
private:
    std::string firstName; // composition: member object
    std::string lastName; // composition: member object

    Date birthDate;
    Date hireDate;
    // composition: member object
}; // end class Employee

#endif
