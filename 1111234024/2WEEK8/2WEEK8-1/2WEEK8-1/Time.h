//題目1. 修改上面Time.h、Time.cpp、fig09_06.cpp的程式碼，建立一個可以讓使用者透過鍵盤輸入西年、月、日，分別印出西元與民國日期，但程式碼需達成以下條件:
//1. 請使用類別定義，定義部分請用”抽象方法”
//(抽象方法就是介面與實作分離)
//2. 日期部分請透過建構子設定與設定預設值(預設值為1990年1月1號)
//(西元年的範圍介於1911 - 2050)
//3. 必須判斷內容是否正確，例如2017 / 03 / 32為錯誤的日期
// Fig. 9.4: Time.h
// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header 
#ifndef DATE_H
#define DATE_H

class Date
{
public:
	explicit Date(int = 1990, int = 1, int = 1);

	void setDate(int, int, int);
	void setYear(int);
	void setMonth(int);
	void setDay(int);

	unsigned int getYear() const;
	unsigned int getMonth() const;
	unsigned int getDay() const;

	void printUniversal() const; 
	void printStandard() const; 
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
};

#endif