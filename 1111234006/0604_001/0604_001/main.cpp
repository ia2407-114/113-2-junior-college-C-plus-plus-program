/*�D��1: ���O�إߥD�{���B���O�����ɡB���O��@�ɡA�A�[�J�@�ӷs��: �f��(cargo)���O�A�~�ӭ��澹(flight_object)���O�A���B�~��Ʀۤv���غc�l�B�Ѻc�l
  �P�ݩ�:�ӯ����q�B�̤j�����q�A�H�Φ������(display_cargo()�C�D�{������J:�f�� & �j���Ⱦ�����ơA�ñN�L�̪��Ҧ����(�]�A���澹�����)�@�֦L�X*/
#include <iostream>
#include <string>
#include "air.h"  
using namespace std;

int main() {
    cout << "�п�J�j���Ⱦ����:\n";
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n�п�J�f�����:\n";
    cargo cargo1;
    cargo1.display();
    cargo1.display_cargo();

    return 0;
}