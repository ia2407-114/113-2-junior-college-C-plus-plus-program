// flight_object.cpp
#include <iostream>
#include "flight_object.h"
using namespace std;

// flight_object ���O
flight_object::flight_object() {
    cout << "��������O flight_object ���غc���禡\n";
    cout << "��@�@�[���檫:\n�W��:"; cin >> name;
    cout << "�s��:"; cin >> id;
    cout << "�r�p���H��:"; cin >> pilot;
    cout << "�Ѫo�q(����):"; cin >> kerosene;
}

flight_object::~flight_object() {
    cout << "��������O flight_object ���Ѻc���禡.\n";
}

void flight_object::display() const {
    cout << "\n���檫�W��: " << name << endl;
    cout << "�s��: " << id << endl;
    cout << "�r�p���H��: " << pilot << endl;
    cout << "�Ѫo�q(����): " << kerosene << endl;
}

// airliner ���O
airliner::airliner() {
    cout << "\n����l���O airliner ���غc���禡\n";
    cout << "���ȤH��:"; cin >> passenger;
    cout << "�A�ȤH���ƥ�:"; cin >> service_person;
}

airliner::~airliner() {
    cout << "����l���O airliner ���Ѻc���禡.\n";
}

void airliner::display_airliner() const {
    cout << "���ȤH��: " << passenger << endl;
    cout << "�A�ȤH�����ƥ�: " << service_person << endl;
}

// cargo ���O
cargo::cargo() {
    cout << "\n����l���O cargo ���غc���禡\n";
    cout << "�ӯ����q:"; cin >> company;
    cout << "�̤j�����q(����):"; cin >> max_load;
}

cargo::~cargo() {
    cout << "����l���O cargo ���Ѻc���禡.\n";
}

void cargo::display_cargo() const {
    cout << "�ӯ����q: " << company << endl;
    cout << "�̤j�����q: " << max_load << " ����" << endl;
}
