#include "air.h"

// flight_object
flight_object::flight_object() {
    cout << "��������O flight_object ���غc���禡\n";
    cout << "��@�@�[���檫:\n";
    cout << "�W��: ";
    cin >> name;
    cout << "�s��: ";
    cin >> id;
    cout << "�r�p���H��: ";
    cin >> pilot;
    cout << "�Ѫo�q(����): ";
    cin >> kerosene;
}

flight_object::~flight_object() {
    cout << "��������O flight_object ���Ѻc���禡.\n";
}

void flight_object::display() {
    cout << "\n[���檫��T]\n";
    cout << "�W��: " << name << endl;
    cout << "�s��: " << id << endl;
    cout << "�r�p���H��: " << pilot << endl;
    cout << "�Ѫo�q(����): " << kerosene << endl;
}

// airliner
airliner::airliner() {
    cout << "\n����l���O airliner ���غc���禡\n";
    cout << "���ȤH��: ";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�: ";
    cin >> service_person;
}

airliner::~airliner() {
    cout << "����l���O airliner ���Ѻc���禡.\n";
}

void airliner::display_airliner() {
    cout << "[�j���Ⱦ���T]\n";
    cout << "���ȤH��: " << passenger << endl;
    cout << "�A�ȤH����: " << service_person << endl;
}

// cargo
cargo::cargo() {
    cout << "\n����l���O cargo ���غc���禡\n";
    cout << "�ӯ����q�W��: ";
    cin >> company;
    cout << "�̤j�����q(����): ";
    cin >> max_load;
}

cargo::~cargo() {
    cout << "����l���O cargo ���Ѻc���禡.\n";
}

void cargo::display_cargo() {
    cout << "[�f����T]\n";
    cout << "�ӯ����q: " << company << endl;
    cout << "�̤j�����q: " << max_load << " ����\n";
}
