#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846; 


double calculateVolume(int length, int width = -1, int height = -1) {
    if (width == -1 && height == -1) {

        return pow(length, 3);
    }
    else if (height == -1) {
      
        return PI * pow(length, 2) * width;
    }
    else {
     
        return length * width * height;
    }
}

int main() {
    int a, b, c;
    int numInputs;

    cout << "��J�Ʀr���Ӽ� (1-3): ";
    cin >> numInputs;

    if (numInputs == 1) {
        cout << "��J�����骺���: ";
        cin >> a;
        cout << "��������n: " << calculateVolume(a) << endl;
    }
    else if (numInputs == 2) {
        cout << "��J��W�骺�b�|�M����: ";
        cin >> a >> b;
        cout << "��W����n: " << calculateVolume(a, b) << endl;
    }
    else if (numInputs == 3) {
        cout << "��J�����骺���B�e�M��: ";
        cin >> a >> b >> c;
        cout << "��������n: " << calculateVolume(a, b, c) << endl;
    }
    else {
        cout << "�L�Ī���J" << endl;
    }

    return 0;
}
