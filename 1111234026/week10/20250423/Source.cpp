// Fig. 9.9: fig09_09.cpp
// Demonstrating the order in which constructors and 
// destructors are called.
#include <iostream>
#include "CreateAndDestroy.h" // include CreateAndDestroy class definition
using namespace std;

void create(void); // prototype

CreateAndDestroy first(1, "(global before main)"); // global object

int main()
{
	cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;
	CreateAndDestroy second(2, "(local automatic in main)");
	static CreateAndDestroy third(3, "(local static in main)");

	create(); // call function to create objects

	cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
	CreateAndDestroy fourth(4, "(local automatic in main)");
	cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;
} // end main

// function to create objects
void create(void)
{
	cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
	CreateAndDestroy fifth(5, "(local automatic in create)");
	static CreateAndDestroy sixth(6, "(local static in create)");
	CreateAndDestroy seventh(7, "(local automatic in create)");
	cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;
} // end function create