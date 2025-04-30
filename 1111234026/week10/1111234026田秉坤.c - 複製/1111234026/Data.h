// Time.h
// 程式碼序號: 22196312
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header 
#ifndef DATA_H
#define DATA_H

// Time class definition
class Data
{
public:
	explicit Data(int, int, int); // default constructor
	~Data();
	// set functions
	void setData(int, int, int); // set hour, minute, second
	void setYear(int); // set hour (after validation)
	void setMonth(int); // set minute (after validation)
	void setDay(int); // set second (after validation)

	// get functions
	//void getData(int h, int m, int s);// 請對照Time.cpp程式碼，於此處加入缺少的成員函數名稱
	unsigned int getYear() const; // return hour
	unsigned int getMonth() const; // return minute
	unsigned int getDay() const; // return second2

	void printWestern() const; // output time in universal-time format
	void printROC() const; // output time in standard-time format
private:
	unsigned int year; // 0 - 23 (24-hour clock format)
	unsigned int month; // 0 - 59
	unsigned int day; // 0 - 59
}; // end class Time

#endif //6312