#include <iostream>
#include <string>
#include <iomanip> // ����p���I

using namespace std;

enum BodyType {
    SLIM,
    NORMAL,
    HEAVY,
    FAT,
    TOOFAT
};

BodyType getBodyType(float bmi) {
    if (bmi < 18.5)
        return SLIM;
    else if (bmi < 24)
        return NORMAL;
    else if (bmi < 27)
        return HEAVY;
    else if (bmi < 30)
        return FAT;
    else
        return TOOFAT;
}

int main() {
    string name;
    float weight, height_cm, height_m, bmi;
    BodyType type;

    // ��J���
    cout << "�п�J�m�W: ";
    getline(cin, name);

    cout << "�п�J�魫 (����): ";
    cin >> weight;

    cout << "�п�J���� (����): ";
    cin >> height_cm;

    // �N�����ର����
    height_m = height_cm / 100.0f;

    // �p�� BMI
    bmi = weight / (height_m * height_m);
    type = getBodyType(bmi);

    // ��ܵ��G
    cout << "\n===== ���d���p���R =====\n";
    cout << "�m�W: " << name << endl;
    cout << "BMI: " << fixed << setprecision(2) << bmi << endl;
    cout << "�����q�{��: ";

    switch (type) {
    case SLIM:
        cout << "�魫�L��\n" << endl;
        break;
    case NORMAL:
        cout << "�魫�b���`�d��\n" << endl;
        break;
    case HEAVY:
        cout << "�魫�L��\n" << endl;
        break;
    case FAT:
        cout << "�魫���תέD\n" << endl;
        break;
    case TOOFAT:
        cout << "�魫���תέD\n";
        cout << "�魫���תέD\n"; 
        break;
    }

    return 0;
}
