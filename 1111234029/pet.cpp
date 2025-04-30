#include <iostream>
#include "Pet.h"
using namespace std;

Pet::Pet(const string& t, const string& n, const Date& b, const Date& a)
    : type(t), name(n), birthDate(b), adoptDate(a)
{
    if (!(birthDate <= adoptDate)) {
        throw invalid_argument("Birthday must be before or same as adoption date.");
    }
    if (!isValidAge()) {
        throw invalid_argument("Pet age must be between 0 and 20 years.");
    }

    cout << "Pet object constructor: " << name << " (" << type << ")" << endl;
}

void Pet::print() const {
    cout << "Pet Type: " << type << "\nName: " << name << "\nBirthday: ";
    birthDate.print();
    cout << "\nAdopted: ";
    adoptDate.print();
    cout << endl;
}

bool Pet::isValidAge() const {
    int age = adoptDate.getYear() - birthDate.getYear();
    if (adoptDate.getMonth() < birthDate.getMonth() ||
        (adoptDate.getMonth() == birthDate.getMonth() && adoptDate.getDay() < birthDate.getDay()))
        age--;

    return age >= 0 && age <= 20;
}

Pet::~Pet() {
    cout << "\n[Destructor] Pet Info:" << endl;
    print();
}
