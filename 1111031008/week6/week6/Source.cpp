#include <iostream>
#include <string>
using namespace std;

class PetDog {
private:
    string name;
    int age;

public:

    void setName(string dogName) {
        name = dogName;
    }

    void setAge(int dogAge) {
        if (dogAge < 20 && dogAge >= 0) {
            age = dogAge;
        }
        else {
            cout << "年齡必須在0到19之間。" << endl;
        }
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void printInfo() {
        cout << "狗的名字: " << name << endl;
        cout << "狗的年齡: " << age << endl;
    }
};

int main() {
    PetDog dog;

    string dogName;
    cout << "請輸入狗的名字: ";
    cin >> dogName;
    dog.setName(dogName);

    int dogAge;
    cout << "請輸入狗的年齡: ";
    cin >> dogAge;
    dog.setAge(dogAge);

    dog.printInfo();

    return 0;
}
