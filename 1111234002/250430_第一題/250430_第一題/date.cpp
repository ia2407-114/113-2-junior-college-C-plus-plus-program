/*題目1. 修改上面的五個程式碼，修改為pet類別，建立一個可以讓使用者透過鍵盤輸入多隻寵物的種類、名字、¬生日及領養日的程式。建立Pet類別與Date類別，並使用date類別，程式碼內需達成以下條件:

1.要有建構子、解構子、日期檢查的方法(函數)
2.用解構子印出寵物所有資料，
3.日期檢查函數需判斷寵物的年齡是否合理，以及生日不大於領養日。(狗的年齡介於0~20歲，條件寫法不限制)
4.Pet類別內必須使用date類別作為其資料成員(使用composition class)。*/

#include "Date.h"
#include <iostream>
#include <stdexcept>  // 為了使用 invalid_argument 例外處理
using namespace std;

// 建構子：初始化日期並檢查是否合法
Date::Date(int m, int d, int y) {
    if (!isValidDate(m, d, y)) {
        throw invalid_argument("日期無效！");
    }
    month = m;
    day = d;
    year = y;
}

Date::~Date()
{
}

// 比較目前日期是否早於另一個日期
bool Date::isBefore(const Date& other) {
    if (year < other.year) return true;
    if (year == other.year && month < other.month) return true;
    if (year == other.year && month == other.month && day < other.day) return true;
    return false;
}

// 輸出日期格式 MM/DD/YYYY
void Date::print() {
    cout << month << "/" << day << "/" << year << endl;
}

// 確認日期是否有效
bool Date::isValidDate(int m, int d, int y) {
    // 確保月份介於 1 到 12，年份為正數
    if (m < 1 || m > 12 || y <= 0) return false;

    // 每個月份的天數（2月預設為28）
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31 };

    // 閏年檢查
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        if (m == 2) daysInMonth[2] = 29;  // 如果是閏年的2月，設為29天
    }

    // 檢查日期是否在正確範圍
    return d >= 1 && d <= daysInMonth[m];
}
