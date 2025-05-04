#include"Pet.h"
#include"Date.h"
#include<iostream>

using namespace std;

Pet::Pet(const string& n, const string& t, Date birth, Date go) :name(n) , type(t) ,datebirth(birth),datego(go)
{
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
