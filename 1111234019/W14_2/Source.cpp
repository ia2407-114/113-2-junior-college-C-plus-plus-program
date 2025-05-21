#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Apple";
    string str2 = "Banana";
    // ���X�U�r�ꪺ�e�T�Ӧr��
// str1 = "Apple" �� A(0), p(1), p(2)
    char ch1 = str1[0];  // 'A'
    char ch2 = str1[1];  // 'p'
    char ch3 = str1[2];  // 'p'

    // str2 = "Banana" �� B(0), a(1), n(2)
    char ch4 = str2[0];  // 'B'
    char ch5 = str2[1];  // 'a'
    char ch6 = str2[2];  // 'n'

    // �L�X�C�Ӧr���Ψ������ ASCII ��
    cout << str1 << " ���Ĥ@�Ӧr��: " << ch1 << " (ASCII: " << int(ch1) << ")" << endl;
    cout << str1 << " ���ĤG�Ӧr��: " << ch2 << " (ASCII: " << int(ch2) << ")" << endl;
    cout << str1 << " ���ĤT�Ӧr��: " << ch3 << " (ASCII: " << int(ch3) << ")\n" << endl;

    cout << str2 << " ���Ĥ@�Ӧr��: " << ch4 << " (ASCII: " << int(ch4) << ")" << endl;
    cout << str2 << " ���ĤG�Ӧr��: " << ch5 << " (ASCII: " << int(ch5) << ")" << endl;
    cout << str2 << " ���ĤT�Ӧr��: " << ch6 << " (ASCII: " << int(ch6) << ")\n" << endl;
    // ����������r��j�p�]�N���r�嶶�ǡ^
    cout << "�������r��: " << endl;
    if (str1 < str2) {
        cout << str1 << " < " << str2 << endl;
    }
    else if (str1 > str2) {
        cout << str1 << " > " << str2 << endl;
    }
    else {
        cout << str1 << " == " << str2 << endl;
    }

    cout << "\n--- �v�r������L�{ ---" << endl;

    // �v�r�����A��X���@�Ӧr���M�w�F�j�p
    int minLen = min(str1.length(), str2.length());
    bool differenceFound = false;

    for (int i = 0; i < minLen; ++i) {
        char c1 = str1[i];
        char c2 = str2[i];

        cout << "�� " << i + 1 << " �Ӧr��: ";
        cout << "'" << c1 << "' (ASCII: " << int(c1) << ") vs ";
        cout << "'" << c2 << "' (ASCII: " << int(c2) << ") �� ";

        if (c1 < c2) {
            cout << c1 << " < " << c2 << " �� �ҥH " << str1 << " < " << str2 << endl;
            differenceFound = true;
            break;
        }
        else if (c1 > c2) {
            cout << c1 << " > " << c2 << " �� �ҥH " << str1 << " > " << str2 << endl;
            differenceFound = true;
            break;
        }
        else {
            cout << "�ۦP" << endl;
        }
    }

    if (!differenceFound) {
        // �e�����@�ˡA�n�a���רӨM�w
        if (str1.length() < str2.length()) {
            cout << "�e���r�����@�ˡA�� " << str1 << " ���׸��u �� " << str1 << " < " << str2 << endl;
        }
        else if (str1.length() > str2.length()) {
            cout << "�e���r�����@�ˡA�� " << str1 << " ���׸��� �� " << str1 << " > " << str2 << endl;
        }
        else {
            cout << "�����ۦP" << endl;
        }
    }

    return 0;
}