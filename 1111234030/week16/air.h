#include <iostream>
#include <string>
using namespace std;
class flight_object
{
private:
    string name; // ���檫�W�� 
    int id;      // ���檫�s�� 
    int pilot;   // �r�p���H�� 
    float kerosene; // �Ѫo�q(�Ѫo�O���檫�ϥΪ��U��) 

public:
    // flight_object���O�غc���禡,�]�w���檫�����          
    flight_object();
    ~flight_object();
    void display();
};

// �j���Ⱦ����O
class airliner :public flight_object
{
private:
    int passenger;  // ���ȤH��   
    int service_person;  // �A�ȤH�����ƥ� 

public:
    // airliner���O�غc���禡,�]�w�j���Ⱦ������  
    airliner();
    ~airliner();
    void display_airliner();
};

class cargo :public flight_object
{
private:
    string comp;
    int max, passengercar, employeecar;
public:
    cargo();
    ~cargo();
    void display_cargo();
};

