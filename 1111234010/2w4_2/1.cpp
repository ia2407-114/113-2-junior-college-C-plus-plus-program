#include <iostream>
#include <cmath>  // �Ψӭp���W�骺 PI ��

using namespace std;

double volume(int side) {
    return side*side*side;  
}

double volume(double radius, double height) {
    const double PI = 3.14159265358979;  
    return PI * radius*radius * height;  
}

double volume(int length, int width, int height = 10) {  
    return length * width * height;  
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