#include <iostream>
#include <stdexcept>
#include"Header.h"
// 請在此引入必要的使用者標頭檔
using namespace std;

int main()
{
    Time data(1911); // all arguments defaulted
    
    int y, m, d;
    cout << "input year month day\n  ";
    cin >> y >> m >> d;
    data.setymd(y, m, d);
}