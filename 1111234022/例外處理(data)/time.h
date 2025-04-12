// Fig. 9.4: Time.h
// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header 
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time
{
public:

	explicit Time(int = 1990, int = 1, int = 1); // default constructor

	// set functions
	void setTime(int, int, int); // set hour, minute, second
	void setHour(int); // set hour (after validation)
	void setMinute(int); // set minute (after validation)
	void setSecond(int); // set second (after validation)

	// get functions
	unsigned int getHour() const; // return hour
	unsigned int getMinute() const; // return minute
	unsigned int getSecond() const; // return second

	void printUniversal() const; // output time in universal-time format
	void printStandard() const; // output time in standard-time format
private:
	unsigned int year; // 0 - 23 (24-hour clock format)
	unsigned int month; // 0 - 59
	unsigned int day; // 0 - 59
}; // end class Time

#endif
