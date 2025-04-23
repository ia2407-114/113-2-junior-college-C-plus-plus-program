#pragma once
#ifndef TIME_H
#define TIME_H

class Date
{
public:
    explicit Date(int = 0, int = 0, int = 0);
    ~Date();

    void setyear(int);
    void setmonth(int);
    void setdate(int);
    void setDate(int, int, int); 


    unsigned int getyear() const;
    unsigned int getmonth() const;
    unsigned int getdate() const;

    void printUniversal() const;
    void printTaiwan() const; 
private:
    unsigned int year;
    unsigned int month;
    unsigned int date;
};

#endif
