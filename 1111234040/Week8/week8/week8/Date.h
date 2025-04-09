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

	void printUniversal() const; // ¦è¤¸
	void printStandard() const; // ¥Á°ê
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
};

#endif