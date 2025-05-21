#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "apple";
    string b = "banana";
    string c = "apple";
    string d = "Apple";   // 注意首字母大寫

    cout << "Comparing \"" << a << "\" and \"" << b << "\":" << endl;
    cout << "a == b: " << (a == b ? "true" : "false") << endl;
    cout << "a != b: " << (a != b ? "true" : "false") << endl;
    cout << "a <  b: " << (a < b ? "true" : "false") << endl;
    cout << "a >  b: " << (a > b ? "true" : "false") << endl;
    cout << "a <= b: " << (a <= b ? "true" : "false") << endl;
    cout << "a >= b: " << (a >= b ? "true" : "false") << endl;

    cout << "\nComparing \"" << a << "\" and \"" << c << "\":" << endl;
    cout << "a == c: " << (a == c ? "true" : "false") << endl;

    cout << "\nComparing \"" << a << "\" and \"" << d << "\":" << endl;
    cout << "a < d: " << (a < d ? "true" : "false") << " (因為 'a' > 'A' in ASCII)" << endl;

    return 0;
}
