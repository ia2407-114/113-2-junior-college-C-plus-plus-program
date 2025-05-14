/*�D��1:�аѦҤW����ӵ{���X�A�N�W�@�ӵ{���קאּ:
(1) �z�L��L��J�m�W�B�魫�B����
(2) �ѦҤW�W�{���A�[�J�C�|���A�Pswitch���O�A�C�L�X�ϥΪ̪��m�W�BBMI�B�����q�{��(slim, normal, heavy, fat, toofat)*/


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// �C�|���A�G�w�q
enum BMI_Category {
    SLIM,
    NORMAL,
    HEAVY,
    FAT,
    TOO_FAT
};

// �ϥΪ̸�Ƶ��c
struct Person {
    string name="";
    int height=0; // ����
    int weight=0; // ����
};

// �ھ� BMI �Ȧ^�Ǥ���
BMI_Category getBMICategory(float bmi) {
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

int main() {
    Person user;

    // �ϥΪ̿�J
    cout << "�п�J�m�W�G";
    getline(cin, user.name);

    cout << "�п�J�����]�����^�G";
    cin >> user.height;

    cout << "�п�J�魫�]����^�G";
    cin >> user.weight;

    // �p�� BMI
    float bmi = (float)user.weight / (float)pow(user.height / 100.0, 2);

    // ���o BMI ����
    BMI_Category category = getBMICategory(bmi);

    // ��X���G
    cout << "\n�i���G�j\n";
    cout << "�m�W�G" << user.name << endl;
    cout << "BMI�G" << bmi << endl;
    cout << "���骬�p�G";

    // ��ܤ������
    switch (category) {
    case SLIM:
        cout << "�魫�L��" << endl;
        break;
    case NORMAL:
        cout << "�魫���`" << endl;
        break;
    case HEAVY:
        cout << "�魫�L��" << endl;
        break;
    case FAT:
        cout << "�魫���תέD" << endl;
        break;
    case TOO_FAT:
        cout << "�魫�L�תέD" << endl;
        break;
    default:
        cout << "�L�k�P�_" << endl;
    }

    return 0;
}
