/*dog.h 0402�D��1.*/
/* �����ܼƳq�`�g�b .h�]���Y�ɡ^��*/
#include <iostream>
#include <string>
using namespace std;
class Dog
{
private:
    //�w�q�����ܼ�
    string name; // �x�s�����W�r
    int age; // �x�s�����~��
public:
    Dog(string Name, int Age);
    void setInfo(string Name, int Age);
    string getName() const;
    int getAge() const;
    void displayMessage() const;
};
