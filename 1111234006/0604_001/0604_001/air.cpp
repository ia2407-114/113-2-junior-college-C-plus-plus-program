#include <iostream>
#include <string>
#include "air.h"
using namespace std;

flight_object::flight_object() {
    cout << "��������Oflight_object���غc���禡\n";
    cout << "��@�@�[���檫:\n";
    cout << "�W��:"; cin >> name;
    cout << "�s��:"; cin >> id;
    cout << "�r�p���H��:"; cin >> pilot;
    cout << "�Ѫo�q(����):"; cin >> kerosene;
}  // �����O�A�غc�l

flight_object::~flight_object() {
    cout << "��������Oflight_object���Ѻc���禡.\n";
} // ���A�Ѻc�l

void flight_object::display() {
    cout << "\n���檫�W��:" << name << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
}  /* ��ܭ��澹�y�@�Ρz��� */

airliner::airliner() {
    cout << "\n����l���Oairliner���غc���禡\n";
    cout << "���ȤH��:"; cin >> passenger;
    cout << "�A�ȤH�����ƥ�:"; cin >> service_person;
} //�l���O�A�غc�l

airliner::~airliner() {
    cout << "����l���Oairliner���Ѻc���禡.\n";
} // �l�A�Ѻc�l

void airliner::display_airliner() {
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
}  /* ��� airliner �M�ݸ�� */

cargo::cargo() {
    cout << "\n����l���Ocargo���غc���禡\n";
    cout << "�ӯ����q:"; cin >> rental_company;
    cout << "�̤j�����q(����):"; cin >> max_load;
}   //�l�A�غc�l

cargo::~cargo() {
    cout << "����l���Ocargo���Ѻc���禡.\n";
}  //�l�A�Ѻc�l

void cargo::display_cargo() {
    cout << "�ӯ����q:" << rental_company << endl;
    cout << "�̤j�����q(����):" << max_load << endl;
}  /* ��� cargo �M�ݸ�� */