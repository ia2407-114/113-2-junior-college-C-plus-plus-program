#include<iostream>
#define PI 3.14159

using namespace std;

int volume(int a) {        //�������n�p��
	return a * a * a;
}

double volume(int r, int h = 1) {         //��W����n�p��
	return PI * r * r * h;
}

int volume(int l, int w, int h) {        //��������n�p��
	return l * w * h;
}

int mail() {
	cout << "��W����n(�b�| 3 ,���� 5):" << volume(3, 5) << endl;
	cout << "��������n(�� 3 ,�e 4 ,�� 5):" << volume(3, 4, 5) << endl;
	return 0;
}