//����114�~05��27��
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class date 
{
private:
	string year;
	string month;
	string day;
	
public:
	friend istream& operator>>(istream& in, date& D) 
	{
		in.ignore(5);
		in >> setw(3) >> D.year;
		in.ignore(2);
		in >> setw(2) >> D.month;
		in.ignore(2);
		in >> setw(2) >> D.day;

		return in;
	}
	friend ostream& operator<<(ostream& out, date& D) 
	{
		out << D.year << D.month << D.day << "\n"<< D.year << "/" << D.month << "/" << D.day << endl;
		return out;
	}
};

int main()
{
	string s1;
	date yy;
	cout << "��J����X�~�X��X�� (ex.����114�~05��21��):\n";
	cin >> s1;
	cout << s1.substr(4, 3) << s1.substr(9, 2) << s1.substr(13, 2) << "\n";
	cout << s1.substr(4, 3) << "/" << s1.substr(9, 2) << "/" << s1.substr(13, 2) << "\n";

	cout << "��J����X�~�X��X�� (ex.����114�~05��21��):" << endl;
	cin >> yy;
	cout << yy << endl ;
}