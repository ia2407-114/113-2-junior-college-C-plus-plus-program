#include <iostream>
#include "pet.h"
#include "date.h"
using namespace std;

Pet::Pet(const string& name, const string& species,
    const Date& dateOfBirth, const Date& dateOfAdopt)
    : name(name), species(species), birthDate(dateOfBirth), adoptDate(dateOfAdopt)
{
    cout << "Pet�غc�l�G" << name << ' ' << species << endl;
}


//�s�W�r����start
Pet& Pet::setPetName(const string& n, const string& s)
{
    name = n;
    species = s;

    return *this;
}
//�s�W�r����end

void Pet::print() const
{
    cout << name << ", " << species << "��i����G";
    adoptDate.print();
    cout << "  �X�ͤ���G";
    birthDate.print();
    cout << endl;
}

Pet::~Pet()
{
    cout << "Pet�Ѻc�l�G"
        << name << ", " << species << endl;
}