// Fig. 9.20: Pet.cpp
// Pet class member-function definitions.

#include <iostream>
#include "Pet.h"  // Pet class definition
#include "Date.h" // Date class definition

using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& name, const string& species,
    const Date& birth, const Date& adopt)
    : petName(name),             // initialize petName
    petSpecies(species),       // initialize petSpecies
    birthDate(birth),          // initialize birthDate
    adoptDate(adopt)     // initialize adoptionDate
{
    // output Pet object to show when constructor is called
    cout << "Pet object constructor: "
        << petName << " the " << petSpecies << endl;
} // end Pet constructor

// print Pet object
void Pet::print() const
{
    cout << petName << " (" << petSpecies << ")  Adopted: ";
    adoptDate.print();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;
} // end function print

// output Pet object to show when its destructor is called
Pet::~Pet()
{
    cout << "Pet object destructor: "
        << petName << " the " << petSpecies << endl;
} // end ~Pet destructor
