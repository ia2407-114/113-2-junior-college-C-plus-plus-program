#include <iostream>
using namespace std;

int x(int r = 0);
double y(int r = 0, int h = 0);
int z(int r = 0, int h = 0, int l = 0);

int main() 
{
    int r, h, l;

    cout << "��J�Ĥ@�Ӽ�:";
    cin >> r;
    cout << "��J�ĤG�Ӽ�:";
    cin >> h;
    cout << "��J�ĤT�Ӽ�:";
    cin >> l;
    if (h == 0) {
        cout << "��������n��:" << x(r) << endl;
    }
    else if (l == 0) {
        cout << "��W����n��:" << y(r, h) << endl;
    }
    else {
        cout << "��������n��:" << z(r, h, l) << endl;
    }
    return 0;
}


int x(int r) 
{
    return r * r * r; 
}


double y(int r, int h)
{
    const double pi = 3.14159;
    return static_cast<int>(pi * r * r * h); 
}


int z(int l, int r, int h)
{
    return l * r * h; 
}
