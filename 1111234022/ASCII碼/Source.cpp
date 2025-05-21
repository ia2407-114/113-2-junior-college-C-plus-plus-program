#include<iostream>
#include<string>
using namespace std;


int main()
{
	string s1 = "apple";
	string s2 = "apricot";


	if (s1 > s2)
		cout << s1 << "、" << s2 << "--->" << s1 << "比較大";
	if (s1 == s2)
		cout << s1 << "、" << s2 << "--->" << "一樣大";
	if (s1 < s2)
		cout << s1 << "、" << s2 << "--->" << s2 << "比較大";




}