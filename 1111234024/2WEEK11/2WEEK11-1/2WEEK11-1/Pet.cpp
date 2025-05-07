#include <iostream>
#include "Pet.h" 
#include "Date.h" 
using namespace std;


Pet::Pet(const string& name, const string& kind,
	const Date& dateOfBirth, const Date& dateOfAdopt, int& year, int& yearA, int& month, int& monthA, int& date, int& dateA)
	: Name(name), 
	Kind(kind),
	birthDate(dateOfBirth),
	AdoptDate(dateOfAdopt) 
{
	if (yearA == year)
		if (monthA > month)
			if (dateA > date)
				cout << "Pet object constructor: "
				<< Name;
			else
				cout << "1�~�֩Φ��i�ɶ���J���~ ! ! !\n";
		else
			cout << "2�~�֩Φ��i�ɶ���J���~ ! ! !\n";
	else if (yearA > year && 2025 - year < 21)
		cout << "Pet object constructor: "
		<< Name;
	else
		cout << "3�~�֩Φ��i�ɶ���J���~ ! ! !\n";


	

} 
void Pet::print() const
{
	cout << "����:" << Kind << "\n";
	cout << Name << "  Adopt: ";
	AdoptDate.print();
	cout << "  Birthday: ";
	birthDate.print();
	cout << endl;
}


Pet::~Pet()
{
	print();
	cout << "Pet object destructor: "
		<< endl;
}