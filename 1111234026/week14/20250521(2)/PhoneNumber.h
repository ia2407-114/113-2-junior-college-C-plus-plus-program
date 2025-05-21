#ifndef DATENUMBER_H
#define DATENUMBER_H

#include <iostream>
#include <string>

class DateNumber {
    friend std::ostream& operator<<(std::ostream&, const DateNumber&);
    friend std::istream& operator>>(std::istream&, DateNumber&);
public:
    std::string getRaw() const; // 回傳純數字格式，如1140521
private:
    std::string year;  // 3碼年
    std::string month; // 2碼月
    std::string day;   // 2碼日
};

#endif