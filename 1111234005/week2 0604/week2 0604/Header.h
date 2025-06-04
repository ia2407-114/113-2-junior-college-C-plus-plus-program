#include <iostream>
using namespace std;
// 基本類別: square_2D (長方形)
#include <iostream>
using namespace std;

// == 基本類別: square_2D (長方形) ==
class square_2D {
protected:
    float length;
    float width;

public:
    square_2D();           // 建構子
    ~square_2D();          // 解構子
    void print_2D();       // 印出長、寬、面積
};

// == 衍生類別: rect_3D (長方體) ==
class rect_3D : public square_2D {
private:
    float height;

public:
    rect_3D();             // 建構子
    ~rect_3D();            // 解構子
    void print_3D();       // 印出長、寬、高、體積
}; 
