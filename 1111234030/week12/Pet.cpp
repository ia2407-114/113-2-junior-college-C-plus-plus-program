#include <iostream>
#include "Pet.h"
using namespace std;

Pet::Pet(const Date& birth, const Date& adopt)
    : birthDate(birth), adoptDate(adopt) {
    cout << "Pet �غc�l����\n";
}

Pet::~Pet() {
    cout << "\nPet �Ѻc�l����G\n";
    print();
    cout << "Bye Bye!\n";
}

Pet& Pet::setFirstName(const string& fName) {
    this->firstName = fName;
    return *this;
}

Pet& Pet::setLastName(const string& lName) {
    this->lastName = lName;
    return *this;
}

void Pet::print() const {
    cout << "�m�W�G" << lastName << " " << firstName << "\n";
    cout << "�ͤ�G";
    birthDate.print();
    cout << "\n��i��G";
    adoptDate.print();
    cout << endl;
}