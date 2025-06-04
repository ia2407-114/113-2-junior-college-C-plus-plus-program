#ifndef H_H
#define H_H
#include<iostream>
using namespace std;

class s {
private:
	double l, w;
public:
	s();
	double compute_area();
	double print2D();
	~s();
};


class r :public s
{

private:
	double h;
public:
	r(float a);
	double compute_vol();
	double print3D();
	~r();
};
#endif
