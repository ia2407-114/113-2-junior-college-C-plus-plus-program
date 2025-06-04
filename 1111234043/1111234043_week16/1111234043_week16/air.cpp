#include "air.h"

// flight_object
flight_object::flight_object() {
    cout << "執行父類別 flight_object 的建構元函式\n";
    cout << "實作一架飛行物:\n";
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
    cout << "執行父類別 flight_object 的解構元函式.\n";
}

void flight_object::display() {
    cout << "\n[飛行物資訊]\n";
    cout << "名稱: " << name << endl;
    cout << "編號: " << id << endl;
    cout << "駕駛員人數: " << pilot << endl;
    cout << "煤油量(公升): " << kerosene << endl;
}

// airliner
airliner::airliner() {
    cout << "\n執行子類別 airliner 的建構元函式\n";
    cout << "乘客人數: ";
    cin >> passenger;
    cout << "服務人員的數目: ";
    cin >> service_person;
}

airliner::~airliner() {
    cout << "執行子類別 airliner 的解構元函式.\n";
}

void airliner::display_airliner() {
    cout << "[大型客機資訊]\n";
    cout << "乘客人數: " << passenger << endl;
    cout << "服務人員數: " << service_person << endl;
}

// cargo
cargo::cargo() {
    cout << "\n執行子類別 cargo 的建構元函式\n";
    cout << "承租公司名稱: ";
    cin >> company;
    cout << "最大乘載量(公斤): ";
    cin >> max_load;
}

cargo::~cargo() {
    cout << "執行子類別 cargo 的解構元函式.\n";
}

void cargo::display_cargo() {
    cout << "[貨機資訊]\n";
    cout << "承租公司: " << company << endl;
    cout << "最大乘載量: " << max_load << " 公斤\n";
}
