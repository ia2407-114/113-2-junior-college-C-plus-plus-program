#include "airliner.h"
#include "cargo.h"

int main() {
    airliner air1;
    cargo cargo1;

    cout << "\n====== 大型客機資料 ======" << endl;
    air1.display_airliner();

    cout << "\n====== 貨機資料 ======" << endl;
    cargo1.display_cargo();

    return 0;
}
