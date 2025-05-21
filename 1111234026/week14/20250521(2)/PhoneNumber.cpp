#include <iostream>
#include <string>
#include "PhoneNumber.h"
using namespace std;

using namespace std;

// �榡�ƿ�X�G114/05/21
ostream& operator<<(ostream& output, const DateNumber& date) {
    output << date.year << "/" << date.month << "/" << date.day;
    return output;
}

// �q "����114�~05��21��" �^���Ʀr
istream& operator>>(istream& input, DateNumber& date) {
    string temp;
    getline(input, temp);  // Ū�����

    size_t yearPos = temp.find("�~");
    size_t monthPos = temp.find("��");
    size_t dayPos = temp.find("��");

    if (yearPos == string::npos || monthPos == string::npos || dayPos == string::npos) {
        // �榡���~�A�M�żƾکιw�]
        date.year = "000";
        date.month = "00";
        date.day = "00";
        return input;
    }

    size_t startYear = temp.find("����");
    if (startYear == string::npos) {
        startYear = 0;
    }
    else {
        startYear += std::string("����").length(); // 6 bytes ���L "����"
    }

    date.year = temp.substr(startYear, yearPos - startYear);
    date.month = temp.substr(yearPos + 3, monthPos - (yearPos + 3));
    date.day = temp.substr(monthPos + 3, dayPos - (monthPos + 3));

    // �ɹs
    if (date.month.length() == 1) date.month = "0" + date.month;
    if (date.day.length() == 1) date.day = "0" + date.day;

    return input;
}

string DateNumber::getRaw() const {
    return year + month + day;
}