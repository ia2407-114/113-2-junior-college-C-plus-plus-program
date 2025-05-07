
#include <iostream>
#include "Pet.h"
using namespace std;

bool checkDate(int year_birth, int month_birth, int day_birth, int year_adopt, int month_adopt, int day_adopt);

int main()
{
	string name, species;
	int year_birth, month_birth, day_birth;
	int year_adopt, month_adopt, day_adopt;
	bool con = true, check = false;

	while (con) {
		cout << "�п�J�������W�r�G";
		cin >> name;
		cout << "�п�J�����������G";
		cin >> species;
		cout << "�п�J�u�X�ͤ���v\n";
		cout << "�褸�~�G";
		cin >> year_birth;
		cout << "����G";
		cin >> month_birth;
		cout << "����G";
		cin >> day_birth;

		cout << endl;

		cout << "�п�J�u��i����v\n";
		cout << "�褸�~�G";
		cin >> year_adopt;
		cout << "����G";
		cin >> month_adopt;
		cout << "����G";
		cin >> day_adopt;

		check = checkDate(year_birth, month_birth, day_birth, year_adopt, month_adopt, day_adopt);
		if (!check) {
			continue;
		}

		cout << endl;

		try {
			Date birth(year_birth, month_birth, day_birth);
			Date adopt(year_adopt, month_adopt, day_adopt);

			Pet dog(name, species, birth, adopt);

			cout << endl;
			dog.print();
		}
		catch (exception& e) {
			cout << e.what();
		}

		cout << "\n�O�_�~���J�U�@�����(�O = 1�A�_ = 0)�G";
		cin >> con;
	}
}

bool checkDate(int year_birth, int month_birth, int day_birth, int year_adopt, int month_adopt, int day_adopt) {
	if (year_birth <= year_adopt) {
		if (year_birth == year_adopt && month_birth > month_adopt) { //�~���@�� ����X��
			cout << "��i�������p�󪯪����X�ͤ��!\n";
			return false;
		}

		if (year_birth == year_adopt && month_birth == month_adopt && day_birth > day_adopt) { //�~���@�� ����@�� ����X��
			cout << "��i�餣��p�󪯪����X�ͤ�!\n";
			return false;
		}
	}
	else { // �~���X��
		cout << "��i�~������p�󪯪����X�ͦ~��!\n";
		return false;
	}

	if (year_adopt - year_birth > 20) {
		cout << "��������W�L20��\n";
		return false;
	}

	return true;
}
