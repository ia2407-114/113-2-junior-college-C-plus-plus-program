#include <iostream>
#include "Pet.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : type(first), // initialize firstName
    Name(last), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    goDate(dateOfHire) // initialize hireDate
{
    // output Employee object to show when constructor is called
    
    cout << endl;
} // end Employee constructor

// print Employee object
void Pet::print() const
{    
    cout << endl;
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << Name << ", " << type;
    cout << ",生日為: ";
    birthDate.print();
    cout << ",領養日期為: ";
    goDate.print();  
}