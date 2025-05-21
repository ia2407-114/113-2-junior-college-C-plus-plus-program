#ifndef DATESTRING_H
#define DATESTRING_H

#include <iostream>
#include <string>

class DateString {
    friend std::istream& operator>>(std::istream&, DateString&);
    friend std::ostream& operator<<(std::ostream&, const DateString&);
public:
    std::string operator()() const { return filteredNumber; }         // 傳回 "1140521"
    std::string operator/(char) const;                                // 格式化成 "114/05/21"
private:
    std::string rawString;
    std::string filteredNumber;
};

#endif

