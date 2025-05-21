#include "DateString.h"
#include <cctype>
using namespace std;

// ��J�B��l�h��
istream& operator>>(istream& input, DateString& ds) {
    getline(input, ds.rawString);
    ds.filteredNumber = "";

    for (char ch : ds.rawString) {
        if (isdigit(ch)) {
            ds.filteredNumber += ch;
        }
    }

    return input;
}

// ��X�B��l�h��
ostream& operator<<(ostream& output, const DateString& ds) {
    if (ds.filteredNumber.length() == 7) {
        output << ds.filteredNumber.substr(0, 3) << "/"
            << ds.filteredNumber.substr(3, 2) << "/"
            << ds.filteredNumber.substr(5, 2);
    }
    else {
        output << "Invalid Format";
    }
    return output;
}

// �h�� '/' �B��l�A��^�榡�Ʀr��
std::string DateString::operator/(char) const {
    if (filteredNumber.length() == 7) {
        return filteredNumber.substr(0, 3) + "/" +
            filteredNumber.substr(3, 2) + "/" +
            filteredNumber.substr(5, 2);
    }
    return "Invalid Format";
}
