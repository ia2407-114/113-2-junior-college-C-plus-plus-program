#include <iostream>
#include <string>

using namespace std;

class PetDog {
public:
    PetDog(string dogName, int dogAge) {
        name = dogName;
        if (dogAge < 0) {
            cout << "�~�֤��X�z" << endl;
        }
        else if (dogAge >= 20) {
            cout << "�~�֤��X�z" << endl;
        }
        else {
            age = dogAge;
        }
    }

    void setDogs(string dogName, int dogAge) {
        name = dogName;
        if (dogAge < 0) {
            cout << "�~�֤��X�z" << endl;
        }
        else if (dogAge >= 20) {
            cout << "�~�֤��X�z" << endl;
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
        cout << "�d�������W�r: " << name << ", �~��: " << age << endl;
    }
private:
    string name;
    int age;
};

int main() {

    string inputName;
    int inputAge;

    cout << "�п�J�d�������W�r: ";
    cin >> inputName;
    cout << "�п�J�d�������~��: ";
    cin >> inputAge;

    PetDog myDog(inputName, inputAge);

    myDog.printDogsInfo();

    cout << "�A���]�w�d�������W�r: ";
    cin >> inputName;
    cout << "�A���]�w�d�������~��: ";
    cin >> inputAge;

    myDog.setDogs(inputName, inputAge);
    myDog.printDogsInfo();

    return 0;
}
