#include "flight_object.h"

flight_object::flight_object() {
    cout << "\n��������O flight_object ���غc���禡\n";
    cout << "�W��: "; cin >> name;
    cout << "�s��: "; cin >> id;
    cout << "�r�p���H��: "; cin >> pilot;
    cout << "�Ѫo�q(����): "; cin >> kerosene;
}

flight_object::~flight_object() {
    cout << "��������O flight_object ���Ѻc���禡.\n";
}

void flight_object::display() {
    cout << "\n���檫�W��: " << name << endl;
    cout << "�s��: " << id << endl;
    cout << "�r�p���H��: " << pilot << endl;
    cout << "�Ѫo�q(����): " << kerosene << endl;
}
