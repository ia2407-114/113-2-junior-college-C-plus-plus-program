#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

int main()
{
	int biy = 0, bim = 0, bid = 0;
	int hiy = 0, him = 0, hid = 0;
	string na;

	cout << "��J�W�r" << endl;
	cin >> na;
	cout << "��J�ͤ� (mm/dd/yyyy)" << endl;
	cin >> bim >> bid >> biy;
	cout << "��J�J¾�� (mm/dd/yyyy)" << endl;
	cin >> him >> hid >> hiy;

	Date birth(bim, bid, biy);
	Date hire(him, hid, hiy);
	Employee manager(na, birth, hire);

	manager.setname(na).print();
	cout << endl;
}