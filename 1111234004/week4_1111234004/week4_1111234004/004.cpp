#include <iostream>
using namespace std;
int volume(double);
double volume(int, double);
int volume(int height = 7, int b = 7, int c = 7);

int main() {
	int choice;
	cout << "輸入要執行的函數";
	cin >> choice;

	if (choice == 1) {
		double a;
		cout << "輸入正方形的邊長";
		cin >> a;
		cout << "正方形的體積為:" << volume(a);
	}
	else if (choice == 2) {
		int r;
		double height;
		cout << "輸入圓柱體的半徑 高度";
		cin >> r >> height;
		cout << "圓柱體的體積為:" << volume(r, height);
	}
	else if (choice == 3) {
		int height, width, length;
		cout << "輸入長方體的長 寬 高";
		cin >> height >> width >> length;
		cout << "長方體的體積為:" << volume(height, width, length);
	}


}
int volume(double a) {
	return a * a * a;
}
double volume(int r, double height) {
	return (double)r * r * 3.14159 * height;
}
int volume(int height, int width, int length) {
	return height * width * length;
}