#include <iostream>
#include <string>
#include "Air.h"
using namespace std;

flight_object::flight_object() {
    cout << "\n��������O flight_object\n";
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
    cout << "��������O ~flight_object\n";
}

void flight_object::display() {
    cout << "\n�i���檫��ơj\n";
    cout << "�W��: " << name << "\n";
    cout << "�s��: " << id << "\n";
    cout << "�r�p���H��: " << pilot << "\n";
    cout << "�Ѫo�q: " << kerosene << " ����\n";
}

airliner::airliner() {
    cout << "\n����l���O airliner \n";
    cout << "���ȤH��: ";
    cin >> passenger;
    cout << "�A�ȤH���ƥ�: ";
    cin >> service_person;
}

airliner::~airliner() {
    cout << "����l���O ~airliner\n";
}

void airliner::display_airliner() {
    cout << "�i�Ⱦ���ơj\n";
    cout << "���ȤH��: " << passenger << "\n";
    cout << "�A�ȤH���ƥ�: " << service_person << "\n";
}


cargo::cargo() {
    cout << "\n����l���O cargo\n";
    cout << "�ӯ����q: ";
    cin >> company;
    cout << "�̤j�����q(����): ";
    cin >> max_load;
}

cargo::~cargo() {
    cout << "����l���O ~cargo\n";
}

void cargo::display_cargo() {
    cout << "�i�f����ơj\n";
    cout << "�ӯ����q: " << company << "\n";
    cout << "�̤j�����q: " << max_load << " ����\n";
}
