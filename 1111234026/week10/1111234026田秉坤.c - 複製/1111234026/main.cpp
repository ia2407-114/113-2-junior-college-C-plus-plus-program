// �{���X�Ǹ�: 22196310
#include <iostream>
#include <stdexcept>
#include"Data.h"// �Цb���ޤJ���n���ϥΪ̼��Y��
using namespace std;

int main()
{
    Data t1(1999 , 2 , 21);
    cout << "default data(1999 / 2 / 21):\n Western:";
    t1.printWestern();
    cout << "\n  ROC:";
    t1.printROC(); 
    cout << "\n\n";
    int year, month, day;
    cout << "�п�J�褸�~:(1911-2100)\n";
    cin >> year;
    cout << "�п�J���:\n";
    cin >> month;
    cout << "�п�J���:\n";
    cin >> day ;

    // attempt to initialize t6 with invalid values
    try
    {
        Data t2(year, month, day); // all bad values specified

        cout << "�A��J�����:\n Western:";
        t2.printWestern();

        cout << "\nROC:";
        t2.printROC();
        cout << endl;
    } // end try
    catch (invalid_argument& e)
    {
        cerr << "\n\nException" << e.what() << endl;
    } // end catch
} // end main//6310