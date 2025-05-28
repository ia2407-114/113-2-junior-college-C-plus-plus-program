class Matrix
{
public:
    int row, column;
    int** element;
    Matrix(int m, int n);
    Matrix(char name, int m, int n);


    Matrix operator+=(Matrix x)
    {
        int i, j;
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                this->element[i][j] += x.element[i][j];

        return *this;
    }

    Matrix operator-=(Matrix x)
    {
        int i, j;
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                this->element[i][j] -= x.element[i][j];

        return *this;
    }

    Matrix operator*=(Matrix x)
    {
        int i, j;
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                this->element[i][j] *= x.element[i][j];

        return *this;
    }

    Matrix operator%=(Matrix x)
    {
        int i, j;
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                this->element[i][j] %= x.element[i][j];

        return *this;
    }
};