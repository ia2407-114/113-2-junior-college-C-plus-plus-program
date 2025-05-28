#include <iostream>
using namespace std;
class Matrix
{
public:
    int row, column;
    int** element;
    Matrix(int m, int n);
    Matrix(char name, int m, int n);

    // �w�q�x�}���u+�v(�[��)�B��l���h��
    Matrix operator+(Matrix x)
    {
        int i, j;
        Matrix temp(this->row, this->column);
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] + x.element[i][j];


        return temp;
    }
};