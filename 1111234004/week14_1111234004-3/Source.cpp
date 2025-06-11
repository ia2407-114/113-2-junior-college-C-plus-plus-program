#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("apple");
    string s2("banana");

    cout << "s1¬O\"" << s1 << "\"; s2¬O\"" << s2 << "\""
        << "\n\n¤ñ¸ûs1»Ps2"
        << "\ns1 == s2 yields " << (s1 == s2 ? "V" : "X")
        << "\ns1 != s2 yields " << (s1 != s2 ? "V" : "X")
        << "\ns1 >  s2 yields " << (s1 > s2 ? "V" : "X")
        << "\ns1 <  s2 yields " << (s1 < s2 ? "V" : "X")
        << "\ns1 >= s2 yields " << (s1 >= s2 ? "V" : "X")
        << "\ns1 <= s2 yields " << (s1 <= s2 ? "V" : "X");

    string s3("abple");
    string s4("aanana");

    cout << "\n\ns3¬O\"" << s3 << "\"; s4¬O\"" << s4 << "\""
        << "\n\n¤ñ¸ûs3»Ps4"
        << "\ns3 == s4 yields " << (s3 == s4 ? "V" : "X")
        << "\ns3 != s4 yields " << (s3 != s4 ? "V" : "X")
        << "\ns3 >  s4 yields " << (s3 > s4 ? "V" : "X")
        << "\ns3 <  s4 yields " << (s3 < s4 ? "V" : "X")
        << "\ns3 >= s4 yields " << (s3 >= s4 ? "V" : "X")
        << "\ns3 <= s4 yields " << (s3 <= s4 ? "V" : "X");
}