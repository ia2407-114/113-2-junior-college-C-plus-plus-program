#include "Header.h"
#include <iostream>

Dog::Dog(const std::string& dogName, int dogAge) {
    setName(dogName);
    setAge(dogAge);
}

void Dog::setName(const std::string& dogName) {
    if (dogName.length() > 10) {
        name = dogName.substr(0, 10);
    }
    else {
        name = dogName;
    }
}


void Dog::setAge(int dogAge) {
    if (dogAge >= 0 && dogAge < 20) {
        age = dogAge;
    }
    else {
        std::cout << "��J���~�A�~�ֳ]�w�� 0�I" << std::endl;
        age = 0;
    }
}


std::string Dog::getName() const {
    return name;
}


int Dog::getAge() const {
    return age;
}

void Dog::displayInfo() const {
    std::cout << "�����W�r�O: " << getName() << std::endl;
    std::cout << "�����~�֬O: " << getAge() << std::endl;
}
