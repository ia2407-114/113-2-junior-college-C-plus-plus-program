//1. ��J1�Ӿ�ƮɡA�p�⥿������n
//2. ��J2�Ӿ�ƮɡA�p���W����n
//3. ��J3�Ӿ�ƮɡA�p���������n
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
	cout << "�п�J���: ";
	cin >> a;
	cout << "�����骺��n��: " << volume(a);

	cout << "�п�J��W�骺�b�|�M����: ";
	cin >> r >> h;
	cout << "��W�骺��n��: " << volume(r,h);

	cout <<  "�п�J�����骺���B�e�M��:";
	cin >> l >> w >> h;
	cout << "��W�骺��n��: " << volume(l,w,h);
	
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

