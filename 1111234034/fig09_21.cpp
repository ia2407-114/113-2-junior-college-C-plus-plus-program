#include <iostream>
#include <vector>
#include <string>
#include "Pet.h"
using namespace std;

int main() {
    int petCount;
    cout << "Enter number of pets: ";
    cin >> petCount;

    vector<Pet*> pets;

    for (int i = 0; i < petCount; ++i) {
        string type, name;
        int bMonth, bDay, bYear, aMonth, aDay, aYear;

        cout << "\nPet #" << i + 1 << " Type: ";
        cin >> type;
        cout << "Name: ";
        cin >> name;

        cout << "Enter birthday (mm dd yyyy): ";
        cin >> bMonth >> bDay >> bYear;

        cout << "Enter adoption date (mm dd yyyy): ";
        cin >> aMonth >> aDay >> aYear;

        try {
            Date birth(bMonth, bDay, bYear);
            Date adopt(aMonth, aDay, aYear);
            pets.push_back(new Pet(type, name, birth, adopt));
        }
        catch (exception& e) {
            cout << "Error: " << e.what() << endl;
            --i; // repeat this entry
        }
    }

    cout << "\nAll pets created. Printing info...\n";

    for (auto pet : pets) {
        pet->print();
        cout << "-----\n";
    }

    for (auto pet : pets) {
        delete pet;
    }

    return 0;
}
