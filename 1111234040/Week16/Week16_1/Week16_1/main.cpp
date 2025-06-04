// main.cpp
#include <iostream>
#include "flight_object.h"
using namespace std;

int main() {
    cout << "=== 建立大型客機 ===" << endl;
    airliner a1;
    cout << "\n=== 建立貨機 ===" << endl;
    cargo c1;

    cout << "\n=== 顯示大型客機資料 ===" << endl;
    a1.display();
    a1.display_airliner();

    cout << "\n=== 顯示貨機資料 ===" << endl;
    c1.display();
    c1.display_cargo();

    return 0;
}
