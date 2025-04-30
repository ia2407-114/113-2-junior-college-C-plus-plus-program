#include <iostream>
#include "Employee.h"
using namespace std;

Pet::Pet(const string& t, const string& n, const Date& bDate, const Date& aDate)
    : type(t), name(n), birthDate(bDate), adoptDate(aDate)
{
    if (!checkAge())
        throw invalid_argument("Invalid pet age or adoption date!");

    cout << "Pet object constructor: " << name << " (" << type << ")" << endl;
}

void Pet::print() const
{
    cout << "Pet Type: " << type << ", Name: " << name << "\nBirthday: ";
    birthDate.print();
    cout << "\nAdoption Date: ";
    adoptDate.print();
    cout << endl;
}

Pet::~Pet()
{
    cout << "Pet object destructor: ";
    print();
}

bool Pet::checkAge() const
{
    int age = adoptDate.getYear() - birthDate.getYear();
    return (age >= 0 && age <= 20) && (birthDate.getYear() <= adoptDate.getYear());
}

