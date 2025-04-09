#include <iostream>
using namespace std;

int x(int r = 0);
double y(int r = 0, int h = 0);
int z(int r = 0, int h = 0, int l = 0);

int main() 
{
    int r, h, l;

    cout << "輸入第一個數:";
    cin >> r;
    cout << "輸入第二個數:";
    cin >> h;
    cout << "輸入第三個數:";
    cin >> l;
    if (h == 0) {
        cout << "正方體體積為:" << x(r) << endl;
    }
    else if (l == 0) {
        cout << "圓柱體體積為:" << y(r, h) << endl;
    }
    else {
        cout << "長方體體積為:" << z(r, h, l) << endl;
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
