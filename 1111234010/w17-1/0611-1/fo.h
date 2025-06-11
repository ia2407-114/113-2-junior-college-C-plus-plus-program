#ifndef OF_H
#define FO_H
#include <iostream>
#include <string>
using namespace std;

class flight_object
{
private:
    string name;  // 飛行物名稱 
    int id;       // 飛行物公升號 
    int pilot;    // 駕駛員人數 
    float kerosene;  // 煤油量(煤油是飛行物使用的燃料) 

public:
    string manufacturer;  // 製造者     

    // flight_object類別建構元函式,設定飛行物的資料
    flight_object();

    // 顯示飛行物的資料
    void display();
};

// 大型客機類別
class airliner :public flight_object
{
private:
    int passenger;  // 乘客人數   
    int service_person;  // 服務人員的數目 

public:
    // airliner類別建構元函式,設定大型客機的資料 
    airliner();

    // 顯示大型客機的資料
    void display();
};

// 空中巴士客機類別
class airbus :public airliner
{
private:
    int bath_room;   // 沐浴設備數目     

public:
    // airbus類別建構元函式,設定空中巴士客機的資料 
    airbus();
    // 顯示空中巴士客機的資料
    void display();
};
#endif
