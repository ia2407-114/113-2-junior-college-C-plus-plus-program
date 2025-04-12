#include <iostream>
using namespace std;

int volume(double);
double volume(int, int);
int volume(int, int, int height = 2);

void main(void)
{
	int num;
	cout << "請選擇執行的函數(1, 2, 3):";
	cin >> num;

	if (num == 1) {
		int a;
		cout << "請輸入一個數值:";
		cin >> a;
		cout << "\n體積為:" << volume(a);
	}
	else if (num == 2) {
		int a, count;
		double b;
		cout << "請選擇輸入數值的個數(1-2):";
		cin >> count;
		if (count == 1) {
			cout << "\n體積為:" << volume(a);
		}

	}
	//cout << "請輸入參數:";
	//cin >> a >> b >> c;

	//cout << "\n體積為:" << volume(a, b, c);

}

int volume(int length)
{
	//cout << "1";
	return length * length * length;
}

double volume(int radius, double height)
{
	//cout << "2";
	return (double)radius * radius * 3.14159 * height;
}

int volume(int length, int width, int height)
{
	//cout << "3";
	return length * width * height;
}