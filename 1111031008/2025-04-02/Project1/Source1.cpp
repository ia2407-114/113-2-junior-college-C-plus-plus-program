#include <iostream>
#include "Header.h"
//�D��1. �Q�ΤW�@�����D��2�A�N�d�����O�P�D�{������;
//�åB�N���O�������P��@�b����������ɮסA�åB�[�H�ק�;
//���d���W�r���׶W�L10�r���ɡA�h�^���e10�Ӧr����@�L���m�W�A�̫�N�d�����m�W�L�X�C
int main() {
    std::string inputName;
    int inputAge;

    std::cout << "�п�J�����W�r: ";
    std::getline(std::cin, inputName);

    std::cout << "�п�J�����~��: ";
    std::cin >> inputAge;

    Dog myDog(inputName, inputAge);

    myDog.displayInfo();

    return 0;
}
