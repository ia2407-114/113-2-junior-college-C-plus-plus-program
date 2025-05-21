#ifndef DATENUMBER_H
#define DATENUMBER_H

#include <iostream>
#include <string>

class DateNumber {
    friend std::ostream& operator<<(std::ostream&, const DateNumber&);
    friend std::istream& operator>>(std::istream&, DateNumber&);
public:
    std::string getRaw() const; // �^�ǯ¼Ʀr�榡�A�p1140521
private:
    std::string year;  // 3�X�~
    std::string month; // 2�X��
    std::string day;   // 2�X��
};

#endif