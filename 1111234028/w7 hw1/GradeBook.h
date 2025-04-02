#include <iostream>
#include <string> 

using namespace std;

class DogNamesystem
{
private:
	string name;
	int age;
public:
	DogNamesystem(string N, int A);
	void setDogName(string Name, int Age);
	string getDogName();
	int getDogAge();
	void displayMessage();
};
