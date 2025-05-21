#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Apple";
    string str2 = "Banana";

    // 先直接比較字串大小（就像字典順序）
    cout << "比較整體字串: " << endl;
    if (str1 < str2) {
        cout << str1 << " < " << str2 << endl;
    }
    else if (str1 > str2) {
        cout << str1 << " > " << str2 << endl;
    }
    else {
        cout << str1 << " == " << str2 << endl;
    }

    cout << "\n--- 逐字母比較過程 ---" << endl;

    // 逐字元比對，找出哪一個字元決定了大小
    int minLen = min(str1.length(), str2.length());
    bool differenceFound = false;

    for (int i = 0; i < minLen; ++i) {
        char c1 = str1[i];
        char c2 = str2[i];

        cout << "第 " << i + 1 << " 個字元: ";
        cout << "'" << c1 << "' (ASCII: " << int(c1) << ") vs ";
        cout << "'" << c2 << "' (ASCII: " << int(c2) << ") → ";

        if (c1 < c2) {
            cout << c1 << " < " << c2 << " → 所以 " << str1 << " < " << str2 << endl;
            differenceFound = true;
            break;
        }
        else if (c1 > c2) {
            cout << c1 << " > " << c2 << " → 所以 " << str1 << " > " << str2 << endl;
            differenceFound = true;
            break;
        }
        else {
            cout << "相同" << endl;
        }
    }

    if (!differenceFound) {
        // 前面都一樣，要靠長度來決定
        if (str1.length() < str2.length()) {
            cout << "前面字元都一樣，但 " << str1 << " 長度較短 → " << str1 << " < " << str2 << endl;
        }
        else if (str1.length() > str2.length()) {
            cout << "前面字元都一樣，但 " << str1 << " 長度較長 → " << str1 << " > " << str2 << endl;
        }
        else {
            cout << "完全相同" << endl;
        }
    }

    return 0;
}