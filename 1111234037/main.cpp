#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    string firstName, lastName;
    int bMonth, bDay, bYear, hMonth, hDay, hYear;

    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter birth date (month day year): ";
    cin >> bMonth >> bDay >> bYear;
    cout << "Enter hire date (month day year): ";
    cin >> hMonth >> hDay >> hYear;

    // �ϥ��r������ƩI�s�]�w Employee
    Employee emp;
    emp.setFirstName(firstName)
        .setLastName(lastName)
        .setBirthDate(bMonth, bDay, bYear)
        .setHireDate(hMonth, hDay, hYear);

    cout << "\nEmployee Details:\n";
    emp.print();

    return 0;
}
