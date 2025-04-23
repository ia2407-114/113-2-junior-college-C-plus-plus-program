#ifndef DATE_H
#define DATE_H

class Date
{
public:
    // �w�]�غc�l 
    explicit Date(int = 1990, int = 1, int = 1);

     /* < �Ѻc�l�x������> */
    ~Date();

    // �]�w������
    void setDate(int, int, int);

    // ���O�]�w�~�B��B��
    void setYear(int);
    void setMonth(int);
    void setDay(int);

    // ���o�~�B��B��
    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;

    // �L�X�褸
    void printUniversal() const;

    // �L�X����
    void printStandard() const;

private:  // �p�������ܼ�
    unsigned int year;
    unsigned int month;
    unsigned int day;
};
#endif
