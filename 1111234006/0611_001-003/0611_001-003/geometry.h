#ifndef GEOMETRY_H
#define GEOMETRY_H

// 圓形（只含半徑與圓周）
class Circ_1D {
protected:
    double radius;           // 半徑
    const double pi = 3.14;  // 圓周率常數
public:
    Circ_1D(double r = 0);       // 建構子（預設半徑為 0）
    double compute_circ() const; // 計算圓周長
};

// 圓錐體（繼承 Circ_1D）
class Cron_3D : public Circ_1D {
protected:
    double height, volume;       // 高度、體積
public:
    Cron_3D(double r = 0, double h = 0); // 建構子
    double compute_volume();             // 計算圓錐體積 
};

// 圓餅形（繼承 Circ_1D）
class Pie_2D : public Circ_1D {
protected:
    double area;                 // 面積
public:
    Pie_2D(double r = 0);        // 建構子
    double compute_area();       // 計算圓面積 
};

// 圓柱體（繼承 Pie_2D）
class Cylinder_3D : public Pie_2D {
protected:
    double height, volume, surface; // 高度、體積、表面積
public:
    Cylinder_3D(double r = 0, double h = 0); // 建構子
    double compute_volume();                // 計算圓柱體積 
    double compute_surface();               // 計算圓柱表面積
};

// 城堡結構（同時繼承圓錐與圓柱，多重繼承）
class Castle : public Cron_3D, public Cylinder_3D {
public:
    Castle(double r1, double h1, double r2, double h2); // 建構子，接受圓錐與圓柱的參數
    double compute_volume();   // 計算城堡的總體積（圓錐+圓柱）
    double compute_height();   // 計算總高度（圓錐高+圓柱高）
};

#endif
