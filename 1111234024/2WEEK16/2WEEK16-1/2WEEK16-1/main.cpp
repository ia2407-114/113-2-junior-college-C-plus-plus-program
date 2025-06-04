//題目1: 修改上面程式碼，分別建立主程式、類別介面檔、類別實作檔，再加入一個新的貨機(cargo)類別，繼承飛行器(flight_object)類別，並額外具備自己的建構子、解構子與屬性:承租公司、最大乘載量
//以及成員函數(display_cargo()。主程式中輸入貨機與大型客機的資料後，將他們的所有資料(包括飛行器的資料)一併印出

#include <iostream>
#include <string>
#include "Air.h"

using namespace std;

int main() {
    cout << "\n=== 建立一架客機 ===\n";
    airliner a1;
    a1.display();
    a1.display_airliner();

    cout << "\n=== 建立一架貨機 ===\n";
    cargo c1;
    c1.display();
    c1.display_cargo();

    return 0;
}
