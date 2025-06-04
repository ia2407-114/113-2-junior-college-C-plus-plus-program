/*�D��2 :�إߪ����(square_2D)�P������(rect_3D)������O�A���O�������O�P�l�����O(�]�N�Orect_3D�~�ө�square_2D)�A
square_2D�㦳"��"�B"�e"���ݩʥH��: pirint_2D( )��k�ΨӦL�X���B�e�B���n�A
rect_3D�㦳"����"���ݩʥH��: pirint_3D( )��k�ΨӦL�X���B�e�B���B��n�C
�o������O���㦳 (�غc�l) �P (�Ѻc�l)�A��J���B�e�B����ơC�Цb�D�{�������O�إߤ@�Ӫ���λP�����骫��A
�æL�X�o�̬��������G(����ΦL�X���B�e�B���n�A�P������h���B�e�B���B��n)�C*/
#include <iostream>
#include "square_2D.h"
using namespace std;

class rect_3D : public square_2D {
private:
    double height;

public:
    rect_3D(double l, double w, double h);
    ~rect_3D();
    void print_3D();
};

int main() {
    double l, w, h;
  
    cout << "�п�J����Ϊ����P�e: ";
    cin >> l >> w;
    square_2D rect2D(l, w);  // �إ� square_2D ����]�����O�^
    rect2D.print_2D();    // �L�X���n

    cout << endl;

    cout << "�п�J�����骺���B�e�P��: ";
    cin >> l >> w >> h;
    rect_3D rect3D(l, w, h);   // �إ� rect_3D ����]�l���O�^
    rect3D.print_3D();    // �L�X��n
     
    return 0;
}
