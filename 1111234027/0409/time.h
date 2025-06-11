// Fig. 9.4: Time.h
// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.

#ifndef TIME_H
#define TIME_H

class Date
{
public:
	explicit Date(int = 0, int = 0, int = 0);

	void setDate(int, int, int);
	void setyear(int);
	void setmonth(int);
	void setday(int);

	unsigned int getyear() const;
	unsigned int getmonth() const;
	unsigned int getday() const;

	void printGregorian() const;
	void printRepublicOfChina() const;
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
};

#endif