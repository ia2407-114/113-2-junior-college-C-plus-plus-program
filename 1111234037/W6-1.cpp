#include <iostream>
#include <string>

using namespace std;

class PetDog {
public:
    PetDog(string dogName, int dogAge) {
        name = dogName;
        if (dogAge < 0) {
            cout << "年齡不合理" << endl;
        }
        else if (dogAge >= 20) {
            cout << "年齡不合理" << endl;
        }
        else {
            age = dogAge;
        }
    }

    void setDogs(string dogName, int dogAge) {
        name = dogName;
        if (dogAge < 0) {
            cout << "年齡不合理" << endl;
        }
        else if (dogAge >= 20) {
            cout << "年齡不合理" << endl;
        }
        else {
            age = dogAge;
        }
    }

    string getDogsName() {
        return name;
    }

    int getDogsAge() {
        return age;
    }

    void printDogsInfo() {
        cout << "寵物狗的名字: " << name << ", 年齡: " << age << endl;
    }
private:
    string name;
    int age;
};

int main() {

    string inputName;
    int inputAge;

    cout << "請輸入寵物狗的名字: ";
    cin >> inputName;
    cout << "請輸入寵物狗的年齡: ";
    cin >> inputAge;

    PetDog myDog(inputName, inputAge);

    myDog.printDogsInfo();

    cout << "再次設定寵物狗的名字: ";
    cin >> inputName;
    cout << "再次設定寵物狗的年齡: ";
    cin >> inputAge;

    myDog.setDogs(inputName, inputAge);
    myDog.printDogsInfo();

    return 0;
}
