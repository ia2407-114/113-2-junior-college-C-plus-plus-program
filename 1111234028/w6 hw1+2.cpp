#include <iostream>
#include <string> 
using namespace std;

class DogNamesystem
{
private:
	string name;
	int age;
public:

	DogNamesystem(string N, int A)
	{
		name = N;
		age = A;
	}

	void setDogName(string Name, int Age)
	{
		if (0 < Age && Age < 20)
		{
			name = Name;
			age = Age;
		}
		else
		{
			cout << "�п�J���T�����~��" << endl;
		}

	}


	string getDogName()
	{
		return name;
	}

	int getDogAge()
	{
		return age;
	}


	void displayMessage()
	{

		cout << "Your dog's name is \n" << name << "!"
			<< endl;
		cout << "Your dog's age is \n" << getDogAge() << "!"
			<< endl;
	}
};


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