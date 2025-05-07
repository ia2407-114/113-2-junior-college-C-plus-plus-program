#include<iostream>
#include<stdexcept>
#include<array>
#include"Date.h"

using namespace std;

Date::Date(int y, int m, int d)
{
	setdate(y, m, d);
}

void Date::print() const
{
	cout << " " << year << "/" << month << "/" << day << "/";
}

void Date::setdate(int y, int m, int d)
{
	year = y;
	if (m <= 0 || m > monthperyear)
		throw  invalid_argument("wrong..1~12");
	month = m;
	const array<int, monthperyear + 1>mmm = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	if ((d == 29) && (m == 2))
	{
		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		{
			day = d;
			return;
		}
	}
	if (d <= mmm[m])
	{

		day = d;
		return;

	}

	throw  invalid_argument("wrong..");
}