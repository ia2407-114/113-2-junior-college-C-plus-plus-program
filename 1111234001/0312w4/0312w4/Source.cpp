#include<iostream>
#define PI 3.14159

using namespace std;

int volume(int a) {        //正方形體積計算
	return a * a * a;
}

double volume(int r, int h = 1) {         //圓柱體體積計算
	return PI * r * r * h;
}

int volume(int l, int w, int h) {        //長方體體積計算
	return l * w * h;
}

int mail() {
	cout << "圓柱體體積(半徑 3 ,高度 5):" << volume(3, 5) << endl;
	cout << "長方體體積(長 3 ,寬 4 ,高 5):" << volume(3, 4, 5) << endl;
	return 0;
}