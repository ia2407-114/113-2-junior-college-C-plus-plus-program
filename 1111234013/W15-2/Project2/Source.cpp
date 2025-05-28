#include <iostream>
#include<cmath>
using namespace std;
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

    // �w�q�x�}���u+�v(�[��)�B��l���h��
    Matrix operator-=(Matrix x)
    {
        int i, j;
        Matrix temp(this->row, this->column);
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] - x.element[i][j];

        return temp;
    }
};

int main()
{
    int i,  row, column;
    double j;
    row = 1;
    column = 2;
    cout << "��J�y��\n";
    
    Matrix a('A', row, column);
    cout << "��J�ĤG��\n";

    Matrix b('B', row, column);
    Matrix c(row, column);

    c = a -= b;  // �x�}A - �x�}B
    c.element[0][0] = c.element[0][0] * c.element[0][0];       
    c.element[0][1] = c.element[0][1] * c.element[0][1];
    i = c.element[0][0] + c.element[0][1];
    j = sqrt(i);
    cout << "�Z��"<<j<<endl;
    return 0;
}