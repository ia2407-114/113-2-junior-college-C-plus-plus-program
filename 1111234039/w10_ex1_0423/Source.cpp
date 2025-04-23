// 程式碼序號: 22196310
#include <iostream>
#include <stdexcept>
 // 請在此引入必要的使用者標頭檔
#include"Date.h"
using namespace std;

int main()
{
    int y, m, d;
    Date data(1911);
    data.printUniversal();
    data.printStandard();
    cout << "輸入日期:";
    cin >> y >> m >> d;
    data.setDate(y, m, d);
    

   
}