#include <iostream>
#include "Pet.h"
using namespace std;

int main() {
    string petName;

    // 提示輸入寵物姓名
    cout << "請輸入寵物的姓名：" << endl;
    getline(cin, petName);

    // 建立 Pet 物件
    Pet myPet(petName);

    // 輸出處理後的寵物姓名
    cout << "寵物的姓名是：" << myPet.getName() << endl;

    return 0;
}
