#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// �C�|���A�GBMI ����
enum BMIStatus { SLIM, NORMAL, HEAVY, FAT, TOO_FAT };

// ���c���A�G���u���
struct Employee {
    string name;
    int height;
    int weight;
};

// �禡�쫬
float calculateBMI(int height, int weight);
BMIStatus getBMIStatus(float bmi);
void printBMIResult(const Employee& emp, float bmi, BMIStatus status);

int main() {
    int count;
    cout << "�п�J�H��: ";
    cin >> count;
    cin.ignore(); // �M������Ÿ�

    Employee* members = new Employee[count];

    // ��ƿ�J
    for (int i = 0; i < count; ++i) {
        cout << "\n��J�� " << i + 1 << " ����u���:\n";
        cout << "�m�W: ";
        getline(cin, members[i].name);
        cout << "���� (cm): ";
        cin >> members[i].height;
        cout << "�魫 (kg): ";
        cin >> members[i].weight;
        cin.ignore(); // �M������
    }

    // BMI �p��P��X
    cout << "\n======= ���G =======\n";
    for (int i = 0; i < count; ++i) {
        float bmi = calculateBMI(members[i].height, members[i].weight);
        BMIStatus status = getBMIStatus(bmi);
        printBMIResult(members[i], bmi, status);
    }

    delete[] members; // ����O����
    return 0;
}

// �p�� BMI
float calculateBMI(int height, int weight) {
    return weight / pow(height / 100.0, 2);
}

// �ھ� BMI �Ǧ^�C�|���O
BMIStatus getBMIStatus(float bmi) {
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

// �ھڪ��A�L�X������r
void printBMIResult(const Employee& emp, float bmi, BMIStatus status) {
    cout << emp.name << " �� BMI �� " << bmi << "�A�������G";

    switch (status) {
    case SLIM:     cout << "�魫�L�� (slim)"; break;
    case NORMAL:   cout << "���`�魫 (normal)"; break;
    case HEAVY:    cout << "�魫�L�� (heavy)"; break;
    case FAT:      cout << "���תέD (fat)"; break;
    case TOO_FAT:  cout << "�����תέD (toofat)"; break;
    }
    cout << endl;
}
