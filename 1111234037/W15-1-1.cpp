#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    int** element;

    Matrix(int m, int n) {
        row = m;
        column = n;

        // �t�m mxn ���G���}�C element ���ʺA�O����
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];
    }

    Matrix(char name, int m, int n) {
        row = m;
        column = n;

        // �t�m mxn ���G���}�C element ���ʺA�O����
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];

        cout << "��J�@ " << m << "x" << n << " �x�} " << name << endl;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                cout << name << "[" << i << "][" << j << "]=";
                cin >> element[i][j];
            }
    }

    // �w�q�x�}���u+=�v�B��l�h��
    Matrix& operator+=(const Matrix& other) {
        if (row != other.row || column != other.column) {
            cout << "�x�}�j�p���P�A�L�k���� += �B��I\n";
            return *this;
        }
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] += other.element[i][j];
        return *this;
    }

    // �w�q�x�}���u-=�v�B��l�h��
    Matrix& operator-=(const Matrix& other) {
        if (row != other.row || column != other.column) {
            cout << "�x�}�j�p���P�A�L�k���� -= �B��I\n";
            return *this;
        }
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] -= other.element[i][j];
        return *this;
    }

    // �w�q�x�}���u*=�v�B��l�h��
    Matrix& operator*=(const Matrix& other) {
        if (row != other.row || column != other.column) {
            cout << "�x�}�j�p���P�A�L�k���� *= �B��I\n";
            return *this;
        }
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] *= other.element[i][j];
        return *this;
    }

    // �w�q�x�}���u%=�v�B��l�h��
    Matrix& operator%=(const Matrix& other) {
        if (row != other.row || column != other.column) {
            cout << "�x�}�j�p���P�A�L�k���� %= �B��I\n";
            return *this;
        }
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++) {
                if (other.element[i][j] != 0) {
                    this->element[i][j] %= other.element[i][j];
                }
                else {
                    cout << "ĵ�i�G�J�찣�s���~�A���L�ӭp��C\n";
                }
            }
        return *this;
    }

    // ��ܯx�}���e
    void printMatrix(char name) {
        cout << "�x�} " << name << " �����e�G\n";
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++)
                cout << element[i][j] << '\t';
            cout << endl;
        }
    }
};

int main() {
    int row, column;
    cout << "��J�x�} A �� B ���C��(row): ";
    cin >> row;
    cout << "��J�x�} A �� B �����(column): ";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    cout << "�x�}�ܧ�e�G\n";
    a.printMatrix('A');
    b.printMatrix('B');

    // ����B��
    a += b;
    cout << "�x�} A += B �����G�G\n";
    a.printMatrix('A');

    a -= b;
    cout << "�x�} A -= B �����G�G\n";
    a.printMatrix('A');

    a *= b;
    cout << "�x�} A *= B �����G�G\n";
    a.printMatrix('A');

    a %= b;
    cout << "�x�} A %= B �����G�G\n";
    a.printMatrix('A');

    return 0;
}
