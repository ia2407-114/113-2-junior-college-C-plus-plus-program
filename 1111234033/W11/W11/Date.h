#ifndef DATE_H
#define DATE_H

class Date
{
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;

public:
	static const int monthperyear = 12;
	void setdate(int, int, int);
	explicit Date(int = 2005, int = 1, int = 1);
	void print() const;
};

#endif