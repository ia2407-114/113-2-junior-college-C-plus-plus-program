#ifndef SHAPES_H
#define SHAPES_H

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
    double getHeight() const;
    double volume() const;
};

class Cylinder : public Circle {
protected:
    double h;

public:
    Cylinder(double r_input, double h_input);
    double getHeight() const;
    double volume() const;
};
#endif