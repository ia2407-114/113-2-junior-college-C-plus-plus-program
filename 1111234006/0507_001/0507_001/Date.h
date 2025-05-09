#ifndef DATE_H
#define DATE_H

class Date
{
public:
    static const unsigned int monthsPerYear = 12;

    explicit Date(int = 1, int = 1, int = 1900);

    void print() const;
    ~Date();

    int getYear() const;
    bool isEarlierThanOrEqual(const Date&) const;

    //  新增這三個瀑布式 setter
    Date& setMonth(int m);
    Date& setDay(int d);
    Date& setYear(int y);

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    unsigned int checkDay(int) const;
};
#endif
