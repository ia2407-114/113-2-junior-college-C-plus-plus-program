#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846; 


double calculateVolume(int length, int width = -1, int height = -1) {
    if (width == -1 && height == -1) {

        return pow(length, 3);
    }
    else if (height == -1) {
      
        return PI * pow(length, 2) * width;
    }
    else {
     
        return length * width * height;
    }
}

int main() {
    int a, b, c;
    int numInputs;

    cout << "輸入數字的個數 (1-3): ";
    cin >> numInputs;

    if (numInputs == 1) {
        cout << "輸入正方體的邊長: ";
        cin >> a;
        cout << "正方體體積: " << calculateVolume(a) << endl;
    }
    else if (numInputs == 2) {
        cout << "輸入圓柱體的半徑和高度: ";
        cin >> a >> b;
        cout << "圓柱體體積: " << calculateVolume(a, b) << endl;
    }
    else if (numInputs == 3) {
        cout << "輸入長方體的長、寬和高: ";
        cin >> a >> b >> c;
        cout << "長方體體積: " << calculateVolume(a, b, c) << endl;
    }
    else {
        cout << "無效的輸入" << endl;
    }

    return 0;
}
