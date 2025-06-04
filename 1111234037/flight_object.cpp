#include "flight_object.h"

flight_object::flight_object() {
    cout << "\n執行父類別 flight_object 的建構元函式\n";
    cout << "名稱: "; cin >> name;
    cout << "編號: "; cin >> id;
    cout << "駕駛員人數: "; cin >> pilot;
    cout << "煤油量(公升): "; cin >> kerosene;
}

flight_object::~flight_object() {
    cout << "執行父類別 flight_object 的解構元函式.\n";
}

void flight_object::display() {
    cout << "\n飛行物名稱: " << name << endl;
    cout << "編號: " << id << endl;
    cout << "駕駛員人數: " << pilot << endl;
    cout << "煤油量(公升): " << kerosene << endl;
}
