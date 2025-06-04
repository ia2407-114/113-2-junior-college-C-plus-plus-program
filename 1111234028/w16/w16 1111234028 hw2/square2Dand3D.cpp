#include <iostream>
#include <string>
using namespace std;
#include "square.h"

square_2D::square_2D()
{
    cout << "執行父類別square_2D的建構元函式\n";
    cout << "實作一個2D矩形:\n";
    cout << "長:";
    cin >> L;
    cout << "寬:";
    cin >> W;
}

square_2D::~square_2D()
{
    cout << "執行父類別square_2D的解構元函式.\n";
}

void square_2D::pirint_2D()
{
    cout << "長" << L;
    cout << "寬" << W;
    cout << "面積為:" << L * W << endl;
}

rect_3D::rect_3D()
{
    cout << "\n執行子類別rect_3D的建構元函式\n";
    cout << "高:";
    cin >> H;
}

void rect_3D::pirint_3D()
{
    cout << "長" << L;
    cout << "寬" << W;
    cout << "高"<< H;
    cout << "體積為:" << L * W * H << endl;
}