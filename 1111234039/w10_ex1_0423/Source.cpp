// �{���X�Ǹ�: 22196310
#include <iostream>
#include <stdexcept>
 // �Цb���ޤJ���n���ϥΪ̼��Y��
#include"Date.h"
using namespace std;

int main()
{
    int y, m, d;
    Date data(1911);
    data.printUniversal();
    data.printStandard();
    cout << "��J���:";
    cin >> y >> m >> d;
    data.setDate(y, m, d);
    

   
}