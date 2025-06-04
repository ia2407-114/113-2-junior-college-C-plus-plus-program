#include "cargo.h"

cargo::cargo() {
    cout << "\n執行子類別 cargo 的建構元函式\n";
    cout << "承租公司: "; cin >> company;
    cout << "最大乘載量(公噸): "; cin >> max_capacity;
}

cargo::~cargo() {
    cout << "執行子類別 cargo 的解構元函式.\n";
}

void cargo::display_cargo() {
    display(); // 呼叫父類別 display()
    cout << "承租公司: " << company << endl;
    cout << "最大乘載量(公噸): " << max_capacity << endl;
}
