#include <iostream>
using namespace std;
// �����O: square_2D (�����)
#include <iostream>
using namespace std;

// == �����O: square_2D (�����) ==
class square_2D {
protected:
    float length;
    float width;

public:
    square_2D();           // �غc�l
    ~square_2D();          // �Ѻc�l
    void print_2D();       // �L�X���B�e�B���n
};

// == �l�����O: rect_3D (������) ==
class rect_3D : public square_2D {
private:
    float height;

public:
    rect_3D();             // �غc�l
    ~rect_3D();            // �Ѻc�l
    void print_3D();       // �L�X���B�e�B���B��n
}; 
