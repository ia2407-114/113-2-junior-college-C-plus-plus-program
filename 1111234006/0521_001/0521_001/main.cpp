/*�D��1.�r�ꤧ���ϥ����Y�B��l�����G���̾ڬ���?*/
#include <iostream>   
#include <string>    
using namespace std;  
int main() {
    // �ŧi�|�� string �ܼơA���O�Ψ��x�s�n������r��
    string a = "apple";
    string b = "banana";
    string c = "apple";
    string d = "Apple";  // �`�N�j�p�g���t���I

    // ��� a �M b �����G
    cout << "Comparing \"" << a << "\" and \"" << b << "\":" << endl;

    // �۵����
    cout << "a == b: " << (a == b ? "true" : "false") << endl;

    // ���۵����
    cout << "a != b: " << (a != b ? "true" : "false") << endl;

    // �p�����]�ھڦr�嶶�� / ASCII �s�X���ǡ^
    cout << "a <  b: " << (a < b ? "true" : "false") << endl;

    // �j����
    cout << "a >  b: " << (a > b ? "true" : "false") << endl;

    // �p�󵥩�
    cout << "a <= b: " << (a <= b ? "true" : "false") << endl;

    // �j�󵥩�
    cout << "a >= b: " << (a >= b ? "true" : "false") << endl;

    // ��� a �M c�]�����ۦP���r��^
    cout << "\nComparing \"" << a << "\" and \"" << c << "\":" << endl;
    cout << "a == c: " << (a == c ? "true" : "false") << endl;

    // ��� a �M d�]a �O�p�g�Ad �O�j�g�AASCII �ȷ|�v�T���G�^
    cout << "\nComparing \"" << a << "\" and \"" << d << "\":" << endl;
    cout << "a < d: " << (a < d ? "true" : "false")
        << " (�]�� ASCII �� 'a' = 97�A�� 'A' = 65�A�ҥH 'a' > 'A')" << endl;

    return 0;  // �{�����`����
}

