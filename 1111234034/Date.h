#ifndef DATE_H
#define DATE_H

class Date {
public:
    static const unsigned int monthsPerYear = 12;
    explicit Date(int = 1, int = 1, int = 2000);
    void print() const;
    ~Date();

    // Getter functions
    unsigned int getYear() const { return year; }
    unsigned int getMonth() const { return month; }
    unsigned int getDay() const { return day; }

    // Comparison operator
    bool operator<=(const Date& other) const;

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    unsigned int checkDay(int) const;
};

#endif
