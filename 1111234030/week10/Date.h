// Time.h
// 程式碼序號: 22196312
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header 
#ifndef TIME_H
#define TIME_H

// Time class definition
class Date
{
public:
	explicit Date(int = 1990, int = 1, int = 1); // default constructor
	~Date();

	// set functions
	void setDate(int, int, int); // set hour, minute, second
	void setyear(int); // set hour (after validation)
	void setmonth(int); // set minute (after validation)
	void setday(int); // set second (after validation)

	// get functions
	// 請對照Time.cpp程式碼，於此處加入缺少的成員函數名稱
	unsigned int getyear() const; // return hour
	unsigned int getmonth() const; // return minute
	unsigned int getday() const; // return second

	void printUniversal() const; // output time in universal-time format
	void printStandard() const; // output time in standard-time format
private:
	unsigned int year; // 0 - 23 (24-hour clock format)
	unsigned int month; // 0 - 59
	unsigned int day; // 0 - 59
}; // end class Time

#endif //6312
