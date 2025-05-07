#ifndef DATE_H
#define DATE_H

class Date {
public:
    static const unsigned int monthsPerYear = 12;

    Date(int = 1, int = 1, int = 2000);
    void print() const;
    ~Date();
private:
    unsigned int month, day, year;
    unsigned int checkDay(int) const;
};

#endif