#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Apple";
    string str2 = "Banana";

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