#include <iostream>
#include "Header.h"

using namespace std;


int main()
{
    int i, j, row, column;
    cout << "���s�w�q�u++�v��m�B��l���h���A�Ϩ�����Φb�x�}���W�W\n";
    cout << "��J�x�}a���C��(row):";
    cin >> row;
    cout << "��J�x�}a�����(column):";
    cin >> column;
    Matrix a(row, column), b(row, column);
    cout << "��J�@" << row << 'x' << column << "�x�}a" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }
    cout << "��J�@" << row << 'x' << column << "�x�}b" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            cout << "b[" << i << "][" << j << "]=";
            cin >> b.element[i][j];
        }
    cout << "����ub = a++ ;�v�����ǡA�O������ub = a ;�v�A"
        << "�M�����ua++ ;�v\n";

    a *= b;

    cout << "�x�}b�����e��:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "b[" << i << "][" << j << "]=";
            cout << b.element[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "a�����e��:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cout << a.element[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}