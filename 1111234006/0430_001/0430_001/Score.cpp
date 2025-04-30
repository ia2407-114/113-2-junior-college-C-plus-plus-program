/*����0430-�D��1. �ק�W�������ӵ{���X�A�קאּpet���O�A�إߤ@�ӥi�H���ϥΪ̳z�L��L��J:
�h���d���������B�W�r�B�ͤ�λ�i�骺�{���C
�إ�Pet���O�PDate���O�A�èϥ�date���O�A�{���X���ݹF���H�U����:

1.�n���غc�l�B�Ѻc�l�B����ˬd����k(���)
2.�θѺc�l�L�X�d���Ҧ���ơA
3.����ˬd��ƻݧP�_�d�����~�֬O�_�X�z�A�H�Υͤ餣�j���i��C(�����~�֤���0~20���A����g�k������)
4.Pet���O�������ϥ�date���O�@�����Ʀ���(�ϥ�composition class)�C*/

#include <iostream>     
#include <vector>       
#include "pet.h"      
#include "Date.h" 
using namespace std;

int main() {
    vector<pet> pets;  // vector �e���i�s�h���d��

    while (true) {
        string type, name;
        int bMonth, bDay, bYear; //�w�q�T�� int ���O���ܼơA�s���y�ͤ�B�z�]Birth date�^
        int aMonth, aDay, aYear; //�w�q�T�� int ���O���ܼơA�s���y��i��A�z�]Adopt date�^

        cout << "\n�п�J�d�������]��J 0 �����^�G";
        cin >> type;
        if (type == "0") break;  // �Y��J "0"�A���X�`���A�����{��

        cout << "�п�J�d���W�r�G";
        cin >> name;

        cout << "�п�J�ͤ�]�榡�G�� �� �~�^�G";
        cin >> bMonth >> bDay >> bYear;
        Date birthDate(bMonth, bDay, bYear);

        cout << "�п�J��i��]�榡�G�� �� �~�^�G";
        cin >> aMonth >> aDay >> aYear;
        Date adoptDate(aMonth, aDay, aYear);  // �ϥο�J����i���T�إ� Date ����

        // �ˬd�ͤ�A�O�_�ߩ��i��A�p�G�O�A��ܿ��~�T���ín�D���s��J
        if (!birthDate.isEarlierThanOrEqual(adoptDate)) {
            cout << "���~�G�ͤ餣��ߩ��i��A�Э��s��J�C\n";
            continue;  // �Y���󤣲ŦX�A�~�����U�@����J
        }

        // �p���d�����~�֡A(��i�骺�~��)��(�h�X�ͦ~��)
        int age = adoptDate.getYear() - birthDate.getYear();

        // �ˬd�~�֬O�_�b�]0 �� 20 ���^�d��
        if (type == "dog" && (age < 0 || age > 20)) {
            cout << "���~�G�����~�֥������� 0 �� 20 �������I\n";
            continue;
        }

        // �p�G�@���X�k�A�N�Ӱ��d���[�J�� pets �V�q��
        pets.emplace_back(type, name, birthDate, adoptDate);
    }

    cout << "\n�Ҧ��d����T�p�U�G\n";
    for (const auto& p : pets) {
        p.print(); 
    }

    return 0; 
}
