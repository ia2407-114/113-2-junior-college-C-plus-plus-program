#include <iostream>
#include "operator.h"
using namespace std;


int main()
{
	int x1, x2, y1, y2;
	double distance;
	cout << "�п�J�y��A(x1, y1):\n";
	cout << "x1:";
	cin >> x1;
	cout << "y1:";
	cin >> y1;

	cout << "�п�J�y��B(x2, y2):\n";
	cout << "x2:";
	cin >> x2;
	cout << "y2:";
	cin >> y2;

	Matrix A(x1, y1);
	Matrix B(x2, y2);

	distance = A - B;

	cout << "A��B���Z����:" << distance;

	return 0;
}