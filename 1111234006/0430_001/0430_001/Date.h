#ifndef DATE_H
#define DATE_H

class Date
{
public:
    // 定義一年有 12 個月份
    static const unsigned int monthsPerYear = 12;

    // 建構子預設
    explicit Date(int = 1, int = 1, int = 1900);

    void print() const;  // 印出日期

    ~Date();  // 解構子

    int getYear() const;  // 取得年份

    // 檢查當前日期是否早於或等於另一個日期
    bool isEarlierThanOrEqual(const Date&) const;

private:
    unsigned int month; 
    unsigned int day;   
    unsigned int year;

    // 用來檢查日期是否有效（根據年份和月份檢查天數）
    unsigned int checkDay(int) const;
};
#endif


