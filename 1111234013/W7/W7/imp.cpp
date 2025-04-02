#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;
Dog::Dog(string Name, int Age)
{
	name = Name;
	age = Age;

}
void Dog::setall(string Name, int Age)
{
	if (Age > 0 && Age < 20) {
		name = Name;
		age = Age;
	}
	else {
		cout << "�п�J20���H��" << endl;
	}

	if (Name.size() <= 10)
	{
		name = Name;
	}
	else if (Name.size() == 0)
	{
		cout << "�L��" << endl;
	}
	else
		name = Name.substr(0, 10);

}
string Dog::getName() const
{
	return name;
}

int Dog::getAge() const
{
	return age;
}

void Dog::displayMessage() const
{
	cout << "���W��:" << getName() << endl
		<< "���~��:" << getAge() << endl;
}