#include <iostream>
#include <string>
#include"n.h"
using namespace std;
int main() {
    cout << "=== 輸入城樓資料（Castle，多重繼承） ===\n";
    Castle myCastle;

    myCastle.compute_volume();   // 顯示三個體積
    myCastle.compute_height();   // 顯示總高度

    return 0;
}
