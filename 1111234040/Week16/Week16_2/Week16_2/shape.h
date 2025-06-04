#pragma once
// shape.h
#ifndef SHAPE_H
#define SHAPE_H

class square_2D {
protected:
    double length;
    double width;

public:
    square_2D();
    ~square_2D();
    void print_2D() const;
};

class rect_3D : public square_2D {
private:
    double height;

public:
    rect_3D();
    ~rect_3D();
    void print_3D() const;
};

#endif
