#include <iostream>
#include "operator.h"
using namespace std;


int main()
{
    int i, j, row, column;
    cout << "���s�w�q�u+�v(�[��)�B��l�h���A�Ϩ�����Φb�x�}�[�k�W\n";
    cout << "��J�x�}A��B���C��(row):";
    cin >> row;
    cout << "��J�x�}A��B�����(column):";
    cin >> column;
    Matrix a('A', row, column);
    Matrix b('B', row, column);

    cout << "�x�}A\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }
    cout << "�x�}B\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }

    //2 3 1 2 3 4 5 6 2 3 4 5 6 7
    a *= b;
    cout << "�x�}A *= �x�}B\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl << endl;
    }

    a += b;
    cout << "�x�}A += �x�}B\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl << endl;
    }

    a -= b;
    cout << "�x�}A -= �x�}B\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl << endl;
    }

    a %= b;
    cout << "�x�}A %= �x�}B\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl << endl;
    }
    
    return 0;
}