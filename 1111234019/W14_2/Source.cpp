#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Apple";
    string str2 = "Banana";
    // 取出各字串的前三個字母
// str1 = "Apple" → A(0), p(1), p(2)
    char ch1 = str1[0];  // 'A'
    char ch2 = str1[1];  // 'p'
    char ch3 = str1[2];  // 'p'

    // str2 = "Banana" → B(0), a(1), n(2)
    char ch4 = str2[0];  // 'B'
    char ch5 = str2[1];  // 'a'
    char ch6 = str2[2];  // 'n'

    // 印出每個字元及其對應的 ASCII 值
    cout << str1 << " 的第一個字母: " << ch1 << " (ASCII: " << int(ch1) << ")" << endl;
    cout << str1 << " 的第二個字母: " << ch2 << " (ASCII: " << int(ch2) << ")" << endl;
    cout << str1 << " 的第三個字母: " << ch3 << " (ASCII: " << int(ch3) << ")\n" << endl;

    cout << str2 << " 的第一個字母: " << ch4 << " (ASCII: " << int(ch4) << ")" << endl;
    cout << str2 << " 的第二個字母: " << ch5 << " (ASCII: " << int(ch5) << ")" << endl;
    cout << str2 << " 的第三個字母: " << ch6 << " (ASCII: " << int(ch6) << ")\n" << endl;
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