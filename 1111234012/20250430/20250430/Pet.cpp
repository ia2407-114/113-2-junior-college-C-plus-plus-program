
// Fig. 9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Pet.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& name, const string& kind,
	const Date& dateOfBirth, const Date& dateOfAdopt, int& year, int& yearA, int& month, int& monthA, int& date, int& dateA)
	: Name(name), // initialize firstName
	Kind(kind),
	birthDate(dateOfBirth), // initialize birthDate
	AdoptDate(dateOfAdopt) // initialize hireDate
{
	if (yearA == year)
		if (monthA > month)
			if (dateA > date)
				cout << "Pet object constructor: "
				<< Name;
			else
				cout << "1年齡或收養時間輸入錯誤 ! ! !\n";
		else
			cout << "2年齡或收養時間輸入錯誤 ! ! !\n";
	else if (yearA > year && 2025 - year < 21)
		cout << "Pet object constructor: "
		<< Name;
	else
		cout << "3年齡或收養時間輸入錯誤 ! ! !\n";


	// output Employee object to show when constructor is called

} // end Employee constructor

// print Employee object
void Pet::print() const
{
	cout << "種類:" << Kind << "\n";
	cout << Name << "  Adopt: ";
	AdoptDate.print();
	cout << "  Birthday: ";
	birthDate.print();
	cout << endl;
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
	print();
	cout << "Pet object destructor: "
		<< endl;
}
