#include <iostream>
using namespace std ;
#include"Matrix.h"
/*�D��1: �m�ߦ��@�{���X�A�íק�G���B��l*=�B+=�B-=�B%=���O�p��x�}�ھڥt�@�ӯx�}���������i��"����"�B"���["�B"����"���B��A�æL�X���ܫe�P���ܫ᪺���G�C
�H"����"����:

a=[1 2 3]
  [4 5 6]
b=[2 3 4]
  [5 6 7]
a*=b= [2  6  12]
      [20 30 42]*/

void printMatrix(const Matrix& m, int row, int column, const string& title) {
    cout << title << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j)
            cout << m.element[i][j] << '\t';
        cout << endl;
    }
}

int main() {
    int i, j, row, column;
    cout << "���s�w�q�u*=�B+=�B-=�B%=�v�B��l�h��\n";
    cout << "��J�x�}A��B���C��(row):";
    cin >> row;
    cout << "��J�x�}A��B�����(column):";
    cin >> column;

    // ���� *=
    {
        Matrix a('A', row, column);
        Matrix b('B', row, column);
        printMatrix(a, row, column, "�x�}A ��l");
        printMatrix(b, row, column, "�x�}B ��l");
        a *= b;
        printMatrix(a, row, column, "�x�}A *= �x�}B\n");
    }

    // ���� +=
    {
        Matrix a('A', row, column);
        Matrix b('B', row, column);
        a += b;
        printMatrix(a, row, column, "�x�}A += �x�}B\n");
    }

    // ���� -=
    {
        Matrix a('A', row, column);
        Matrix b('B', row, column);
        a -= b;
        printMatrix(a, row, column, "�x�}A -= �x�}B\n");
    }

    // ���� %=
    {
        Matrix a('A', row, column);
        Matrix b('B', row, column);
        a %= b;
        printMatrix(a, row, column, "�x�}A %= �x�}B\n");
    }

    return 0;
}
