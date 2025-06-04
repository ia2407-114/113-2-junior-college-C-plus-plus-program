#include <iostream>
#include <string>
using namespace std;

class flight_object {  //父
private:
    string name;  // 飛行器名稱
    int id;       // 編號
    int pilot;    // 駕駛員人數
    float kerosene;  // 煤油量（公升）

public:
    flight_object();
    virtual ~flight_object();
    void display();
};

/* 大型客機 airliner: 子類別， flight_object (父) */
class airliner : public flight_object {
private:
    int passenger;      // 乘客人數
    int service_person;   // 服務人員數量

public:
    airliner();
    ~airliner();
    void display_airliner();
};

/* 貨機 cargo: 子類別， flight_object (父) */
class cargo : public flight_object {
private:
    string rental_company;
    float max_load;

public:
    cargo();
    ~cargo();
    void display_cargo();
};