#pragma once
#ifndef TIME_H
#define TIME_H
#endif 

// Time class definition
class Time
{
public:
	explicit Time(int = 0, int = 0, int = 0); // default constructor

	// set functions
	void setymd(int, int, int); // set hour, minute, second
	void sety(int); // set hour (after validation)
	void setM(int); // set minute (after validation)
	void setcd(int); // set second (after validation)
	~Time();
	// get functions
	// 請對照Time.cpp程式碼，於此處加入缺少的成員函數名稱
	unsigned int gety() const; // return hour
	unsigned int getM() const; // return minute
	unsigned int getd() const; // return second

	void printUniversal() const; // output time in universal-time format
	void printStandard() const; // output time in standard-time format
private:
	unsigned int year; // 0 - 23 (24-hour clock format)
	unsigned int mon; // 0 - 59
	unsigned int day; // 0 - 59
};