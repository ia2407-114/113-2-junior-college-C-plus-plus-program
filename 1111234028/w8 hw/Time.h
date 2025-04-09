#ifndef TIME_H
#define TIME_H

class Time
{
public:
	explicit Time(int = 0, int = 0, int = 0);

	void setTime(int, int, int);
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