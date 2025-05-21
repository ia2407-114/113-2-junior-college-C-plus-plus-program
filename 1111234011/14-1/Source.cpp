#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("abc");
	string s2("Abc");
	string s3("acd");

	cout << s1 << s2 << s3
		<< "\ns2 > s1 is " << (s2 < s1 ? "true" : "false")
		<< "\ns3 > s1 is " << (s3 > s1 ? "true" : "false");
}