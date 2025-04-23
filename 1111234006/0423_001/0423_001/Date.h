#ifndef DATE_H
#define DATE_H

class Date
{
public:
    // 預設建構子 
    explicit Date(int = 1990, int = 1, int = 1);

     /* < 解構子ㄉ介面檔> */
    ~Date();

    // 設定完整日期
    void setDate(int, int, int);

    // 分別設定年、月、日
    void setYear(int);
    void setMonth(int);
    void setDay(int);

    // 取得年、月、日
    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;

    // 印出西元
    void printUniversal() const;

    // 印出民國
    void printStandard() const;

private:  // 私有成員變數
    unsigned int year;
    unsigned int month;
    unsigned int day;
};
#endif
