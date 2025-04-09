/*source.cpp 0409�D��1.*/
/*�D��1.�إߤ@�ӥi�H���ϥΪ̳z�L��L��J��~�B��B��A���O�L�X�褸�P�������A
���{���X�ݹF���H�U����:
1. �Шϥ����O�w�q�A�w�q�����Х�"��H��k��(�����P��@����)
2. ��������гz�L�غc�l�]�w�P�]�w�w�]�� (�w�]�Ȭ�1990�~1��1��) (�褸�~���d�򤶩�1911-2050)
3. �����P�_���e�O�_���T�A�Ҧp2017/03/32�����~����� */
#include <iostream>
#include <stdexcept> //�ޤJ�зǨҥ~�B�z�禡�w�A�Ω���~�B�z
#include "Date.h" 
using namespace std;

int main() {
    int y, m, d;

    cout << "�п�J�褸�~�G";
    cin >> y;
    cout << "�п�J����G";
    cin >> m;
    cout << "�п�J����G";
    cin >> d;

    try { 
        Date date(y, m, d); 
        date.printGregorian(); // ��ܦ褸����]Gregorian ����^
        date.printROC(); // ��ܥ������]ROC ����^
    }
    /*�o�O�ҥ~�B�z���}�l�϶��A��ܳo�̪��{���X�i��|�o�Ϳ��~
  �]�Ҧp�ϥΪ̿�J�D�k������^�A�p�G�X���|���� `catch` �h�B�z�C*/

    catch (invalid_argument& e) {
        cerr << "���~�G " << e.what() << endl;
    }
    /*��ϥΪ̿�J��������X�z�ɡA�{�����|�������A
    �ӬO�|���X���~�T�����ϥΪ̬ݡC*/

    return 0;
}
