/*�ϥΦh����ƨ÷f�t�w�]�Ѽ�(�Ҭ�)�A�F���U�C�ؼ�:
1. ��J1�Ӿ�ƮɡA�p�⥿������n
2. ��J2�Ӿ�ƮɡA�p���W����n
3. ��J3�Ӿ�ƮɡA�p���������n*/
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
	cout << "��J�@�Ӿ��\n";
	cin >> r;
	cout << "�������n�G" << aaa(r) ;

	cout << "\n��J�G�Ӿ��\n";
	cin >> r >>h;
	cout << "��W����n�G" << aaa(r,h);

	cout << "\n��J�T�Ӿ��\n";
	cin >> r >>h >>w;
	cout << "�������n�G" << aaa(r,h,w);
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