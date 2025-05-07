#include <iostream>
#include "Pet.h"
using namespace std;

Pet::Pet(const Date& birth, const Date& adopt)
    : birthDate(birth), adoptDate(adopt) {
    cout << "Pet 建構子執行\n";
}

Pet::~Pet() {
    cout << "\nPet 解構子執行：\n";
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
    cout << "姓名：" << lastName << " " << firstName << "\n";
    cout << "生日：";
    birthDate.print();
    cout << "\n領養日：";
    adoptDate.print();
    cout << endl;
}