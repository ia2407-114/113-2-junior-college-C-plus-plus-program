#include <iostream>
#include"Matrix.h"
using namespace std;
/*�D��2: ���s�w�q'-' ���p��Z�����B��l�A�p��y�Х����W�����I(x1, y1)�P(x2, y2) �������Z���A�Z�������Цۦ�d��*/
#include <iostream>
#include "Matrix.h" 
using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "�п�J�Ĥ@���I���y�� x1 y1: ";
    cin >> x1 >> y1;
    cout << "�п�J�ĤG���I���y�� x2 y2: ";
    cin >> x2 >> y2;

    Point p1(x1, y1);
    Point p2(x2, y2);

    double distance = p1-p2;

    cout << "���I�������Z����: " << distance << endl;

    return 0;
}
