#include "Pet.h"
#include <iostream>
using namespace std;

// �غc���
Pet::Pet(string name) {
    setName(name);
}

// �]�w�d���m�W
void Pet::setName(string name) {
    if (name.length() > 10) {
        this->name = name.substr(0, 10); // ���e10�Ӧr���@���m�W
    }
    else {
        this->name = name;
    }
}

// ����d���m�W
string Pet::getName() const {
    return name;
}
