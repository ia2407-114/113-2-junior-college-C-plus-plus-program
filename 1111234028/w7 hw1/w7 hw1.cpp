#include <iostream>
#include <string> 
#include "GradeBook.h"

using namespace std;

int main()
{
	string Dogname;
	int age;
	DogNamesystem myDog("�w�]Dog", 15);
	cout << "�w�]���: " << endl;
	myDog.displayMessage();


	cout << "\nPlease enter the Dog's name:" << endl;
	getline(cin, Dogname);
	cout << "\nPlease enter the Dog's age:" << endl;
	cin >> age;
	myDog.setDogName(Dogname, age);

	cout << endl;
	myDog.displayMessage();
}
