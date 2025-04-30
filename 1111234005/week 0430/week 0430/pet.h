// �� 9.19�GPet.h
// Pet ���O���w�q�A�i�ܲզX�]Composition�^���ϥΤ覡�C
// �����禡�w�q�� Pet.cpp ���C

#ifndef PET_H      
#define PET_H

#include <string>  // �ϥ� std::string ���O
#include "Date.h"  // �ޤJ Date ���O���w�q

// Pet ���O�w�q
class Pet
{
public:
    Pet(const std::string& name, const std::string& species,
        const Date& birth, const Date& adoption);

    
    void print() const;

    
    ~Pet();

private:
    std::string petName;        
    std::string petSpecies;     
    const Date birthDate;       
    const Date adoptDate;    
}; 

#endif // PET_H
