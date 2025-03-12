#include <iostream>
#include <cmath>  // 用來計算圓柱體的 PI 值

using namespace std;

double volume(int side) {
    return side*side*side;  
}

double volume(double radius, double height) {
    const double PI = 3.14159265358979;  
    return PI * radius*radius * height;  
}

double volume(int length, int width, int height = 10) {  
    return length * width * height;  
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