#include<iostream>
#include<string>
using namespace std;

class D
{
private:
	int age;
	string name;
public:
	explicit D(string n, int a) //可輸入預設值
	{
		name = n;
		age = a;
	}
	void setage(int a)
	{
		if (a < 20 && a >= 1)
		{
			age = a;
		}
		else
		{
			cout << "輸入錯誤";
		}
	}
	int getage()
	{
		return age;
	}
	void setname(string n)
	{
		name = n;
	}
	string getname()
	{
		return name;
	}
	void display()
	{
		cout << "dog age :" << getage() << endl;
		cout << "dog name :" << getname() << endl;
	}
};

int main()
{
	D dog("wunwun", 3);
	int a;
	string n;

	cout << "input age: ";
	cin >> a;

	cout << "input name: ";
	cin >> n;

	dog.setage(a);
	dog.setname(n);
	dog.display();
}