#include <iostream>
using namespace std;

int douzai(int);
int douzai(int, int);
int douzai(int, int, int);

int main() {
    int a, r, h, l, w;
    cout << "�п�J�@�ӼƦr (�����骺���): ";
    cin >> a;
    cout << "��������n: " << douzai(a) << endl;
    
    cout << "\n�п�J��ӼƦr (��W�骺�b�|�M��): ";
    cin >> r >> h;
    cout << "��W����n: " << douzai(r, h) << endl;
    
    cout << "\n�п�J�T�ӼƦr (�����骺���B�e�B��): ";
    cin >> l >> w >> h;
    cout << "��������n: " << douzai(l, w, h) << endl;
    
    return 0;
}

// �p�⥿������n
int douzai(int a) {
    return a * a * a;
}

// �p���W����n (�����b�|�B��)
int douzai(int r, int h) {
    return 3.14159 * r * r * h;  // �ϥζ�P�v�p����n
}

// �p���������n (���B�e�B��)
int douzai(int l, int w, int h) {
    return l * w * h;
}
