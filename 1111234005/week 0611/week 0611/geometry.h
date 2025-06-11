#include <iostream>
using namespace std;

class Circ_1D {
public:
	double radius, pi = 3.14, Circumference;
	Circ_1D();
	double compute_circ();
};

class Cron_3D :public Circ_1D {
public:
	double height, volume;
	Cron_3D();
	double compute_volume();
	void display();
};

class Pie_2D :public Circ_1D {
public:
	double area;
	Pie_2D();
	double compute_area();
	void display();
};

class Cylinder_3D :public Pie_2D {
public:
	double height, volume, surface;
	Cylinder_3D();
	double compute_volume();
	double compute_surface();
	void display();
};

class Castle :public Cron_3D, Cylinder_3D {
public:
	double height, volume;
	Castle();
	double compute_volume();
	double compute_height();
	void display();
};