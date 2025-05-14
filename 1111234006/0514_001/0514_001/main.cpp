/*�D��1:�аѦҤW����ӵ{���X�A�N�W�@�ӵ{���קאּ:
(1) �z�L��L��J�m�W�B�魫�B����
(2) �ѦҤW�W�{���A�[�J�C�|���A�Pswitch���O�A�C�L�X�ϥΪ̪��m�W�BBMI�B
    �����q�{��(slim,normal,heavy,fat,toofat)*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// ���u��Ƶ��c
struct employee {
    string name = "";
    int height = 0;
    int weight = 0;
};

// �C�|���A�G�]�ϥ� enum class�^
enum class BMIStatus {
    slim,
    normal,
    heavy,
    fat,
    toofat
};

// �P�_ BMI ���A
BMIStatus getBMIStatus(float bmi);

int main() {
    employee person;

    // ��J���
    cout << "�п�J�m�W�G";
    cin >> person.name;
    cout << "�п�J�����]cm�^�G";
    cin >> person.height;
    cout << "�п�J�魫�]kg�^�G";
    cin >> person.weight;

    // �p�� BMI
    float bmi = person.weight / pow(person.height / 100.0, 2);

    // �P�_ BMI ���A
    BMIStatus status = getBMIStatus(bmi);

    // ��ܵ��G
    cout << "\n" << person.name << " �� BMI �� " << bmi << "�A�����q�{�׬��G";

    // �� switch �P�_�C�|���G
    switch (status) {
    case BMIStatus::slim:
        cout << "slim�]�L���^" << endl;
        break;
    case BMIStatus::normal:
        cout << "normal�]���`�^" << endl;
        break;
    case BMIStatus::heavy:
        cout << "heavy�]�L���^" << endl;
        break;
    case BMIStatus::fat:
        cout << "fat�]���תέD�^" << endl;
        break;
    case BMIStatus::toofat:
        cout << "toofat�]���שέ��תέD�^" << endl;
        break;
    default:
        cout << "�������A" << endl;
    }

    return 0;
}

// �^�� BMI �������C�|���A
BMIStatus getBMIStatus(float bmi) {
    if (bmi < 18.5)
        return BMIStatus::slim;
    else if (bmi < 24)
        return BMIStatus::normal;
    else if (bmi < 27)
        return BMIStatus::heavy;
    else if (bmi < 30)
        return BMIStatus::fat;
    else
        return BMIStatus::toofat;
}
