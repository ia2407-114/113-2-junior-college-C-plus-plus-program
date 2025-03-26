#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    // 設定名字與年齡的函數 (set)
    void setNameAndAge(string dogName, int dogAge) {
        if (dogAge < 20) {  // 年齡合理性檢查
            name = dogName;
            age = dogAge;
        }
        else {
            cout << "年齡超過合理範圍，請輸入合理的年齡（小於20歲）。" << endl;
        }
    }

    // 取得名字的函數 (get)
    string getName() {
        return name;
    }

    // 取得年齡的函數 (get)
    int getAge() {
        return age;
    }

    // 列印名字與年齡的函數
    void printDogInfo() {
        cout << "狗的名字: " << name << endl;
        cout << "狗的年齡: " << age << " 歲" << endl;
    }
};

int main() {
    Dog myDog;
    string dogName;
    int dogAge;

    cout << "請輸入寵物狗的名字: ";
    cin >> dogName;
    cout << "請輸入寵物狗的年齡: ";
    cin >> dogAge;

    myDog.setNameAndAge(dogName, dogAge);
    myDog.printDogInfo();  // 顯示狗的名字與年齡

    return 0;
}
