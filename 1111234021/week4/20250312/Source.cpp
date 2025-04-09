#include <iostream>
using namespace std;

int play(int);
double play(int,int);
int play(int,int,int);

int main()
{
    int a, b, c;
    cout << "請輸入 1~3 個整數" << endl;

    // 讀取第一個整數
    cin >> a;

    // 嘗試讀取第二個數字
    if (cin >> b) {
        // 嘗試讀取第三個數字
        if (cin >> c) {
            cout << "長方體體積：" << play(a, b, c) << endl;  // 計算長方體體積
        }
        else {
            cout << "圓柱體體積：" << play(a, b) << endl;  // 計算圓柱體體積
        }
    }
    else {
        cout << "正方體體積：" << play(a) << endl;  // 計算正方體體積
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
