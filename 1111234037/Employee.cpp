#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee() : birthDate(1, 1, 2000), hireDate(1, 1, 2020) {}

Employee& Employee::setFirstName(const string& fName)
{
    firstName = fName;
    return *this; // ¤ä´©¨ç¦¡¦ê±µ
}

Employee& Employee::setLastName(const string& lName)
{
    lastName = lName;
    return *this;
}

Employee& Employee::setBirthDate(int month, int day, int year)
{
    birthDate = Date(month, day, year);
    return *this;
}

Employee& Employee::setHireDate(int month, int day, int year)
{
    hireDate = Date(month, day, year);
    return *this;
}

void Employee::print() const
{
    cout << "Employee Name: " << firstName << " " << lastName << "\n"
        << "Birth Date: ";
    birthDate.print();
    cout << "\nHire Date: ";
    hireDate.print();
    cout << endl;
}
