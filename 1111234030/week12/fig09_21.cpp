#include <iostream>
#include "Pet.h"
using namespace std;

int main() {
    string fName, lName;
    int bMonth, bDay, bYear, aMonth, aDay, aYear;

    cout << "�п�J�d���m��G";
    cin >> lName;
    cout << "�п�J�d���W�r�G";
    cin >> fName;

    cout << "�п�J�ͤ� (�� �� �~)�G";
    cin >> bMonth >> bDay >> bYear;

    cout << "�п�J��i�� (�� �� �~)�G";
    cin >> aMonth >> aDay >> aYear;

    Date birthday(bMonth, bDay, bYear);
    Date adoptday(aMonth, aDay, aYear);

    Pet pet(birthday, adoptday);
    pet.setLastName(lName).setFirstName(fName);
}