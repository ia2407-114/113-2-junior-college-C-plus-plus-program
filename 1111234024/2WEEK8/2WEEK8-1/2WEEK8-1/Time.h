//�D��1. �ק�W��Time.h�BTime.cpp�Bfig09_06.cpp���{���X�A�إߤ@�ӥi�H���ϥΪ̳z�L��L��J��~�B��B��A���O�L�X�褸�P�������A���{���X�ݹF���H�U����:
//1. �Шϥ����O�w�q�A�w�q�����ХΡ���H��k��
//(��H��k�N�O�����P��@����)
//2. ��������гz�L�غc�l�]�w�P�]�w�w�]��(�w�]�Ȭ�1990�~1��1��)
//(�褸�~���d�򤶩�1911 - 2050)
//3. �����P�_���e�O�_���T�A�Ҧp2017 / 03 / 32�����~�����
// Fig. 9.4: Time.h
// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header 
#ifndef DATE_H
#define DATE_H

class Date
{
public:
	explicit Date(int = 1990, int = 1, int = 1);

	void setDate(int, int, int);
	void setYear(int);
	void setMonth(int);
	void setDay(int);

	unsigned int getYear() const;
	unsigned int getMonth() const;
	unsigned int getDay() const;

	void printUniversal() const; 
	void printStandard() const; 
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
};

#endif