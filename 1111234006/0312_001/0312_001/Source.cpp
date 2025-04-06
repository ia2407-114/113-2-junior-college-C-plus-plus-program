/*0312使用多載函數並搭配預設參數(皆為)，達成下列目標:
1. 輸入1個整數時，計算正方體體積
2. 輸入2個整數時，計算圓柱體體積
3. 輸入3個整數時，計算長方體體積*/

#include<iostream>  // 引入標準輸入輸出函式庫
using namespace std;

// 函數多載宣告 (使用相同函數名稱 `aa`，但參數不同)
int aa(int);          // 計算正方體體積 (輸入1個整數)
int aa(int, int);     // 計算圓柱體體積 (輸入2個整數)
int aa(int, int, int); // 計算長方體體積 (輸入3個整數)
/*  int aa(int a = 1, int b = 1, int c = 1);   預設值*/

int main(void) {
    int r = 0; // 儲存半徑或邊長
    int h = 0; // 儲存高度
    int w = 0; // 儲存寬度

    // 輸入1個整數，計算正方體體積
    cout << "\n請輸入一個整數\n";
    cin >> r;
    cout << "正方體體積: " << aa(r) << endl;  //endl=>是 C++ 的換行符號

    // 輸入2個整數，計算圓柱體體積
    cout << "\n請輸入二個整數\n";
    cin >> r >> h;
    cout << "圓柱體體積: " << aa(r, h) << endl;

    // 輸入3個整數，計算長方體體積
    cout << "\n請輸入三個整數\n";
    cin >> r >> h >> w;
    cout << "長方體體積: " << aa(r, h, w) << endl;
}

// 定義函數 `aa`，計算不同幾何體的體積

// 計算正方體體積 (邊長 r)
int aa(int r) {
    return r * r * r;
}

// 計算圓柱體體積 (半徑 r，高度 h，使用 π ≈ 3.14159)
int aa(int r, int h) {
    return r * r * h * 3.14159;
}

// 計算長方體體積 (長 r，寬 w，高 h)
int aa(int r, int w, int h) {
    return r * w * h;
}
