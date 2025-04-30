// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Pet.h" // Employee class definition
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	string spe, name;

    cout << "enter kind: ";
    cin >> spe;
    cout << "enter name: ";
    cin >> name;
    cout << "enter birthday(mm/dd/yyyy): ";
    cin >> a >> b >> c;
    cout << "enter adoptday(mm/dd/yyyy): ";
    cin >> d >> e >> f;
     
    Date birth( a, b, c );
    Date adopt( d, e, f );
    Pet manager( spe, name, birth, adopt );

    cout << endl;
    manager.print();
} // end main

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
