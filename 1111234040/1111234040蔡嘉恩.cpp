#include <iostream>
#include <cstdlib>
#include <cmath> // �ϥ� M_PI

#define _USE_MATH_DEFINES
using namespace std;

// **��ƭ쫬�ŧi**
int douzai(int);                    // �p�⥿������n
float douzai(int, int);              // �p���W����n
int douzai(int, float, int);         // �p���������n
float PI = 3.14;

int main() {
    int a, b, c;
    float w;

    cout << "�п�J�@�Ӽƭȭp�⥿������n: ";
    cin >> a;
    cout << "��������n: " << douzai(a) << endl;

    cout << "�п�J��Ӽƭȭp���W����n (�b�|�P����): ";
    cin >> a >> b;
    cout << "��W����n: " << douzai(a, b) << endl;

    cout << "�п�J�T�Ӽƭȭp���������n (��, �e, ��): ";
    cin >> a >> w >> c;
    cout << "��������n: " << douzai(a, w, c) << endl;

    return 0;
}

// **��Ʃw�q**
// �p�⥿������n
int douzai(int a) {
    return a * a * a;
}

// �p���W����n
float douzai(int r, int h) {
    return static_cast<float>(PI * r * r * h);
}

// �p���������n
int douzai(int l, float w, int h) {
    return static_cast<int>(l * w * h);
}