// Date.h
#ifndef DATE_H
#define DATE_H

class Date {
public:
    static const unsigned int monthsPerYear = 12;
    explicit Date(int = 1, int = 1, int = 2000);
    void print() const;
    ~Date();
    int getYear() const;
    int getMonth() const;
    int getDay() const;
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    unsigned int checkDay(int) const;
};

#endif
