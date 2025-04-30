// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Pet.h" // Employee class definition
using namespace std;

int main()
{
	string name, kind;
	int year, month, date, yearA, monthA, dateA, more;
	do
	{

		cout << "��J�d�����W�r�M����:\n";
		cin >> name >> kind;
		cout << "��J�d�����ͤ�:(�p2008 5 12\n";
		cin >> year >> month >> date;
		cout << "��J�d������i�ɶ�:(�p2015 6 4\n";
		cin >> yearA >> monthA >> dateA;

		Date birth(year, month, date);
		Date adopt(yearA, monthA, dateA);
		Pet Pet(name, kind, birth, adopt, year, yearA, month, monthA, date, dateA);

		cout << endl;
		Pet.print();

		cout << "�O�_�n�~���J�H\n1=�O\n0=�_�G\n";
		cin >> more;

	} while (more == 1);


}