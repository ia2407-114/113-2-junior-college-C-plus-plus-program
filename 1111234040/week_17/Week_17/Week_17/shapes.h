#ifndef SHAPES_H
#define SHAPES_H

class Pie {
protected:
    double radius;
public:
    Pie(double r = 0);
    double area() const;
    void input();
    void print() const;
};

class Cone : public Pie {
protected:
    double height;
public:
    Cone(double r = 0, double h = 0);
    double volume() const;
    void input();
    void print() const;
};


// �Ω�h���~�Ӫ�²�氪����
class Height {
protected:
    double height;
public:
    Height(double h = 0);
    void input();
    void print() const;
};

class Cylinder : public Pie { // �h�h�~��
private:
    double height; // <-- �[�W�o��A�w�q����
public:
    Cylinder(double r = 0, double h = 0);
    double volume() const;
    void input();
    void print() const;
};

// �h���~�ӽd�ҡG�~�� Pie �P Height
class CylinderMultiple : public Pie, public Height {
public:
    CylinderMultiple(double r = 0, double h = 0);
    double volume() const;
    void input();
    void print() const;
};

#endif
