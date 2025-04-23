#include<iostream>
using namespace std;
int volume(int);
int volume(double);
int volume(double,double);
int volume(double, double, double);
int main()
{
	int a, b,r, h, l, w;
	cout << "請輸入一個數字:";
		cin >> a;
	cout << "立方體體積:" <<volume(a) << endl;

	cout << "請輸入一個數字:";
		cin >> b;
	cout << "球體體積:" << volume(b) << endl;

	cout << "請輸入兩個數字:";
		cin >> r>>h;
	cout << "圓柱體體積:" << volume(r,h) << endl;

	cout << "請輸入三個數字:";
		cin >> l>>w>>h;
	cout << "長方體體積:" << volume(l,w,h) << endl;

	return 0;
}
int volume(int a)
{
	return a * a * a;
}

int volume(double b)
{
	return 4/3*3.14159*b*b*b ;
}

int volume(double r, double h)
{
	return 3.14159* r* r*h;
}

int volume(double l, double w, double h)
{
	return l * w * h;
}
