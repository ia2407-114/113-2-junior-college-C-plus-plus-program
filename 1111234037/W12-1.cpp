#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum BodyType { SLIM, NORMAL, HEAVY, FAT, TOO_FAT };

BodyType getBodyType(float bmi) {
    if (bmi < 18.5) return SLIM;
    else if (bmi < 24) return NORMAL;
    else if (bmi < 27) return HEAVY;
    else if (bmi < 30) return FAT;
    else return TOO_FAT;
}

void bmicompute(string name, float height, float weight) {
    float bmi = weight / pow(height / 100.0, 2);

    cout << name << "�� BMI=" << bmi << "�A�����q�{�סG";

    switch (getBodyType(bmi)) {
    case SLIM: cout << "slim"; break;
    case NORMAL: cout << "normal"; break;
    case HEAVY: cout << "heavy"; break;
    case FAT: cout << "fat"; break;
    case TOO_FAT: cout << "too fat"; break;
    }

    cout << endl;
}

int main() {
    string name;
    float height, weight;

    cout << "�п�J�m�W: ";
    getline(cin, name);

    cout << "�п�J����(cm): ";
    cin >> height;

    cout << "�п�J�魫(kg): ";
    cin >> weight;

    bmicompute(name, height, weight);

    return 0;
}
