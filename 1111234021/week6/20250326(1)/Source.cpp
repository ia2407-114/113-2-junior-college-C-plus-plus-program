#include <iostream>
using namespace std;

// �p�⥿������n
int volume(int side) {
    return side * side * side;
}

// �p���W����n
double volume(int radius, int height) {
    return 3.14159 * radius * radius * height;
}

// �p���������n
int volume(int length, int width, int height) {
    return length * width * height;
}

int main() {
    int aa, bb, cc;

    // Ū���T�Ӿ��
    cin >> aa >> bb >> cc;

    // �p��ÿ�X��n
    cout << "��������n: " << volume(aa) << endl;
    cout << "��W����n: " << volume(bb, cc) << endl;
    cout << "��������n: " << volume(aa, bb, cc) << endl;

    return 0;
}
