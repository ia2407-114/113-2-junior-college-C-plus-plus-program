// �� 9.4: Time.h
// Time ���O�A�]�t�㦳�w�]�Ѽƪ��غc�l
// �����禡����@�b Time.cpp ��

// �קK���ƥ]�t���Y��
#ifndef date_h
#define date_h

// Date ���O�w�q
class Date
{
public:
    explicit Date(int = 1990, int = 1, int = 1); // �w�]�غc�l
    ~Date(); // �Ѻc�l

    // �]�w�禡
    void setDate(int, int, int); // �]�w�~�B��B��
    void setYear(int);  // �]�w�~��
    void setMonth(int); // �]�w���
    void setDay(int);   // �]�w���

    // ���o�禡
    unsigned int getYear() const;  // �^�Ǧ~��
    unsigned int getMonth() const; // �^�Ǥ��
    unsigned int getDay() const;   // �^�Ǥ��

    void printUniversal() const; // �L�X�褸�榡
    void printStandard() const;  // �L�X����榡

private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
}; // Date ���O����

#endif
