#include <iostream>
#include <string>
#include "PhoneNumber.h"
using namespace std;

using namespace std;

// 格式化輸出：114/05/21
ostream& operator<<(ostream& output, const DateNumber& date) {
    output << date.year << "/" << date.month << "/" << date.day;
    return output;
}

// 從 "民國114年05月21號" 擷取數字
istream& operator>>(istream& input, DateNumber& date) {
    string temp;
    getline(input, temp);  // 讀取整行

    size_t yearPos = temp.find("年");
    size_t monthPos = temp.find("月");
    size_t dayPos = temp.find("號");

    if (yearPos == string::npos || monthPos == string::npos || dayPos == string::npos) {
        // 格式錯誤，清空數據或預設
        date.year = "000";
        date.month = "00";
        date.day = "00";
        return input;
    }

    size_t startYear = temp.find("民國");
    if (startYear == string::npos) {
        startYear = 0;
    }
    else {
        startYear += std::string("民國").length(); // 6 bytes 跳過 "民國"
    }

    date.year = temp.substr(startYear, yearPos - startYear);
    date.month = temp.substr(yearPos + 3, monthPos - (yearPos + 3));
    date.day = temp.substr(monthPos + 3, dayPos - (monthPos + 3));

    // 補零
    if (date.month.length() == 1) date.month = "0" + date.month;
    if (date.day.length() == 1) date.day = "0" + date.day;

    return input;
}

string DateNumber::getRaw() const {
    return year + month + day;
}