#include "pet.h"
#include <iostream>

using namespace std;

pet::pet() {}

pet::pet(const std::string& t, const std::string& n, const Date& b, const Date& a)
    : type(t), name(n), birthDate(b), adoptDate(a) {}

//  每個 setter 都要 return *this
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
    cout << "種類：" << type << "，名字：" << name << endl;
    cout << "生日：";
    birthDate.print();
    cout << "領養日：";
    adoptDate.print();
    cout << endl;
}
