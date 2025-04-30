#ifndef DATE_H
#define DATE_H

class Date {
public:
    static const unsigned int monthsPerYear = 12;

    Date(int m = 1, int d = 1, int y = 2000);
    void print() const;
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    ~Date();
    static bool isValidDate(int d, int m, int y);
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;

    unsigned int checkDay(int) const;
};

#endif
