#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    string type, name;
    int bMonth, bDay, bYear, aMonth, aDay, aYear;

    cout << "Enter pet type: ";
    cin >> type;
    cout << "Enter pet name: ";
    cin >> name;
    cout << "Enter birth date (month day year): ";
    cin >> bMonth >> bDay >> bYear;
    cout << "Enter adoption date (month day year): ";
    cin >> aMonth >> aDay >> aYear;

    Date birth(bMonth, bDay, bYear);
    Date adopt(aMonth, aDay, aYear);
    Pet pet(type, name, birth, adopt);

    cout << endl;
    pet.print();
}