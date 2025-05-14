#include"Date.h"
#include<iostream>
#ifndef PET_H
#define PET_H
using namespace std;

class Pet
{
private:
	const Date datego;
	const Date datebirth;
	string name;
	string type;
public:
	explicit Pet(const string&, const string&, Date, Date);
	~Pet();
};
#endif
