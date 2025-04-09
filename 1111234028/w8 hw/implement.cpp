#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h" 
using namespace std;

Time::Time(int year, int month, int day)
{
	setTime(year, month, day);
}

void Time::setTime(int y, int m, int d)
{
	setYear(y);
	setMonth(m);
	setDay(d);
}

void Time::setYear(int y)
{
	if (y >= 1911 && y < 2050)
		year = y;
	else
		throw std::invalid_argument("Year must be 1911-2050");
}

void Time::setMonth(int m)
{
	if (m >= 0 && m <= 12)
		month = m;
	else
		throw invalid_argument("Month must be 1-12");
}

void Time::setDay(int d)
{
	if (d >= 0 && d <= 31)
		day = d;
	else
		throw invalid_argument("Day must be 1-31");
}

unsigned int Time::getYear() const
{
	return year;
}

unsigned int Time::getMonth() const
{
	return month;
}

unsigned int Time::getDay() const
{
	return day;
}

void Time::printUniversal() const
{
	cout << setfill('0') << setw(2) << getYear() << ":"
		<< setw(2) << getMonth() << ":" << setw(2) << getDay();
}

void Time::printStandard() const
{
	cout << "西元" << ((getYear() == 0 || getYear() == 12) ? 12 : getYear() % 12)
		<< ":" << setfill('0') << setw(2) << getMonth()
		<< ":" << setw(2) << getDay();
	cout << "民國" << (getYear() - 1911) << ":" << setfill('0') << setw(2) << getMonth()
		<< ":" << setw(2) << getDay();
}