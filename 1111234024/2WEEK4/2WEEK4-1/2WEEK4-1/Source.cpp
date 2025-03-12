//使用多載函數並搭配預設參數(皆為)，達成下列目標:
//1. 輸入1個整數時，計算正方體體積
//2. 輸入2個整數時，計算圓柱體體積
//3. 輸入3個整數時，計算長方體體積
#include<iostream>
using namespace std;

int l, r, h;
double w;

int volume(int length) {
    return length * length * length;
}


double volume(int radius, int height) {
    return 3.14 * radius * radius * height;
}

double volume(int length, double width, double height) {
    return length * width * height;
}

int main()
{
    cout << "請輸入整數l:";
    cin >> l;
	cout << "請輸入整數r:";
	cin >> r;
	cout << "請輸入整數w:";
	cin >> w;
	cout << "請輸入整數h:";
	cin >> h;

    if (l != 0 && r == 0 && h == 0 && w == 0) {
        cout << "正方體體積為: " << volume(l) << endl;
    }
    else if (r != 0 && h != 0 && l == 0 && w == 0) {
        cout << "圓柱體體積為: " << volume(r, h) << endl;
    }
    else if (l != 0 && w != 0 && h != 0) {
        cout << "長方體體積為: " << volume(l, w, h) << endl;
    }
    else {
        cout << "錯誤：輸入不正確，無法計算。" << endl;
    }

    return 0;
}




