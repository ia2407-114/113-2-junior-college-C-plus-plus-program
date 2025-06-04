#include <iostream>
#include <string>
using namespace std;

class flight_object
{
private:
    string name; // ︽嘿 
    int id;      // ︽絪腹 
    int pilot;   // 緍緋计 
    float kerosene; // 费猳秖(费猳琌︽ㄏノ縐) 

public:        
    flight_object();
    ~flight_object();
    void display();
};

// 诀摸
class airliner :public flight_object
{
private:
    int passenger;  // 计   
    int service_person;  // 狝叭计ヘ 

public: 
    airliner();
    ~airliner();
    void display_airliner();
};


class cargo :public flight_object 
{
private:
    int passenger, service_person;
    int max_weight;
    string company;

public:
    cargo();
    ~cargo();
    void display_cargoliner();

};