#ifndef DATE_H
#define DATE_H

class Date
{
public:
    explicit Date(int = 2025, int = 6, int = 1);
    ~Date();

    void setdate(int, int, int);
    void setyear(int);
    void setmonth(int);
    void setday(int);

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
