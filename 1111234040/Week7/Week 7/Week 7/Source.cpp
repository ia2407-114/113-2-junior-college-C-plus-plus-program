#include "dog.h"

int main() {
    string petNameInput;

    // ���ܨϥΪ̿�J�d���W�r
    cout << "�п�J�d�����W�r: ";
    getline(cin, petNameInput);

    // �Ы� Pet ����
    Pet myPet(petNameInput);

    // ����d����T
    myPet.displayMessage();

    return 0;
}