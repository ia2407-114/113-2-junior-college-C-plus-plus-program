#include <iostream>
#include <string>
using namespace std;

class PetDog {
private:
    string name;
    int age;

public:

    PetDog(string dogName, int dogAge) {
        name = dogName;

        if (dogAge < 20 && dogAge >= 0) {
            age = dogAge;
        }
        else {
            cout << "�~�֥����b0��19�����A�N�~�ֳ]��0�C" << endl;
            age = 0;  
        }
    }

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
    string dogName;
    int dogAge;

    cout << "�п�J�����W�r: ";
    cin >> dogName;
    cout << "�п�J�����~��: ";
    cin >> dogAge;

    PetDog dog(dogName, dogAge);

    dog.printInfo();

    return 0;
}
