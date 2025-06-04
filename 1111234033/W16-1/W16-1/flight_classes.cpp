#include <iostream>
#include <string>
using namespace std;
#include "flight_classes.h"

using namespace std;

flight_object::flight_object() {
    cout << "\n建立飛行器:\n";
    cout << "名稱: "; cin >> name;
    cout << "編號: "; cin >> id;
    cout << "駕駛員人數: "; cin >> pilot;
    cout << "煤油量(公升): "; cin >> kerosene;
}

flight_object::~flight_object() {
    cout << "執行父類別 flight_object 的解構元函式\n";
}

void flight_object::display() {
    cout << "[飛行器] 名稱: " << name
        << ", 編號: " << id
        << ", 駕駛員人數: " << pilot
        << ", 煤油量: " << kerosene << " 公升" << endl;
}

// ===== airliner 類別 =====
airliner::airliner() {
    cout << "\n建立大型客機:\n";
    cout << "乘客人數: "; cin >> passenger;
    cout << "服務人員數目: "; cin >> service_person;
}

airliner::~airliner() {
    cout << "執行子類別 airliner 的解構元函式\n";
}

void airliner::display_airliner() {
    display();
    cout << "乘客人數: " << passenger
        << ", 服務人員數目: " << service_person << endl;
}

// ===== cargo 類別 =====
cargo::cargo() {
    cout << "\n建立貨機:\n";
    cout << "承租公司: "; cin >> company;
    cout << "最大乘載量(公斤): "; cin >> max_load;
}

cargo::~cargo() {
    cout << "執行子類別 cargo 的解構元函式\n";
}

void cargo::display_cargo() {
    display();
    cout << "承租公司: " << company
        << ", 最大乘載量: " << max_load << " 公斤" << endl;
}
