// Date.h
#ifndef DATE_H
#define DATE_H

class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int y = 1990, int m = 1, int d = 1);

    void setDate(int y, int m, int d);

    void printGregorian() const;

    void printROC() const;
};

#endif 
