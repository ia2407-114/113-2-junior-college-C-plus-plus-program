#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "請輸入日期：" << endl;

    getline(cin, input);

    string digitsOnly = "";

    for (char c : input) {
        if (isdigit(static_cast<unsigned char>(c))) {
            digitsOnly += c;
        }
    }

    cout << "純數字: " << digitsOnly << endl;

    if (digitsOnly.length() == 7) {
        string year = digitsOnly.substr(0, 3);
        string month = digitsOnly.substr(3, 2);
        string day = digitsOnly.substr(5, 2);

        cout << "格式: " << year << "/" << month << "/" << day << endl;
    }
    else {
        cout << "錯誤" << endl;
    }

    return 0;
}
