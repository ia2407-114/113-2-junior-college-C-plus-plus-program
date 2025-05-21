#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("apple");
    string s2("banana");

    cout << "s1是\"" << s1 << "\"; s2是\"" << s2 << "\""
        << "\n\n比較s1與s2"
        << "\ns1 == s2 yields " << (s1 == s2 ? "V" : "X")
        << "\ns1 != s2 yields " << (s1 != s2 ? "V" : "X")
        << "\ns1 >  s2 yields " << (s1 > s2 ? "V" : "X")
        << "\ns1 <  s2 yields " << (s1 < s2 ? "V" : "X")
        << "\ns1 >= s2 yields " << (s1 >= s2 ? "V" : "X")
        << "\ns1 <= s2 yields " << (s1 <= s2 ? "V" : "X");

    string s3("abple");
    string s4("aanana");

    cout << "\n\ns3是\"" << s3 << "\"; s4是\"" << s4 << "\""
        << "\n\n比較s3與s4"
        << "\ns3 == s4 yields " << (s3 == s4 ? "V" : "X")
        << "\ns3 != s4 yields " << (s3 != s4 ? "V" : "X")
        << "\ns3 >  s4 yields " << (s3 > s4 ? "V" : "X")
        << "\ns3 <  s4 yields " << (s3 < s4 ? "V" : "X")
        << "\ns3 >= s4 yields " << (s3 >= s4 ? "V" : "X")
        << "\ns3 <= s4 yields " << (s3 <= s4 ? "V" : "X");
}