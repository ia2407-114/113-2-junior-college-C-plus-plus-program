/*使用多載函數並搭配預設參數(皆為)，達成下列目標:
1. 輸入1個整數時，計算正方體體積
2. 輸入2個整數時，計算圓柱體體積
3. 輸入3個整數時，計算長方體體積*/
#include<iostream>
using namespace std;
int aaa(int);
int aaa(int, int);
int aaa(int, int, int);
int aaa(int r = 1, int h = 1, int w = 1);
int main(void){
	int r = 1;
	int h = 1;
	int w = 1;
	cout << "輸入一個整數\n";
	cin >> r;
	cout << "正方形體積：" << aaa(r) ;

	cout << "\n輸入二個整數\n";
	cin >> r >>h;
	cout << "圓柱體體積：" << aaa(r,h);

	cout << "\n輸入三個整數\n";
	cin >> r >>h >>w;
	cout << "正方形體積：" << aaa(r,h,w);
}
int aaa(int r) {
	return r * r * r;
}

int aaa(int r, int h) {
	return(double) r * r * h *3.14159 ;
}

int aaa(int r, int h, int w) {
	return r * h * w;
}