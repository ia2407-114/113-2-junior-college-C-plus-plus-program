#include "air.h"

int main() {
    // 輸入大型客機資料
    cout << "\n===== 輸入大型客機資料 =====\n";
    airliner air1;

    // 輸入貨機資料
    cout << "\n===== 輸入貨機資料 =====\n";
    cargo car1;

    // 顯示大型客機完整資料
    cout << "\n===== 大型客機的完整資料 =====\n";
    air1.display();           // 顯示 flight_object 的資料
    air1.display_airliner();  // 顯示 airliner 的專屬資料

    // 顯示貨機完整資料
    cout << "\n===== 貨機的完整資料 =====\n";
    car1.display();           // 顯示 flight_object 的資料
    car1.display_cargo();     // 顯示 cargo 的專屬資料

    return 0;
}
