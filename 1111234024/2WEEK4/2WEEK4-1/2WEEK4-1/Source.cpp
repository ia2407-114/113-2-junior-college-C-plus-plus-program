//�ϥΦh����ƨ÷f�t�w�]�Ѽ�(�Ҭ�)�A�F���U�C�ؼ�:
//1. ��J1�Ӿ�ƮɡA�p�⥿������n
//2. ��J2�Ӿ�ƮɡA�p���W����n
//3. ��J3�Ӿ�ƮɡA�p���������n
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
    cout << "�п�J���l:";
    cin >> l;
	cout << "�п�J���r:";
	cin >> r;
	cout << "�п�J���w:";
	cin >> w;
	cout << "�п�J���h:";
	cin >> h;

    if (l != 0 && r == 0 && h == 0 && w == 0) {
        cout << "��������n��: " << volume(l) << endl;
    }
    else if (r != 0 && h != 0 && l == 0 && w == 0) {
        cout << "��W����n��: " << volume(r, h) << endl;
    }
    else if (l != 0 && w != 0 && h != 0) {
        cout << "��������n��: " << volume(l, w, h) << endl;
    }
    else {
        cout << "���~�G��J�����T�A�L�k�p��C" << endl;
    }

    return 0;
}




