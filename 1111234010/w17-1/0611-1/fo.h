#ifndef OF_H
#define FO_H
#include <iostream>
#include <string>
using namespace std;

class flight_object
{
private:
    string name;  // ���檫�W�� 
    int id;       // ���檫���ɸ� 
    int pilot;    // �r�p���H�� 
    float kerosene;  // �Ѫo�q(�Ѫo�O���檫�ϥΪ��U��) 

public:
    string manufacturer;  // �s�y��     

    // flight_object���O�غc���禡,�]�w���檫�����
    flight_object();

    // ��ܭ��檫�����
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

    // ��ܤj���Ⱦ������
    void display();
};

// �Ť��ڤh�Ⱦ����O
class airbus :public airliner
{
private:
    int bath_room;   // �N�D�]�Ƽƥ�     

public:
    // airbus���O�غc���禡,�]�w�Ť��ڤh�Ⱦ������ 
    airbus();
    // ��ܪŤ��ڤh�Ⱦ������
    void display();
};
#endif
