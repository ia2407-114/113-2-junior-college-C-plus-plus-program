#include <iostream>
using namespace std;

int volume(double);
double volume(int, int);
int volume(int, int, int height = 2);

void main(void)
{
	int num;
	cout << "�п�ܰ��檺���(1, 2, 3):";
	cin >> num;

	if (num == 1) {
		int a;
		cout << "�п�J�@�Ӽƭ�:";
		cin >> a;
		cout << "\n��n��:" << volume(a);
	}
	else if (num == 2) {
		int a, count;
		double b;
		cout << "�п�ܿ�J�ƭȪ��Ӽ�(1-2):";
		cin >> count;
		if (count == 1) {
			cout << "\n��n��:" << volume(a);
		}

	}
	//cout << "�п�J�Ѽ�:";
	//cin >> a >> b >> c;

	//cout << "\n��n��:" << volume(a, b, c);

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