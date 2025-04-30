#include <iostream>
#include <vector>
#include "Employee.h"
#include "Date.h"
using namespace std;

int main() {
    vector<Pet*> pets;
    int numPets;

    cout << "請輸入寵物的數量: ";
    cin >> numPets;

    for (int i = 0; i < numPets; ++i) {
        try {
            string type, name;
            int bd, bm, by;
            int ad, am, ay;

            cout << "\n寵物 #" << i + 1 << ":\n";
            cout << "請輸入寵物種類: ";
            cin >> type;
            cout << "請輸入寵物名字: ";
            cin >> name;

            cout << "請輸入生日 (MM DD YYYY) : ";
            cin >> bm >> bd >> by;

            cout << "請輸入領養日期 (MM DD YYYY): ";
            cin >> am >> ad >> ay;

            Date birth(bm, bd, by);
            Date adopted(am, ad, ay);

            pets.push_back(new Pet(type, name, birth, adopted));
        }
        catch (const exception& e) {
            cerr << "錯誤 " << e.what() << endl;
            --i; // retry this pet
        }
    }

    // 清除記憶體
    for (Pet* p : pets) {
        delete p;
    }

    return 0;
}
