#ifndef DATESTRING_H
#define DATESTRING_H

#include <iostream>
#include <string>

class DateString {
    friend std::istream& operator>>(std::istream&, DateString&);
    friend std::ostream& operator<<(std::ostream&, const DateString&);
public:
    std::string operator()() const { return filteredNumber; }         
    std::string operator/(char) const;                             
private:
    std::string rawString;
    std::string filteredNumber;
};

#endif
