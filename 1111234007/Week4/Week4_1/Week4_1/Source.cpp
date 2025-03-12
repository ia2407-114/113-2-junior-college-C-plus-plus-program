//1. 輸入1個整數時，計算正方體體積
//2. 輸入2個整數時，計算圓柱體體積
//3. 輸入3個整數時，計算長方體體積
#include<iostream>
#include <cmath>
using namespace std;
int ;
int volume(int);
double volume(int, int);
int volume(int, int, int);

int main()
{
	int a, r, h,l,w,h;
	cout << "請輸入整數: ";
	cin >> a;
	cout << "正方體的體積為: " << volume(a);

	cout << "請輸入圓柱體的半徑和高度: ";
	cin >> r >> h;
	cout << "圓柱體的體積為: " << volume(r,h);

	cout <<  "請輸入長方體的長、寬和高:";
	cin >> l >> w >> h;
	cout << "圓柱體的體積為: " << volume(l,w,h);
	
}

int volume(int length)
{
	return length * length * length;
}
double volume(int radius, int height)
{
	return radius * radius * 3.14 * height;
}
int volume(int length, int width, int height)
{
	return length * width * height;
}

