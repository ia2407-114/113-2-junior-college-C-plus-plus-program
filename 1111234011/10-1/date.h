#ifndef TIME_H // 為了怕重複引入
#define TIME_H

class date
{
public:
	~date();
	explicit date(int = 0, int = 0, int = 0);

	void setdate(int, int, int); // set hour, minute, second
	void setyear(int); // set hour
	void setmonth(int); // set minute
	void setday(int); // set second

	// get functions
	unsigned int getyear() const; // return hour
	unsigned int getmonth() const; // return minute
	unsigned int getday() const; // return second

	void printUniversal() const; // 輸出西元
	void printStandard() const; // 輸出民國
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
};
#endif