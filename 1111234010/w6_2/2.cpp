#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    // 建構子，初始化名字與年齡
    Dog(string dogName, int dogAge) {
        if (dogAge < 20) {  // 年齡合理性檢查
            name = dogName;
            age = dogAge;
        }
        else {
            name = "未知";
            age = 0;
            cout << "年齡超過合理範圍，已將年齡設為 0，名字設為 '未知'。" << endl;
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
    string dogName;
    int dogAge;

    cout << "請輸入寵物狗的名字: ";
    cin >> dogName;
    cout << "請輸入寵物狗的年齡: ";
    cin >> dogAge;

    Dog myDog(dogName, dogAge);  // 使用建構子設定狗的名字與年齡
    myDog.printDogInfo();  // 顯示狗的名字與年齡

    return 0;
}
