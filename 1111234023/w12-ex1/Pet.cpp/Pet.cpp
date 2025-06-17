#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

Pet::Pet(const string& name, const string& species,
    const Date& dateOfBirth, const Date& dateOfAdopt)
    : name(name), species(species), birthDate(dateOfBirth), adoptDate(dateOfAdopt)
{
    cout << "Pet建構子：" << name << ' ' << species << endl;
}

void Pet::print() const
{
    cout << name << ", " << species << "領養日期：";
    adoptDate.print();
    cout << "  出生日期：";
    birthDate.print();
    cout << endl;
}
//新增setPet
Pet& Pet::setPet(const string& n, const string& s)
{
    name = n;
    species = s;
    return *this;
}

Pet::~Pet()
{
    cout << "Pet解構子："
        << name << ", " << species << endl;
}