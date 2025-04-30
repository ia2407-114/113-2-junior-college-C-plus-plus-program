// Fig. 9.4: Time.h
// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header 
#ifndef Date_h
#define Date_h

// Time class definition
class Date
{
public:
	explicit Date(int = 1990, int = 1, int = 1); // default constructor
	~Date();
	// set functions
	void setDate(int, int, int); // set hour, minute, second
	void setYear(int); // set hour (after validation)
	void setMonth(int); // set minute (after validation)
	void setDay(int); // set second (after validation)

	// get functions
	unsigned int getYear() const; // return hour
	unsigned int getMonth() const; // return minute
	unsigned int getDay() const; // return second

	void printUniversal() const; // 
	void printStandard() const; // 
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
}; // end class Time

#endif