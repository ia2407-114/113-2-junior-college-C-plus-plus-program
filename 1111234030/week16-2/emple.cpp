#include <iostream>
#include "Header.h"
using namespace std;

square_2D::square_2D(double l, double w) : length(l), width(w) {
        cout << "square_2D �غc�l�Q�I�s" << endl;
    }

   square_2D::~square_2D() {
        cout << "square_2D �Ѻc�l�Q�I�s" << endl;
    }

   void square_2D::print_2D() {
        cout << "��: " << length << ", �e: " << width
            << ", ���n: " << length * width << endl;
    }

rect_3D::rect_3D(double l, double w, double h) : square_2D(l, w), height(h) {
        cout << "rect_3D �غc�l�Q�I�s" << endl;
    }

    rect_3D::~rect_3D() {
        cout << "rect_3D �Ѻc�l�Q�I�s" << endl;
    }

    void rect_3D::print_3D() {
        cout << "��: " << length << ", �e: " << width
            << ", ��: " << height
            << ", ��n: " << length * width * height << endl;
    }
