#include <iostream>

using namespace std;

double volume(int a, int b = 0, int c = 0) {
    if (b == 0 && c == 0) {
        return a * a * a;
    }
    else if (c == 0) {
        return 3.14 * a * a * b;  
    }
    else {
        return a * b * c;
    }
}

int main() {
    int choice;
    cout << "選擇計算體積的物體:\n";
    cout << "1. 正方體\n";
    cout << "2. 圓柱體\n";
    cout << "3. 長方體\n";
    cout << "請輸入選項 (1/2/3): ";
    cin >> choice;

    if (choice == 1) {
        int side;
        cout << "輸入1個整數，計算正方體體積: ";
        cin >> side;
        cout << "正方體的體積為: " << volume(side) << endl;
    }
    else if (choice == 2) {
        int radius, height;
        cout << "輸入2個整數，計算圓柱體體積: ";
        cin >> radius >> height;
        cout << "圓柱體的體積為: " << volume(radius, height) << endl;
    }
    else if (choice == 3) {
        int length, width, height;
        cout << "輸入3個整數，計算長方體體積: ";
        cin >> length >> width >> height;
        cout << "長方體的體積為: " << volume(length, width, height) << endl;
    }
  
    return 0;
}
