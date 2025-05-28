#include <iostream>
using namespace std;

#include "Header.h"

int main()
{
    int i, j, X, Y;
    double dis;
    cout << "輸入(x1, y1):";
    cin >> X >> Y;
    Matrix a( X, Y);
    cout << "輸入(x2, y2):";
    cin >> X >> Y;
    Matrix b( X, Y);

    dis = a - b;

    cout << "兩點間距離為:" << dis << '\t';
    cout << endl;
    

    return 0;
}