#include <iostream>
#include <cmath>  // �Ψӭp���W�骺 PI ��

using namespace std;

// 1. ��J1�Ӿ�ƮɡA�p�⥿������n
double volume(int side) {
    return pow(side, 3);  // ��������n = ������ߤ�
}

// 2. ��J2�Ӿ�ƮɡA�p���W����n
double volume(double radius, double height) {
    const double PI = 3.14159265358979;  // ��P�v
    return PI * pow(radius, 2) * height;  // ��W����n = �k * �b�|���� * ����
}

// 3. ��J3�Ӿ�ƮɡA�p���������n
double volume(int length, int width, int height = 10) {  // �w�]���׬�10
    return length * width * height;  // ��������n = �� * �e * ��
}

int main() {
    int choice;
    cout << "��ܭp�⪺��n:\n";
    cout << "1. ������\n";
    cout << "2. ��W��\n";
    cout << "3. ������\n";
    cout << "�п�� (1/2/3): ";
    cin >> choice;

    if (choice == 1) {
        int side;
        cout << "�п�J�����骺���: ";
        cin >> side;
        cout << "�����骺��n��: " << volume(side) << endl;
    }
    else if (choice == 2) {
        double radius, height;
        cout << "�п�J��W�骺�b�|�M����: ";
        cin >> radius >> height;
        cout << "��W�骺��n��: " << volume(radius, height) << endl;
    }
    else if (choice == 3) {
        int length, width, height;
        cout << "�п�J�����骺���B�e�B�� (�Y�L���A�h�|�ϥιw�]�� 10): ";
        cin >> length >> width >> height;
        cout << "�����骺��n��: " << volume(length, width, height) << endl;
    }
    else {
        cout << "�L�Ī����!" << endl;
    }

    return 0;
}
