// Fig. 9.24: Time.h
// Cascading member function calls.

// Time class definition.
// Member functions defined in Time.cpp.
#ifndef TIME_H
#define TIME_H

class Time
{
public:
	explicit Time(int = 0, int = 0, int = 0); // default constructor

	// set functions (the Time & return types enable cascading)
	Time& setTime(int, int, int); // set hour, minute, second
	Time& setHour(int); // set hour
	Time& setMinute(int); // set minute
	Time& setSecond(int); // set second

	// get functions (normally declared const)
	unsigned int getHour() const; // return hour
	unsigned int getMinute() const; // return minute
	unsigned int getSecond() const; // return second

	// print functions (normally declared const)
	void printUniversal() const; // print universal time
	void printStandard() const; // print standard time
private:
	unsigned int hour; // 0 - 23 (24-hour clock format)
	unsigned int minute; // 0 - 59
	unsigned int second; // 0 - 59
}; // end class Time

#endif#pragma once
