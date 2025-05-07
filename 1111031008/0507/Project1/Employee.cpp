#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

// Constructor to initialize employee data
Employee::Employee(const string& fName, const string& lName, const Date& bDate, const Date& hDate)
    : firstName(fName), lastName(lName), birthDate(bDate), hireDate(hDate) {  // �ϥΪ�l�ƦC���l��const����
    cout << "���u����w�إߡG" << firstName << " " << lastName << endl;
}

// Set employee data from user input
void Employee::setEmployeeFromInput() {
    cout << "�п�J���u���W�r�G";
    cin >> firstName;
    cout << "�п�J���u���m��G";
    cin >> lastName;
    cout << "�п�J���u���ͤ�G" << endl;
    birthDate.setDateFromInput();  // �ϥ�birthDate��H�ե�setDateFromInput()
    cout << "�п�J���u����¾����G" << endl;
    hireDate.setDateFromInput();  // �ϥ�hireDate��H�ե�setDateFromInput()
}

// Print employee details using 'this' pointer and waterfall style
void Employee::print() const {
    cout << "���u�W�١G" << firstName << " " << lastName << endl;
    cout << "�ͤ�G"; birthDate.print(); cout << endl;
    cout << "��¾����G"; hireDate.print(); cout << endl;
}

// Destructor for employee
Employee::~Employee() {
    cout << "���u����w�P���G" << firstName << " " << lastName << endl;
}
