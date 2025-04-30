#ifndef DATE_H
#define DATE_H

class Date
{
public:
    // �w�q�@�~�� 12 �Ӥ��
    static const unsigned int monthsPerYear = 12;

    // �غc�l�w�]
    explicit Date(int = 1, int = 1, int = 1900);

    void print() const;  // �L�X���

    ~Date();  // �Ѻc�l

    int getYear() const;  // ���o�~��

    // �ˬd��e����O�_����ε���t�@�Ӥ��
    bool isEarlierThanOrEqual(const Date&) const;

private:
    unsigned int month; 
    unsigned int day;   
    unsigned int year;

    // �Ψ��ˬd����O�_���ġ]�ھڦ~���M����ˬd�Ѽơ^
    unsigned int checkDay(int) const;
};
#endif


