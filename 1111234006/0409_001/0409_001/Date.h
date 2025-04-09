/*Date.h 0409�D��1.*/
#ifndef DATE_H
#define DATE_H

class Date {  // Date ���O�w�q�G�ΨӪ�ܤ@�Ӥ���]�~�B��B��^
private:
    int year;   // �~��
    int month;  // ���
    int day;    // ���

public:
    // �غc�l�G�i�H���w��l�ȡA�Y�����w�A�w�]�� 1990/1/1
    Date(int y = 1990, int m = 1, int d = 1);

    // �]�w����]�~�B��B��^
    void setDate(int y, int m, int d);

    // ��X�褸�榡����]�Ҧp�G2024/4/9�^
    void printGregorian() const;

    // ��X����榡����]�Ҧp�G����113�~4��9��^
    void printROC() const;
};

#endif // ���� Date ���O�w�q�����Y��

