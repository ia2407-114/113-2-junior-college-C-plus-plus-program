#include <iostream>
#include <string>
using namespace std;
#include "flight_classes.h"

using namespace std;

flight_object::flight_object() {
    cout << "\n�إ߭��澹:\n";
    cout << "�W��: "; cin >> name;
    cout << "�s��: "; cin >> id;
    cout << "�r�p���H��: "; cin >> pilot;
    cout << "�Ѫo�q(����): "; cin >> kerosene;
}

flight_object::~flight_object() {
    cout << "��������O flight_object ���Ѻc���禡\n";
}

void flight_object::display() {
    cout << "[���澹] �W��: " << name
        << ", �s��: " << id
        << ", �r�p���H��: " << pilot
        << ", �Ѫo�q: " << kerosene << " ����" << endl;
}

// ===== airliner ���O =====
airliner::airliner() {
    cout << "\n�إߤj���Ⱦ�:\n";
    cout << "���ȤH��: "; cin >> passenger;
    cout << "�A�ȤH���ƥ�: "; cin >> service_person;
}

airliner::~airliner() {
    cout << "����l���O airliner ���Ѻc���禡\n";
}

void airliner::display_airliner() {
    display();
    cout << "���ȤH��: " << passenger
        << ", �A�ȤH���ƥ�: " << service_person << endl;
}

// ===== cargo ���O =====
cargo::cargo() {
    cout << "\n�إ߳f��:\n";
    cout << "�ӯ����q: "; cin >> company;
    cout << "�̤j�����q(����): "; cin >> max_load;
}

cargo::~cargo() {
    cout << "����l���O cargo ���Ѻc���禡\n";
}

void cargo::display_cargo() {
    display();
    cout << "�ӯ����q: " << company
        << ", �̤j�����q: " << max_load << " ����" << endl;
}
