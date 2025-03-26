#include <iostream>
#include <string>
using namespace std;

// Dog class definition
class Dog {
public:
    // Constructor to initialize name and age
    Dog(string dogName, int dogAge) {
        setName(dogName);
        setAge(dogAge);
    }

    // Set the dog's name
    void setName(string dogName) {
        name = dogName;
    }

    // Get the dog's name
    string getName() const {
        return name;
    }

    // Set the dog's age with validation
    void setAge(int dogAge) {
        if (dogAge >= 0 && dogAge < 20) {
            age = dogAge;
        }
        else {
            cout << "Invalid age! Please enter an age between 0 and 19." << endl;
            age = 0; // Default to 0 if invalid
        }
    }

    // Get the dog's age
    int getAge() const {
        return age;
    }

    // Print dog's information
    void printInfo() const {
        cout << "Dog's Name: " << name << "\nDog's Age: " << age << endl;
    }

private:
    string name;
    int age = 0; // Default age is 0
};

int main() {
    string dogName;
    int dogAge;

    // Input dog's name
    cout << "Enter dog's name: ";
    getline(cin, dogName);

    // Input dog's age
    cout << "Enter dog's age: ";
    cin >> dogAge;

    // Create Dog object using constructor
    Dog myDog(dogName, dogAge);

    cout << endl;
    myDog.printInfo(); // Display dog's details

    return 0;
}
