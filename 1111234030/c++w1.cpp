#include <iostream>
using namespace std;

int vol(int);
int vol(int, double);
int vol(int, int, int );

int main() {
	int rec = 0;
	int a=0,b=0,c=0;
	cout << "輸入1,2,3分別計算正方體、圓柱體、長方體";

	cin >> rec;	
	if (rec == 1) {
		cout << "輸入邊長";
		cin >> a;
		cout << "體積是:" << vol(a);
	}
	if (rec == 2){
		cout << "輸入半徑";
		cin >> a;
		cout << "輸入高";
		cin >> b;
		cout << "體積是" << vol(a, b);
	}
	if (rec == 3){
		cout << "輸入長";
		cin >> a;
		cout << "輸入寬";
		cin >> b;
		cout << "輸入高";
		cin >> c;
		cout << "體積是" << vol(a, b, c);
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
