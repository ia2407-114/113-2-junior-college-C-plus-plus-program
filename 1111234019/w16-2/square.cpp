#include <iostream>
#include <string>
#include"square.h"
using namespace std;

    
square_2D:: square_2D() {
    cout << "輸入長:\n";
    cin >> leghth;
    cout << "輸入寬:\n";
    cin >> width;
}

square_2D::~square_2D() {
    cout << "已釋放資源"<<endl;
   
}

void square_2D::print_2D(){
cout << "長:" << leghth << endl;
cout << "寬:" << width << endl;
cout << "面積:" << leghth * width << endl;
}

rect_3D::rect_3D(){
cout << "輸入高:\n";
cin >> height;
}
rect_3D::~rect_3D(){
cout << "已釋放資源" << endl;
}
void rect_3D::print_3D() {
    cout << "長:" << leghth << endl;
    cout << "寬:" << width << endl;
    cout << "高:" << height << endl;
    cout << "體積:" << leghth * width*height << endl;
}

