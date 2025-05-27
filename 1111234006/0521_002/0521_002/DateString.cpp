#include <iomanip>
#include "DateString.h"
using namespace std;

// 自訂輸入運算子 >>
istream& operator>>(istream& input, DateString& d) {
    input.ignore(4);  // 忽略「民國」
    input >> setw(3) >> d.year;
    input.ignore(2);  // 忽略「年」
    input >> setw(2) >> d.month;
    input.ignore(2);  // 忽略「月」
    input >> setw(2) >> d.day;
    input.ignore();   // 忽略「號」
    return input;
}

// 自訂輸出運算子 <<
ostream& operator<<(ostream& output, const DateString& d) {
    output << d.year << d.month << d.day << endl;
    output << d.year << "/" << d.month << "/" << d.day;
    return output;
}

