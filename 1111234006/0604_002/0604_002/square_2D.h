#ifndef SQUARE_2D_H
#define SQUARE_2D_H

// square_2D �O�u�����O�v�A��ܤ@�ӥ����������
class square_2D {
protected:
    double length; // ��
    double width;  // �e

public:
    // �غc�l
    square_2D(double l, double w);

    // �Ѻc�l
    ~square_2D();

    // �L�X���B�e�P���n
    void print_2D();
};

#endif
