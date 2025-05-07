#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee
{
public:
    Employee(); // 預設建構函式

    // 設定函式（支援瀑布式函數呼叫）
    Employee& setFirstName(const std::string&);
    Employee& setLastName(const std::string&);
    Employee& setBirthDate(int, int, int);
    Employee& setHireDate(int, int, int);

    void print() const;

private:
    std::string firstName;
    std::string lastName;
    Date birthDate;
    Date hireDate;
};

#endif
