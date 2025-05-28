class Matrix
{
public:
    int row, column;
    int** element;

    Matrix(int m, int n);

    Matrix(char name, int m, int n);

    // 矩陣加法運算子
    Matrix operator+(Matrix x)
    {
        Matrix temp(this->row, this->column);
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] + x.element[i][j];
        return temp;
    }

    // 遞乘 *=
    Matrix& operator*=(const Matrix& x)
    {
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < column; ++j)
                element[i][j] *= x.element[i][j];
        return *this;
    }

    // 遞加 +=
    Matrix& operator+=(const Matrix& x)
    {
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < column; ++j)
                element[i][j] += x.element[i][j];
        return *this;
    }

    // 遞減 -=
    Matrix& operator-=(const Matrix& x)
    {
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < column; ++j)
                element[i][j] -= x.element[i][j];
        return *this;
    }

    // 餘數 %=
    Matrix& operator%=(const Matrix& x)
    {
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < column; ++j)
                element[i][j] %= x.element[i][j];
        return *this;
    }

    // 印出矩陣
    void print(const char* label);

};