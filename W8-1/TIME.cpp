#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

class ConcreteTime : public Time {
public:
    ConcreteTime(int y = 1990, int m = 1, int d = 1) {
        setTime(y, m, d);
    }

    void setTime(int y, int m, int d) override {
        if (y < 1911 || y > 2050) {
            throw invalid_argument("�~����������1911��2050����");
        }
        if (m < 1 || m > 12) {
            throw invalid_argument("�����������1��12����");
        }
        if (d < 1 || d > daysInMonth(y, m)) {
            throw invalid_argument("������X�k");
        }
        year = y;
        month = m;
        day = d;
    }

    void printGregorian() const override {
        cout << "�褸���: " << year << "/" << month << "/" << day << endl;
    }

    void printRepublican() const override {
        cout << "������: " << (year - 1911) << "/" << month << "/" << day << endl;
    }

private:
    int daysInMonth(int y, int m) {
        if (m == 2) {
          
            return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) ? 29 : 28;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11) {
            return 30;
        }
        return 31;
    }
};
