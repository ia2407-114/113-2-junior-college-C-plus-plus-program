#include <iostream>
using namespace std;

int vol(int);
int vol(int, double);
int vol(int, int, int );

int main() {
	int rec = 0;
	int a=0,b=0,c=0;
	cout << "��J1,2,3���O�p�⥿����B��W��B������";

	cin >> rec;	
	if (rec == 1) {
		cout << "��J���";
		cin >> a;
		cout << "��n�O:" << vol(a);
	}
	if (rec == 2){
		cout << "��J�b�|";
		cin >> a;
		cout << "��J��";
		cin >> b;
		cout << "��n�O" << vol(a, b);
	}
	if (rec == 3){
		cout << "��J��";
		cin >> a;
		cout << "��J�e";
		cin >> b;
		cout << "��J��";
		cin >> c;
		cout << "��n�O" << vol(a, b, c);
	}	
}

int vol(int length) {
	return length* length* length;
}

int vol(int radius, double height) {
	return radius* radius * height * 3.14;
}

int vol(int length, int width, int height) {
	return length * width * height;
}
