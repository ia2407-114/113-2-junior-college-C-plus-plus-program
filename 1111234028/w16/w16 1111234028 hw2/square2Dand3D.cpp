#include <iostream>
#include <string>
using namespace std;
#include "square.h"

square_2D::square_2D()
{
    cout << "��������Osquare_2D���غc���禡\n";
    cout << "��@�@��2D�x��:\n";
    cout << "��:";
    cin >> L;
    cout << "�e:";
    cin >> W;
}

square_2D::~square_2D()
{
    cout << "��������Osquare_2D���Ѻc���禡.\n";
}

void square_2D::pirint_2D()
{
    cout << "��" << L;
    cout << "�e" << W;
    cout << "���n��:" << L * W << endl;
}

rect_3D::rect_3D()
{
    cout << "\n����l���Orect_3D���غc���禡\n";
    cout << "��:";
    cin >> H;
}

void rect_3D::pirint_3D()
{
    cout << "��" << L;
    cout << "�e" << W;
    cout << "��"<< H;
    cout << "��n��:" << L * W * H << endl;
}