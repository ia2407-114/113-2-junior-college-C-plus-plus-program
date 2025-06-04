/*題目1: 分別建立主程式、類別介面檔、類別實作檔，再加入一個新的: 貨機(cargo)類別，繼承飛行器(flight_object)類別，並額外具備自己的建構子、解構子
  與屬性:承租公司、最大乘載量，以及成員函數(display_cargo()。主程式中輸入:貨機 & 大型客機的資料，並將他們的所有資料(包括飛行器的資料)一併印出*/
#include <iostream>
#include <string>
#include "air.h"  
using namespace std;

int main() {
    cout << "請輸入大型客機資料:\n";
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n請輸入貨機資料:\n";
    cargo cargo1;
    cargo1.display();
    cargo1.display_cargo();

    return 0;
}