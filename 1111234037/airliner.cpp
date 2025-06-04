#include "airliner.h"

airliner::airliner() {
    cout << "\n執行子類別 airliner 的建構元函式\n";
    cout << "乘客人數: "; cin >> passenger;
    cout << "服務人員數目: "; cin >> service_person;
}

airliner::~airliner() {
    cout << "執行子類別 airliner 的解構元函式.\n";
}

void airliner::display_airliner() {
    display(); // 呼叫父類別 display()
    cout << "乘客人數: " << passenger << endl;
    cout << "服務人員數目: " << service_person << endl;
}
