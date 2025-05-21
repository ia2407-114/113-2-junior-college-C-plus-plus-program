#include"Pet.h"
#include"Date.h"
#include<iostream>

using namespace std;

Pet& Pet::setdata(const string& n, const string& t, Date bir, Date go)
{
	datebirth = bir;
	datego = go;
	name = n;
	type = t;
	return *this;
}

Pet& Pet::print()
{
	cout << "name: " << name << "\ntype: " << type;
	cout << "生日: ";
	datebirth.print();
	cout << "領養日: ";
	datego.print();
	return *this;
}

void Pet::bye()
{
	cout << "\nＢＹＥ";
}