#include <iostream>
#include "flight.h"
using namespace std;

flight_object::flight_object()
{
    cout << "\n\n��������Oflight_object���غc���禡\n";
    cout << "��@�@�[���檫:\n";
    cout << "�W��:";
    cin >> name;
    cout << "�s��:";
    cin >> id;
    cout << "�r�p���H��:";
    cin >> pilot;
    cout << "�Ѫo�q(����):";
    cin >> kerosene;
}

flight_object::~flight_object()
{
    cout << "��������Oflight_object���Ѻc���禡.\n";
}

void flight_object::display()
{
    cout << "\n���檫�W��:" << name << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
}

airliner::airliner()
{
    cout << "\n����l���Oairliner���غc���禡\n";
    cout << "���ȤH��:";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;
}

airliner::~airliner()
{
    cout << "����l���Oairliner���Ѻc���禡.\n";
}

void airliner::display_airliner()
{
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
}

cargo::cargo()
{
    cout << "\n����l���Ocargo���غc���禡\n";
    cout << "�̤j�����q:";
    cin >> max_weight;
    cout << "�ӯ����q:";
    cin >> company;
}

cargo::~cargo()
{
    cout << "����l���Ocargo���Ѻc���禡.\n";
}

void cargo::display_cargo()
{
    cout << "�̤j�����q:" << max_weight << endl;
    cout << "�ӯ����q:" << company << endl;
}
