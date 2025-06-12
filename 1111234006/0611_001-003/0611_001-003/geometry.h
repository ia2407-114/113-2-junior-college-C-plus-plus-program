#ifndef GEOMETRY_H
#define GEOMETRY_H

// ��Ρ]�u�t�b�|�P��P�^
class Circ_1D {
protected:
    double radius;           // �b�|
    const double pi = 3.14;  // ��P�v�`��
public:
    Circ_1D(double r = 0);       // �غc�l�]�w�]�b�|�� 0�^
    double compute_circ() const; // �p���P��
};

// ���@��]�~�� Circ_1D�^
class Cron_3D : public Circ_1D {
protected:
    double height, volume;       // ���סB��n
public:
    Cron_3D(double r = 0, double h = 0); // �غc�l
    double compute_volume();             // �p����@��n 
};

// ���Ρ]�~�� Circ_1D�^
class Pie_2D : public Circ_1D {
protected:
    double area;                 // ���n
public:
    Pie_2D(double r = 0);        // �غc�l
    double compute_area();       // �p��ꭱ�n 
};

// ��W��]�~�� Pie_2D�^
class Cylinder_3D : public Pie_2D {
protected:
    double height, volume, surface; // ���סB��n�B���n
public:
    Cylinder_3D(double r = 0, double h = 0); // �غc�l
    double compute_volume();                // �p���W��n 
    double compute_surface();               // �p���W���n
};

// �������c�]�P���~�Ӷ��@�P��W�A�h���~�ӡ^
class Castle : public Cron_3D, public Cylinder_3D {
public:
    Castle(double r1, double h1, double r2, double h2); // �غc�l�A�������@�P��W���Ѽ�
    double compute_volume();   // �p�⫰�����`��n�]���@+��W�^
    double compute_height();   // �p���`���ס]���@��+��W���^
};

#endif
