// �{���X�Ǹ�: 22196310
#include <iostream>
#include <stdexcept>
#include"date.h"
 // �Цb���ޤJ���n���ϥΪ̼��Y��
using namespace std;

int main()
{
    int y, m, d;
    
    cout << "��J�~ �� ��: " << endl;
    cin >> y >> m >> d;
    try
    {
        date data(y, m, d); // all bad values specified

    } // end try
    catch (invalid_argument& e)
    {
        cerr << "\n\nException while initializing t5: " << e.what() << endl;
        return 1;
    } // end catch
      
} // end main//6310