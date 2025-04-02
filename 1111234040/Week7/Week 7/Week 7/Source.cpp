#include "dog.h"

int main() {
    string petNameInput;

    // 提示使用者輸入寵物名字
    cout << "請輸入寵物的名字: ";
    getline(cin, petNameInput);

    // 創建 Pet 物件
    Pet myPet(petNameInput);

    // 顯示寵物資訊
    myPet.displayMessage();

    return 0;
}