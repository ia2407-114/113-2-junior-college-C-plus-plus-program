#include <iostream>
#include "flight_object.h"
using namespace std;

int main() {
    cout << "輸入大型客機資料:\n";
    airliner air1;
    cout << "\n輸入貨機資料:\n";
    cargo cargo1;

    cout << "\n大型客機資料:\n";
    air1.display();
    air1.display_airliner();

    cout << "\n貨機資料:\n";
    cargo1.display();
    cargo1.display_cargo();

    return 0;
}
