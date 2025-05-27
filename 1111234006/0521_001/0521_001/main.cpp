/*題目1.字串之間使用關係運算子的結果的依據為何?*/
#include <iostream>   
#include <string>    
using namespace std;  
int main() {
    // 宣告四個 string 變數，分別用來儲存要比較的字串
    string a = "apple";
    string b = "banana";
    string c = "apple";
    string d = "Apple";  // 注意大小寫的差異！

    // 比較 a 和 b 的結果
    cout << "Comparing \"" << a << "\" and \"" << b << "\":" << endl;

    // 相等比較
    cout << "a == b: " << (a == b ? "true" : "false") << endl;

    // 不相等比較
    cout << "a != b: " << (a != b ? "true" : "false") << endl;

    // 小於比較（根據字典順序 / ASCII 編碼順序）
    cout << "a <  b: " << (a < b ? "true" : "false") << endl;

    // 大於比較
    cout << "a >  b: " << (a > b ? "true" : "false") << endl;

    // 小於等於
    cout << "a <= b: " << (a <= b ? "true" : "false") << endl;

    // 大於等於
    cout << "a >= b: " << (a >= b ? "true" : "false") << endl;

    // 比較 a 和 c（完全相同的字串）
    cout << "\nComparing \"" << a << "\" and \"" << c << "\":" << endl;
    cout << "a == c: " << (a == c ? "true" : "false") << endl;

    // 比較 a 和 d（a 是小寫，d 是大寫，ASCII 值會影響結果）
    cout << "\nComparing \"" << a << "\" and \"" << d << "\":" << endl;
    cout << "a < d: " << (a < d ? "true" : "false")
        << " (因為 ASCII 中 'a' = 97，而 'A' = 65，所以 'a' > 'A')" << endl;

    return 0;  // 程式正常結束
}

