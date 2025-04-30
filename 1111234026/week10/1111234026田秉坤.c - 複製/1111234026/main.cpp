// 程式碼序號: 22196310
#include <iostream>
#include <stdexcept>
#include"Data.h"// 請在此引入必要的使用者標頭檔
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
    cout << "請輸入西元年:(1911-2100)\n";
    cin >> year;
    cout << "請輸入月份:\n";
    cin >> month;
    cout << "請輸入日期:\n";
    cin >> day ;

    // attempt to initialize t6 with invalid values
    try
    {
        Data t2(year, month, day); // all bad values specified

        cout << "你輸入的日期:\n Western:";
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