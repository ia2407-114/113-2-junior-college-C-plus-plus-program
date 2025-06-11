#include <string>
#include <iostream>
using namespace std;

class circ_1D {
protected:
	double radius, pi = 3.14;
public:
	circ_1D();
	void compute_circ();
};

class cone_3D :protected circ_1D {
private:
	double height, volume;
public:
	cone_3D();
	void compute_volume();
};

class pie_2D :protected circ_1D{
private:
	double area;
public:
	pie_2D();
	void compute_area();
};
/*
class cylinder_3D :public circ_1D, pie_2D{
private:
	double height, volume, surface;
public:
	cylinder_3D();
	void compute_volume();
	void compute_surface();
};

class castle :public cone_3D, cylinder_3D {
private:
	double height, volume;
public:
	castle();
};
*/