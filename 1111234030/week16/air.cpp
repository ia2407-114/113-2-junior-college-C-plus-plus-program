#include <iostream>
#include <string>
#include "air.h"
using namespace std;
flight_object::flight_object()
    {
        cout << "執行父類別flight_object的建構元函式\n";
        cout << "實作一架飛行物:\n";
        cout << "名稱:";
        cin >> name;
        cout << "編號:";
        cin >> id;
        cout << "駕駛員人數:";
        cin >> pilot;
        cout << "煤油量(公升):";
        cin >> kerosene;
    }

    flight_object::~flight_object()
    {
        cout << "執行父類別flight_object的解構元函式.\n";
    }

    // 顯示飛行物的資料
    void flight_object::display()
    {
        cout << "\n飛行物名稱:" << name << endl;
        cout << "編號:" << id << endl;
        cout << "駕駛員人數:" << pilot << endl;
        cout << "煤油量(公升):" << kerosene << endl;
    }

// 大型客機類別
airliner::airliner()
    {
        cout << "\n執行子類別airliner的建構元函式\n";
        cout << "乘客人數:";
        cin >> passenger;
        cout << "服務人員的數目:";
        cin >> service_person;
    }

    // airliner類別解構元函式
    airliner::~airliner()
    {
        cout << "執行子類別airliner的解構元函式.\n";
    }

    // 顯示大型客機的資料
    void airliner::display_airliner()
    {
        cout << "乘客人數:" << passenger << endl;
        cout << "服務人員的數目:" << service_person << endl;
    }


cargo::cargo() {
        cout << "\ncargo建構\n";
        cout << "乘客人數: ";
        cin >> passengercar;
        cout << "服務人數: ";
        cin >> employeecar;
        cout << "公司: ";
        cin >> comp;
        cout << "最大承載量: ";
        cin >> max;
    }
    cargo::~cargo() {
        cout << "\ncargo解構";
    }

    void cargo::display_cargo() {
        cout << "乘客人數: " << passengercar << "\n";
        cout << "服務人數: " << employeecar << "\n";
        cout << "公司: " << comp << "\n";
        cout << "最大承載量: " << max;
    }


