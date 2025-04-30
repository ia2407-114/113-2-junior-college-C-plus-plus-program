#include <iostream>
#include "Employee.h"
using namespace std;

Pet::Pet(const string& type, const string& name,
    const Date& birth, const Date& adopted)
    : petType(type), petName(name), birthDate(birth), adoptionDate(adopted)
{
    if (!validatePetAge(birth, adopted)) {
        throw invalid_argument("Invalid pet age or birth/adoption dates.");
    }
    
}

bool Pet::validatePetAge(const Date& birth, const Date& adopted) {
    if (adopted.getYear() < birth.getYear() ||
        (adopted.getYear() == birth.getYear() && adopted.getMonth() < birth.getMonth()) ||
        (adopted.getYear() == birth.getYear() && adopted.getMonth() == birth.getMonth() && adopted.getDay() < birth.getDay()))
        return false;

    int age = adopted.getYear() - birth.getYear();
    if (age > 20 || age < 0)
        return false;

    return true;
}

Pet::~Pet() {
    cout << "寵物的種類: " << petType << endl;
    cout << "寵物的名字 " << petName << endl;
    cout << "寵物的生日: ";
    birthDate.print();
    cout << "\n寵物的領養日期: ";
    adoptionDate.print();
    cout << endl;
}
