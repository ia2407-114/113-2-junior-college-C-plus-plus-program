#include <iostream>
using namespace std;
int volume(double);
double volume(int, double);
int volume(int height = 7, int b = 7, int c = 7);

int main() {
	int choice;
	cout << "��J�n���檺���";
	cin >> choice;

	if (choice == 1) {
		double a;
		cout << "��J����Ϊ����";
		cin >> a;
		cout << "����Ϊ���n��:" << volume(a);
	}
	else if (choice == 2) {
		int r;
		double height;
		cout << "��J��W�骺�b�| ����";
		cin >> r >> height;
		cout << "��W�骺��n��:" << volume(r, height);
	}
	else if (choice == 3) {
		int height, width, length;
		cout << "��J�����骺�� �e ��";
		cin >> height >> width >> length;
		cout << "�����骺��n��:" << volume(height, width, length);
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