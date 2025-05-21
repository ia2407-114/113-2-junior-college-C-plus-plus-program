#include <iostream>
#include <string>
using namespace std;
int main(){
	string a("ABC"); //A=65 B=66...
	string b("AEF");
	string c("happy");//a=97 b=98...
	string d(" birthday"); //ªÅ¥Õ=32
	cout << "\na>b?" << (a > b ? "true" : "flase");
	cout << "\na<b?" << (a < b ? "true" : "flase");
	cout << "\na<d?" << (a < d ? "true" : "flase");
	cout << "\nc>d?" << (c > d ? "true" : "flase");
	cout << "\nc<d?" << (a < b ? "true" : "flase");

}