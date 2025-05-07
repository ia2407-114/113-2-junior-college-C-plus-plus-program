// Fig. 9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Employee.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Employee& Employee::setFirstName(const string &n)
{
    this->firstName = n;
    return *this;
}

Employee& Employee::setlastName(const string& n)
{
    this->lastName = n;
    return *this;
}

Employee::Employee(const Date& birth, const Date& hire)
    : birthDate(birth), hireDate(hire) {
    cout << "Pet 建構子執行\n";
}

// print Employee object
void Employee::print() const
{
    cout << "姓" << lastName << ", " << "名" << firstName;
    cout << endl;
} // end function print

// output Employee object to show when its destructor is called
Employee::~Employee()
{
    cout << "Employee object destructor: "
        << lastName << ", " << firstName << endl;
}