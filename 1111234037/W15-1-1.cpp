#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    int** element;

    Matrix(int m, int n) {
        row = m;
        column = n;

        // 配置 mxn 的二維陣列 element 的動態記憶體
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];
    }

    Matrix(char name, int m, int n) {
        row = m;
        column = n;

        // 配置 mxn 的二維陣列 element 的動態記憶體
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];

        cout << "輸入一 " << m << "x" << n << " 矩陣 " << name << endl;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                cout << name << "[" << i << "][" << j << "]=";
                cin >> element[i][j];
            }
    }

    // 定義矩陣的「+=」運算子多載
    Matrix& operator+=(const Matrix& other) {
        if (row != other.row || column != other.column) {
            cout << "矩陣大小不同，無法執行 += 運算！\n";
            return *this;
        }
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] += other.element[i][j];
        return *this;
    }

    // 定義矩陣的「-=」運算子多載
    Matrix& operator-=(const Matrix& other) {
        if (row != other.row || column != other.column) {
            cout << "矩陣大小不同，無法執行 -= 運算！\n";
            return *this;
        }
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] -= other.element[i][j];
        return *this;
    }

    // 定義矩陣的「*=」運算子多載
    Matrix& operator*=(const Matrix& other) {
        if (row != other.row || column != other.column) {
            cout << "矩陣大小不同，無法執行 *= 運算！\n";
            return *this;
        }
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] *= other.element[i][j];
        return *this;
    }

    // 定義矩陣的「%=」運算子多載
    Matrix& operator%=(const Matrix& other) {
        if (row != other.row || column != other.column) {
            cout << "矩陣大小不同，無法執行 %= 運算！\n";
            return *this;
        }
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++) {
                if (other.element[i][j] != 0) {
                    this->element[i][j] %= other.element[i][j];
                }
                else {
                    cout << "警告：遇到除零錯誤，跳過該計算。\n";
                }
            }
        return *this;
    }

    // 顯示矩陣內容
    void printMatrix(char name) {
        cout << "矩陣 " << name << " 的內容：\n";
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++)
                cout << element[i][j] << '\t';
            cout << endl;
        }
    }
};

int main() {
    int row, column;
    cout << "輸入矩陣 A 及 B 的列數(row): ";
    cin >> row;
    cout << "輸入矩陣 A 及 B 的行數(column): ";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    cout << "矩陣變更前：\n";
    a.printMatrix('A');
    b.printMatrix('B');

    // 執行運算
    a += b;
    cout << "矩陣 A += B 的結果：\n";
    a.printMatrix('A');

    a -= b;
    cout << "矩陣 A -= B 的結果：\n";
    a.printMatrix('A');

    a *= b;
    cout << "矩陣 A *= B 的結果：\n";
    a.printMatrix('A');

    a %= b;
    cout << "矩陣 A %= B 的結果：\n";
    a.printMatrix('A');

    return 0;
}
