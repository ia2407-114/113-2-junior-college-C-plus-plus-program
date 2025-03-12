#include <iostream>
using namespace std;

int douzai(int);
int douzai(int, int);
int douzai(int, int, int);

int main() {
    int a, r, h, l, w;
    cout << "請輸入一個數字 (正方體的邊長): ";
    cin >> a;
    cout << "正方體體積: " << douzai(a) << endl;
    
    cout << "\n請輸入兩個數字 (圓柱體的半徑和高): ";
    cin >> r >> h;
    cout << "圓柱體體積: " << douzai(r, h) << endl;
    
    cout << "\n請輸入三個數字 (長方體的長、寬、高): ";
    cin >> l >> w >> h;
    cout << "長方體體積: " << douzai(l, w, h) << endl;
    
    return 0;
}

// 計算正方體體積
int douzai(int a) {
    return a * a * a;
}

// 計算圓柱體體積 (底面半徑、高)
int douzai(int r, int h) {
    return 3.14159 * r * r * h;  // 使用圓周率計算體積
}

// 計算長方體體積 (長、寬、高)
int douzai(int l, int w, int h) {
    return l * w * h;
}
