#include <iostream>
#include <string>
#include "Air.h"
using namespace std;

flight_object::flight_object() {
    cout << "\n執行父類別 flight_object\n";
    cout << "名稱: ";
    cin >> name;
    cout << "編號: ";
    cin >> id;
    cout << "駕駛員人數: ";
    cin >> pilot;
    cout << "煤油量(公升): ";
    cin >> kerosene;
}

flight_object::~flight_object() {
    cout << "執行父類別 ~flight_object\n";
}

void flight_object::display() {
    cout << "\n【飛行物資料】\n";
    cout << "名稱: " << name << "\n";
    cout << "編號: " << id << "\n";
    cout << "駕駛員人數: " << pilot << "\n";
    cout << "煤油量: " << kerosene << " 公升\n";
}

airliner::airliner() {
    cout << "\n執行子類別 airliner \n";
    cout << "乘客人數: ";
    cin >> passenger;
    cout << "服務人員數目: ";
    cin >> service_person;
}

airliner::~airliner() {
    cout << "執行子類別 ~airliner\n";
}

void airliner::display_airliner() {
    cout << "【客機資料】\n";
    cout << "乘客人數: " << passenger << "\n";
    cout << "服務人員數目: " << service_person << "\n";
}


cargo::cargo() {
    cout << "\n執行子類別 cargo\n";
    cout << "承租公司: ";
    cin >> company;
    cout << "最大乘載量(公斤): ";
    cin >> max_load;
}

cargo::~cargo() {
    cout << "執行子類別 ~cargo\n";
}

void cargo::display_cargo() {
    cout << "【貨機資料】\n";
    cout << "承租公司: " << company << "\n";
    cout << "最大乘載量: " << max_load << " 公斤\n";
}
