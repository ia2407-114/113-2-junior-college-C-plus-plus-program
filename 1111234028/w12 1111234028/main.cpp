#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

int main()
{
	string fristname, lastname;
	int year, month, date, yearA, monthA, dateA;

	cout << "輸入姓和名:\n";
	cin >> fristname >> lastname;
	cout << "輸入生日:(如2008 5 12\n";
	cin >> year >> month >> date;
	cout << "輸入到職日:(如2015 6 4\n";
	cin >> yearA >> monthA >> dateA;

	Date brithday(year, month, date);
	Date hireday(yearA, monthA, dateA);

	Employee Employee(brithday,hireday);
	Employee.setFirstName(fristname).setlastName(lastname);

	cout << endl;
	Employee.print();
}