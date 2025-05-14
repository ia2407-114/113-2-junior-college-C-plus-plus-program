#include<iostream>
using namespace std;
#include"ABC.h"


int main()
{
	ABC tt;
	out(tt);
}



void out(ABC yy)
{
	yy.a = 666;
	cout << "a: " << yy.a;

}