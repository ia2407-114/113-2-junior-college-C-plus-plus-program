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

		cout << "輸入寵物的名字和種類:" << endl;
		cin >> name >> kind;
		cout << "輸入寵物的生日:" << endl;
		cin >> year >> month >> date;
		cout << "輸入寵物的領養時間:" << endl;
		cin >> yearA >> monthA >> dateA;

		Date birth(year, month, date);
		Date adopt(yearA, monthA, dateA);
		Pet Pet(name, kind, birth, adopt, year, yearA, month, monthA, date, dateA);

		cout << endl;
		Pet.print();

		cout << "是否要繼續輸入？1=是，0=否：";
		cin >> more;

	} while (more == 1);


}