#include "air.h"

int main() {
    // ��J�j���Ⱦ����
    cout << "\n===== ��J�j���Ⱦ���� =====\n";
    airliner air1;

    // ��J�f�����
    cout << "\n===== ��J�f����� =====\n";
    cargo car1;

    // ��ܤj���Ⱦ�������
    cout << "\n===== �j���Ⱦ��������� =====\n";
    air1.display();           // ��� flight_object �����
    air1.display_airliner();  // ��� airliner ���M�ݸ��

    // ��ܳf��������
    cout << "\n===== �f���������� =====\n";
    car1.display();           // ��� flight_object �����
    car1.display_cargo();     // ��� cargo ���M�ݸ��

    return 0;
}
