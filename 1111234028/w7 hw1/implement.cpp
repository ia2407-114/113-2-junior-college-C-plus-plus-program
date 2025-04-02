#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

string name;
int age;

DogNamesystem::DogNamesystem(string N, int A)
{
	name = N;
	age = A;
}

void DogNamesystem::setDogName(string Name, int Age)
{
	if (Name.size() <= 10)
	{
		name = Name;
	}
	else if (Name.size() == 0)
	{}
	else if (Name.size() > 10)
	{
		name = Name.substr(0,10);
	}

	if (0 < Age && Age < 20)
	{
		age = Age;
	}
	else
	{
		cout << "請輸入正確的狗年齡" << endl;
	}

}

string DogNamesystem::getDogName()
{
	return name;
}

int DogNamesystem::getDogAge()
{
	return age;
}

void DogNamesystem::displayMessage()
{

	cout << "Your dog's name is \n " << name << " !"
		<< endl;
	cout << "Your dog's age is \n " << getDogAge() << " !"
		<< endl;
}
