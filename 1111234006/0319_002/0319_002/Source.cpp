/*0319_002�D��2. �ЮھڤW����ӵ{���X�A�A���X�Ĥ@�D���\��A�ק令�L�X��l�~�֡B�ק�~��(���O�ݭn�P�_���Z��������0~99)�B
�C�L�X�s���~�֡C�A�إߥt�~��Ӧ�����ơA���O�t�d���o��ƩʧO�P�ק�ʧO�A
�i�ӯ���L�X��l�ʧO�B�ק�ʧO(�ݭn�Q�βĤ@�ӰƵ{�������e�P�_�O�_���j�g�^��r��'M'or'F')�B�C�L�X�s���ʧO�C*/

#include <iostream>
#include <cctype> // �Ω�r���P�_�����Y��
using namespace std;

// GradeBook ���O�w�q
class GradeBook
{
private:
    int age = 17;      // �ǥͪ��~�֡A��l�Ȭ� 17
    char gender = 'M'; // �ǥͪ��ʧO�A��l�Ȭ� 'M' (�k)

public:
    // �]�w�~�֪���ơA�u����~�֦b 0 �� 99 �����~����
    void setAge(int a) {
        if (a >= 0 && a <= 99) { // �ˬd�~�֬O�_����
            age = a; // �]�w�s���~��
        }
        else {
            cout << "�~�ֿ�J���~�A�п�J 0 �� 99 �������Ʀr�C" << endl; 
            //�p�G a �W�X�d��]�p�� 0 �Τj�� 99�^�A�h���� else �����{���X�C
        }
    }

    // ���o�~�֪����
    int getAge() const {
        return age; // �^�Ƿ�e���~��
    }

    // �]�w�ʧO����ơA�u�� 'M' �� 'F' ��ئ��Ŀﶵ
    void setGender(char g) {
        if (g == 'M' || g == 'F') { // �ˬd�ʧO�O�_�����Ħr��
            gender = g; // �]�w�s���ʧO
        }
        else {
            cout << "�ʧO��J���~�A�u���� 'M' �� 'F'�C" << endl; // ��ܿ��~�T��
        }
    }

    // ���o�ʧO�����
    char getGender() const {
        return gender; // �^�Ƿ�e���ʧO
    }
};

int main() {
    GradeBook myGradeBook; // �Ы� GradeBook ����

    // ��ܪ�l�~��
    cout << "��l�~��: " << myGradeBook.getAge() << endl;

    // ��J�s���~�֨öi���s
    int newAge;
    cout << "\n�п�J�s���~�� (0-99): ";
    cin >> newAge; // �N�ϥΪ̿�J���ƭȦs�J newAge �ܼ�
    myGradeBook.setAge(newAge); // ��s�~��
    cout << "��s�᪺�~��: " << myGradeBook.getAge() << endl; // ��ܧ�s�᪺�~��

    // ��ܪ�l�ʧO
    cout << "\n��l�ʧO: " << myGradeBook.getGender() << endl;

    // ��J�s���ʧO�öi���s
    char newGender;
    cout << "\n�п�J�s���ʧO ('M' �� 'F'): ";
    cin >> newGender; // Ū���ϥΪ̿�J���ʧO
    myGradeBook.setGender(newGender); // ��s�ʧO
    cout << "��s�᪺�ʧO: " << myGradeBook.getGender() << endl; // ��ܧ�s�᪺�ʧO

    return 0; // �{������
}
