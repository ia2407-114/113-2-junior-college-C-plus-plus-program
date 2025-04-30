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

		cout << "輸入寵物的名字和種類:\n";
		cin >> name >> kind;
		cout << "輸入寵物的生日:(如2008 5 12\n";
		cin >> year >> month >> date;
		cout << "輸入寵物的領養時間:(如2015 6 4\n";
		cin >> yearA >> monthA >> dateA;

		Date birth(year, month, date);
		Date adopt(yearA, monthA, dateA);
		Pet Pet(name, kind, birth, adopt, year, yearA, month, monthA, date, dateA);

		cout << endl;
		Pet.print();

		cout << "是否要繼續輸入？\n1=是\n0=否：\n";
		cin >> more;

	} while (more == 1);


}