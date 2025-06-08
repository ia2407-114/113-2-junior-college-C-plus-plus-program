#include <iostream>
#include <string>
using namespace std;

class square_2D
{
private:
	int length, width;

public:
	square_2D();
	~square_2D();
	int area_2D();
	void print_2D();
};

class rect_3D :public square_2D
{
private:
	int height;

public:
	rect_3D();
	~rect_3D();
	void print_3D();
};