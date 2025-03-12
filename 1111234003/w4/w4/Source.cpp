#include <iostream>
#include <cmath>  // 用來計算圓柱體的 PI 值

using namespace std;

// 1. 輸入1個整數時，計算正方體體積
double volume(int side) {
    return pow(side, 3);  // 正方體體積 = 邊長的立方
}

// 2. 輸入2個整數時，計算圓柱體體積
double volume(double radius, double height) {
    const double PI = 3.14159265358979;  // 圓周率
    return PI * pow(radius, 2) * height;  // 圓柱體體積 = π * 半徑平方 * 高度
}

// 3. 輸入3個整數時，計算長方體體積
double volume(int length, int width, int height = 10) {  // 預設高度為10
    return length * width * height;  // 長方體體積 = 長 * 寬 * 高
}

int main() {
    int choice;
    cout << "選擇計算的體積:\n";
    cout << "1. 正方體\n";
    cout << "2. 圓柱體\n";
    cout << "3. 長方體\n";
    cout << "請選擇 (1/2/3): ";
    cin >> choice;

    if (choice == 1) {
        int side;
        cout << "請輸入正方體的邊長: ";
        cin >> side;
        cout << "正方體的體積為: " << volume(side) << endl;
    }
    else if (choice == 2) {
        double radius, height;
        cout << "請輸入圓柱體的半徑和高度: ";
        cin >> radius >> height;
        cout << "圓柱體的體積為: " << volume(radius, height) << endl;
    }
    else if (choice == 3) {
        int length, width, height;
        cout << "請輸入長方體的長、寬、高 (若無高，則會使用預設值 10): ";
        cin >> length >> width >> height;
        cout << "長方體的體積為: " << volume(length, width, height) << endl;
    }
    else {
        cout << "無效的選擇!" << endl;
    }

    return 0;
}
