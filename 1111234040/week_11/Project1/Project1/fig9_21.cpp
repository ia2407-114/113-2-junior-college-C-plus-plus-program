#include <iostream>
#include <vector>
#include "Pet.h"
using namespace std;

int main() {
    int n;
    cout << "Enter number of pets: ";
    cin >> n;
    vector<Pet*> pets;

    for (int i = 0; i < n; ++i) {
        string species, name;
        int bm, bd, by, am, ad, ay;

        cout << "\nEnter pet types: ";
        cin >> species;
        cout << "Enter pet name: ";
        cin >> name;

        cout << "Enter birth date (month day year): ";
        cin >> bm >> bd >> by;
        cout << "Enter adoption date (month day year): ";
        cin >> am >> ad >> ay;

        try {
            Date birth(bm, bd, by);
            Date adopt(am, ad, ay);
            Pet* pet = new Pet(species, name, birth, adopt);
            pets.push_back(pet);
        }
        catch (exception& e) {
            cout << "Error: " << e.what() << endl;
        }
    }

    for (Pet* pet : pets) {
        delete pet;
    }

    return 0;
}

