#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// �C�|���A�GBMI ����
enum BMICategory {
    SLIM, NORMAL, HEAVY, FAT, TOOFAT
};

int main() {
    const int SIZE = 3;
    struct employee {
        string name;
        int height;
        int weight;
    };

    struct employee member[SIZE];

    // ��J
    cout << "�п�J " << SIZE << " ����u���m�W�B����(����)�B�魫(����)�G\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\n�� " << (i + 1) << " ����u�G\n";
        cout << "�m�W�G";
        cin >> member[i].name;
        cout << "����(����)�G";
        cin >> member[i].height;
        cout << "�魫(����)�G";
        cin >> member[i].weight;
    }

    // �B�z BMI �P����
    for (int i = 0; i < SIZE; i++) {
        float bmi = member[i].weight / pow(member[i].height / 100.0, 2);
        BMICategory category;

        // �P�_ BMI ����
        if (bmi < 18.5)
            category = SLIM;
        else if (bmi < 24)
            category = NORMAL;
        else if (bmi < 27)
            category = HEAVY;
        else if (bmi < 30)
            category = FAT;
        else
            category = TOOFAT;

        // ��X
        cout << "\n�m�W�G" << member[i].name
            << "\tBMI�G" << bmi
            << "\t�魫���A�G";

        switch (category) {
        case SLIM:
            cout << "slim�]�L���^";
            break;
        case NORMAL:
            cout << "normal�]���`�^";
            break;
        case HEAVY:
            cout << "heavy�]�L���^";
            break;
        case FAT:
            cout << "fat�]���תέD�^";
            break;
        case TOOFAT:
            cout << "toofat�]�����תέD�^";
            break;
        }

        cout << endl;
    }

    return 0;
}