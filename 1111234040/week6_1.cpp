#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
   
    void setName(string dogName) {
        name = dogName;
    }

    string getName() const {
        return name;
    }

    void setAge(int dogAge) {
        if (dogAge >= 0 && dogAge < 20) {
            age = dogAge;
        }
        else {
            cout << "Invalid age! Please enter an age between 0 and 19." << endl;
        }
    }

    int getAge() const {
        return age;
    }

    
    void printInfo() const {
        cout << "Dog's Name: " << name << "\nDog's Age: " << age << endl;
    }

private:
    string name;
    int age = 0; 
};

int main() {
    Dog myDog;
    string dogName;
    int dogAge;

    cout << "Enter dog's name: ";
    getline(cin, dogName);
    myDog.setName(dogName);

    cout << "Enter dog's age: ";
    cin >> dogAge;
    myDog.setAge(dogAge);

    cout << endl;
    myDog.printInfo(); 

    return 0;
}
