/*0326 �D��1: �إߤ@�ӥi�H���ϥΪ̳z�L��L��J�B�]�w(set)�H�Ψ��o(get)�d�������W�r(string name)�Φ~��(int age)��C++�{���A�{���X�ݺ���:
1.�n���]�w(set)�B���o(get)�B�C�L����k(�������)
2.�]�w(set)������Ƹ̻ݧP�_�����~�֬O�_�X�z(<20)*/

/*�D��2: �ӤW�D�A�ШϥΫغc�l(constructor)�إߤ@���d�������O�A�i�H���ϥΪ̦b�ŧi�s������(�d����)�ɡA�����W�r�P�~�֡A
�åi�z�L��L��J�á��������]�w�d�����ݩ�(�m�W�B�~��)���{���C*/

#include <iostream>
#include <string> // �ϥ� C++ �зǦr�����O
using namespace std;

// DOG ���O�w�q
class DOG
{
public:
    // �غc�l: �b�إߪ���ɪ�����l�ƪ����W�r�P�~��
    explicit DOG(string name, int age)
    {
        DogName = name;
        DogAge = age;
    }

    // �]�w�����W�r�P�~��
    void setDogName_and_Age(string name, int age)
    {
        if (age < 20) // �ˬd�~�֬O�_�X�z
        {
            DogName = name;
            DogAge = age;
        }
        else
            cout << "It's too old!!! Invalid data!" << endl;
    }

    // ���o�����W�r
    string getDogName() const
    {
        return DogName;
    }

    // ���o�����~��
    int getDogAge() const
    {
        return DogAge;
    }

    // ��ܪ�����T
    void displayMessage() const
    {
        // �ץ��榡�ƿ�X
        cout << "This is my dog named " << getDogName() << "!" << endl;
        cout << "My dog is now " << getDogAge() << " years old!" << endl;
    }

private:
    string DogName; // �s�񪯪��W�r
    int DogAge; // �s�񪯪��~��
};

// main �禡�}�l�{������
int main()
{
    string nameOfDog; // �x�s�����W�r
    int age = 12; // �w�]�����~��

    // �ϥΫغc�l�إ� DOG ����ê�l���ݩ�
    DOG myDog1("Lucky", age);

    // ��ܪ�l��
    cout << "Initial dog name is: " << myDog1.getDogName() << endl;
    cout << "Initial dog age is: " << myDog1.getDogAge() << endl;

    // ���ܨϥΪ̿�J�����W�r
    cout << "\nPlease enter the dog name:" << endl;
    getline(cin, nameOfDog);

    // ���ܨϥΪ̿�J�����~��
    cout << "\nPlease enter the dog age:" << endl;
    cin >> age;

    // �]�w�����W�r�P�~��
    myDog1.setDogName_and_Age(nameOfDog, age);

    cout << endl; // ��X�Ŧ�
    myDog1.displayMessage(); // ��ܪ�����T

    return 0;
} // main �禡����
