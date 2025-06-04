#pragma once
class Matrix
{
public:
    int row, column;
    int** element;

    Matrix(int m, int n);

    Matrix(char name, int m, int n);

    Matrix operator+(Matrix x)
    {
        Matrix temp(this->row, this->column);
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] + x.element[i][j];
        return temp;
    }

    Matrix& operator*=(const Matrix& x)
    {
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < column; ++j)
                element[i][j] *= x.element[i][j];
        return *this;
    }

    Matrix& operator+=(const Matrix& x)
    {
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < column; ++j)
                element[i][j] += x.element[i][j];
        return *this;
    }

    Matrix& operator-=(const Matrix& x)
    {
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < column; ++j)
                element[i][j] -= x.element[i][j];
        return *this;
    }

    Matrix& operator%=(const Matrix& x)
    {
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < column; ++j)
                element[i][j] %= x.element[i][j];
        return *this;
    }

    // �L�X�x�}
    void print(const char* label);

};