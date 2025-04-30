// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

int main()
{
	int d, m, y;
	cout << "born" << endl;
	cin >> y >> m >> d;

	Date birth=Date(d, m, y);
	birth.
	cout << "come home" << endl;
	cin >> y >> m >> d;
	Date hire(d, m, y);
	Employee manager("Bob", "Blue", birth, hire);
	
	cout << endl;
	manager.print();
	
} // end main