#include "airliner.h"

airliner::airliner() {
    cout << "\n����l���O airliner ���غc���禡\n";
    cout << "���ȤH��: "; cin >> passenger;
    cout << "�A�ȤH���ƥ�: "; cin >> service_person;
}

airliner::~airliner() {
    cout << "����l���O airliner ���Ѻc���禡.\n";
}

void airliner::display_airliner() {
    display(); // �I�s�����O display()
    cout << "���ȤH��: " << passenger << endl;
    cout << "�A�ȤH���ƥ�: " << service_person << endl;
}
