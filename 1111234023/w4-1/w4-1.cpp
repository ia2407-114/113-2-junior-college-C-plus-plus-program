#include <iostream>
using namespace std;

double vvv(double a);
double vvv(double b, double c);
double vvv(double d, double e, double f = 2);

int main()
{
	int aa, bb, cc;

	cout << "żé¤JžăźĆ";

	cin >> aa>> bb >>cc;

	cout << "ľ˛ŞGŹO:" << vvv(aa,bb,cc);
	
	return 0;
}

double vvv(double a)
{
	return a * a * a;
}
double vvv(double b, double c)
{
	return b * b * c *3.14159 ;
}
double vvv(double d, double e , double f)
{
	return d * e * f;
}
