//�D��1: �m�ߦ��@�{���X�A�íק�G���B��l *= �B += �B -= �B %= ���O�p��x�}�ھڥt�@�ӯx�}���������i��"����"�B"���["�B"����"���B��A�æL�X���ܫe�P���ܫ᪺���G�C
//�H"����"���� :
 //   a = [1 2 3]
 //   [4 5 6]
//b = [2 3 4]
//[5 6 7]
//a *= b = [2  6  12]
//[20 30 42]
#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
    int i, j, row, column;
    cout << "���s�w�q�u+=�B-=�B*=�B%=�v(�[��)�B��l�h���A�Ϩ�����Φb�x�}�[�k�W\n";
    cout << "��J�x�}A��B���C��(row):";
    cin >> row;
    cout << "��J�x�}A��B�����(column):";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);
    Matrix c(row, column);

    a += b;
    cout << "�x�}A += �x�}B \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    a -= b;
    cout << "�x�}A -= �x�}B  \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    a *= b;
    cout << "�x�}A *= �x�}B  \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    a %= b;
    cout << "�x�}A %= �x�}B  \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
