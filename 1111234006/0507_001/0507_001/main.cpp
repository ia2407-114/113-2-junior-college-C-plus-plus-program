/*0507-�D��1. �إߤ@�ӥi�H���ϥΪ̳z�L��L��J�W�r�B�ͤ�λ�i�骺�{���C
�{���X�ݭn�ϥΡythis���Сz�A�Q�Ρy�r�����z����ƩI�s�覡�N���u(�d��)�m�B�W�P��ƦC�X�C*/
#include <iostream>     
#include <vector>       
#include "pet.h"      
#include "Date.h" 
using namespace std;

int main() {

    vector<pet> pets;  // vector �e���i�s�h���d��

    while (true) {
        string type, name;
        int bMonth, bDay, bYear;
        int aMonth, aDay, aYear;

        cout << "\n�п�J�d�������]��J 0 �����^�G";
        cin >> type;
        if (type == "0") break;

        cout << "�п�J�d���W�r�G";
        cin >> name;

        Date birthDate;
        cout << "�п�J�ͤ�]�榡�G�� �� �~�^�G";
        cin >> bMonth >> bDay >> bYear;
        birthDate.setMonth(bMonth).setDay(bDay).setYear(bYear);

        Date adoptDate;
        cout << "�п�J��i��]�榡�G�� �� �~�^�G";
        cin >> aMonth >> aDay >> aYear;
        adoptDate.setMonth(aMonth).setDay(aDay).setYear(aYear);

        if (!birthDate.isEarlierThanOrEqual(adoptDate)) {
            cout << "���~�G�ͤ餣��ߩ��i��A�Э��s��J�C\n";
            continue;
        }

        int age = adoptDate.getYear() - birthDate.getYear();
        if (type == "dog" && (age < 0 || age > 20)) {
            cout << "���~�G�����~�֥������� 0 �� 20 �������I\n";
            continue;
        }

        //  �ϥΡy�r�����z�I�s�覡 + this ����
        pet p;
           p.setType(type)
            .setName(name)
            .setBirth(birthDate)
            .setAdopt(adoptDate);

        pets.push_back(p);
    }

    cout << "\n�Ҧ��d����T�p�U�G\n";
    for (const auto& p : pets) {
        p.print();
    }

    return 0;
}
