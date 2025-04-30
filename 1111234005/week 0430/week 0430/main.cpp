#include <iostream>
#include <vector>
#include "Pet.h"   
#include "Date.h"

using namespace std;

int main()
{
    vector<Pet> pets; 
    string petName, petSpecies;
    int birthMonth, birthDay, birthYear, adoptMonth, adoptDay, adoptYear;
    char morePets;

    do {
        cout << "Enter pet name: ";
        cin >> petName;

        cout << "Enter pet species: ";
        cin >> petSpecies;

        cout << "Enter pet birth date (year month day): ";
        cin >> birthYear >> birthMonth >> birthDay;

        cout << "Enter pet adoption date (year month day): ";
        cin >> adoptYear >> adoptMonth >> adoptDay;

        try {
            Date birthDate(birthMonth, birthDay, birthYear);
            Date adoptDate(adoptMonth, adoptDay, adoptYear);

            Pet pet(petName, petSpecies, birthDate, adoptDate);
            pets.push_back(pet);  // �[�J�� vector ��
        }
        catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }

        cout << "Do you want to enter another pet? (y/n): ";
        cin >> morePets;

    } while (morePets == 'y' || morePets == 'Y');

    cout << "\nPet information list:\n";
    for (const Pet& pet : pets) {
        pet.print();  // ���] Pet ���O�� print() ��k
        cout << "----------------------\n";
    }

    return 0;
}
