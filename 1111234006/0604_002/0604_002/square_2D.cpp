#include <iostream>
#include "square_2D.h"
using namespace std;

square_2D::square_2D(double l, double w) : length(l), width(w) {
    cout << "square_2D �غc�l�Q�I�s" << endl;
}  // �غc�l��@

square_2D::~square_2D() {
    cout << "square_2D �Ѻc�l�Q�I�s" << endl;
}  // �Ѻc�l��@

void square_2D::print_2D() {
    double area = length * width;
    cout << "��: " << length << ", �e: " << width << ", ���n: " << area << endl;
}  // �L�X���B�e�P: ���n

/* rect_3D �O square_2D ���u�l���O�v�A��ܥ��骺������ */
class rect_3D : public square_2D {
private:
    double height;

public:  // �غc�l�G��l�ƪ��B�e�B��
    rect_3D(double l, double w, double h);
    ~rect_3D();
    void print_3D();
};  

rect_3D::rect_3D(double l, double w, double h) : square_2D(l, w), height(h) {
    cout << "rect_3D �غc�l�Q�I�s" << endl;
}// �غc�l��@

rect_3D::~rect_3D() {
    cout << "rect_3D �Ѻc�l�Q�I�s" << endl;
}// �Ѻc�l��@

void rect_3D::print_3D() {
    double volume = length * width * height;
    cout << "��: " << length << ", �e: " << width << ", ��: " << height
        << ", ��n: " << volume << endl;
}// �L�X���B�e�B���P: ��n
