//�D��2:�إߪ����(square_2D)�P������(rect_3D)������O�A���O�������O�P�l�����O(�]�N�Orect_3D�~�ө�square_2D)�Asquare_2D�㦳"��"�B"�e"���ݩʥH��pirint_2D()��k�ΨӦL�X���B�e�B���n
//rect_3D�㦳"����"���ݩʥH��pirint_3D()��k�ΨӦL�X���B�e�B���B��n�C�o������O���㦳�غc�l�P�Ѻc�l�A��J���B�e�B����ơC�Цb�D�{�������O�إߤ@�Ӫ���λP�����骫��
//�æL�X�o�̬��������G(����ΦL�X���B�e�B���n�A�P������h���B�e�B���B��n)�C

#include <iostream>
#include "Square2D.h"
#include "Rect3D.h"

int main() {
    Square_2D square(2, 6);
    Rect_3D rect(5, 3, 8);

    std::cout << "�����:" << std::endl;
    square.print_2D();

    std::cout << "������: " << std::endl;
    rect.print_3D();

    return 0;
}