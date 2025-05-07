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

		cout << "��J�d�����W�r�M����:" << endl;
		cin >> name >> kind;
		cout << "��J�d�����ͤ�:" << endl;
		cin >> year >> month >> date;
		cout << "��J�d������i�ɶ�:" << endl;
		cin >> yearA >> monthA >> dateA;

		Date birth(year, month, date);
		Date adopt(yearA, monthA, dateA);
		Pet Pet(name, kind, birth, adopt, year, yearA, month, monthA, date, dateA);

		cout << endl;
		Pet.print();

		cout << "�O�_�n�~���J�H1=�O�A0=�_�G";
		cin >> more;

	} while (more == 1);


}