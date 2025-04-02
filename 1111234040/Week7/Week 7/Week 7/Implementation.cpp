#include "dog.h"

// �غc�l: �]�w��l�W��
Pet::Pet(string name) {
    setName(name); // �ϥ� setName �קK�W�r�L��
}

// �]�w�d���m�W (�Y�W�L 10 �r���h�I���e 10 �Ӧr)
void Pet::setName(string name) {
    if (name.length() > 10) {
        petName = name.substr(0, 10); // ���e 10 �Ӧr��
        cout << "�W�r�L���A�۰ʺI����: " << petName << endl;
    }
    else {
        petName = name;
    }
}

// ���o�d���m�W
string Pet::getName() const {
    return petName;
}

// ����w��T��
void Pet::displayMessage() const {
    cout << "�z���d���W�r�O: " << getName() << "!" << endl;
}