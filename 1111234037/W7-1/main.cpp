#include <iostream>
#include "Pet.h"
using namespace std;

int main() {
    string petName;

    // ���ܿ�J�d���m�W
    cout << "�п�J�d�����m�W�G" << endl;
    getline(cin, petName);

    // �إ� Pet ����
    Pet myPet(petName);

    // ��X�B�z�᪺�d���m�W
    cout << "�d�����m�W�O�G" << myPet.getName() << endl;

    return 0;
}
