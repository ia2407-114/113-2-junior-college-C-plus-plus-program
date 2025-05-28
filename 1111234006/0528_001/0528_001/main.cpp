/* �D��1: �m�ߦ��@�{���X�A�íק�G���B��l*=�B+=�B-=�B%=���O�p��x�}�A
�ھڥt�@�ӯx�}���������i��"����"�B"���["�B"����"���B��A�æL�X���ܫe�P���ܫ᪺���G�C
�H"����"����:
a=[1 2 3]
  [4 5 6]
b=[2 3 4]
  [5 6 7]
a*=b= [2  6  12]
      [20 30 42]*/

#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    int row, column;

    // ��J�x�}���C(row)�P��(column)��
    cout << "��J�x�}A��B���C��(row):";
    cin >> row;
    cout << "��J�x�}A��B�����(column):";
    cin >> column;

    // �إߨ�ӯx�} a �M b�A�åѨϥΪ̿�J����
    Matrix a('A', row, column);
    Matrix b('B', row, column);

    
    cout << "\n�i��l�x�}�j\n";
    a.print("A"); // �L�X�x�} A
    b.print("B"); // �L�X�x�} B

    // ----------- ����|�ػ��j�B��l�h�� -----------

    // ����
    Matrix a1 = a;     // �ƻs A �� a1�A�O�d��l A
    a1 *= b;           // ���������ۭ���s�^ a1
    cout << "\nA *= B:\n";
    a1.print("A");     // �L�X���G�x�} A

    // ���[
    Matrix a2 = a;
    a2 += b;
    cout << "\nA += B:\n";
    a2.print("A");

    // ����
    Matrix a3 = a;
    a3 -= b;
    cout << "\nA -= B:\n";
    a3.print("A");

    // �l��
    Matrix a4 = a;
    a4 %= b;
    cout << "\nA %= B:\n";
    a4.print("A");

    return 0;
}
