#include<iostream>
using namespace std;
int volume(int);
int volume(double);
int volume(double,double);
int volume(double, double, double);
int main()
{
	int a, b,r, h, l, w;
	cout << "�п�J�@�ӼƦr:";
		cin >> a;
	cout << "�ߤ�����n:" <<volume(a) << endl;

	cout << "�п�J�@�ӼƦr:";
		cin >> b;
	cout << "�y����n:" << volume(b) << endl;

	cout << "�п�J��ӼƦr:";
		cin >> r>>h;
	cout << "��W����n:" << volume(r,h) << endl;

	cout << "�п�J�T�ӼƦr:";
		cin >> l>>w>>h;
	cout << "��������n:" << volume(l,w,h) << endl;

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
