// Employee.cpp
#include <iostream>
#include "Employee.h"
#include "Date.h"
using namespace std;

Employee::Employee()
    : firstName(""), lastName(""), birthDate(1, 1, 1900), hireDate(1, 1, 1900) {}

Employee::Employee(const string& first, const string& last,
    const Date& dob, const Date& hire)
    : firstName(first), lastName(last), birthDate(dob), hireDate(hire) {
    cout << "Employee object constructor: "
        << firstName << ' ' << lastName << endl;
}

Employee& Employee::setAll(const string& first, const string& last,
    const Date& dob, const Date& hire) {
    this->firstName = first;
    this->lastName = last;
    this->birthDate = dob;
    this->hireDate = hire;
    return *this;
}

void Employee::print() const {
    cout << lastName << ", " << firstName << "  Hired: ";
    hireDate.print();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;
}

Employee::~Employee() {
    cout << "Employee object destructor: "
        << lastName << ", " << firstName << endl;
}
