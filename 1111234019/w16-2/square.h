#include <iostream>
#include <string>
using namespace std;
class square_2D
{
protected:

    double leghth;
    double width;

public:        
    square_2D();
    ~square_2D();
    void print_2D();

};

class rect_3D :public square_2D
{
private:
    double height; 

public:
    rect_3D();
    ~rect_3D();
    void print_3D();

};

