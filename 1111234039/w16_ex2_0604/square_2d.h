#ifndef SQUARE_2D_H
#define SQUARE_2D_H

class Square_2D {
protected:
    double length;
    double width;

public:
    Square_2D(double l = 0, double w = 0);
    virtual ~Square_2D();

    double compute_area() const;
    void print_2D() const;
};

#endif

