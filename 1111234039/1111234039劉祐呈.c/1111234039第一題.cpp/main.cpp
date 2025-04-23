// 程式碼序號: 22196310
#include <iostream>
#include <stdexcept>
 // 請在此引入必要的使用者標頭檔
#include"Time.h"
using namespace std;

int main()
{
    int y, m, d;
    Time data(1911);
    data.printUniversal();
    data.printStandard();
    cout << "輸入日期:";
    cin >> y >> m >> d;
    data.setTime(y, m, d);
    data.printUniversal();
    data.printStandard();

    /*Time t1; // all arguments defaulted
    Time t2(2); // hour specified; minute and second defaulted
    Time t3(21, 34); // hour and minute specified; second defaulted 
    Time t4(12, 25, 42); // hour, minute and second specified

    cout << "Constructed with:\n\nt1: all arguments defaulted\n  ";
    t1.printUniversal(); // 00:00:00
    cout << "\n  ";
    t1.printStandard(); // 12:00:00 AM

    cout << "\n\nt2: hour specified; minute and second defaulted\n  ";
    t2.printUniversal(); // 02:00:00
    cout << "\n  ";
    t2.printStandard(); // 2:00:00 AM

    cout << "\n\nt3: hour and minute specified; second defaulted\n  ";
    t3.printUniversal(); // 21:34:00
    cout << "\n  ";
    t3.printStandard(); // 9:34:00 PM

    cout << "\n\nt4: hour, minute and second specified\n  ";
    t4.printUniversal(); // 12:25:42
    cout << "\n  ";
    t4.printStandard(); // 12:25:42 PM

    // attempt to initialize t6 with invalid values
    try
    {
        Time t5(27, 74, 99); // all bad values specified
    } // end try
    catch (invalid_argument& e)
    {
        cerr << "\n\nException while initializing t5: " << e.what() << endl;
    } // end catch*/
} // end main//6310