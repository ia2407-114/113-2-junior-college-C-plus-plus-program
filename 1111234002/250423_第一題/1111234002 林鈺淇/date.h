// 圖 9.4: Time.h
// Time 類別，包含具有預設參數的建構子
// 成員函式的實作在 Time.cpp 中

// 避免重複包含標頭檔
#ifndef date_h
#define date_h

// Date 類別定義
class Date
{
public:
    explicit Date(int = 1990, int = 1, int = 1); // 預設建構子
    ~Date(); // 解構子

    // 設定函式
    void setDate(int, int, int); // 設定年、月、日
    void setYear(int);  // 設定年份
    void setMonth(int); // 設定月份
    void setDay(int);   // 設定日期

    // 取得函式
    unsigned int getYear() const;  // 回傳年份
    unsigned int getMonth() const; // 回傳月份
    unsigned int getDay() const;   // 回傳日期

    void printUniversal() const; // 印出西元格式
    void printStandard() const;  // 印出民國格式

private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
}; // Date 類別結束

#endif
