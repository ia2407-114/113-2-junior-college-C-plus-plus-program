#include "date.h"
#include <cctype>

// 自訂輸入運算子 >>：從輸入中過濾數字
istream& operator>>(istream& in, Date& date) {
    string input;
    getline(in, input); 

    string digits;
    for (char c : input) {
        if (isdigit(c)) {
            digits += c;  // 使用 string 的 += 運算子
        }
    }

    if (digits.length() == 7) {
        date.year = digits.substr(0, 3); // 使用 string 的 substr() 函式
        date.month = digits.substr(3, 2);
        date.day = digits.substr(5, 2);
    }
    else {
        cerr << "輸入格式錯誤，請輸入像是『民國114年05月21日』這樣的格式。" << endl;
        date.year = date.month = date.day = "??";
    }

    return in;
}

// 自訂輸出運算子 <<
ostream& operator<<(ostream& out, const Date& date) {
    out << date.year << "/" << date.month << "/" << date.day;
    return out;
}
