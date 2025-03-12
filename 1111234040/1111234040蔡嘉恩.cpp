#include <iostream>
#include <cstdlib>
#include <cmath> // 使用 M_PI

#define _USE_MATH_DEFINES
using namespace std;

// **函數原型宣告**
int douzai(int);                    // 計算正方體體積
float douzai(int, int);              // 計算圓柱體體積
int douzai(int, float, int);         // 計算長方體體積
float PI = 3.14;

int main() {
    int a, b, c;
    float w;

    cout << "請輸入一個數值計算正方體體積: ";
    cin >> a;
    cout << "正方體體積: " << douzai(a) << endl;

    cout << "請輸入兩個數值計算圓柱體體積 (半徑與高度): ";
    cin >> a >> b;
    cout << "圓柱體體積: " << douzai(a, b) << endl;

    cout << "請輸入三個數值計算長方體體積 (長, 寬, 高): ";
    cin >> a >> w >> c;
    cout << "長方體體積: " << douzai(a, w, c) << endl;

    return 0;
}

// **函數定義**
// 計算正方體體積
int douzai(int a) {
    return a * a * a;
}

// 計算圓柱體體積
float douzai(int r, int h) {
    return static_cast<float>(PI * r * r * h);
}

// 計算長方體體積
int douzai(int l, float w, int h) {
    return static_cast<int>(l * w * h);
}