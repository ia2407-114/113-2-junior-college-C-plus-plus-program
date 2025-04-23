#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h"

using namespace std;

// Time constructor initializes each data member 
Date::Date(int year, int month, int day)
{
	setDate(year, month, day); // validate and set time
} // end Time constructor
Date::~Date()
{
	printUniversal();
	printStandard();
	cout << "bye bye" << endl;
}
// set new Time value using universal time
void Date::setDate(int year, int month, int day)
{
	setYear(year); // set private field hour
	setMonth(month); // set private field minute
	setDay(day); // set private field second
} // end function setTime

// set hour value
void Date::setYear(int y)
{
	if (y >= 1911 && y < 2100)
	{
		year = y;
	}
	else
	{
		cout << "�п�J�~������1911-2099\n";
	}
}

// set minute value
void Date::setMonth(int m)
{
	if (m >= 1 && m <= 12)
	{
		month = m;
	}
	else
	{
		cout << "�п�J�������1-12\n";
	}
}

void Date::setDay(int d)
{

	if (d >= 1 && d <= 31)
	{
		day = d;
	}
	else
	{
		cout << "�п�J�������1-31\n";
	}

}

unsigned int Date::getYear() const
{
	return year;
} //end function getHour

// return minute value
unsigned int Date::getMonth() const
{
	return month;
} // end function getMinute

// return second value
unsigned int Date::getDay() const
{
	return day;
} // end function getSecond

void Date::printUniversal() const
{
	cout << setfill('0') << setw(2) << "�褸" << getYear() << "�~"
		<< setw(2) << getMonth() << "��" << setw(2) << getDay() << "��\n";
} // end function printUniversal

void Date::printStandard() const
{
	cout << "���إ���" << getYear() - 1911 << "�~" << getMonth()
		<< "��" << setw(2) << getDay() << "��";
} // end function printStandard  //6883
