#include <iostream>
#include <string>
using namespace std;
#include "air.h"

flight_object::flight_object()
{
    cout << "��������Oflight_object���غc���禡\n";
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

// flight_object���O�Ѻc���禡
flight_object::~flight_object()
{
    cout << "��������Oflight_object���Ѻc���禡.\n";
}

// ��ܭ��檫�����
void flight_object::display()
{
    cout << "\n���檫�W��:" << name << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
}

// airliner���O�غc���禡,�]�w�j���Ⱦ������  
airliner::airliner()
{
    cout << "\n����l���Oairliner���غc���禡\n";
    cout << "���ȤH��:";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;
}

// airliner���O�Ѻc���禡
airliner::~airliner()
{
    cout << "����l���Oairliner���Ѻc���禡.\n";
}

// ��ܤj���Ⱦ������
void airliner::display_airliner()
{
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
}



cargo::cargo()
{
    cout << "\n����l���Ocargoliner���غc���禡\n";
    cout << "���ȤH��:";
    cin >> passenger;

    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;

    cout << "���ݤ��q:";
    cin >> company;

    cout << "�̤j�����q:\n";
    cin >> max_weight;

}

cargo::~cargo()
{
    cout << "����l���Ocargoliner���Ѻc���禡.\n";
}

void cargo::display_cargoliner()
{
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
    cout << "���ݤ��q:" << company << endl;
    cout << "�̤j�����q:" << max_weight << endl;

}