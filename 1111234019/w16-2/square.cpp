#include <iostream>
#include <string>
#include"square.h"
using namespace std;

    
square_2D:: square_2D() {
    cout << "��J��:\n";
    cin >> leghth;
    cout << "��J�e:\n";
    cin >> width;
}

square_2D::~square_2D() {
    cout << "�w����귽"<<endl;
   
}

void square_2D::print_2D(){
cout << "��:" << leghth << endl;
cout << "�e:" << width << endl;
cout << "���n:" << leghth * width << endl;
}

rect_3D::rect_3D(){
cout << "��J��:\n";
cin >> height;
}
rect_3D::~rect_3D(){
cout << "�w����귽" << endl;
}
void rect_3D::print_3D() {
    cout << "��:" << leghth << endl;
    cout << "�e:" << width << endl;
    cout << "��:" << height << endl;
    cout << "��n:" << leghth * width*height << endl;
}

