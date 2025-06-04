#include <iostream>
#include <string>
using namespace std;

class flight_object {  //��
private:
    string name;  // ���澹�W��
    int id;       // �s��
    int pilot;    // �r�p���H��
    float kerosene;  // �Ѫo�q�]���ɡ^

public:
    flight_object();
    virtual ~flight_object();
    void display();
};

/* �j���Ⱦ� airliner: �l���O�A flight_object (��) */
class airliner : public flight_object {
private:
    int passenger;      // ���ȤH��
    int service_person;   // �A�ȤH���ƶq

public:
    airliner();
    ~airliner();
    void display_airliner();
};

/* �f�� cargo: �l���O�A flight_object (��) */
class cargo : public flight_object {
private:
    string rental_company;
    float max_load;

public:
    cargo();
    ~cargo();
    void display_cargo();
};