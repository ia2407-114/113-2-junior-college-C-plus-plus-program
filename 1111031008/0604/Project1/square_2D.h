#ifndef SQUARE_2D_H
#define SQUARE_2D_H

class square_2D {
protected:
    float length;
    float width;

public:
    square_2D();
    ~square_2D();
    void print_2D();
};

class rect_3D : public square_2D {
private:
    float height;

public:
    rect_3D();
    ~rect_3D();
    void print_3D();
};

#endif
