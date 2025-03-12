#include <iostream>

using namespace std;

double volume(int a, int b = 0, int c = 0) {
    if (b == 0 && c == 0) {
        return a * a * a;
    }
    else if (c == 0) {
        return 3.14 * a * a * b;  
    }
    else {
        return a * b * c;
    }
}

int main() {
    int choice;
    cout << "��ܭp����n������:\n";
    cout << "1. ������\n";
    cout << "2. ��W��\n";
    cout << "3. ������\n";
    cout << "�п�J�ﶵ (1/2/3): ";
    cin >> choice;

    if (choice == 1) {
        int side;
        cout << "��J1�Ӿ�ơA�p�⥿������n: ";
        cin >> side;
        cout << "�����骺��n��: " << volume(side) << endl;
    }
    else if (choice == 2) {
        int radius, height;
        cout << "��J2�Ӿ�ơA�p���W����n: ";
        cin >> radius >> height;
        cout << "��W�骺��n��: " << volume(radius, height) << endl;
    }
    else if (choice == 3) {
        int length, width, height;
        cout << "��J3�Ӿ�ơA�p���������n: ";
        cin >> length >> width >> height;
        cout << "�����骺��n��: " << volume(length, width, height) << endl;
    }
  
    return 0;
}
