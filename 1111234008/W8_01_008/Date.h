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