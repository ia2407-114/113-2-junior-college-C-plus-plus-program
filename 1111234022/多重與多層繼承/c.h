#ifndef C_H
#define C_H
#include<iostream>
using namespace std;

class circ_1d {
public:
	double r, pi = 3.14;
	circ_1d();
	void compute_circ();
};
class pie_2d :public circ_1d {
public:
	double area;
	pie_2d();
	void compute_area();
};
class cron_3d :public circ_1d {
public:
	double h, v;
	cron_3d();
	void compute_v();
} ;
class cylinder_3d :public pie_2d {
public:
	double h, v, s;
	cylinder_3d();
	void compute_v();
	void compute_s();
	
};
class castle :public cron_3d ,public cylinder_3d {
public:
	double h, v;
	castle();
	void compute_v();
	void compute_h();
};
#endif

