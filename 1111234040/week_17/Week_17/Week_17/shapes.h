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


// 用於多重繼承的簡單高度類
class Height {
protected:
    double height;
public:
    Height(double h = 0);
    void input();
    void print() const;
};

class Cylinder : public Pie { // 多層繼承
private:
    double height; // <-- 加上這行，定義高度
public:
    Cylinder(double r = 0, double h = 0);
    double volume() const;
    void input();
    void print() const;
};

// 多重繼承範例：繼承 Pie 與 Height
class CylinderMultiple : public Pie, public Height {
public:
    CylinderMultiple(double r = 0, double h = 0);
    double volume() const;
    void input();
    void print() const;
};

#endif
