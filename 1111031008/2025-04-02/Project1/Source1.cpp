#include <iostream>
#include "Header.h"
//題目1. 利用上一次的題目2，將寵物類別與主程式分離;
//並且將類別的介面與實作在分離成兩個檔案，並且加以修改;
//當寵物名字長度超過10字元時，則擷取前10個字元當作他的姓名，最後將寵物的姓名印出。
int main() {
    std::string inputName;
    int inputAge;

    std::cout << "請輸入狗的名字: ";
    std::getline(std::cin, inputName);

    std::cout << "請輸入狗的年齡: ";
    std::cin >> inputAge;

    Dog myDog(inputName, inputAge);

    myDog.displayInfo();

    return 0;
}
