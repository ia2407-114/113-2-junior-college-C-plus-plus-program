//�D��1: �ק�W���{���X�A���O�إߥD�{���B���O�����ɡB���O��@�ɡA�A�[�J�@�ӷs���f��(cargo)���O�A�~�ӭ��澹(flight_object)���O�A���B�~��Ʀۤv���غc�l�B�Ѻc�l�P�ݩ�:�ӯ����q�B�̤j�����q
//�H�Φ������(display_cargo()�C�D�{������J�f���P�j���Ⱦ�����ƫ�A�N�L�̪��Ҧ����(�]�A���澹�����)�@�֦L�X

#include <iostream>
#include <string>
#include "Air.h"

using namespace std;

int main() {
    cout << "\n=== �إߤ@�[�Ⱦ� ===\n";
    airliner a1;
    a1.display();
    a1.display_airliner();

    cout << "\n=== �إߤ@�[�f�� ===\n";
    cargo c1;
    c1.display();
    c1.display_cargo();

    return 0;
}
