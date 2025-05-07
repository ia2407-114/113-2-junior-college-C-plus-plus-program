#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

int main()
{
	int biy = 0, bim = 0, bid = 0;
	int hiy = 0, him = 0, hid = 0;
	string na;

	cout << "輸入名字" << endl;
	cin >> na;
	cout << "輸入生日 (mm/dd/yyyy)" << endl;
	cin >> bim >> bid >> biy;
	cout << "輸入入職日 (mm/dd/yyyy)" << endl;
	cin >> him >> hid >> hiy;

	Date birth(bim, bid, biy);
	Date hire(him, hid, hiy);
	Employee manager(na, birth, hire);

	manager.setname(na).print();
	cout << endl;
}