#include <iostream>
#include <vector>
#include "Employee.h"
#include "Date.h"
using namespace std;

int main() {
    vector<Pet*> pets;
    int numPets;

    cout << "�п�J�d�����ƶq: ";
    cin >> numPets;

    for (int i = 0; i < numPets; ++i) {
        try {
            string type, name;
            int bd, bm, by;
            int ad, am, ay;

            cout << "\n�d�� #" << i + 1 << ":\n";
            cout << "�п�J�d������: ";
            cin >> type;
            cout << "�п�J�d���W�r: ";
            cin >> name;

            cout << "�п�J�ͤ� (MM DD YYYY) : ";
            cin >> bm >> bd >> by;

            cout << "�п�J��i��� (MM DD YYYY): ";
            cin >> am >> ad >> ay;

            Date birth(bm, bd, by);
            Date adopted(am, ad, ay);

            pets.push_back(new Pet(type, name, birth, adopted));
        }
        catch (const exception& e) {
            cerr << "���~ " << e.what() << endl;
            --i; // retry this pet
        }
    }

    // �M���O����
    for (Pet* p : pets) {
        delete p;
    }

    return 0;
}
