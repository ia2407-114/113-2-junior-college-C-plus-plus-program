/*Date.h 0409題目1.*/
#ifndef DATE_H
#define DATE_H

class Date {  // Date 類別定義：用來表示一個日期（年、月、日）
private:
    int year;   // 年份
    int month;  // 月份
    int day;    // 日期

public:
    // 建構子：可以給定初始值，若未指定，預設為 1990/1/1
    Date(int y = 1990, int m = 1, int d = 1);

    // 設定日期（年、月、日）
    void setDate(int y, int m, int d);

    // 輸出西元格式日期（例如：2024/4/9）
    void printGregorian() const;

    // 輸出民國格式日期（例如：民國113年4月9日）
    void printROC() const;
};

#endif // 結束 Date 類別定義的標頭檔

