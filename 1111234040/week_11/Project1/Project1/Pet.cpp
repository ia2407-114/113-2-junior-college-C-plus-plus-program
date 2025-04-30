// Pet.cpp
#include <iostream>
#include "Pet.h"
using namespace std;

Pet::Pet(const string& types, const string& n, const Date& birth, const Date& adopt)
    :types(types), name(n), birthDate(birth), adoptDate(adopt) {
    if (!isValid()) {
        throw invalid_argument("Invalid pet age or birth/adoption date sequence.");
    }
    cout << "Pet object created: " << name << " (" << types << ")\n";
}

Pet::~Pet() {
    cout << "\nPet info on destruction:\n";
    print();
    cout << "\nBye Bye!\n";
}

int Pet::calculateAge() const {
    return adoptDate.getYear() - birthDate.getYear();
}

bool Pet::isValid() const {
    int age = calculateAge();
    if (age < 0 || age > 20)
        return false;
    if (adoptDate.getYear() < birthDate.getYear()) return false;
    if (adoptDate.getYear() == birthDate.getYear()) {
        if (adoptDate.getMonth() < birthDate.getMonth()) return false;
        if (adoptDate.getMonth() == birthDate.getMonth() && adoptDate.getDay() < birthDate.getDay()) return false;
    }
    return true;
}

void Pet::print() const {
    cout << "Pet name: " << name << ", Types: " << types << endl;
    cout << "Birth date: ";
    birthDate.print();
    cout << "\nAdoption date: ";
    adoptDate.print();
    cout << endl;
}
