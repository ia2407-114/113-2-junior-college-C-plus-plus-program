#pragma once
#include <iostream>
using namespace std;
/*�D��1: �m�ߦ��@�{���X�A�íק�G���B��l*=�B+=�B-=�B%=���O�p��x�}�ھڥt�@�ӯx�}���������i��"����"�B"���["�B"����"���B��A�æL�X���ܫe�P���ܫ᪺���G�C
�H"����"����:

a=[1 2 3]
  [4 5 6]
b=[2 3 4]
  [5 6 7]
a*=b= [2  6  12]
      [20 30 42]*/
class Matrix
{
public:
    int row, column;
    int** element;
    Matrix(int m, int n)
    {
        row = m;
        column = n;

        // �ʺA�t�mmxn���G���}�Celement���O����
        element = new int* [m];
        int i;
        for (i = 0; i < m; i++)
            element[i] = new int[n];
    }

    Matrix(char name, int m, int n)
    {
        row = m;
        column = n;

        // �ʺA�t�mmxn���G���}�Celement���O����
        element = new int* [m];
        int i, j;
        for (i = 0; i < m; i++)
            element[i] = new int[n];

        cout << "��J�@" << m << 'x' << n << "�x�}" << name << endl;
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
            {
                cout << name << '[' << i << "]["
                    << j << "]=";
                cin >> element[i][j];
            }
    }

    // �w�q�x�}���u*=�v(�[��)�B��l���h��
    Matrix operator*=(Matrix x)
    {
        int i, j;
        Matrix temp(this->row, this->column);
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] *= x.element[i][j];

        return temp;
    }
    Matrix operator+=(Matrix x)
    {
        int i, j;
        Matrix temp(this->row, this->column);
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] += x.element[i][j];

        return temp;
    }
    Matrix operator-=(Matrix x)
    {
        int i, j;
        Matrix temp(this->row, this->column);
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] -= x.element[i][j];

        return temp;
    }
    Matrix operator%=(Matrix x)
    {
        int i, j;
        Matrix temp(this->row, this->column);
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] %= x.element[i][j];

        return temp;
    }
};

