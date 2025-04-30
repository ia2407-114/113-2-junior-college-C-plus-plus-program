// Fig. 9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Pet.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet( const std::string &spe, const std::string &name,
   const Date &dateOfBirth, const Date &dateOfAdopt )
   : species( spe ), // initialize firstName
     Name( name ), // initialize lastName
     birthDate( dateOfBirth ), // initialize birthDate
     adoptDate( dateOfAdopt ) // initialize hireDate
{
   // output Employee object to show when constructor is called
   cout << "Employee object constructor: " 
      << species << ' ' << Name << endl;
} // end Employee constructor


// print Employee object
void Pet::print() const
{
   cout << Name << ", " << species << "  adopted date: ";
   adoptDate.print();
   cout << "  Birthday: ";
   birthDate.print();
   cout << endl;
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{ 
   cout << "Employee object destructor: " 
      << Name << ", " << species << endl;
} // end ~Employee destructor

/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
