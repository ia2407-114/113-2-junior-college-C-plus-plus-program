#pragma once
class square_2D {
protected:
    float length;
    float width;

public:
    
    square_2D();
    
    ~square_2D();


    void print_2D() 
        ;
};
class rect_3D : public square_2D {
private:
    float height;

public:
    // �غc�l
    rect_3D();

    // �Ѻc�l
    ~rect_3D();

    // �L�X 3D �����骺���
    void print_3D();
};