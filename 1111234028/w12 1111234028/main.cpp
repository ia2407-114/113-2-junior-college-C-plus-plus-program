#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

int main()
{
	string fristname, lastname;
	int year, month, date, yearA, monthA, dateA;

	cout << "��J�m�M�W:\n";
	cin >> fristname >> lastname;
	cout << "��J�ͤ�:(�p2008 5 12\n";
	cin >> year >> month >> date;
	cout << "��J��¾��:(�p2015 6 4\n";
	cin >> yearA >> monthA >> dateA;

	Date brithday(year, month, date);
	Date hireday(yearA, monthA, dateA);

	Employee Employee(brithday,hireday);
	Employee.setFirstName(fristname).setlastName(lastname);

	cout << endl;
	Employee.print();
}