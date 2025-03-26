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
            cout << "�~�֥����b0��19�����C" << endl;
        }
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void printInfo() {
        cout << "�����W�r: " << name << endl;
        cout << "�����~��: " << age << endl;
    }
};

int main() {
    PetDog dog;

    string dogName;
    cout << "�п�J�����W�r: ";
    cin >> dogName;
    dog.setName(dogName);

    int dogAge;
    cout << "�п�J�����~��: ";
    cin >> dogAge;
    dog.setAge(dogAge);

    dog.printInfo();

    return 0;
}
