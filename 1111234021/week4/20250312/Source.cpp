#include <iostream>
using namespace std;

int play(int);
double play(int,int);
int play(int,int,int);

int main()
{
    int a, b, c;
    cout << "�п�J 1~3 �Ӿ��" << endl;

    // Ū���Ĥ@�Ӿ��
    cin >> a;

    // ����Ū���ĤG�ӼƦr
    if (cin >> b) {
        // ����Ū���ĤT�ӼƦr
        if (cin >> c) {
            cout << "��������n�G" << play(a, b, c) << endl;  // �p���������n
        }
        else {
            cout << "��W����n�G" << play(a, b) << endl;  // �p���W����n
        }
    }
    else {
        cout << "��������n�G" << play(a) << endl;  // �p�⥿������n
    }

    return 0;
}

int play(int aa)
{
    return aa * aa * aa;
}

double play(int rr, int hh)
{
    return 3.1415926 * rr * rr * hh;
}

int play(int aa, int bb, int hh)
{
    return aa * bb * hh;
}
