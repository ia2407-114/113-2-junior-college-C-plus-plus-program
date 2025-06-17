#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

Pet::Pet(const string& name, const string& species,
    const Date& dateOfBirth, const Date& dateOfAdopt)
    : name(name), species(species), birthDate(dateOfBirth), adoptDate(dateOfAdopt)
{
    cout << "Pet�غc�l" << name << ' ' << species << endl;
}

void Pet::print() const
{
    cout << name << ", " << species << "��i���";
    adoptDate.print();
    cout << "  �X�ͤ��";
    birthDate.print();
    cout << endl;
}

Pet::~Pet()
{
    cout << "Pet�Ѻc�l"
        << name << ", " << species << endl;
}