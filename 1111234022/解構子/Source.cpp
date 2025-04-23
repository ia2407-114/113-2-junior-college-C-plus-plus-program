// 程式碼序號: 22196310
#include <iostream>
#include <stdexcept>
#include"date.h"
 // 請在此引入必要的使用者標頭檔
using namespace std;

int main()
{
    int y, m, d;
    
    cout << "輸入年 月 日: " << endl;
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