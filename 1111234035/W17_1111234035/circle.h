#include <string>
#include <iostream>
using namespace std;

class circ_1D {
public:
	circ_1D();
	double compute_circ();
protected:
	double radius, pi = 3.14;
};

class Pie_2D : protected circ_1D {
public:
	Pie_2D();
	double compute_area();
private:
	double area;
};

class cron_3D : protected circ_1D {
public:
	cron_3D();
	double get_cron_height();
	double compute_cron_volume();
private:
	double height, volume;
};

class Cylinder_3D : public Pie_2D{
public:
	Cylinder_3D();
	double get_cylinder_height();
	double compute_cylinder_volume();
	double compure_cylinder_surface();
private:
	double height, volume, surface;
};

class castle_3D : public Cylinder_3D,public cron_3D{
public:
	castle_3D();
	double compute_castle_volume();
	double compute_castle_height();
private:
	double height, volume;
};