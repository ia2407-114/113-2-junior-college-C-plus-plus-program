#ifndef SHAPES_H
#define SHAPES_H

#include <cmath>

constexpr double PI = 3.14;


class Circle {
protected:
    double r;
public:
    Circle(double r_input);
    double area() const;
    double circumference() const;
    double getRadius() const;
};

class IceCreamCone : public Circle {
protected:
    double h;
public:
    IceCreamCone(double r_input, double h_input);
    double volume() const;
    double getHeight() const;
};

class Cylinder : public Circle {
protected:
    double h;
public:
    Cylinder(double r_input, double h_input);
    double volume() const;
    double getHeight() const;
};

class Shape {
public:
    virtual double area() const = 0;
    virtual double volume() const = 0;
};

class CircleShape : public Shape {
protected:
    double r;
public:
    CircleShape(double r_input);
    double area() const override;
    double circumference() const;
    double getRadius() const;
    double volume() const override;
};

class IceCreamConeShape : public CircleShape {
protected:
    double h;
public:
    IceCreamConeShape(double r_input, double h_input);
    double volume() const override;
    double getHeight() const;
};

class CylinderShape : public CircleShape {
protected:
    double h;
public:
    CylinderShape(double r_input, double h_input);
    double volume() const override;
    double getHeight() const;
};


class ShapeArea {
public:
    virtual double area() const = 0;
};

class ShapeVolume {
public:
    virtual double volume() const = 0;
};

class CircleArea : public ShapeArea {
protected:
    double r;
public:
    CircleArea(double r_input);
    double area() const override;
    double getRadius() const;
};


class IceCreamConeVolume : public CircleArea, public ShapeVolume {
protected:
    double h;
public:
    IceCreamConeVolume(double r_input, double h_input);
    double volume() const override;
    double getHeight() const;
};

class CylinderVolume : public CircleArea, public ShapeVolume {
protected:
    double h;
public:
    CylinderVolume(double r_input, double h_input);
    double volume() const override;
    double getHeight() const;
};

#endif
