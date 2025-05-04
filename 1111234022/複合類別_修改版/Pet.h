#include"Date.h"
#include<iostream>

using namespace std;


#ifndef PET_H
#define PET_H

class Pet
{
private :
	const Date datego;
	const Date datebirth;
	string name;
	string type;
public:
	
	explicit Pet(const string& , const string& , Date , Date);
	~Pet();


};


#endif
