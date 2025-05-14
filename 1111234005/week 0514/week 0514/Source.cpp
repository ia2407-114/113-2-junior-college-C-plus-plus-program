#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct employee {
    string name;
    int height;  // ����
    int weight;  // ����
};


enum BMILevel {
    SLIM, NORMAL, HEAVY, FAT, TOO_FAT
};

void bmicompute(struct employee[], int);
BMILevel getBMILevel(float bmi); // �^�ǦC�|��

int main() {
    int num;
    cout << "�п�J���u�H�ơG";
    cin >> num;
    cin.ignore();  // ��������šA�קK�v�T getline()

    employee* member = new employee[num]; 

    for (int i = 0; i < num; ++i) {
        cout << "��J�� " << i + 1 << " ����u���m�W�G";
        getline(cin, member[i].name);

        cout << "��J�����]�����^�G";
        cin >> member[i].height;

        cout << "��J�魫�]����^�G";
        cin >> member[i].weight;

        cin.ignore();  
    }

    bmicompute(member, num);

    delete[] member;  
    return 0;
}


BMILevel getBMILevel(float bmi) {
    if (bmi < 18.5)
        return SLIM;
    else if (bmi < 24)
        return NORMAL;
    else if (bmi < 27)
        return HEAVY;
    else if (bmi < 30)
        return FAT;
    else
        return TOO_FAT;
}


void bmicompute(struct employee data[], int size) {
    for (int i = 0; i < size; i++) {
        float bmi = data[i].weight / pow(data[i].height / 100.0, 2);
        BMILevel level = getBMILevel(bmi);

        cout << data[i].name << " ���魫 = " << data[i].weight
            << " ����\tBMI = " << bmi << "\t";

        switch (level) {
        case SLIM:
            cout << "�魫�����Gslim�]�魫�L���^\n";
            break;
        case NORMAL:
            cout << "�魫�����Gnormal�]���`�d��^\n";
            break;
        case HEAVY:
            cout << "�魫�����Gheavy�]�魫�L���^\n";
            break;
        case FAT:
            cout << "�魫�����Gfat�]���תέD�^\n";
            break;
        case TOO_FAT:
            cout << "�魫�����Gtoofat�]��/���תέD�^\n";
            break;
        }
    }
}
