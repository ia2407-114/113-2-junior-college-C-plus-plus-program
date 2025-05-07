// Fig. 9.21: fig9_21.cpp
// Demonstrating composition with user input for employee data.
#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

int main() {
    Employee manager("", "", Date(), Date()); // create employee with default values
    manager.setEmployeeFromInput(); // get input from user

    cout << endl;
    manager.print(); // print employee data
} // end main
