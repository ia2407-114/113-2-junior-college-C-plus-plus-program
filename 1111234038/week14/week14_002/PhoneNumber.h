#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>
using namespace std;

class Year
{
	friend ostream& operator<<(ostream&, const Year&);
	friend istream& operator>>(istream&, Year&);
private:
	string year;
	string month;
	string day;
};

#endif