#include "pet.h"
#include <iostream>

using namespace std;

pet::pet() {}

pet::pet(const std::string& t, const std::string& n, const Date& b, const Date& a)
    : type(t), name(n), birthDate(b), adoptDate(a) {}

//  �C�� setter ���n return *this
pet& pet::setType(const std::string& t) {
    this->type = t;
    return *this;
}

pet& pet::setName(const std::string& n) {
    this->name = n;
    return *this;
}

pet& pet::setBirth(const Date& b) {
    this->birthDate = b;
    return *this;
}

pet& pet::setAdopt(const Date& a) {
    this->adoptDate = a;
    return *this;
}

void pet::print() const {
    cout << "�����G" << type << "�A�W�r�G" << name << endl;
    cout << "�ͤ�G";
    birthDate.print();
    cout << "��i��G";
    adoptDate.print();
    cout << endl;
}
