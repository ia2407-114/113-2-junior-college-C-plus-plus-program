#include"Date.h"
#include<iostream>
#ifndef PET_H
#define PET_H
using namespace std;

class Pet
{
private:
	Date datego;
	Date datebirth;
	string name;
	string type;
public:
	Pet& setdata(const string& n, const string& t, Date bir, Date go);
	Pet& print();
	void bye();
};
#endif
