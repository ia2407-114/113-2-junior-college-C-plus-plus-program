#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

// Constructor to initialize employee data
Employee::Employee(const string& fName, const string& lName, const Date& bDate, const Date& hDate)
    : firstName(fName), lastName(lName), birthDate(bDate), hireDate(hDate) {  // 使用初始化列表初始化const成員
    cout << "員工物件已建立：" << firstName << " " << lastName << endl;
}

// Set employee data from user input
void Employee::setEmployeeFromInput() {
    cout << "請輸入員工的名字：";
    cin >> firstName;
    cout << "請輸入員工的姓氏：";
    cin >> lastName;
    cout << "請輸入員工的生日：" << endl;
    birthDate.setDateFromInput();  // 使用birthDate對象調用setDateFromInput()
    cout << "請輸入員工的到職日期：" << endl;
    hireDate.setDateFromInput();  // 使用hireDate對象調用setDateFromInput()
}

// Print employee details using 'this' pointer and waterfall style
void Employee::print() const {
    cout << "員工名稱：" << firstName << " " << lastName << endl;
    cout << "生日："; birthDate.print(); cout << endl;
    cout << "到職日期："; hireDate.print(); cout << endl;
}

// Destructor for employee
Employee::~Employee() {
    cout << "員工物件已銷毀：" << firstName << " " << lastName << endl;
}
