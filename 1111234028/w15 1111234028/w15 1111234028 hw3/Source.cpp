#include <iostream>
using namespace std;

#include "Header.h"

int main()
{
    int i, j, X, Y;
    double dis;
    cout << "��J(x1, y1):";
    cin >> X >> Y;
    Matrix a( X, Y);
    cout << "��J(x2, y2):";
    cin >> X >> Y;
    Matrix b( X, Y);

    dis = a - b;

    cout << "���I���Z����:" << dis << '\t';
    cout << endl;
    

    return 0;
}