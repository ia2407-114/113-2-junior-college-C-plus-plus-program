#include"Pet.h"
#include"Date.h"
#include<iostream>

using namespace std;

Pet::Pet(const string& n, const string& t, Date birth, Date go) :datebirth(birth), datego(go)
{
	name = n;
	type = t;
}

Pet::~Pet()
{
	cout << "name: " << name << endl;
	cout << "type: " << type << endl;
	cout << "birthdate: ";
	datebirth.print();
	cout << "\ngo date: ";
	datego.print();
}
