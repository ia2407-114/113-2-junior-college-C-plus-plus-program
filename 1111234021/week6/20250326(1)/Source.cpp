#include <iostream>
using namespace std;

// 計算正方體體積
int volume(int side) {
    return side * side * side;
}

// 計算圓柱體體積
double volume(int radius, int height) {
    return 3.14159 * radius * radius * height;
}

// 計算長方體體積
int volume(int length, int width, int height) {
    return length * width * height;
}

int main() {
    int aa, bb, cc;

    // 讀取三個整數
    cin >> aa >> bb >> cc;

    // 計算並輸出體積
    cout << "正方體體積: " << volume(aa) << endl;
    cout << "圓柱體體積: " << volume(bb, cc) << endl;
    cout << "長方體體積: " << volume(aa, bb, cc) << endl;

    return 0;
}
