// main.cpp
#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    string first, last;
    Date birth, hire;

    cout << "Enter first name: ";
    cin >> first;

    cout << "Enter last name: ";
    cin >> last;

    cout << "Enter birth date (MM/DD/YYYY): ";
    cin >> birth;

    cout << "Enter hire date (MM/DD/YYYY): ";
    cin >> hire;

    Employee e;
    e.setAll(first, last, birth, hire).print(); 

    return 0;
}
